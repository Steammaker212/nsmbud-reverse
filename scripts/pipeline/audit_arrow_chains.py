"""Audit whether `base->m1->m2` chains were flattened across a pointer dereference.

`rewrite_arrows.py` walks a chain hop by hop and adds every hop's offset into one
running total (`total += off`). That is correct when each hop is a struct
embedded in the previous object. It is wrong when a hop's member is itself a
pointer: `a1->profile->id` is `*(u32*)(*(u32*)(a1 + 0xC) + 0x8)`, i.e. two
separate memory accesses, but the running total renders it as the single access
`FIELD_U32(a1, 0x14)`.

This script measures how often that happens, three ways:

1. Census (no sampling): replay the rewrite over the pre-rewrite export
   (`_work/export_vt/all_functions.jsonl`) with the same `type_layouts.json`
   the build used, and count how many resolved chains pass through a member
   whose declared type is a pointer. The rewriter strips the `*` in
   `load_types()` before walking, so the pointer-ness is erased exactly there.
   Replay output is asserted equal to the published C, so the replay is not a
   guess about what the rewriter did.

2. Binary check (sampled, disassembled): for functions whose C body contains
   exactly one `FIELD_*(base, 0xNN)` on a parameter, decode the real machine
   code out of the ELF and count the memory accesses that actually happen.
   AGREE / FLATTENED_CHAIN / OTHER.

3. Cross-check of both, plus the cases the binary cannot decide.

Everything measured, nothing assumed: every address comes from the ELF, every
offset from `type_layouts.json`, every count from a file read here.

Deluxe (Switch) v1.0.0 addresses only.

Usage:
    python audit_arrow_chains.py
"""
from __future__ import annotations

import argparse
import csv
import json
import os
import re
import sys
from collections import Counter, defaultdict

import capstone
from elftools.elf.elffile import ELFFile

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
DEFAULT_ELF = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
DEFAULT_SYMS = os.path.join(ROOT, "data", "loader", "symbols.csv")
DEFAULT_LAYOUTS = os.path.join(ROOT, "data", "recovered", "type_layouts.json")
DEFAULT_CORPUS = os.path.join(ROOT, "decompiled")
DEFAULT_PRE = r"C:\Users\Saif Khan\Downloads\main.idb\_work\export_vt\all_functions.jsonl"
DEFAULT_JSON = os.path.join(ROOT, "data", "recovered", "arrow_chain_audit.json")

# Same shape rewrite_arrows.py uses. A chain must start with `->`.
CHAIN = re.compile(
    r"\b([A-Za-z_]\w*)"
    r"((?:\s*\[\s*[^\]]+\s*\])?)"
    r"(\s*->\s*[A-Za-z_]\w*(?:\s*(?:->|\.)\s*[A-Za-z_]\w*)*)"
)
# One FIELD_* access whose base is a bare identifier (a parameter name).
FIELD_SITE = re.compile(r"FIELD_[USF](?:8|16|32|64)\(\s*([A-Za-z_]\w*)\s*,\s*(0x[0-9A-Fa-f]+)\s*\)")
ANY_ACCESS = re.compile(r"FIELD_[USF](?:8|16|32|64)\(")
FUNC_SIG = re.compile(r"^[^\n{;]*?\b([A-Za-z_]\w*)\s*\(([^)]*)\)", re.M)


# ---------------------------------------------------------------------------
# 1. Layouts, replaying the rewrite with pointer-ness preserved
# ---------------------------------------------------------------------------
def load_layouts(path):
    """type -> (size, {member: (byte offset, macro, pointee/type, raw type)}).

    Unlike rewrite_arrows.load_types() this keeps the raw IDA type string, so a
    member that is a pointer stays distinguishable from an embedded struct.
    """
    data = json.loads(open(path, encoding="utf-8").read())
    out = {}
    for t in data.get("types", []):
        members = {}
        for m in t.get("members", []):
            name = m.get("name")
            if not name:
                continue
            bit = m.get("bit_offset", 0)
            if bit % 8:
                continue
            raw = (m.get("type") or "").strip()
            ptr = "*" in raw
            arr = "[" in raw
            # A chain continues through the pointee (pointer) or the element
            # (array); rewrite_arrows strips both decorations.
            mt = raw.replace("*", "").strip()
            mt = re.sub(r"\[[^\]]*\]", "", mt).strip()
            members[name] = (bit // 8, width_macro(raw), mt, raw, ptr, arr)
        if members:
            out[t["name"]] = (t.get("size") or 0, members)
    return out


def width_macro(type_str):
    t = (type_str or "").strip()
    if "*" in t:
        return "FIELD_U32"
    for key, macro in [
        ("float", "FIELD_F32"), ("double", "FIELD_F64"),
        ("__int64", "FIELD_U64"), ("unsigned __int64", "FIELD_U64"),
        ("__int32", "FIELD_U32"), ("int", "FIELD_U32"),
        ("unsigned int", "FIELD_U32"),
        ("__int16", "FIELD_U16"), ("short", "FIELD_U16"),
        ("char", "FIELD_U8"), ("bool", "FIELD_U8"),
    ]:
        if key in t:
            return macro
    return "FIELD_U32"


def var_types(body):
    """Variable -> types it is declared or cast to (same rules as the rewriter)."""
    types = defaultdict(set)
    for m in re.finditer(r"\b([A-Za-z_]\w*)\s*\*\s*([A-Za-z_]\w*)\s*(?:[;=,)])", body):
        types[m.group(2)].add(m.group(1))
    for m in re.finditer(r"\b([A-Za-z_]\w*)\s*=\s*\(\s*([A-Za-z_]\w*)\s*\*\s*\)", body):
        types[m.group(1)].add(m.group(2))
    m = re.search(r"\b([A-Za-z_]\w*)\s*\*\s*this\b", body)
    if m:
        types.setdefault("this", set()).add(m.group(1))
    return types


def replay_chain(base, hops, last, types, vt):
    """Resolve one chain exactly as rewrite_arrows does, keeping hop evidence.

    Returns a dict with the rendered replacement, the accumulated offset, and
    per-hop (member, offset, member type, is_pointer). None if unresolved.
    """
    for t in vt.get(base, ()):
        cur, total, ok = t, 0, True
        hop_info = []
        for h in hops:
            info = types.get(cur, (0, {}))[1].get(h)
            if not info:
                ok = False
                break
            off, _macro, mt, raw, ptr, arr = info
            total += off
            hop_info.append({"member": h, "type": cur, "offset": off,
                             "raw_type": raw, "is_pointer": ptr, "is_array": arr})
            cur = mt
            if not cur:
                ok = False
                break
        if not ok:
            continue
        info = types.get(cur, (0, {}))[1].get(last)
        if not info:
            continue
        off, macro, _mt, raw, ptr, arr = info
        total += off
        return {"base": base, "base_type": t, "hops": hop_info,
                "last": last, "last_offset": off, "last_type": cur,
                "last_raw_type": raw, "total": total, "macro": macro}
    return None


def replay_body(body, types):
    """All resolved chains in a body, plus the rewritten text."""
    vt = var_types(body)
    out = []

    def repl(m):
        base, index, chain = m.group(1), m.group(2) or "", m.group(3) or ""
        toks = [t for t in re.split(r"->|\.", chain) if t.strip()]
        if not toks:
            return m.group(0)
        info = replay_chain(base, toks[:-1], toks[-1], types, vt)
        if info is None:
            return m.group(0)
        if index.strip():
            size = types.get(info["base_type"], (0, {}))[0]
            if not size:
                return m.group(0)
            return "%s(%s + (%s) * %d, 0x%X)" % (
                info["macro"], base, index.strip()[1:-1].strip(), size, info["total"])
        return "%s(%s, 0x%X)" % (info["macro"], base, info["total"])

    new = CHAIN.sub(repl, body)
    for m in CHAIN.finditer(body):
        base, index, chain = m.group(1), m.group(2) or "", m.group(3) or ""
        toks = [t for t in re.split(r"->|\.", chain) if t.strip()]
        if not toks:
            continue
        info = replay_chain(base, toks[:-1], toks[-1], types, vt)
        if info is None:
            continue
        info["chain_text"] = m.group(0).strip()
        info["replacement"] = "%s(%s, 0x%X)" % (info["macro"], base, info["total"])
        info["deref_hops"] = sum(1 for h in info["hops"] if h["is_pointer"])
        out.append(info)
    return new, out


def census(types, pre_path, corpus_root):
    """Replay the rewrite over the whole pre-rewrite export."""
    total_funcs = funcs_with_arrows = 0
    chains = resolved = 0
    ptr_chains = 0
    ptr_deref_hops = 0
    verified = mismatch = unverified = 0
    by_depth = Counter()
    ptr_by_depth = Counter()
    examples = []
    funcs_with_ptr_chain = set()
    corpus_index = build_corpus_index(corpus_root)
    replay_mismatch_examples = []

    for line in open(pre_path, encoding="utf-8"):
        line = line.strip()
        if not line:
            continue
        r = json.loads(line)
        body = r.get("c") or ""
        total_funcs += 1
        if "->" not in body:
            continue
        funcs_with_arrows += 1
        new, infos = replay_body(body, types)
        for m in CHAIN.finditer(body):
            chains += 1
        for info in infos:
            resolved += 1
            depth = len(info["hops"]) + 1
            by_depth[depth] += 1
            if info["deref_hops"]:
                ptr_chains += 1
                ptr_deref_hops += info["deref_hops"]
                ptr_by_depth[depth] += 1
                funcs_with_ptr_chain.add(r["ea"])
                if len(examples) < 400:
                    examples.append({
                        "ea": r["ea"], "name": r.get("name"),
                        "chain": info["chain_text"],
                        "replacement": info["replacement"],
                        "base_type": info["base_type"],
                        "total": info["total"],
                        "hops": info["hops"],
                    })
        # Fidelity check: the replay's FIELD_* offsets must reproduce the
        # published body's FIELD_* offsets, expression for expression.
        pub = read_published(corpus_index, r["ea"])
        if pub is None:
            unverified += 1
        elif expression_fingerprint(pub) == expression_fingerprint(new):
            verified += 1
        else:
            mismatch += 1
            if len(replay_mismatch_examples) < 5:
                a = expression_fingerprint(pub)
                b = expression_fingerprint(new)
                replay_mismatch_examples.append({
                    "ea": hex(r["ea"]), "name": r.get("name"),
                    "only_in_published": ["%s@0x%X" % k for k in (a - b)][:8],
                    "only_in_replay": ["%s@0x%X" % k for k in (b - a)][:8],
                })

    return {
        "pre_export": pre_path,
        "functions_in_export": total_funcs,
        "functions_using_arrow": funcs_with_arrows,
        "chains_seen": chains,
        "chains_resolved": resolved,
        "chains_through_pointer_hop": ptr_chains,
        "pointer_deref_hops_total": ptr_deref_hops,
        "functions_with_pointer_hop_chain": len(funcs_with_ptr_chain),
        "chains_by_depth": {str(k): v for k, v in sorted(by_depth.items())},
        "pointer_chains_by_depth": {str(k): v for k, v in sorted(ptr_by_depth.items())},
        "replay_matches_published": verified,
        "replay_differs_from_published": mismatch,
        "replay_unverified_no_corpus_file": unverified,
        "replay_mismatch_examples": replay_mismatch_examples,
        "examples": examples,
    }


HEADER = re.compile(r"address:\s*(0x[0-9A-Fa-f]+)\s+size:\s*(\d+)")


def corpus_population(root):
    """Every published corpus file, keyed by the address in its own header.

    symbols.csv only covers 9,401 of the 45,146 published bodies; the header of
    each file states its address and size, which is the wider honest frame.
    """
    out = []
    for dirpath, _dirnames, filenames in os.walk(root):
        for fn in filenames:
            if not fn.endswith(".c"):
                continue
            p = os.path.join(dirpath, fn)
            raw = open(p, encoding="utf-8", errors="replace").read()
            m = HEADER.search(raw[:600])
            if not m:
                continue
            out.append({"va": int(m.group(1), 16), "size": int(m.group(2)),
                        "path": p, "body": strip_header(raw)})
    out.sort(key=lambda r: r["va"])
    return out


def eligible_param_access(body):
    """One FIELD_* access on a parameter in r0..r3, or None.

    Returns (param, offset, macro, expression text). Access-level attribution
    in the disassembly keeps only accesses derived from the chosen parameter,
    so FIELD_* accesses on other variables do not confound the count.
    """
    hits = list(FIELD_SITE.finditer(body))
    if not hits:
        return None
    sig = FUNC_SIG.search(body)
    if not sig:
        return None
    pm = param_index_map(sig.group(2))
    on = [h for h in hits if h.group(1) in pm and pm[h.group(1)] <= 3]
    if len(on) != 1:
        return None
    h = on[0]
    macro = re.match(r"(FIELD_[USF]\w*)\(", h.group(0)).group(1)
    return h.group(1), int(h.group(2), 16), macro, h.group(0)


def is_strict(body, param):
    """True when this parameter is accessed exactly once in the whole body."""
    if len(ANY_ACCESS.findall(body)) != 1:
        return False
    if re.search(r"\b%s\s*(?:\[|->|\.)" % re.escape(param), body):
        return False
    return True


def expression_fingerprint(body):
    """Multiset of (macro, offset) pairs of every FIELD_* access in a body.

    The published corpus went through later passes (vtable renaming, e.g.
    ``(int)&`vtable for'StageActor`` became ``(int)&StageActor__vtable``), so a
    whole-body comparison would report diffs that have nothing to do with the
    arrow rewrite. The offset a FIELD_ access uses is exactly what the rewrite
    computes, so this isolates the rewrite's own output.
    """
    return Counter(
        (m.group(1), int(m.group(2), 16))
        for m in re.finditer(
            r"(FIELD_[USF]\w*)\([^;]*?,\s*(0x[0-9A-Fa-f]+)\)\s*(?:=[^;]*)?;?", body)
    )


def build_corpus_index(root):
    idx = {}
    for dirpath, _dirnames, filenames in os.walk(root):
        for fn in filenames:
            if fn.endswith(".c"):
                idx.setdefault(fn.split("_")[0], []).append(os.path.join(dirpath, fn))
    return idx


_PUB_CACHE = {}


def read_published(index, ea):
    if ea in _PUB_CACHE:
        return _PUB_CACHE[ea]
    paths = index.get("%08X" % ea) or index.get("%x" % ea)
    txt = None
    if paths:
        raw = open(paths[0], encoding="utf-8", errors="replace").read()
        txt = strip_header(raw)
    _PUB_CACHE[ea] = txt
    return txt


def strip_header(text):
    """Drop the leading /* ... */ provenance banner and preprocessor lines."""
    i = text.find("*/")
    body = text[i + 2:] if i >= 0 else text
    body = re.sub(r"^\s*#.*$", "", body, flags=re.M)
    return body.strip()


# ---------------------------------------------------------------------------
# 2. Disassembly: how many memory accesses does the code actually perform?
# ---------------------------------------------------------------------------
LOAD_MN = ("ldr", "ldrb", "ldrh", "ldrsb", "ldrsh", "ldrd", "vldr", "ldrex")
STORE_MN = ("str", "strb", "strh", "strd", "vstr", "strex")
TERMINATORS = ("bx", "b", "pop", "ldm", "mov", "sub", "add")

# Instructions whose register operands are read, never written. They leave
# provenance intact.
READ_ONLY = frozenset((
    "cmp", "cmn", "tst", "teq", "b", "bx", "bl", "blx", "push", "nop",
    "it", "cbz", "cbnz", "vcmp", "vcmpe", "svc", "dmb", "dsb", "isb",
))


class Value:
    """Provenance of a register.

    kind:
      'param'  - still the raw parameter pointer, no offset applied yet
      'addr'   - parameter pointer + a constant (a flat offset), NOT dereferenced
      'mem'    - the result of a load (a dereference)
      'const'  - a known constant
      'unknown'
    """

    __slots__ = ("kind", "param", "parent", "offset", "const", "site")

    def __init__(self, kind, param=None, parent=None, offset=0, const=None, site=None):
        self.kind = kind
        self.param = param
        self.parent = parent
        self.offset = offset
        self.const = const
        self.site = site          # index of the access that produced this value

    def offsets(self):
        """Offsets walked from the parameter to reach the loaded value."""
        out, v = [], self
        while v is not None and v.kind == "mem":
            out.append(v.offset)
            v = v.parent
        out.reverse()
        return out

    def depth(self):
        return len(self.offsets())

    def param_index(self):
        v = self
        while v is not None and v.kind in ("mem", "addr"):
            v = v.parent
        return v.param if v is not None and v.kind == "param" else None

    def flat_offset(self):
        """Constant offset from the parameter, with no dereference applied."""
        v, off = self, 0
        while v is not None and v.kind == "addr":
            off += v.offset
            v = v.parent
        return off, v


class MachineCode:
    def __init__(self, elf_path):
        with open(elf_path, "rb") as fh:
            elf = ELFFile(fh)
            self.text = elf.get_section_by_name(".text")
            self.base = self.text["sh_addr"]
            self.data = self.text.data()
        self.md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
        self.md.detail = True

    def bytes_at(self, va, size):
        off = va - self.base
        if off < 0 or off + size > len(self.data):
            return None
        return self.data[off:off + size]

    def disasm(self, va, size):
        raw = self.bytes_at(va, size)
        if raw is None:
            return []
        return list(self.md.disasm(raw, va))

    def analyze_param(self, va, size, param_index):
        """Walk the function, tracking provenance, and return its access sites.

        A site is one memory access whose address derives from `param_index`:
        ``(offset_chain, final_offset)`` where offset_chain is the sequence of
        offsets dereferenced to reach the base of the access.

        Registers are keyed by their name in this instruction, because Capstone
        reports register *ids*, not names, and the id depends on the encoding.
        """
        insns = self.disasm(va, size)
        regs = {}
        sites = []
        unsupported = []
        # ARM: r0..r3 hold the first four arguments.
        for i in range(4):
            regs["r%d" % i] = Value("param", param=i)
        # Everything else starts unknown. r7/r11 are NOT excluded: compilers
        # also use them as general registers (`sb`, `fp` aliases), and
        # `mov sb, r2` makes r11 hold an argument. A genuine frame pointer is
        # established by `add r7, sp, #k`, which leaves the value unknown and
        # so is skipped safely as stack traffic.
        for r in ("sp", "lr", "pc"):
            regs[r] = Value("unknown")

        for ins in insns:
            mn = ins.mnemonic
            ops = ins.operands
            nm = lambda rid: canon(ins, rid)

            if mn in ("movw", "movt", "movw") and len(ops) == 2 \
                    and ops[0].type == capstone.arm.ARM_OP_REG:
                regs[nm(ops[0].reg)] = Value(
                    "const", const=(ops[1].imm if mn == "movw" and
                                    ops[1].type == capstone.arm.ARM_OP_IMM else None))
                continue
            if mn in ("mov", "mvn") and len(ops) == 2 \
                    and ops[0].type == capstone.arm.ARM_OP_REG:
                if ops[1].type == capstone.arm.ARM_OP_REG:
                    regs[nm(ops[0].reg)] = regs.get(nm(ops[1].reg), Value("unknown"))
                elif ops[1].type == capstone.arm.ARM_OP_IMM:
                    regs[nm(ops[0].reg)] = Value("const", const=ops[1].imm)
                else:
                    regs[nm(ops[0].reg)] = Value("unknown")
                continue
            if mn in ("add", "sub", "adds", "subs") and len(ops) >= 3:
                if ops[0].type == capstone.arm.ARM_OP_REG and ops[1].type == capstone.arm.ARM_OP_REG:
                    src = regs.get(nm(ops[1].reg), Value("unknown"))
                    delta = None
                    if ops[2].type == capstone.arm.ARM_OP_IMM:
                        delta = ops[2].imm
                    elif ops[2].type == capstone.arm.ARM_OP_REG:
                        v = regs.get(nm(ops[2].reg), Value("unknown"))
                        if v.kind == "const" and v.const is not None:
                            delta = v.const
                    if delta is None:
                        regs[nm(ops[0].reg)] = Value("unknown")
                    else:
                        signed = delta if mn.startswith("add") else -delta
                        # `add rX, rY, #k` computes an address; it does not
                        # dereference. Keeping that distinction is what stops
                        # `add r0, r0, #0x1820; vldr [r0]` from being read as
                        # a chain of two accesses.
                        if src.kind in ("mem", "addr"):
                            base_off, root = src.flat_offset() if src.kind == "addr" \
                                else (0, src)
                            if src.kind == "mem":
                                regs[nm(ops[0].reg)] = Value(
                                    "mem", parent=src.parent, offset=src.offset + signed,
                                    site=src.site)
                            else:
                                regs[nm(ops[0].reg)] = Value(
                                    "addr", parent=root, offset=base_off + signed,
                                    param=root.param if root else None)
                        elif src.kind == "param":
                            regs[nm(ops[0].reg)] = Value(
                                "addr", parent=src, offset=signed, param=src.param)
                        else:
                            regs[nm(ops[0].reg)] = src
                continue
            if mn in ("ldm", "ldmia", "ldmdb", "ldmib", "stm", "stmia",
                      "stmdb", "stmib"):
                memop = mem_operand(ops, nm)
                if memop is not None and memop["base"] in regs:
                    regs[memop["base"]] = Value("unknown")
                unsupported.append("multi-register transfer (%s)" % mn)
                continue

            is_load = mn in LOAD_MN
            is_store = mn in STORE_MN
            if mn in ("bx", "blx") and ops and ops[0].type == capstone.arm.ARM_OP_REG:
                # The value passed to an indirect call is a call target, not a
                # field read. Mark whichever load produced it, so virtual
                # dispatch is not mistaken for a flattened field access.
                mark_call_target(sites, regs.get(nm(ops[0].reg)))
                for op in ops:
                    if op.type == capstone.arm.ARM_OP_REG:
                        regs[nm(op.reg)] = Value("unknown")
                continue
            if not (is_load or is_store):
                # Instructions that only *read* their register operands must
                # not invalidate provenance. `cmp r5, r0` destroying r0's
                # provenance was hiding real chained accesses.
                if mn in READ_ONLY:
                    continue
                # Otherwise this instruction writes its first operand (and
                # possibly more); invalidate the destinations only.
                if ops and ops[0].type == capstone.arm.ARM_OP_REG:
                    regs[nm(ops[0].reg)] = Value("unknown")
                continue

            memop = mem_operand(ops, nm)
            if memop is None:
                for op in ops:
                    if op.type == capstone.arm.ARM_OP_REG:
                        regs[nm(op.reg)] = Value("unknown")
                continue
            base_reg = memop["base"]
            disp = memop["disp"] or 0
            idx_reg = memop["index"]
            if idx_reg is not None:
                iv = regs.get(idx_reg, Value("unknown"))
                if iv.kind == "const" and iv.const is not None:
                    disp += iv.const
                else:
                    unsupported.append("register-offset access")
                    continue
            if base_reg is None or base_reg == "sp":
                # Stack traffic: not a field access on the parameter. A real
                # frame pointer is unknown-valued, so it also lands here.
                if is_load and ops[0].type == capstone.arm.ARM_OP_REG:
                    regs[nm(ops[0].reg)] = Value("unknown")
                continue
            bv = regs.get(base_reg, Value("unknown"))
            if bv.kind not in ("param", "addr", "mem"):
                # Not an address derived from this parameter: a literal pool,
                # an unmodelled register, or a global. Do not touch `sites`.
                if is_load and ops[0].type == capstone.arm.ARM_OP_REG:
                    regs[nm(ops[0].reg)] = (
                        Value("const", const=None) if bv.kind == "const"
                        else Value("unknown"))
                continue
            # This register is being used as an address, so the load that
            # produced it was an intermediate hop, not a final field access.
            if bv.kind == "mem":
                mark_used_as_address(sites, bv)
            if bv.kind == "param":
                chain = []
                disp_total = disp
                load_parent, load_off = bv, disp
            elif bv.kind == "addr":
                flat, root = bv.flat_offset()
                chain = []
                disp_total = flat + disp
                # Fold the static offset into the dereference step, so a later
                # chain through this value reconstructs the full path.
                load_parent, load_off = (root or bv), flat + disp
            else:  # mem
                chain = bv.offsets()
                disp_total = disp
                load_parent, load_off = bv, disp

            if is_load:
                dst = ops[0]
                if dst.type == capstone.arm.ARM_OP_REG:
                    sites.append({"chain": tuple(chain), "offset": disp_total,
                                  "param": bv.param_index(), "width": width_of(mn),
                                  "pc": ins.address, "used_as_address": False,
                                  "store": False})
                    # The loaded value is a new object: its offset within the
                    # *pointee* is the addressing displacement only.
                    regs[nm(dst.reg)] = Value("mem", parent=load_parent,
                                              offset=load_off,
                                              site=len(sites) - 1)
                elif dst.type == capstone.arm.ARM_OP_FP:
                    sites.append({"chain": tuple(chain), "offset": disp_total,
                                  "param": bv.param_index(), "width": 4,
                                  "pc": ins.address, "used_as_address": False,
                                  "store": False})
            else:
                sites.append({"chain": tuple(chain), "offset": disp_total,
                              "param": bv.param_index(), "width": width_of(mn),
                              "pc": ins.address, "store": True,
                              "used_as_address": False})

        # Seed: any load that fed an address was already marked during the walk.
        return {"sites": sites, "insns": insns, "unsupported": unsupported}


INDIRECT_CALL_USE = lambda expr: re.compile(
    r"\(\s*\*\s*\([^;]{0,160}?" + re.escape(expr) + r"\s*(?:\+\s*\d+\s*)?\)"
    r"[^;]{0,80}?\)\s*\(")


def width_of(mn):
    if "b" in mn and "ldr" in mn and mn not in ("ldrd",):
        return 1
    if "h" in mn and "ldr" in mn:
        return 2
    return 4


def imm_of(op):
    try:
        return op.imm
    except Exception:
        return None


# ARM register aliases. `mov sb, r2` and `ldr r0, [sb, #0x40]` name the same
# register differently, so provenance has to be keyed by the canonical name or
# a value silently disappears between instructions.
REG_ALIAS = {
    "sb": "r9", "sl": "r10", "fp": "r11", "ip": "r12",
    "r9": "r9", "r10": "r10", "r11": "r11", "r12": "r12",
}


def canon(ins, rid):
    """Canonical register name (r0..r15) for a Capstone register id."""
    try:
        n = ins.reg_name(rid)
    except Exception:
        return str(rid)
    if n is None:
        return str(rid)
    n = n.lower()
    if n in REG_ALIAS:
        return REG_ALIAS[n]
    return n


def mark_used_as_address(sites, value):
    """Mark the load that produced `value` as an address-producing hop."""
    v, guard = value, 0
    while v is not None and v.kind == "mem" and guard < 64:
        if v.site is not None and 0 <= v.site < len(sites):
            sites[v.site]["used_as_address"] = True
        v = v.parent
        guard += 1


def mark_call_target(sites, value):
    """Mark the load whose value is used as an indirect call target."""
    v, guard = value, 0
    while v is not None and v.kind == "mem" and guard < 64:
        if v.site is not None and 0 <= v.site < len(sites):
            sites[v.site]["call_target"] = True
        v = v.parent
        guard += 1


def mem_operand(ops, nm):
    """Locate the memory operand; return base register name, index name, disp."""
    best = None
    for op in ops:
        if op.type == capstone.arm.ARM_OP_MEM:
            best = op
            break
    if best is None:
        return None
    base = nm(best.mem.base) if best.mem.base else None
    index = None
    if best.mem.index:
        index = nm(best.mem.index)
        # A shifted index is not a constant offset; treat it as unmodelled.
        if getattr(best.mem, "scale", 1) not in (0, 1):
            index = "?" + index
    disp = best.mem.disp or 0
    return {"base": base, "index": index, "disp": disp}


def reg_name(ins, rid):
    try:
        return ins.reg_name(rid)
    except Exception:
        return str(rid)


def fmt_insn(ins):
    return "%s %s" % (ins.mnemonic, ins.op_str)


# ---------------------------------------------------------------------------
# 3. Classify one function: C access count vs machine access count
# ---------------------------------------------------------------------------
def param_index_map(sig_params):
    """Map parameter names to ARM argument slots (r0..r3)."""
    out = {}
    names = [p for p in re.split(r",", sig_params) if p.strip()]
    for i, p in enumerate(names):
        m = re.search(r"([A-Za-z_]\w*)\s*$", p.strip())
        if m:
            out[m.group(1)] = i
    return out


def c_field_nesting(body):
    """(max nesting depth, list of flat offsets) for the FIELD_* access in a body.

    A flattened chain shows up as a single flat access at the summed offset; a
    preserved chain shows up as one FIELD_ macro whose first argument is itself
    a FIELD_ macro.
    """
    spans = []
    for m in re.finditer(r"\bFIELD_[USF]\w*\s*\(", body):
        i = body.index("(", m.start())
        depth, j = 0, i
        while j < len(body):
            if body[j] == "(":
                depth += 1
            elif body[j] == ")":
                depth -= 1
                if depth == 0:
                    break
            j += 1
        spans.append((m.start(), j, body[i + 1:j]))

    def inner_has_field(txt):
        return bool(re.search(r"\bFIELD_[USF]\w*\s*\(", txt))

    max_depth = 0
    flats = []
    # Nesting depth of each access = 1 + number of FIELD_ macros around it.
    for start, _end, inner in spans:
        depth = 1
        if inner_has_field(inner):
            depth = 1 + c_field_nesting(inner)[0]
        # A flat access is one whose base argument is not itself a FIELD_ call.
        base_arg = inner.split(",")[0]
        if not inner_has_field(base_arg):
            off = re.search(r",\s*(0x[0-9A-Fa-f]+)\s*$", inner.strip())
            if off:
                flats.append(int(off.group(1), 16))
        max_depth = max(max_depth, depth)
    return max_depth, flats


def c_flat_on_param(body, param, total):
    """Does the C contain `FIELD_*(param, <total>)` — a flat access on the base?"""
    pat = re.compile(
        r"\bFIELD_[USF]\w*\s*\(\s*%s\s*,\s*0x%X\s*\)" % (re.escape(param), total),
        re.IGNORECASE)
    return bool(pat.search(body))


def c_nested_on_param(body, param):
    """Does the C nest a FIELD_* access inside another, based on `param`?"""
    pat = re.compile(
        r"\bFIELD_[USF]\w*\s*\(\s*FIELD_[USF]\w*\s*\(\s*%s\b" % re.escape(param),
        re.IGNORECASE)
    return bool(pat.search(body))


def classify_one(mc, va, size, cbody, param, off, macro="FIELD_U32", cexpr=""):
    """Classify one function given the already-extracted single param access."""
    sig = FUNC_SIG.search(cbody)
    pidx = param_index_map(sig.group(2)).get(param) if sig else None
    if pidx is None or pidx > 3:
        return None
    res = mc.analyze_param(va, size, pidx)
    sites = [s for s in res["sites"] if s["param"] == pidx]
    if res["unsupported"] and not sites:
        return {"bucket": "OTHER", "reason": "unsupported: " + res["unsupported"][0],
                "c_offset": off, "param": param, "sites": [],
                "insns": [fmt_insn(i) for i in res["insns"]]}

    # Split the code's accesses into terminal field accesses and the
    # intermediate pointer loads that only exist to reach them. A terminal
    # access carries its full dereference chain in `chain`, so the number of
    # memory reads the code performs to reach it is len(chain) + 1.
    hops = [s for s in sites if s.get("used_as_address")]
    finals = [s for s in sites if not s.get("used_as_address")
              and not s.get("call_target")]
    calls = [s for s in sites if s.get("call_target")]

    def dedup(seq):
        seen, out = set(), []
        for s in seq:
            k = (s["chain"], s["offset"], s.get("store"))
            if k in seen:
                continue
            seen.add(k)
            out.append(s)
        return out

    hops = dedup(hops)
    finals = dedup(finals)
    calls = dedup(calls)

    info = {
        "c_offset": off, "param": param, "param_index": pidx,
        "c_expression": cexpr,
        "n_c_accesses": 1,
        "n_machine_accesses": len(sites),
        "n_machine_pointer_hops": len(hops),
        "n_machine_final_accesses": len(finals),
        "n_machine_call_targets": len(calls),
        "hops": [{"chain": list(s["chain"]), "offset": s["offset"],
                  "offset_hex": hex(s["offset"])} for s in hops],
        "finals": [{"chain": list(s["chain"]), "offset": s["offset"],
                    "offset_hex": hex(s["offset"]),
                    "store": bool(s.get("store"))} for s in finals],
        "insns": [fmt_insn(i) for i in res["insns"]],
    }

    if calls and not finals:
        # Virtual dispatch: the vtable is read and called. The C states that
        # vtable read directly (`(*(...)(FIELD_U32(a1,0) + k))(a1)`), so the
        # single FIELD_ access is expected, not a flattened chain.
        info["bucket"] = "DISPATCH"
        info["reason"] = "only param-derived access is a vtable read for an " \
                         "indirect call"
        return info
    if not finals:
        info["bucket"] = "OTHER"
        info["reason"] = "no param-derived memory access found"
        return info
    if len(finals) > 1:
        info["bucket"] = "OTHER"
        info["reason"] = "multiple distinct param-derived accesses (%d)" % len(finals)
        return info

    fin = finals[0]
    depth = len(fin["chain"]) + 1
    flat = sum(fin["chain"]) + fin["offset"]
    info["machine_depth"] = depth
    info["machine_flattened_offset"] = flat
    info["machine_expression"] = corrected_expression(
        param, list(fin["chain"]), fin["offset"], macro)

    if depth == 1:
        if fin["offset"] == off:
            info["bucket"] = "AGREE"
            info["reason"] = "one deref at the offset the C states"
        else:
            info["bucket"] = "OTHER"
            info["reason"] = "single access at 0x%X, C says 0x%X" % (
                fin["offset"], off)
        return info

    # The code dereferences a pointer `depth - 1` times. What does the C say?
    info["corrected"] = info["machine_expression"]
    if c_nested_on_param(cbody, param):
        # The C already renders the chain nested: nothing was flattened.
        info["bucket"] = "CHAIN_PRESERVED"
        info["reason"] = "code derefs %d times and the C keeps the nesting" % depth
        return info
    if flat == off and c_flat_on_param(cbody, param, off):
        info["bucket"] = "FLATTENED_CHAIN"
        info["reason"] = "C collapses %d accesses (%s) into one at 0x%X" % (
            depth,
            " then ".join("0x%X" % o for o in list(fin["chain"]) + [fin["offset"]]),
            off)
        return info
    info["bucket"] = "OTHER"
    # The code dereferences twice, but the C did not state the summed offset.
    # Very often the decompiler simply split the chain into a temporary
    # (`owner = FIELD_U32(a3, 0x40); ... FIELD_U8(owner, 0x54)`), which is
    # correct C for two accesses. Check for that before calling it a mismatch.
    hop0 = fin["chain"][0]
    temp = re.search(
        r"([A-Za-z_]\w*)\s*=\s*(?:\([^;()]*\)\s*)?FIELD_[USF]\w*\(\s*%s\s*,\s*0x%X\s*\)"
        % (re.escape(param), hop0), cbody, re.IGNORECASE)
    if temp and re.search(r"FIELD_[USF]\w*\(\s*%s\s*," % re.escape(temp.group(1)),
                          cbody):
        info["bucket"] = "CHAIN_VIA_TEMP"
        info["reason"] = "code derefs %d times; C holds the chain in `%s`" % (
            depth, temp.group(1))
        return info
    info["reason"] = "code derefs %d times (flattened 0x%X), C says 0x%X" % (
        depth, flat, off)
    return info


def corrected_expression(base, chain, final, macro):
    expr = base
    for c in chain:
        expr = "FIELD_U32(%s, 0x%X)" % (expr, c)
    return "%s(%s, 0x%X)" % (macro, expr, final)


def nested_from_hops(base, hops, leaf_offset, macro):
    """The expression the member chain should have produced.

    An arrow hop through a *pointer* member dereferences; a hop through an
    embedded (non-pointer) member only adds an offset. Accumulating across the
    pointer hop is exactly the flattening bug, so the two cases are kept apart
    here instead of being summed. `leaf_offset` is the offset of the final
    member, which is not part of `hops`.
    """
    expr, acc = base, 0
    for h in hops:
        if h["is_pointer"]:
            expr = "FIELD_U32(%s, 0x%X)" % (expr, acc + h["offset"])
            acc = 0
        else:
            acc += h["offset"]
    return "%s(%s, 0x%X)" % (macro, expr, acc + leaf_offset)


# ---------------------------------------------------------------------------
# main
# ---------------------------------------------------------------------------
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--elf", default=DEFAULT_ELF)
    ap.add_argument("--symbols", default=DEFAULT_SYMS)
    ap.add_argument("--layouts", default=DEFAULT_LAYOUTS)
    ap.add_argument("--corpus", default=DEFAULT_CORPUS)
    ap.add_argument("--pre", default=DEFAULT_PRE)
    ap.add_argument("--json", default=DEFAULT_JSON)
    ap.add_argument("--stride", type=int, default=19,
                    help="deterministic stride over the eligible frame")
    ap.add_argument("--site-stride", type=int, default=7,
                    help="deterministic stride over the corpus for the "
                         "access-level sample")
    args = ap.parse_args()

    types = load_layouts(args.layouts)
    print("layouts: %d types, %d members" % (
        len(types), sum(len(v[1]) for v in types.values())))

    mc = MachineCode(args.elf)
    print("ELF .text: base 0x%X, %d bytes" % (mc.base, len(mc.data)))

    # Population: every published body, using the address its own header states.
    pop = corpus_population(args.corpus)
    print("published corpus bodies with address+size: %d" % len(pop))

    sym_by_va = {}
    for r in csv.DictReader(open(args.symbols, encoding="utf-8")):
        if r["kind"] == "function":
            sym_by_va[int(r["va"], 16)] = r["symbol"]
    print("symbols.csv functions: %d" % len(sym_by_va))

    eligible = []
    for p in pop:
        got = eligible_param_access(p["body"])
        if got is None:
            continue
        p = dict(p)
        p["param"], p["c_offset"], p["macro"], p["c_expr"] = got
        p["symbol"] = sym_by_va.get(p["va"]) or os.path.basename(p["path"])[:-2]
        eligible.append(p)
    print("eligible (exactly one FIELD_* access on a parameter): %d" % len(eligible))

    # Deterministic sample: every Nth eligible function in address order.
    sample = eligible[::args.stride]
    print("sample (every %dth eligible): %d" % (args.stride, len(sample)))

    def measure(items, label):
        st, rs = Counter(), []
        for p in items:
            cl = classify_one(mc, p["va"], p["size"], p["body"],
                              p["param"], p["c_offset"],
                              macro=p["macro"], cexpr=p["c_expr"])
            if cl is None:
                st["unclassifiable"] += 1
                continue
            rec = {"va": "0x%08X" % p["va"], "symbol": p["symbol"],
                   "size": p["size"],
                   "file": os.path.relpath(p["path"], ROOT),
                   "c_body": p["body"].strip()}
            rec.update(cl)
            rs.append(rec)
            st[cl["bucket"]] += 1
        print("  [%s] measured %d: %s" % (label, len(rs), dict(st)))
        return st, rs

    sample_stats, sample_results = measure(sample, "sample")
    frame_stats, frame_results = measure(eligible, "full eligible frame")

    buckets = Counter(r["bucket"] for r in frame_results)
    reasons = Counter((r["bucket"], r.get("reason", "").split(" (")[0])
                      for r in frame_results)

    flattened = [r for r in frame_results if r["bucket"] == "FLATTENED_CHAIN"]
    # Every candidate gets a hand-checkable record: the disassembly, plus the
    # nested expression the code actually implies.
    examples = []
    for r in flattened[:200]:
        examples.append({
            "va": r["va"], "symbol": r["symbol"], "file": r["file"],
            "c_expression": r.get("c_expression"),
            "c_body": r["c_body"],
            "disassembly": r["insns"],
            "pointer_hops": r["hops"],
            "final_accesses": r["finals"],
            "corrected": r.get("corrected"),
        })

    # ---- Census over the whole pre-rewrite export ----
    print("replaying rewrite over %s ..." % args.pre)
    cen = census(types, args.pre, args.corpus)
    print("  functions using arrows: %d" % cen["functions_using_arrow"])
    print("  chains resolved: %d, through a pointer hop: %d"
          % (cen["chains_resolved"], cen["chains_through_pointer_hop"]))
    print("  replay FIELD_* offsets match published: %d, differ: %d, unverified: %d"
          % (cen["replay_matches_published"], cen["replay_differs_from_published"],
             cen["replay_unverified_no_corpus_file"]))

    # ---- Verify every census-suspected chain against the machine code ----
    # The census finds chains that *passed through a pointer-typed member*.
    # Here each such function is disassembled: does the code really dereference
    # twice, and does the published C really show the summed offset?
    pub_by_va = {p["va"]: p for p in pop}
    seen, verified_chain, unverified_chain = set(), [], []
    for e in cen["examples"]:
        key = (e["ea"], e["chain"], e["total"])
        if key in seen:
            continue
        seen.add(key)
        p = pub_by_va.get(e["ea"])
        if p is None:
            unverified_chain.append({
                "va": "0x%08X" % e["ea"], "name": e["name"], "chain": e["chain"],
                "rewritten_to": e["replacement"],
                "reason": "no published corpus body"})
            continue
        sig = FUNC_SIG.search(p["body"])
        if not sig:
            unverified_chain.append({
                "va": "0x%08X" % e["ea"], "name": e["name"], "chain": e["chain"],
                "rewritten_to": e["replacement"], "reason": "no signature line"})
            continue
        pm = param_index_map(sig.group(2))
        base = e["chain"].split("->")[0].split("[")[0].strip()
        if base not in pm or pm[base] > 3:
            # The chain is rooted in a local, not a parameter. The provenance
            # walk is seeded from parameters only, so these are recorded as
            # unverified rather than silently dropped -- spot checks show at
            # least one of them is flattened too, so the confirmed count is a
            # lower bound.
            unverified_chain.append({
                "va": "0x%08X" % e["ea"], "name": e["name"], "chain": e["chain"],
                "rewritten_to": e["replacement"],
                "reason": "chain rooted in local `%s`, not a parameter" % base})
            continue
        res = mc.analyze_param(p["va"], p["size"], pm[base])
        param_sites = [s for s in res["sites"] if s["param"] == pm[base]]
        finals = [s for s in param_sites
                  if not s.get("used_as_address")
                  and not s.get("call_target")]
        # Depth the code actually walks for this parameter: the longest
        # dereference chain among *all* of its accesses, including pointer
        # loads that fed an address or an indirect call. A chain ending at a
        # vtable pointer is still two dereferences even though the second is
        # consumed by `blx`.
        depth_all = max([len(s["chain"]) + 1 for s in param_sites], default=0)
        flat_in_c = c_flat_on_param(p["body"], base, e["total"])
        nested_in_c = c_nested_on_param(p["body"], base)
        verified_chain.append({
            "va": "0x%08X" % e["ea"], "name": e["name"], "chain": e["chain"],
            "rewritten_to": e["replacement"],
            "total": e["total"],
            "published_flat_expression": flat_in_c,
            "published_nested_expression": nested_in_c,
            "hops": e["hops"],
            "machine_depth_max": depth_all,
            "machine_final_accesses": len(finals),
            "file": os.path.relpath(p["path"], ROOT),
        })
    chain_buckets = Counter()
    for r in verified_chain:
        if r["machine_depth_max"] >= 2 and r["published_nested_expression"]:
            chain_buckets["CODE_CHAINS_C_NESTED"] += 1
        elif r["machine_depth_max"] >= 2 and r["published_flat_expression"]:
            chain_buckets["CONFIRMED_FLATTENED"] += 1
        elif r["machine_depth_max"] >= 2:
            chain_buckets["CODE_CHAINS_C_UNRELATED"] += 1
        elif r["machine_depth_max"] == 1:
            # The code performs exactly one load, which is what the C states.
            # This happens when the chain's pointer hop is the *last* access
            # the function performs on that parameter, so no second
            # dereference was ever needed. Note it is the load count, not the
            # zero offset, that makes this harmless: `*(p+0)` and `p` are
            # different values, so a zero member offset alone is not a licence
            # to flatten.
            chain_buckets["HARMLESS_SINGLE_LOAD"] += 1
        else:
            chain_buckets["UNMEASURED"] += 1

    # Case studies: one record per confirmed flattened chain, with the real
    # disassembly and the nested expression the code implies.
    chain_examples = []
    seen_fn = Counter()
    for r in verified_chain:
        if not (r["machine_depth_max"] >= 2 and r["published_flat_expression"]):
            continue
        p = pub_by_va.get(int(r["va"], 16))
        if p is None:
            continue
        insns = [fmt_insn(i) for i in mc.disasm(p["va"], p["size"])]
        base = r["chain"].split("->")[0].split("[")[0].strip()
        sig = FUNC_SIG.search(p["body"])
        pm = param_index_map(sig.group(2)) if sig else {}
        res = mc.analyze_param(p["va"], p["size"], pm.get(base, 0))
        # Anchor the correction to the *measured* access whose flat total
        # equals the offset the published C claims. That guarantees the
        # corrected expression describes the same access, instead of relying on
        # the layout's own type for the intermediate members (which is what the
        # buggy rewriter trusted in the first place).
        cands = [s for s in res["sites"]
                 if s["param"] == pm.get(base)
                 and sum(s["chain"]) + s["offset"] == r["total"]]
        # How many dereferences the member chain really needs: one per
        # pointer-typed hop. Prefer a measured access of exactly that depth, so
        # the correction is not taken from an unrelated deeper access that
        # happens to sum to the same flat offset.
        expected = max(1, len([h for h in r["hops"] if h["is_pointer"]]))
        cands.sort(key=lambda s: (abs(len(s["chain"]) - expected), -len(s["chain"])))
        leaf_macro = "FIELD_U32"
        m = re.match(r"(FIELD_[USF]\w*)\(", r["rewritten_to"])
        if m:
            leaf_macro = m.group(1)
        corrected = None
        evidence = []
        if cands:
            f = cands[0]
            if len(f["chain"]) >= 1:
                corrected = corrected_expression(base, list(f["chain"]), f["offset"],
                                                 leaf_macro)
            else:
                corrected = "%s(%s, 0x%X)" % (leaf_macro, base, f["offset"])
            # Quote only the instructions that walk *this* chain, matched by
            # the offset each one records, so the quoted line is checkable
            # against the stated displacement rather than inferred.
            by_pc = {i.address: fmt_insn(i) for i in mc.disasm(p["va"], p["size"])}
            chain = list(f["chain"])
            wanted = []                      # (prefix, offset) along the path
            for k, hop_off in enumerate(chain):
                wanted.append((tuple(chain[:k]), hop_off))
            wanted.append((tuple(chain), f["offset"]))
            for prefix, off in wanted:
                hit = None
                for s in res["sites"]:
                    if s["param"] != pm.get(base):
                        continue
                    if tuple(s["chain"]) == prefix and s["offset"] == off:
                        hit = s["pc"]
                        break
                if hit in by_pc:
                    evidence.append(["0x%08X" % hit, by_pc[hit]])
            if not evidence:
                evidence = [["0x%08X" % i.address, fmt_insn(i)]
                            for i in mc.disasm(p["va"], min(p["size"], 16))]
        # The dereferenced hops the code must show.
        ptr_hops = [h for h in r["hops"] if h["is_pointer"]]
        # The instructions that actually touch memory on the way down.
        mem_ins = [i for i in insns if re.match(r"(ldr|vldr|ldrb|ldrh|ldrsb|ldrsh)", i)]
        chain_examples.append({
            "va": r["va"], "symbol": r["name"], "file": r["file"],
            "chain": r["chain"], "rewritten_to": r["rewritten_to"],
            "c_expression": r["rewritten_to"],
            "pointer_hops": ["%s (%s) @0x%X" % (h["member"], h["raw_type"], h["offset"])
                             for h in ptr_hops],
            "machine_depth": r["machine_depth_max"],
            "disassembly": insns,
            "chain_instructions": evidence,
            "corrected": corrected,
            "used_as_indirect_call_base": bool(
                INDIRECT_CALL_USE(r["rewritten_to"]).search(p["body"])),
        })
        seen_fn[r["name"]] += 1
    print("  [chain verification] suspected chains %d: %s"
          % (len(verified_chain), dict(chain_buckets)))
    call_base = [c for c in chain_examples if c["used_as_indirect_call_base"]]
    if call_base:
        print("  [control flow] %d flattened chains feed an indirect call: %s"
              % (len(call_base),
                 sorted({c["symbol"] for c in call_base})))

    # ---- Deterministic stride sample over symbols.csv, as specified ----
    sym_funcs = [r for r in csv.DictReader(open(args.symbols, encoding="utf-8"))
                 if r["kind"] == "function"]
    sym_funcs.sort(key=lambda r: int(r["va"], 16))
    stride_rows = sym_funcs[::args.stride]
    stride_stats, stride_members = Counter(), []
    for r in stride_rows:
        p = pub_by_va.get(int(r["va"], 16))
        if p is None:
            stride_stats["no_published_body"] += 1
            continue
        got = eligible_param_access(p["body"])
        if got is None:
            stride_stats["not_eligible"] += 1
            stride_members.append({"va": r["va"], "symbol": r["symbol"],
                                   "bucket": "NOT_ELIGIBLE"})
            continue
        cl = classify_one(mc, p["va"], p["size"], p["body"], got[0], got[1],
                          macro=got[2], cexpr=got[3])
        b = cl["bucket"] if cl else "unclassifiable"
        stride_stats[b] += 1
        stride_members.append({"va": r["va"], "symbol": r["symbol"], "bucket": b})
    print("  [stride sample] %d functions: %s"
          % (len(stride_rows), dict(stride_stats)))

    out = {
        "scope": "New Super Mario Bros. U Deluxe (Switch) v1.0.0 only",
        "inputs": {
            "elf": args.elf,
            "symbols": args.symbols,
            "layouts": args.layouts,
            "corpus": os.path.relpath(args.corpus, ROOT),
            "pre_rewrite_export": args.pre,
        },
        "elf_text_base": "0x%X" % mc.base,
        "layouts": {"types": len(types),
                    "members": sum(len(v[1]) for v in types.values())},
        "population": {
            "published_bodies_with_header": len(pop),
            "symbols_csv_functions": len(sym_by_va),
            "eligible_single_param_access": len(eligible),
        },
        "sample": {
            "method": "every %dth eligible function in ascending-VA order; the "
                      "eligible frame itself is measured in full as well"
                      % args.stride,
            "stride": args.stride,
            "size": len(sample_results),
            "buckets": dict(sample_stats),
        },
        "eligible_frame": {
            "size": len(eligible),
            "measured": len(frame_results),
            "buckets": dict(buckets),
            "reasons": {"%s | %s" % k: v for k, v in sorted(reasons.items())},
        },
        "chain_verification": {
            "method": "every chain the census found passing through a "
                      "pointer-typed member, re-disassembled at its own address",
            "suspected": len(verified_chain),
            "buckets": dict(chain_buckets),
            "unverified": unverified_chain,
            "rows": verified_chain,
            "case_studies": chain_examples,
        },
        "stride_sample": {
            "method": "every %dth row of symbols.csv with kind=function, sorted "
                      "by VA" % args.stride,
            "size": len(stride_rows),
            "buckets": dict(stride_stats),
            "members": stride_members,
        },
        "binary_classification": {
            "buckets": dict(buckets),
            "results": frame_results,
        },
        "census": cen,
        "flattened_examples": examples,
    }
    os.makedirs(os.path.dirname(args.json), exist_ok=True)
    with open(args.json, "w", encoding="utf-8") as fh:
        json.dump(out, fh, indent=1)
    print("wrote %s" % args.json)

    for nm, st in (("sample (every Nth eligible)", sample_stats),
                   ("eligible frame", frame_stats),
                   ("stride sample", stride_stats)):
        print("\n--- %s buckets ---" % nm)
        for k in ("AGREE", "CHAIN_PRESERVED", "CHAIN_VIA_TEMP", "FLATTENED_CHAIN",
                  "DISPATCH", "OTHER", "unclassifiable"):
            if st.get(k):
                print("  %-16s %d" % (k, st[k]))
        print("  total            %d" % sum(st.values()))
    print("\n--- chain verification ---")
    for k, v in chain_buckets.most_common():
        print("  %-22s %d" % (k, v))
    print("\n--- reasons (eligible frame) ---")
    for (b, rsn), n in reasons.most_common():
        print("  %-16s %5d  %s" % (b, n, rsn))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())

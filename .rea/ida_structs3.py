"""EXTEND the struct extractor to capture REGISTER-COMPUTED offsets.

Round 11's extractor only recorded literal `STR Rt,[Rthis,#imm]`. It therefore missed
FireballBase entirely, whose ctor writes fields like:

    MOVW R0, #0x17D4
    ADD  R0, R4, R0          ; R4 = this
    BL   LightMask::LightMask
    ...
    MOVW R0, #0x1A54
    ADD  R0, R4, R0
    STR  R5, [R4,R0]         ; this + 0x1A54

So a second pattern matters:
    MOVW Rd, #imm        (or MOV Rd,#imm / ADD Rd,Rb,#imm)
    ADD  Rd, Rthis, Rd   (or ADD Rd, Rthis, #imm)
    ...
    STR  Rt, [Rthis, Rd]  -> field at imm, width from STR

Also the plain `ADD Rd,Rthis,#imm` then `STR Rt,[Rd]` form.

This tracks a symbolic value per register: either a constant (a field offset) or "this". Then a
store `[base, index]` yields offset = const(index) when base is a this-alias, or offset =
const(base) when the base is `this + k`.

VALIDATION: FireballBase must yield 0x17D4, 0x17FC, 0x1800, 0x1824, 0x1848, 0x1860, 0x1874,
0x18DC, 0x1924, 0x1A54 -- the ten offsets read off its disassembly in an earlier round. If it does
not reproduce those, the extension is wrong and must not be used.
"""
import collections
import json
import re
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
CALLER_SAVED = {"R0", "R1", "R2", "R3"}
WSIZE = {"STR": 4, "STRH": 2, "STRB": 1}


def demangle_class(nm):
    if not nm.startswith("_ZN"):
        return None
    body = nm[3:]
    comps = []
    i = 0
    while i < len(body) and body[i] != "E":
        j = i
        while j < len(body) and body[j].isdigit():
            j += 1
        if j == i:
            break
        n = int(body[i:j])
        if n <= 0 or j + n > len(body):
            break
        comp = body[j:j + n]
        if re.fullmatch(r"[CD][0-9]", comp):
            break
        comps.append(comp)
        i = j + n
    comps = [c for c in comps if c not in ("sead", "nn", "nvn")]
    return comps[-1] if comps else None


def is_ctor(nm):
    if not nm:
        return False
    if nm.startswith("_ZN") and re.search(r"C[12]E", nm):
        return True
    return nm.endswith("_ctor")


def class_of(nm):
    c = demangle_class(nm)
    if c:
        return c
    if nm.endswith("_ctor"):
        return nm[:-5]
    return None


def imm(s):
    try:
        return int(s.replace("#", ""), 0) & 0xFFFFFFFF
    except Exception:
        return None


layout = collections.defaultdict(lambda: collections.defaultdict(lambda: collections.defaultdict(set)))
diag = collections.Counter()

for ea in idautils.Functions():
    nm = ida_name.get_name(ea) or ""
    if not is_ctor(nm):
        continue
    cls = class_of(nm)
    if not cls:
        continue
    f = ida_funcs.get_func(ea)
    if not f:
        continue

    # symbolic env: reg -> ("this", 0) | ("const", k) | ("this+k", k) | None
    env = {"R0": ("this", 0)}

    for insn in idautils.Heads(f.start_ea, f.end_ea):
        d = idc.GetDisasm(insn)
        toks = d.split()
        if not toks:
            continue
        mnem = toks[0].split(".")[0]

        if mnem in ("BL", "BLX"):
            for r in list(env):
                if r in CALLER_SAVED:
                    env.pop(r, None)
            continue

        # MOV Rd, Rs
        m = re.match(r"^MOV\s+(R\d+),\s*(R\d+)$", d)
        if m:
            dst, src = m.group(1), m.group(2)
            env[dst] = env.get(src)
            continue

        # MOVW Rd, #imm   /  MOV Rd, #imm
        m = re.match(r"^MOVW?\s+(R\d+),\s*(#[0-9A-Fa-fx]+)$", d)
        if m:
            v = imm(m.group(2))
            env[m.group(1)] = ("const", v) if v is not None else None
            continue

        # ADD Rd, Rn, #imm  (Rn may be this)
        m = re.match(r"^ADD\s+(R\d+),\s*(R\d+),\s*(#[0-9A-Fa-fx]+)$", d)
        if m:
            dst, src, iv = m.group(1), m.group(2), imm(m.group(3))
            sv = env.get(src)
            if sv is None:
                env[dst] = None
            elif sv[0] == "this":
                env[dst] = ("this+k", sv[1] + iv) if iv is not None else None
            elif sv[0] == "this+k":
                env[dst] = ("this+k", sv[1] + iv) if iv is not None else None
            elif sv[0] == "const":
                env[dst] = ("const", sv[1] + iv) if iv is not None else None
            continue

        # ADD Rd, Rn, Rm  (this + const)
        m = re.match(r"^ADD\s+(R\d+),\s*(R\d+),\s*(R\d+)$", d)
        if m:
            dst, a, b = m.group(1), m.group(2), m.group(3)
            va, vb = env.get(a), env.get(b)
            if va and va[0] == "this" and vb and vb[0] == "const":
                env[dst] = ("this+k", vb[1])
            elif vb and vb[0] == "this" and va and va[0] == "const":
                env[dst] = ("this+k", va[1])
            else:
                env[dst] = None
            continue

        # store: STR Rt,[Rn, Rm]  or  STR Rt,[Rn, #imm]  or  STR Rt,[Rn]
        m = re.match(r"^(STR|STRH|STRB)\s+R\d+,\s*\[(R\d+)(?:,\s*(R\d+|#[0-9A-Fa-fx]+))?\](.*)",
                     d)
        if m:
            kind, base_r, idx, tail = m.group(1), m.group(2), m.group(3), m.group(4) or ""
            if "!" in tail or "],#" in d:
                diag["prepost_indexed"] += 1
                continue
            bv = env.get(base_r)
            width = WSIZE[kind]
            off = None
            if bv and bv[0] == "this":
                if idx is None:
                    off = 0
                elif idx.startswith("#"):
                    off = imm(idx)
                elif idx.startswith("R"):
                    iv = env.get(idx)
                    if iv and iv[0] == "const":
                        off = iv[1]
                    elif iv and iv[0] == "this+k":
                        off = iv[1]
            elif bv and bv[0] == "this+k":
                if idx is None:
                    off = bv[1]
                elif idx.startswith("#"):
                    off = bv[1] + imm(idx)
                elif idx.startswith("R"):
                    iv = env.get(idx)
                    if iv and iv[0] == "const":
                        off = bv[1] + iv[1]
            if off is None:
                diag["unresolved_store"] += 1
                continue
            if off > 0x20000:
                diag["too_large"] += 1
                continue
            layout[cls][off][width].add(nm)
            continue

        # any other register write invalidates
        m = re.match(r"^\w+\s+(R\d+),", d)
        if m and not d.startswith(("STR", "CMP", "TST", "LDR")):
            env[m.group(1)] = None

print("diagnostics:", dict(diag))

classes = {}
for cls, offs in layout.items():
    if len(offs) < 3:
        continue
    rows = []
    for off in sorted(offs):
        widths = offs[off]
        width = max(widths.items(), key=lambda kv: len(kv[1]))[0]
        rows.append({"off": off, "width": width,
                     "ctors": sorted({c for s in widths.values() for c in s})})
    classes[cls] = rows

print(f"classes with >=3 fields: {len(classes)}")
print(f"total fields           : {sum(len(v) for v in classes.values())}")

print()
print("=" * 92)
print("VALIDATION: FireballBase must contain the ten offsets read off its disassembly")
print("=" * 92)
want = [0x17D4, 0x17FC, 0x1800, 0x1824, 0x1848, 0x1860, 0x1874, 0x18DC, 0x1924, 0x1A54]
fb = {r["off"]: r for r in classes.get("FireballBase", [])}
ok = 0
for off in want:
    if off in fb:
        ok += 1
        print(f"  0x{off:04x}  width {fb[off]['width']}  OK")
    else:
        print(f"  0x{off:04x}  MISSING")
print(f"  {ok}/{len(want)} reproduced")
print(f"  FireballBase total fields: {len(fb)}")

with open(r"C:\Users\Saif Khan\Downloads\main.idb\.rea\structs_v2.json", "w",
          encoding="utf-8") as fh:
    json.dump(classes, fh, indent=1)
print()
print("wrote structs_v2.json")

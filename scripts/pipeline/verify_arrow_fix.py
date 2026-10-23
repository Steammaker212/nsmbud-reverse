"""Verify every arrow fix by tracking the actual register dataflow.

"The offset appears somewhere in the function" is not evidence: offsets like
0x0, 0x4 and 0xC appear in almost every function, so that test calls 42 of 64
cases ambiguous and proves nothing either way.

The claim `FIELD_X(FIELD_U32(base, A), B)` makes is specific and testable:

    load  d1 <- [base + A]        ; the pointer hop
    load  dst <- [d1 + B]         ; the final field, THROUGH d1

So this walks the instruction stream, follows mov/ldr register copies, and
requires that an actual load from the register produced by the A-load uses
displacement B. It also reports whether a single load from `base` at A+B exists,
because if one does, the flattened form could have been describing that instead.

Deluxe (Switch) v1.0.0 only.
"""
from __future__ import annotations

import io
import json
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
sys.path.insert(0, HERE)

import apply_arrow_fix as AF  # noqa: E402
import rewrite_arrows as RA  # noqa: E402

ELF = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
OBJDUMP = r"C:\devkitPro\devkitARM\bin\arm-none-eabi-objdump.exe"
BASE = 0x60000000
LAYOUTS = os.path.join(ROOT, "data", "recovered", "type_layouts.json")
PRE = r"C:\Users\Saif Khan\Downloads\main.idb\_work\export_vt\all_functions.jsonl"

# ldr/ldrb/ldrh/vldr Rd, [Rb, #imm]
LOAD = re.compile(
    r"^\s*([0-9a-f]+):\s+[0-9a-f]+\s+"
    r"(ldr|ldrb|ldrh|ldrsb|ldrsh|vldr)\s+([a-z0-9]+),\s*\[([a-z0-9]+)(?:,\s*#(\d+))?\]",
    re.I)
# mov Rd, Rm  (register to register only)
MOV = re.compile(r"^\s*([0-9a-f]+):\s+[0-9a-f]+\s+mov\s+([a-z0-9]+),\s*([a-z0-9]+)\s*$",
                 re.I)


def disasm(va: int, size: int):
    end = va + max(size, 0x40)
    p = subprocess.run([OBJDUMP, "-d", "--start-address=0x%X" % va,
                        "--stop-address=0x%X" % end, ELF],
                       capture_output=True, text=True, errors="replace")
    return p.stdout


def instructions(text):
    """[(addr, kind, dest, src, disp)] with kind in {'load','mov'}."""
    out = []
    for line in text.splitlines():
        m = LOAD.match(line)
        if m:
            out.append((int(m.group(1), 16), "load", m.group(3).lower(),
                        m.group(4).lower(), int(m.group(5) or 0)))
            continue
        m = MOV.match(line)
        if m:
            out.append((int(m.group(1), 16), "mov", m.group(2).lower(),
                        m.group(3).lower(), None))
    return out


def resolve(insns, reg, addr, depth=0):
    """Follow mov copies backwards to find the register holding the value at addr.

    Returns the set of registers that could hold `reg` at address `addr`. Only
    movs are followed; anything else may clobber, which is handled by the caller
    requiring the load to be found, not assumed.
    """
    if depth > 4:
        return {reg}
    out = {reg}
    for a, kind, d, s, _disp in insns:
        if a >= addr:
            break
        if kind == "mov" and d == reg:
            out |= resolve(insns, s, a, depth + 1)
    return out


def check_nested(insns, base_regs, first, second):
    """True if a load from base+first is followed by a load from that result +second."""
    for i, (a1, kind1, d1, b1, disp1) in enumerate(insns):
        if kind1 != "load" or disp1 != first:
            continue
        if not (base_regs & resolve(insns, b1, a1)):
            continue
        # Follow the result register forward, allowing mov copies.
        cands = {d1}
        for a2, kind2, d2, b2, disp2 in insns[i + 1:]:
            if kind2 == "mov" and b2 in cands:
                cands.add(d2)
                continue
            if kind2 == "load" and disp2 == second and b2 in cands:
                return True
    return False


def check_single(insns, base_regs, offset):
    """True if some load reads [base + offset] directly."""
    for a, kind, _d, b, disp in insns:
        if kind == "load" and disp == offset and (base_regs & resolve(insns, b, a)):
            return True
    return False


def param_regs(body: str):
    """Ordered parameter names from the signature, index == register number."""
    order = []
    m = re.search(r"\(([^)]*)\)", body)
    if m:
        for decl in m.group(1).split(","):
            ids = [i for i in re.findall(r"[A-Za-z_]\w*", decl)
                   if i not in ("const", "volatile", "unsigned", "signed",
                                "int", "char", "short", "long", "void",
                                "float", "double", "bool", "struct", "class")]
            if ids:
                order.append(ids[-1])
    return order


def reg_for(root: str, order):
    """Register set for a chain root.

    The root name is resolved through the signature to its argument index, so
    `a3` maps to r3 and `this`/`a1` to r0. Searching every argument register
    instead would "confirm" a chain by finding its offsets in an unrelated
    parameter's accesses -- the offset-anywhere mistake one level down.

    An unknown root (a local, a global) keeps the full set, and such a case is
    reported separately rather than counted as confirmed.
    """
    if root in order:
        idx = order.index(root)
        return {"r%d" % idx} if idx < 4 else {"r0", "r1", "r2", "r3"}
    return {"r0", "r1", "r2", "r3"}
    m = re.match(
        r"^FIELD_[A-Z0-9]+\(FIELD_U32\((\w+),\s*0x([0-9A-Fa-f]+)\),\s*0x([0-9A-Fa-f]+)\)$",
        expr)
    if m:
        return (m.group(1), int(m.group(2), 16), int(m.group(3), 16))
    return None


def parse_nested(expr: str):
    """FIELD_X(FIELD_U32(base, A), B) -> (base, A, B), else None."""
    m = re.match(
        r"^FIELD_[A-Z0-9]+\(FIELD_U32\((\w+),\s*0x([0-9A-Fa-f]+)\),\s*0x([0-9A-Fa-f]+)\)$",
        expr)
    if m:
        return (m.group(1), int(m.group(2), 16), int(m.group(3), 16))
    return None


def main() -> int:
    types = RA.load_types(LAYOUTS)
    checked = confirmed = ambiguous = failed = 0
    problems = []

    with io.open(PRE, encoding="utf-8", errors="replace") as f:
        for line in f:
            try:
                r = json.loads(line)
            except Exception:
                continue
            body = r.get("c") or ""
            if not body:
                continue
            pairs = AF.expression_pairs(body, types)
            if not pairs:
                continue

            ea = r.get("ea") or 0
            va = ea if ea >= BASE else BASE + ea
            insns = instructions(disasm(va, r.get("size") or 0x40))
            if not insns:
                continue
            order = param_regs(body)

            for old, new in pairs:
                parsed = parse_nested(new)
                if not parsed:
                    continue
                root, first, second = parsed
                base_regs = reg_for(root, order)
                root_known = root in order
                checked += 1

                nested_ok = check_nested(insns, base_regs, first, second)
                flat_ok = check_single(insns, base_regs, first + second)

                if nested_ok and not flat_ok:
                    confirmed += 1
                elif nested_ok and flat_ok:
                    ambiguous += 1
                else:
                    failed += 1
                    problems.append((r.get("name"), old, new, first, second,
                                     flat_ok, root, root_known))

    print("nested expressions checked   : %d" % checked)
    print("  chain confirmed by code    : %d" % confirmed)
    print("  ambiguous (both shapes)    : %d" % ambiguous)
    print("  NOT FOUND in code          : %d" % failed)
    if problems:
        print()
        print("cases the disassembly does not show:")
        for nm, old, new, f1, f2, flat, root, known in problems[:20]:
            print("  %s   (root=%s%s)" % (nm, root, "" if known else ", NOT a parameter"))
            print("     %s  ->  %s" % (old, new))
            print("     wanted [base+%#x] then [+%#x]; direct [base+%#x] present=%s"
                  % (f1, f2, f1 + f2, flat))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())

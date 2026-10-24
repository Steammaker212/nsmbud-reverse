"""Verify the indexed-access rewrite against the machine code.

`a1[8].id` becomes `FIELD_U32(a1 + (8) * 80, 0x8)`, i.e. base + 8*sizeof + member
offset. That is only correct if the compiler really emitted that arithmetic, so
this checks the encoded displacement against the arithmetic the rewrite claims.

The first case is already proven by hand: CollisionActor__dtor at 0x60003F94
encodes `str r1,[r0],#648` for `a1[8].id`, and 8*0x50 + 0x8 == 0x288 == 648. This
script generalises that check: for each rewritten indexed access it computes the
claimed byte offset and looks for that displacement in the function's
instructions, including the `add`-based form used when the offset exceeds the
12-bit immediate range.

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

INDEXED = re.compile(
    r"^FIELD_[A-Z0-9]+\((\w+) \+ \((\w+)\) \* (\d+), 0x([0-9A-Fa-f]+)\)$")

def disasm(va: int, size: int):
    end = va + max(size, 0x40)
    p = subprocess.run(
        [OBJDUMP, "-d", "--start-address=0x%X" % va, "--stop-address=0x%X" % end, ELF],
        capture_output=True, text=True, errors="replace")
    return p.stdout


def displacements(text):
    """Every constant an offset could be encoded as.

    A struct offset reaches an instruction in one of four ways on ARM32, and a
    checker that only looks at `[Rn,#imm]` silently fails on three of them:

      ldr/str Rd, [Rn, #imm]        immediate in the addressing mode (< 4096)
      add  Rd, Rn, #imm             immediate in a data-processing operand
      ldr  Rd, [Rn, Rm]             via a register holding the offset
      ldr  Rm, [pc, #k] / .word     via a literal pool (any 32-bit value)

    The last two are how every offset >= 4096 arrives, which is most of the
    un-corroborated cases: CollisionActor__beforeExecute wants 0x17A4 = 6052.
    So pool constants and the `movw/movt` pairs are collected too.
    """
    out = set()

    # Literal pool values: objdump prints them as a `.word` line, or as a
    # `@ 0xADDR` comment on a pc-relative load.
    for line in text.splitlines():
        for pat in (r"\.word\s+0x([0-9A-Fa-f]+)",
                    r"@\s*0x([0-9A-Fa-f]{5,8})\b"):
            m = re.search(pat, line)
            if m:
                out.add(int(m.group(1), 16) & 0xFFFFFFFF)

    # movw/movt pairs build a 32-bit constant in two instructions.
    pending = {}
    for line in text.splitlines():
        m = re.search(r"\bmovw\s+(\w+),\s*#(\d+)", line, re.I)
        if m:
            pending[m.group(1)] = int(m.group(2))
            continue
        m = re.search(r"\bmovt\s+(\w+),\s*#(\d+)", line, re.I)
        if m and m.group(1) in pending:
            out.add((int(m.group(2)) << 16) | pending[m.group(1)])
            del pending[m.group(1)]

    for line in text.splitlines():
        for pat in (r"\[[a-z0-9]+,\s*#(\d+)\]",
                    r"\badd\w*\s+\w+,\s*\w+,\s*#(\d+)",
                    r"#(\d+)\s*$",
                    r"#(\d+)\s*[@\]]"):
            m = re.search(pat, line, re.I)
            if m:
                out.add(int(m.group(1)))
    return out


def main() -> int:
    types = RA.load_types(LAYOUTS)
    checked = confirmed = failed = 0
    problems = []
    first_proof = None

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
            text = disasm(va, r.get("size") or 0x40)
            disps = displacements(text)
            if not disps:
                continue

            for old, new in pairs:
                m = INDEXED.match(new)
                if not m:
                    continue
                base, idx, stride, memoff = (m.group(1), m.group(2),
                                             int(m.group(3)), int(m.group(4), 16))
                checked += 1
                if idx.isdigit():
                    claimed = int(idx) * stride + memoff
                else:
                    # Variable index: the compiler emits `mla`/`mul` plus the
                    # member offset, so only the member offset is a constant.
                    claimed = memoff
                if claimed in disps:
                    confirmed += 1
                    if first_proof is None:
                        first_proof = (r.get("name"), new, claimed, sorted(disps)[:12])
                else:
                    failed += 1
                    problems.append((r.get("name"), old, new, claimed,
                                     sorted(disps)[:10]))

    print("indexed accesses rewritten : %d" % checked)
    print("  claimed offset found     : %d" % confirmed)
    print("  not found in code        : %d" % failed)
    if first_proof:
        nm, expr, off, some = first_proof
        print()
        print("first proof: %s" % nm)
        print("  %s  -> claimed byte offset %d (0x%X)" % (expr, off, off))
        print("  function's immediate offsets include: %s" % some)
    if problems:
        print()
        print("not corroborated:")
        for nm, old, new, claimed, some in problems[:12]:
            print("  %s" % nm)
            print("     %s  (claimed 0x%X)" % (new, claimed))
            print("     immediates seen: %s" % some)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())

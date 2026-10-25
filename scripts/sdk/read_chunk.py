"""Read a stretch of ARM code IDA never made into a function.

Prints each call with its target's name and resolves PC-relative string
loads (`ldr rX, [pc, #n]` followed by `add rX, pc, rX`, or a direct literal)
to the C string they address. Works from the one-time disassembly dump
(leanrea: dump once, then grep) and the ELF for literal pools.

Usage:
    python scripts/sdk/read_chunk.py --dis <dis.txt> --elf <elf> 0x60371580 0x60371700
"""
from __future__ import annotations

import argparse
import bisect
import csv
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from profile_resources import Elf  # noqa: E402

LINE = re.compile(r"^([0-9a-f]{8}):\s+([0-9a-f]{8})\s+(\S+)\s*(.*?)\s*$")


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--dis", required=True)
    ap.add_argument("--elf", required=True)
    ap.add_argument("--repo", default=".")
    ap.add_argument("start")
    ap.add_argument("end")
    args = ap.parse_args()
    start, end = int(args.start, 16), int(args.end, 16)

    elf = Elf(args.elf)
    syms = sorted((int(r["va"], 16), r["symbol"]) for r in csv.DictReader(
        open(Path(args.repo) / "data/loader/symbols.csv", encoding="utf-8")) if r["kind"] == "function")
    starts = [s for s, _ in syms]

    def name(va):
        i = bisect.bisect_right(starts, va) - 1
        return syms[i][1] if i >= 0 and syms[i][0] == va else f"sub_{va:08X}"

    def cstr(va):
        try:
            raw = elf.read(va - 0x60000000, 64)
        except KeyError:
            return None
        s = raw.split(b"\0")[0]
        return s.decode("ascii") if s and all(32 <= b < 127 for b in s) else None

    pending = {}  # reg -> (literal value, pc of ldr)
    for line in open(args.dis, encoding="ascii", errors="replace"):
        m = LINE.match(line)
        if not m:
            continue
        va = int(m.group(1), 16)
        if va < start:
            continue
        if va >= end:
            break
        mnem, ops = m.group(3), m.group(4).split("@")[0].strip()
        note = ""
        lm = re.match(r"(r\d+), \[pc, #(-?0x[0-9a-f]+|-?\d+)\]", ops)
        if mnem == "ldr" and lm:
            lit = elf.u32(va + 8 + int(lm.group(2), 0) - 0x60000000)
            pending[lm.group(1)] = lit
        am = re.match(r"(r\d+), pc, (r\d+)", ops)
        if mnem == "add" and am and am.group(2) in pending:
            target = (pending.pop(am.group(2)) + va + 8) & 0xFFFFFFFF
            s = cstr(target)
            note = f'  ; "{s}"' if s else f"  ; 0x{target:08X}"
        bm = re.match(r"0x([0-9a-f]+)", ops)
        if mnem in ("bl", "blx", "b") and bm:
            note = f"  ; {name(int(bm.group(1), 16))}"
        if note or mnem in ("bl", "blx", "pop", "bx"):
            print(f"{va:08x}: {mnem:6s} {ops[:40]:40s}{note}")


if __name__ == "__main__":
    main()

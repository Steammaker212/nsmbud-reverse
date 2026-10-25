"""Dump Hex-Rays text for many addresses into one review file.

Read-only against the live IDA session. Writes a single markdown-flavoured .c
file so a whole class can be read in one pass, with the address of every line
kept as a comment (evidence for the ledger).

    python scripts/ida/dump_range.py --out .rea/dump/goomba.c \
        0x60337D2C 0x603393F0 0x60339D44

    python scripts/ida/dump_range.py --lo 0x60337D2C --hi 0x6033B9D0 --out ...
"""
from __future__ import annotations

import argparse
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from ida_rpc import IDA, RpcError  # noqa: E402

TAG = re.compile(r"^/\* line: \d+(?:, address: 0x[0-9a-f]+)? \*/ ?", re.M)


def render(ida: IDA, addr: str) -> str:
    try:
        text = ida.call("decompile_function", addr)
        return TAG.sub("", text) if False else text
    except RpcError as e:
        try:
            d = ida.call("disassemble_function", addr)
        except RpcError as e2:
            return f"// {addr}: not a function ({e2})\n"
        head = f"// {addr}  {d.get('name')}  (no decompiler output: {e})\n"
        body = "\n".join(f"//   {x['address']} {x.get('label', ''):<20} {x['instruction']}"
                         for x in d["lines"])
        return head + body + "\n"


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("addresses", nargs="*")
    ap.add_argument("--lo", help="lower bound of an address range")
    ap.add_argument("--hi", help="upper bound of an address range")
    ap.add_argument("--out", required=True)
    ap.add_argument("--max", type=int, default=200, help="cap when using a range")
    args = ap.parse_args()

    ida = IDA()
    targets = list(args.addresses)
    if args.lo and args.hi:
        lo, hi = int(args.lo, 16), int(args.hi, 16)
        fns = [f for f in ida.functions() if lo <= int(f["address"], 16) <= hi]
        fns.sort(key=lambda f: int(f["address"], 16))
        targets += [f["address"] for f in fns][: args.max]
        print(f"range {args.lo}..{args.hi}: {len(fns)} functions, dumping {min(len(fns), args.max)}")

    out = Path(args.out)
    out.parent.mkdir(parents=True, exist_ok=True)
    with open(out, "w", encoding="utf-8") as fh:
        fh.write(f"// dumped from {ida.db_path()}\n\n")
        for a in targets:
            fh.write(f"\n// ======================================================================\n")
            fh.write(f"// {a}\n")
            fh.write(f"// ======================================================================\n")
            fh.write(render(ida, a))
            fh.write("\n")
    print(f"wrote {out} ({out.stat().st_size} bytes, {len(targets)} functions)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())

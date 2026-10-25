"""Fetch Hex-Rays text for a list of addresses from the live IDA session.

Read-only. Keeps the `/* line: N, address: ... */` tags off by default so the
output reads like source; pass --tags to keep them, which is what you want when
quoting an address as evidence.

    python scripts/ida/fetch.py 0x60002D98 0x60002E2C
    python scripts/ida/fetch.py --tags 0x60008138
    python scripts/ida/fetch.py --vtable 0x60BC0250 --count 40
"""
from __future__ import annotations

import argparse
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from ida_rpc import IDA, RpcError  # noqa: E402

TAG = re.compile(r"^/\* line: \d+(?:, address: 0x[0-9a-f]+)? \*/ ?", re.M)


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("addresses", nargs="*")
    ap.add_argument("--tags", action="store_true", help="keep the address tags")
    ap.add_argument("--vtable", help="dump pointer words from this address")
    ap.add_argument("--count", type=int, default=24)
    args = ap.parse_args()

    ida = IDA()
    if args.vtable:
        base = int(args.vtable, 16)
        for i in range(args.count):
            word = ida.call("data_read_dword", hex(base + 4 * i))
            target = ""
            try:
                f = ida.call("get_function_by_address", hex(word))
                target = f"  {f['name']}  ({f['size']})"
            except RpcError:
                target = ""
            print(f"  +0x{i * 4:02X}  {hex(base + 4 * i)}: {hex(word)}{target}")
        return 0

    for a in args.addresses:
        print("=" * 24, a)
        try:
            text = ida.call("decompile_function", a)
        except RpcError as e:
            print(f"  <decompiler refused: {e}>")
            try:
                d = ida.call("disassemble_function", a)
            except RpcError as e2:
                print(f"  <not a function: {e2}>")
                continue
            for line in d["lines"]:
                print(f"  {line['address']} {line.get('label', ''):<18} {line['instruction']}")
            continue
        print(TAG.sub("", text) if not args.tags else text)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())

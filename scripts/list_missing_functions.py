"""Recover the 10,375 main.i64 functions that have no corpus definition.

Emits the missing addresses in IDA-friendly form so they can be decompiled in batches, and records a manifest so the
recovery is resumable and auditable.
"""
import os
import re
import sys

ALL = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\ida_work\idb_all_funcs.txt"
ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
WORK = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\ida_work"
BASE = 0x60000000


def main(argv):
    idb = {}
    for ln in open(ALL, encoding="utf-8", errors="replace"):
        if ln.startswith("#"):
            continue
        parts = ln.split()
        if len(parts) < 2:
            continue
        try:
            idb[int(parts[0], 16)] = int(parts[1], 16)
        except ValueError:
            pass

    BANNER = re.compile(r"(?m)^ \* RVA (?P<rva>0x[0-9a-fA-F]+)\s+size")
    cor = set()
    for dp, _, ns in os.walk(ROOT):
        if os.path.basename(dp) == "include" or "authoritative" in dp:
            continue
        for fn in ns:
            if not fn.endswith(".c"):
                continue
            t = open(os.path.join(dp, fn), encoding="utf-8", errors="replace").read()
            cor.update(int(m.group("rva"), 16) + BASE for m in BANNER.finditer(t))

    missing = sorted(a for a in idb if a not in cor)
    p = os.path.join(WORK, "missing_all.txt")
    with open(p, "w", encoding="utf-8", newline="") as f:
        for a in missing:
            f.write("0x%08X\n" % a)
    print("  missing functions: %d" % len(missing))
    print("  written to %s" % p)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))

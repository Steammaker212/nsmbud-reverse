"""Filter the missing-function list down to substantive bodies.

Of the 10,374 functions present in main.i64 but absent from the corpus, the overwhelming majority are not worth
recovering:

    6,710  nullsub_N  -- literally `{ ; }`, size 4, no behaviour
    2,109  j_XXXX     -- unconditional jump thunks (`jmp target`), no behaviour of their own
    1,544  sub_XXXX   -- real bodies
       11  named

This writes only the substantive ones (real `sub_` bodies plus the named ones) so the recovery job spends its time
on code that can be read.
"""
import os
import re
import sys

ALL = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\ida_work\idb_all_funcs.txt"
WORK = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\ida_work"
MISSING = os.path.join(WORK, "missing_all.txt")
OUT = os.path.join(WORK, "missing_substantive.txt")


def main(argv):
    want = set()
    for ln in open(MISSING, encoding="utf-8"):
        ln = ln.strip()
        if ln:
            want.add(int(ln, 16))

    keep, kinds = [], {"nullsub": 0, "j_": 0, "sub": 0, "named": 0, "tiny": 0}
    for ln in open(ALL, encoding="utf-8", errors="replace"):
        if ln.startswith("#"):
            continue
        parts = ln.split(None, 2)
        if len(parts) < 3:
            continue
        try:
            a = int(parts[0], 16)
            size = int(parts[1], 16)
        except ValueError:
            continue
        n = parts[2].strip()
        if a not in want:
            continue
        if n.startswith("nullsub_"):
            kinds["nullsub"] += 1
        elif n.startswith("j_"):
            kinds["j_"] += 1
        elif size <= 8:
            # A body of 8 bytes or less is a single `bx lr` / `mov r0,#0; bx lr`; there is nothing to read.
            kinds["tiny"] += 1
        elif n.startswith("sub_"):
            kinds["sub"] += 1
            keep.append((a, size, n))
        else:
            kinds["named"] += 1
            keep.append((a, size, n))

    with open(OUT, "w", encoding="utf-8", newline="") as f:
        for a, _s, _n in keep:
            f.write("0x%08X\n" % a)

    print("  skipped: %s" % kinds)
    print("  substantive to recover: %d" % len(keep))
    print("  written to %s" % OUT)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))

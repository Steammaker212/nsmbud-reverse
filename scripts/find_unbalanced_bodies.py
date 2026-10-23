"""Find bodies in the recovered units whose braces do not balance.

Hex-Rays occasionally returns a fragment that opens a block it never closes (`if (...) {` with the body truncated),
and one such body makes every following function in the file a nested definition -- the same cascade that took
actor_construction.c to 1,687 errors.

This reports each unbalanced body by name and delta so the specific functions can be re-decompiled or dropped.
"""
import os
import re
import sys

sys.path.insert(0, r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\scripts")
from balance_function_braces import blank_literals

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\recovered"
BANNER = re.compile(r"(?m)^/\* =+\n \* (?P<name>\S+)\n \* RVA (?P<rva>0x[0-9a-fA-F]+)\s+size (?P<size>0x[0-9a-fA-F]+)")


def main(argv):
    totals = {"bad": 0, "ok": 0}
    for fn in ["recovered_named.c", "recovered_missing.c"]:
        p = os.path.join(ROOT, fn)
        if not os.path.exists(p):
            continue
        raw = open(p, encoding="utf-8", errors="replace").read()
        flat = blank_literals(raw)
        marks = [(m.start(), m.group("name")) for m in BANNER.finditer(raw)]
        marks.append((len(raw), "<eof>"))
        print("=== %s  (%d bodies) ===" % (fn, len(marks) - 1))
        bad = []
        for i in range(len(marks) - 1):
            a, name = marks[i]
            b = marks[i + 1][0]
            seg = flat[a:b]
            d = seg.count("{") - seg.count("}")
            if d != 0:
                bad.append((name, d))
        print("   unbalanced bodies: %d / %d" % (len(bad), len(marks) - 1))
        for name, d in bad[:12]:
            print("      %-40s %+d" % (name[:40], d))
        totals["bad"] += len(bad)
        totals["ok"] += (len(marks) - 1) - len(bad)
        print()
    print("  total unbalanced: %d   balanced: %d" % (totals["bad"], totals["ok"]))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))

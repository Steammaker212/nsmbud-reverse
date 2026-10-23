"""List the remaining functions that are pure stubs, so coverage of main.i64 can reach 100%.

After the substantive recovery, the only addresses still absent are:

    nullsub_N   size 4   `bx lr` -- an empty function
    j_XXXX      size 8   `b target` -- a jump thunk
    <= 8 bytes  size 4-8 -- `bx lr` or `mov r0,#0; bx lr`

These are not "unreadable code"; they are trivially expressible in C. Emitting them completes the goal that
everything in the database is decompiled into readable C, with the honest note that their bodies are empty or a
tail call.
"""
import os
import re
import sys

ALL = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\ida_work\idb_all_funcs.txt"
WORK = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\ida_work"
RECOVERED = os.path.join(WORK, "all_missing_out")
ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
BASE = 0x60000000
OUT = os.path.join(WORK, "missing_stubs.txt")


def main(argv):
    # addresses already covered by the corpus (banners) or by the recovery output
    BANNER = re.compile(r"(?m)^ \* RVA (?P<rva>0x[0-9a-fA-F]+)\s+size")
    have = set()
    for dp, _, ns in os.walk(ROOT):
        if os.path.basename(dp) == "include" or "authoritative" in dp:
            continue
        for fn in ns:
            if not fn.endswith(".c"):
                continue
            t = open(os.path.join(dp, fn), encoding="utf-8", errors="replace").read()
            have.update(int(m.group("rva"), 16) + BASE for m in BANNER.finditer(t))
    for fn in os.listdir(RECOVERED):
        m = re.match(r"sub_([0-9A-Fa-f]{8})\.c$", fn)
        if m:
            have.add(int(m.group(1), 16))

    rows = []
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
        if a in have:
            continue
        rows.append((a, size, parts[2].strip()))

    with open(OUT, "w", encoding="utf-8", newline="") as f:
        for a, _s, _n in rows:
            f.write("0x%08X\n" % a)

    kinds = {}
    for _a, _s, n in rows:
        k = n.split("_")[0] if "_" in n else "other"
        kinds[k] = kinds.get(k, 0) + 1
    print("  already covered: %d" % len(have))
    print("  remaining stubs: %d  %s" % (len(rows), kinds))
    print("  written to %s" % OUT)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))

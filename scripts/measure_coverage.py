"""Quantify how much of main.i64's 47,158 functions the corpus covers."""
import os
import re

ALL = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\ida_work\idb_all_funcs.txt"
ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
BASE = 0x60000000

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

# The name may be a C++-shaped one (`sead::IDisposer::~IDisposer`) after the destructor support was added, so `\w+`
# no longer matches and 27 banners were invisible to this counter. Allow any non-newline name.
BANNER = re.compile(r"(?m)^/\* =+\n \* (?P<name>[^\n]+?)\n \* RVA (?P<rva>0x[0-9a-fA-F]+)\s+size (?P<size>0x[0-9a-fA-F]+)")
cor = {}
for dp, _, ns in os.walk(ROOT):
    if os.path.basename(dp) == "include" or "authoritative" in dp:
        continue
    for fn in ns:
        if not fn.endswith(".c"):
            continue
        t = open(os.path.join(dp, fn), encoding="utf-8", errors="replace").read()
        for m in BANNER.finditer(t):
            cor[int(m.group("rva"), 16) + BASE] = (m.group("name"), int(m.group("size"), 16))

missing = {a: s for a, s in idb.items() if a not in cor}
print("  IDB functions:        %d" % len(idb))
print("  corpus banners:       %d" % len(cor))
print("  covered (by address): %d  (%.1f%%)" % (len(idb) - len(missing),
                                                 100.0 * (len(idb) - len(missing)) / len(idb)))
print("  MISSING:              %d" % len(missing))
tot = sum(missing.values())
print("  missing bytes:        0x%X (%.1f MB of code)" % (tot, tot / 1048576.0))
print()
print("  largest 12 missing:")
for a, s in sorted(missing.items(), key=lambda kv: -kv[1])[:12]:
    print("    0x%08X  size 0x%-6X" % (a, s))

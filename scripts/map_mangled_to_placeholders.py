"""Decide whether any of the 853 missing mangled names can rename a corpus `sub_` placeholder.

A mangled name only helps if its address is an address the corpus currently labels `sub_XXXXXXXX`. This maps the sym
file's RVAs onto corpus placeholder addresses and reports the overlap, which is the only actionable subset.
"""
import os
import re

SYM = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\symbols\nsmbudx.sym"
ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
BASE = 0x60000000

mangled = {}
for ln in open(SYM, encoding="utf-8", errors="replace"):
    ln = ln.split("#")[0].strip()
    if "=" not in ln:
        continue
    n, v = ln.split("=", 1)
    n = n.strip()
    v = v.strip().rstrip(";").strip()
    try:
        a = int(v, 16)
    except ValueError:
        continue
    if n.startswith("_Z"):
        mangled.setdefault(a, n)

# corpus placeholders, by absolute VA
sub_re = re.compile(r"\bsub_([0-9A-Fa-f]{8})\b")
placeholders = set()
for dp, _, ns in os.walk(ROOT):
    if os.path.basename(dp) == "include" or "authoritative" in dp:
        continue
    for fn in ns:
        if not fn.endswith(".c"):
            continue
        t = open(os.path.join(dp, fn), encoding="utf-8", errors="replace").read()
        placeholders.update(int(m.group(1), 16) for m in sub_re.finditer(t))

hits = {a: n for a, n in mangled.items() if (a + BASE) in placeholders}
print("  mangled names:                    %d" % len(mangled))
print("  corpus sub_ placeholders:         %d" % len(placeholders))
print("  mangled names hitting a placeholder: %d" % len(hits))
for a, n in sorted(hits.items())[:10]:
    print("    0x%08X -> %s" % (a, n[:70]))

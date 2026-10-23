"""Report brace leaks at function banners, one line per leak."""
import os
import sys

sys.path.insert(0, r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\scripts")
from balance_function_braces import blank_literals, ROOT, BANNER

for rel in ["actors/actor_construction.c", "actors/actors_b.c", "powerup/powerup.c"]:
    p = os.path.join(ROOT, rel.replace("/", os.sep))
    raw = open(p, encoding="utf-8", errors="replace").read()
    b = blank_literals(raw)
    d = 0
    pos = 0
    leaks = []
    for m in BANNER.finditer(raw):
        x = m.start()
        d += b.count("{", pos, x) - b.count("}", pos, x)
        pos = x
        if d > 0:
            leaks.append((raw[:x].count("\n") + 1, m.group("name"), d))
    print("  %-28s %4d positive banner(s); final %+d" % (rel, len(leaks), d))
    for line, name, dd in leaks[:5]:
        print("       line %6d %-18s %+d" % (line, name, dd))

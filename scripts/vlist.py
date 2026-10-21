import re
p = r".rea/refs/headers/player/PlayerBase.h"
lines = open(p, encoding="utf-8", errors="replace").read().splitlines()
idx = 0
for i, l in enumerate(lines, 1):
    if re.search(r"\bvirtual\b", l):
        idx += 1
        print(idx, i, l.strip())
        if idx > 80:
            break

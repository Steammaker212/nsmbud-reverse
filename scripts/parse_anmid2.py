import re
p = r".rea/refs/headers/player/PlayerEnum.h"
lines = open(p, encoding="utf-8", errors="ignore").read().splitlines()
# find line index of 'enum' at 171 (0-based)
start = None
for i, ln in enumerate(lines):
    if ln.strip() == "enum" and i > 150:
        start = i
        break
print("start line", start+1, lines[start])
val = -1
names = {}
for ln in lines[start+1:]:
    s = ln.split("//")[0].strip()
    if s.startswith("}"): break
    s = s.rstrip(",").strip()
    if not s: continue
    if "=" in s:
        n, v = s.split("=", 1)
        n = n.strip(); v = v.strip()
        try: val = int(v, 0)
        except: continue
        names[n] = val
    else:
        val += 1
        names[s] = val
for k in ["fire_at", "fire_at2", "swim_fire_at", "swim_fire_at2", "wait", "walk"]:
    print(k, names.get(k))
print("total", val+1)

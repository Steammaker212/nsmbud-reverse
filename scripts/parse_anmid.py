import re
p = r".rea/refs/headers/player/PlayerEnum.h"
txt = open(p, encoding="utf-8", errors="ignore").read()
# find enum PlayerAnmID block
m = re.search(r"enum\s+PlayerAnmID\s*\{(.*?)\};", txt, re.S)
body = m.group(1)
val = -1
names = {}
for line in body.splitlines():
    line = line.split("//")[0].strip().rstrip(",")
    if not line: continue
    if "=" in line:
        n, v = line.split("=")
        n = n.strip(); v = v.strip()
        try:
            val = int(v, 0)
        except:
            continue
        names[n] = val
    else:
        val += 1
        names[line.strip()] = val
for k in ["fire_at", "fire_at2", "swim_fire_at", "swim_fire_at2"]:
    print(k, names.get(k))
print("total", val+1)

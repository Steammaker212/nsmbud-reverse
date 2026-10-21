import re
s = open(r".rea/F_7B3920.c", encoding="utf-8", errors="replace").read()
pairs = {}
for m in re.finditer(r"MEMORY\[(0x[0-9A-Fa-f]+)\]\s*=\s*([^;]+);", s):
    addr = int(m.group(1),16)
    pairs[addr] = m.group(2).strip()

def fmt(expr):
    if expr.startswith("MEMORY[0xC7B788]"):
        return expr.replace("MEMORY[0xC7B788] ","ID")
    try: return hex(int(expr,0))
    except Exception: return expr

lo, hi = 0xCC4E40, 0xCC4F20
for a in range(lo, hi, 4):
    if a in pairs:
        print(hex(a), fmt(pairs[a]))
    else:
        print(hex(a), "--")

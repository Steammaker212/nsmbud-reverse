import struct, sys, bisect, json
sys.path.insert(0, r".rea")
from elfutil import load_elf

d, segs = load_elf(r"convertedmain.rebased.elf")
f = json.load(open(r".rea/functions_all.json"))["data"]
funcs = sorted((int(x["address"], 16), int(x["size"], 16), x["name"]) for x in f)
starts = [x[0] for x in funcs]
def fn(va):
    i = bisect.bisect_right(starts, va) - 1
    if i >= 0 and va < funcs[i][0] + funcs[i][1]:
        return funcs[i]
    return None

text = [s for s in segs if s["vaddr"] == 0x60000000][0]
b = d[text["offset"]:text["offset"] + text["filesz"]]
base = text["vaddr"]

def ins(va):
    i = va - base
    if i < 0 or i + 4 > len(b): return "?"
    return "%08x" % struct.unpack_from("<I", b, i)[0]

print("=== player-region LDR/STR [rX,#0x94] (0x60750000-0x607D0000) ===")
seen = set()
for i in range(0, len(b) - 4, 4):
    va = base + i
    if not (0x60750000 <= va < 0x607D0000):
        continue
    w = struct.unpack_from("<I", b, i)[0]
    if (w & 0x0C000000) != 0x04000000: continue
    if (w & 0x02000000): continue
    if (w & 0xFFF) != 0x94: continue
    g = fn(va)
    key = (g[0] if g else None)
    if key in seen: continue
    seen.add(key)
    print("\n-- fn", hex(g[0]) if g else None, g[2] if g else "", "call site", hex(va))
    for k in range(-6, 7):
        a = va + 4*k
        if a in (va,): mark = ">>"
        else: mark = "  "
        print(mark, hex(a), ins(a))

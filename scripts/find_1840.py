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
def getw(va): return struct.unpack_from("<I", b, va - base)[0]

print("=== LDR/STR imm 0x1840 (rn != pc) ===")
for i in range(0, len(b) - 4, 4):
    w = getw(base + i)
    if (w & 0x0C000000) != 0x04000000: continue
    if (w & 0x02000000): continue
    if (w & 0xFFF) != 0x1840: continue
    if ((w >> 16) & 0xF) == 15: continue
    va = base + i
    g = fn(va)
    op = "LDR" if (w >> 20) & 1 else "STR"
    print(hex(va), op, "fn", hex(g[0]) if g else None, g[2] if g else "")

print("\n=== movw #0x1840 ===")
for i in range(0, len(b) - 4, 4):
    w = getw(base + i)
    if (w & 0x0FF00000) != 0x03000000: continue
    imm = (((w >> 16) & 0xF) << 12) | (w & 0xFFF)
    if imm != 0x1840: continue
    va = base + i
    g = fn(va)
    print(hex(va), "movw r%d, #0x1840" % ((w >> 12) & 0xF), "fn", hex(g[0]) if g else None, g[2] if g else "")

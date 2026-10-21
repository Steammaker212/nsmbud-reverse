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

# 1) find all occurrences of RVA 0x795CDC (both as data and embedded in movw/movt)
pat = struct.pack("<I", 0x00795CDC)
print("=== raw LE 0x00795CDC occurrences ===")
start = 0
while True:
    i = d.find(pat, start)
    if i < 0: break
    # map file offset to VA
    va = None
    for s in segs:
        if s["offset"] <= i < s["offset"] + s["filesz"]:
            va = s["vaddr"] + (i - s["offset"])
            break
    print("file", hex(i), "va", hex(va) if va else None, "fn", (hex(fn(va)[0]) + " " + fn(va)[2]) if va and fn(va) else "")
    start = i + 1

# 2) scan text for LDR/STR [rX,#0x528] real (rn != pc)
text = [s for s in segs if s["vaddr"] == 0x60000000][0]
b = d[text["offset"]:text["offset"] + text["filesz"]]
base = text["vaddr"]
print("\n=== real LDR/STR imm 0x528 (rn != pc) ===")
for i in range(0, len(b) - 4, 4):
    w = struct.unpack_from("<I", b, i)[0]
    if (w & 0x0C000000) != 0x04000000: continue
    if (w & 0x02000000): continue
    if (w & 0xFFF) != 0x528: continue
    if ((w >> 16) & 0xF) == 15: continue
    va = base + i
    g = fn(va)
    print(hex(va), "LDR" if (w >> 20) & 1 else "STR", "fn", hex(g[0]) if g else None, g[2] if g else "")

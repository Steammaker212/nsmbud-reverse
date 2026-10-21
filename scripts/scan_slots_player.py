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

for imm in (0x76C, 0x770, 0x774, 0x90, 0x94):
    print("\n===== offset %#x =====" % imm)
    for i in range(0, len(b) - 4, 4):
        w = getw(base + i)
        if (w & 0x0C000000) != 0x04000000: continue
        if (w & 0x02000000): continue
        if (w & 0xFFF) != imm: continue
        rn = (w >> 16) & 0xF
        if rn == 15: continue
        va = base + i
        g = fn(va)
        if not g: continue
        # only show player-ish / item-ish / powerup-ish regions
        if not (0x60750000 <= g[0] < 0x607E0000 or 0x60450000 <= g[0] < 0x60470000 or
                0x60130000 <= g[0] < 0x60150000 or 0x60460000 <= g[0] < 0x60470000):
            continue
        op = "LDR" if (w >> 20) & 1 else "STR"
        nx = " ".join("%08x" % getw(va + 4*k) for k in range(1, 5) if va + 4*k + 4 <= base + len(b))
        print(hex(va), op, "fn", hex(g[0]), g[2], "next:", nx)

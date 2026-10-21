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
def g(va): return struct.unpack_from("<I", b, va - base)[0]
for imm in (0x90, 0x94):
    print("\n===== LDR [rX,#%#x] in 0x6070-0x6079 =====" % imm)
    for i in range(0, len(b) - 4, 4):
        va = base + i; w = g(va)
        if (w & 0x0C000000) != 0x04000000: continue
        if (w & 0x02000000): continue
        if (w & 0xFFF) != imm: continue
        if ((w >> 16) & 0xF) == 15: continue
        r = fn(va)
        if not r or not (0x60700000 <= r[0] < 0x607A0000): continue
        op = "LDR" if (w >> 20) & 1 else "STR"
        nxt = " ".join("%08x" % g(va + 4*k) for k in range(1, 6) if va + 4*k + 4 <= base + len(b))
        print(hex(va), op, "fn", hex(r[0]), r[2], "next:", nxt)

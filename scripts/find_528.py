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

for s in segs:
    if s.get("type") != 1:
        continue
    b = d[s["offset"]:s["offset"] + s["filesz"]]
    base = s["vaddr"]
    for i in range(0, len(b) - 4, 4):
        w = struct.unpack_from("<I", b, i)[0]
        # LDR/STR immediate, Rn != PC, offset 0x528
        if (w & 0x0F000000) in (0x04000000, 0x05000000, 0x06000000, 0x07000000) and (w & 0x00000FFF) == 0x528:
            rn = (w >> 16) & 0xF
            if rn == 15:
                continue
            va = base + i
            g = fn(va)
            op = "LDR" if (w >> 20) & 1 else "STR"
            rd = (w >> 12) & 0xF
            print(op, "R%d,[R%d,#0x528]" % (rd, rn), hex(va), "fn", hex(g[0]) if g else None, g[2] if g else "")
        # MOVW imm16 == 0x528
        if (w & 0x0FF00000) == 0x03000000 and ((w & 0xF0000) >> 16) == 0 and (w & 0xFFF) == 0x528:
            va = base + i
            g = fn(va)
            print("MOVW R%d,#0x528" % ((w >> 12) & 0xF), hex(va), "fn", hex(g[0]) if g else None, g[2] if g else "")

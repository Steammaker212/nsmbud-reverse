import struct, sys, bisect, json
sys.path.insert(0, r".rea")
from elfutil import load_elf

d, segs = load_elf(r"convertedmain.rebased.elf")
f = json.load(open(r".rea/functions_all.json"))["data"]
funcs = sorted((int(x["address"],16), int(x["size"],16), x["name"]) for x in f)
starts = [x[0] for x in funcs]
def fn(va):
    i = bisect.bisect_right(starts, va)-1
    if i>=0 and va < funcs[i][0]+funcs[i][1]: return funcs[i]
    return None

text = [s for s in segs if s["vaddr"]==0x60000000][0]
b = d[text["offset"]:text["offset"]+text["filesz"]]
base = text["vaddr"]

def decode_movw(w):
    # ARM MOVW: cond 0011 0000 imm4 Rd imm12
    if (w & 0x0FF00000) != 0x03000000:
        return None
    imm4 = (w >> 16) & 0xF
    rd = (w >> 12) & 0xF
    imm12 = w & 0xFFF
    return rd, (imm4 << 12) | imm12

for target in (0x26AC, 0x25C0, 0x25D0, 0x26BC, 0x25C4):
    print("==== movw #%#x" % target)
    for i in range(0, len(b)-4, 4):
        w = struct.unpack_from("<I", b, i)[0]
        dm = decode_movw(w)
        if dm and dm[1] == target:
            va = base+i
            g = fn(va)
            # print next 3 instructions raw
            nxt = []
            for k in range(1,4):
                if i+4*k+4 <= len(b):
                    nxt.append(hex(struct.unpack_from("<I",b,i+4*k)[0]))
            print(hex(va), "rd", dm[0], "fn", hex(g[0]) if g else None, g[2] if g else "", "next", nxt)

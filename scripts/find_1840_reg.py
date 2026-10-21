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
def w(va): return struct.unpack_from("<I", b, va - base)[0]

def dp_imm(w):
    # MOV/MOVW/MVN/ADD/SUB immediate; return (op, rd, imm) for simple cases
    if (w & 0x0FE00000) == 0x03A00000:  # MOV imm
        return ("MOV", (w >> 12) & 0xF, ((w >> 16) & 0xF) << 12 | (w & 0xFFF)) if False else None
    if (w & 0x0FF00000) == 0x03000000:  # MOVW
        return ("MOVW", (w >> 12) & 0xF, ((w >> 16) & 0xF) << 12 | (w & 0xFFF))
    if (w & 0x0FE00000) == 0x02000000:  # AND? mask
        return None
    # MOV immediate: cond 00 1 1101 0 imm12 rd
    if (w & 0x0FE00000) == 0x03A00000:
        imm8 = w & 0xFF
        rot = ((w >> 8) & 0xF) * 2
        imm = ((imm8 >> rot) | (imm8 << (32 - rot))) & 0xFFFFFFFF if rot else imm8
        return ("MOV", (w >> 12) & 0xF, imm)
    if (w & 0x0FE00000) == 0x02800000:  # ADD imm
        imm8 = w & 0xFF; rot = ((w >> 8) & 0xF) * 2
        imm = ((imm8 >> rot) | (imm8 << (32 - rot))) & 0xFFFFFFFF if rot else imm8
        return ("ADD", (w >> 12) & 0xF, imm)
    if (w & 0x0FE00000) == 0x02400000:  # SUB imm
        imm8 = w & 0xFF; rot = ((w >> 8) & 0xF) * 2
        imm = ((imm8 >> rot) | (imm8 << (32 - rot))) & 0xFFFFFFFF if rot else imm8
        return ("SUB", (w >> 12) & 0xF, imm)
    return None

print("=== instructions producing 0x1840, and nearby register-offset access ===")
for i in range(0, len(b) - 4, 4):
    va = base + i
    x = w(va)
    t = dp_imm(x)
    if not t or t[2] != 0x1840:
        continue
    g = fn(va)
    print("\n--", hex(va), t, "fn", hex(g[0]) if g else None, g[2] if g else "")
    for j in range(0, 16):
        a = va + 4*j
        if a + 4 > base + len(b): break
        y = w(a)
        tag = ""
        # LDR/STR register offset: bits 27-25 = 011, P=1,U=1,W=0
        if (y & 0x0E000000) == 0x06000000:
            rn = (y >> 16) & 0xF; rd = (y >> 12) & 0xF; rm = y & 0xF
            if rm == t[1] and rn != 15:
                tag = " <== %s r%d,[r%d,r%d]" % ("LDR" if (y>>20)&1 else "STR", rd, rn, rm)
        print("   ", hex(a), "%08x" % y, tag)

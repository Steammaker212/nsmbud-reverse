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

def rdw(va):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"] + s["filesz"]:
            return struct.unpack_from("<I", d, s["offset"] + (va - s["vaddr"]))[0]
    return None

print("=== compare vtables ===")
for off in range(0x70, 0xB0, 4):
    a = rdw(0x60C24C74 + off)
    b = rdw(0x60C253D4 + off)
    print("off %#04x  base24C74=%s  player=%s" % (off,
        ("0x%X" % (0x60000000+a)) if a else "0", ("0x%X" % (0x60000000+b)) if b else "0"))
print()
for off in range(0x750, 0x790, 4):
    b = rdw(0x60C253D4 + off)
    print("player off %#04x = %s" % (off, ("0x%X" % (0x60000000+b)) if b else "0"))

text = [s for s in segs if s["vaddr"] == 0x60000000][0]
b = d[text["offset"]:text["offset"] + text["filesz"]]
base = text["vaddr"]
def getw(i): return struct.unpack_from("<I", b, i)[0]

def is_ldr_imm(w, rn):
    return (w & 0x0C100000) == 0x04000000 and ((w >> 16) & 0xF) == rn

def ldr_fields(w):
    return (w >> 12) & 0xF, w & 0xFFF

print("\n=== vtable-call-like sequences (ldr rX,[rY]; ldr rZ,[rX,#imm]; bx/blx rZ) ===")
want = {0x90, 0x94, 0x76C, 0x770, 0x774}
for i in range(0, len(b) - 20, 4):
    w1 = getw(i)
    if (w1 & 0x0C100000) != 0x04000000:  # LDR imm
        continue
    if (w1 & 0xFFF) != 0:  # ldr rX,[rY]
        continue
    rt1 = (w1 >> 12) & 0xF
    rn1 = (w1 >> 16) & 0xF
    if rn1 == 15: continue
    for k in (4, 8, 12):
        if i + k + 4 > len(b): break
        w2 = getw(i + k)
        if (w2 & 0x0C100000) != 0x04000000: continue
        rt2, imm = ldr_fields(w2)
        if rt2 != rt1 or imm not in want: continue
        rn2 = (w2 >> 16) & 0xF
        if rn2 != rt1: continue
        # next instruction bx/blx rt2
        w3 = getw(i + k + 4)
        if (w3 & 0x0FFFFFF0) not in (0x012FFF10, 0x012FFF30):
            continue
        if ((w3 >> 0) & 0xF) != rt2:
            continue
        va = base + i
        g = fn(va)
        print("\n-- call near", hex(va), "imm", hex(imm), "fn", hex(g[0]) if g else None, g[2] if g else "")
        for j in range(-6, k // 4 + 3):
            a = va + 4 * j
            mark = ">>" if j in (0, k // 4, k // 4 + 1) else "  "
            print(mark, hex(a), "%08x" % getw((a - base)))

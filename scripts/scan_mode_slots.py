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
def dis1(va):
    w = getw(va)
    return "%08x" % w

want = {0x90: "vf90(setPlayerMode?)", 0x94: "vf94(setPlayerModeImpl)",
        0x76C: "vf76C(wrapper)", 0x770: "vf770(rawMode)", 0x774: "vf774(stub)"}

print("=== LDR [rX,#imm] for mode slots, with context ===")
for i in range(0, len(b) - 4, 4):
    w = getw(base + i)
    if (w & 0x0C000000) != 0x04000000:  # LDR immediate
        continue
    if (w & 0x02000000):  # register offset
        continue
    imm = w & 0xFFF
    if imm not in want: continue
    rn = (w >> 16) & 0xF
    rt = (w >> 12) & 0xF
    if rn == 15: continue
    va = base + i
    # next instr must be bx/blx rt or contain a call using rt
    nxt = getw(va + 4)
    if (nxt & 0x0FFFFFF0) not in (0x012FFF10, 0x012FFF30) or (nxt & 0xF) != rt:
        continue
    g = fn(va)
    print("\n--", hex(va), want[imm], "rt=r%d rn=r%d" % (rt, rn), "fn", hex(g[0]) if g else None, g[2] if g else "")
    for j in range(-8, 4):
        a = va + 4 * j
        print((" >>" if j == 0 else "   "), hex(a), dis1(a))

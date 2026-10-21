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

text = None
for s in segs:
    if s["vaddr"] == 0x60000000:
        text = s
b = d[text["offset"]:text["offset"] + text["filesz"]]
base = text["vaddr"]

for IMM in (0x588, 0x58C, 0x94, 0x528, 0x2B8, 0x4C4):
    print("=== single data transfer imm12 = 0x%x" % IMM)
    for i in range(0, len(b) - 4, 4):
        w = struct.unpack_from("<I", b, i)[0]
        if (w & 0x0C000000) == 0x04000000 and ((w >> 25) & 1) == 0:
            if (w & 0xFFF) == IMM:
                P = (w >> 24) & 1; U = (w >> 23) & 1
                L = (w >> 20) & 1; rn = (w >> 16) & 0xF; rd = (w >> 12) & 0xF
                if P and U:
                    va = base + i
                    g = fn(va)
                    print(("LDR" if L else "STR"), "r%d,[r%d,#0x%x]" % (rd, rn, IMM),
                          hex(va), "fn", hex(g[0]) if g else None, g[2] if g else "")

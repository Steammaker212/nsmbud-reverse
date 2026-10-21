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
targets = {0x60795CDC, 0x60760754, 0x607CC0DC, 0x607CC640, 0x607C8118, 0x607B3698, 0x607C814C}
for i in range(0, len(b) - 4, 4):
    w = struct.unpack_from("<I", b, i)[0]
    # BL/BLX immediate: bits 27-25 = 101
    if (w & 0x0E000000) != 0x0A000000:
        continue
    if (w & 0x01000000) and (w & 0x0F000000) != 0x0B000000:
        continue
    imm = w & 0xFFFFFF
    if imm & 0x800000: imm -= 0x1000000
    va = base + i
    tgt = (va + 8 + (imm << 2)) & 0xFFFFFFFF
    if tgt in targets:
        g = fn(va)
        print(hex(va), "->", hex(tgt), "in", hex(g[0]) if g else None, g[2] if g else "")

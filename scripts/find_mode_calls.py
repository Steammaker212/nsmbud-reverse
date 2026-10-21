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

def decode_movw(w):
    if (w & 0x0FF00000) != 0x03000000:
        return None
    return (w >> 12) & 0xF, (((w >> 16) & 0xF) << 12) | (w & 0xFFF)

print("=== LDR/STR immediate offsets of interest ===")
# encodings: LDR Rt,[Rn,#imm12]  cond 010 P U B W L Rn Rt imm12
want = {0x94: "setPlayerMode", 0x76C: "vf76C", 0x770: "vf770-writeMode",
        0x774: "vf774", 0x778: "vf778", 0x588: "vf1416", 0x58C: "vf1420",
        0x414: "vf414"}
for i in range(0, len(b) - 4, 4):
    w = struct.unpack_from("<I", b, i)[0]
    if (w & 0x0C000000) != 0x04000000:
        continue
    if (w & 0x02000000) == 0:  # only immediate offset
        continue
    if (w & 0x01000000):
        continue
    imm = w & 0xFFF
    if imm in want:
        va = base + i
        g = fn(va)
        op = "LDR" if (w >> 20) & 1 else "STR"
        print(hex(va), op, "off", hex(imm), want[imm], "fn", hex(g[0]) if g else None, g[2] if g else "")

print("\n=== movw #0x31F0 / 0x31F4 / 0x31EC reads ===")
for i in range(0, len(b) - 4, 4):
    w = struct.unpack_from("<I", b, i)[0]
    dm = decode_movw(w)
    if dm and dm[1] in (0x31F0, 0x31F4, 0x31EC):
        va = base + i
        g = fn(va)
        # show next 4 words
        nxt = [struct.unpack_from("<I", b, i + 4*k)[0] for k in range(1, 5) if i + 4*k + 4 <= len(b)]
        print(hex(va), "movw r%d,#%#x" % dm, "fn", hex(g[0]) if g else None, g[2] if g else "", [hex(x) for x in nxt])

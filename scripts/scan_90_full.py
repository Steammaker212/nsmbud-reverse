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

# all LDR [rX,#0x90] in text, print with function and next 10 words
rows = []
for i in range(0, len(b) - 4, 4):
    va = base + i; w = g(va)
    if (w & 0x0C000000) != 0x04000000: continue
    if (w & 0x02000000): continue
    if (w & 0xFFF) != 0x90: continue
    if ((w >> 16) & 0xF) == 15: continue
    if not ((w >> 20) & 1): continue  # LDR only
    r = fn(va)
    if not r: continue
    nxt = [g(va + 4*k) for k in range(1, 11) if va + 4*k + 4 <= base + len(b)]
    rows.append((va, r, nxt))

print("total LDR #0x90 sites:", len(rows))
for va, r, nxt in rows:
    # flag if any next insn is mov r1,#2 (e3a01002) or mov r1,#10 (e3a0100a) or blx (e12fff3x)
    tags = []
    if 0xe3a01002 in nxt: tags.append("r1=2")
    if 0xe3a0100a in nxt: tags.append("r1=10")
    if any((x & 0x0FFFFFF0) == 0x012FFF30 for x in nxt): tags.append("BLX")
    if tags:
        print(hex(va), "fn", hex(r[0]), r[2], tags)
        print("   ", " ".join("%08x" % x for x in nxt))

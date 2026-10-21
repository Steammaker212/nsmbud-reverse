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

def is_movw(w): return (w & 0x0FF00000) == 0x03000000
def is_movt(w): return (w & 0x0FF00000) == 0x03400000
def imm16(w): return (((w >> 16) & 0xF) << 12) | (w & 0xFFF)
def rd(w): return (w >> 12) & 0xF

HITS = []
for s in segs:
    if s.get("vaddr") != 0x60000288:  # .text only
        continue
    b = d[s["offset"]:s["offset"] + s["filesz"]]
    base = s["vaddr"]
    n = len(b)
    for i in range(0, n - 4, 4):
        w = struct.unpack_from("<I", b, i)[0]
        if is_movt(w) and imm16(w) == 0x60CC:
            va = base + i
            r = rd(w)
            # look backward up to 256 bytes for movw same reg
            lo = None
            for j in range(i - 4, max(-1, i - 256), -4):
                w2 = struct.unpack_from("<I", b, j)[0]
                if is_movw(w2) and rd(w2) == r:
                    lo = (base + j, imm16(w2)); break
            g = fn(va)
            HITS.append((va, r, lo, g))
            print("MOVT 0x60CC at", hex(va), "r%d" % r, "movw", (hex(lo[0])+" imm16="+hex(lo[1])) if lo else None,
                  "fn", hex(g[0]) if g else None, g[2] if g else "")

print("\n===== grouped by function")
from collections import Counter
c = Counter((hex(g[0]) if g else None, g[2] if g else "") for _,_,_,g in HITS)
for k,v in c.most_common():
    print(v, k)

import struct, sys, bisect, json
sys.path.insert(0, r".rea")
from elfutil import load_elf

d, segs = load_elf(r"convertedmain.rebased.elf")
# text section
text = None
for s in segs:
    if s["vaddr"] == 0x60000000:
        text = s
assert text
b = d[text["offset"]:text["offset"] + text["filesz"]]
base = text["vaddr"]
n = len(b)

f = json.load(open(r".rea/functions_all.json"))["data"]
funcs = sorted((int(x["address"], 16), int(x["size"], 16), x["name"]) for x in f)
starts = [x[0] for x in funcs]
def fn(va):
    i = bisect.bisect_right(starts, va) - 1
    if i >= 0 and va < funcs[i][0] + funcs[i][1]:
        return funcs[i]
    return None

def word(va):
    off = va - base
    if 0 <= off <= n - 4:
        return struct.unpack_from("<I", b, off)[0]
    return None

TARGETS = {
    0x60C774B4: "GOT state obj 0xCC4E6C",
    0x60CC4E6C: "state object 0xCC4E6C",
    0x60C25B30: "vtable candidate 0x60C25B30",
    0x60C260DC: "vtable candidate 0x60C260DC",
    0x60C253D4: "player final vtable",
}
# ranges of interest
RANGES = [(0x60CC4000, 0x60CC6000, "state obj"), (0x60C25000, 0x60C27000, "vtable/data")]

print("=== PC-relative GOT-style references (LDR Rt,[PC,#imm]; ... LDR Rd,[PC,Rt])")
hits = []
for i in range(0, n - 4, 4):
    w = struct.unpack_from("<I", b, i)[0]
    # LDR Rt, [PC, #imm12]
    if (w & 0x0FFF0000) != 0x059F0000:
        continue
    rt = (w >> 12) & 0xF
    imm = w & 0xFFF
    A = base + i
    litva = A + 8 + imm
    V = word(litva)
    if V is None: continue
    # look ahead up to 20 instrs for LDR Rd,[PC,Rt]
    for j in range(i + 4, min(n, i + 4 * 24), 4):
        w2 = struct.unpack_from("<I", b, j)[0]
        # LDR Rd, [PC, Rm]  encoding 0x079F0000 with Rm = (w2>>0)&0xF
        if (w2 & 0x0FFF0FF0) == 0x079F0000 and ((w2 >> 0) & 0xF) == rt:
            A2 = base + j
            eff = A2 + 8 + V
            g = fn(A)
            hits.append((A, A2, V, eff, g))
            tag = TARGETS.get(eff)
            if tag is None:
                for lo, hi, nm in RANGES:
                    if lo <= eff < hi:
                        tag = nm; break
            if tag:
                print("ref at", hex(A), "-> LDR[PC,R%d] at" % rt, hex(A2),
                      "V", hex(V), "eff", hex(eff), tag,
                      "fn", hex(g[0]) if g else None, g[2] if g else "")
            break

print("\n=== all unique effective addresses")
from collections import Counter
c = Counter(hex(h[3]) for h in hits)
for k, v in c.most_common(80):
    print(v, k)

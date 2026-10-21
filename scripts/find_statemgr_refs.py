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

# BL/BLX to StateMgr_ctor
for target in (0x60818168, 0x60818224, 0x608181D4):
    print("==== branch to", hex(target))
    for s in segs:
        if s.get("type") != 1: continue
        b = d[s["offset"]:s["offset"] + s["filesz"]]
        base = s["vaddr"]
        for i in range(0, len(b) - 4, 4):
            w = struct.unpack_from("<I", b, i)[0]
            if (w & 0x0F000000) in (0x0A000000, 0x0B000000):
                off = w & 0xFFFFFF
                if off & 0x800000: off -= 0x1000000
                t = base + i + 8 + off * 4
                if t == target:
                    va = base + i
                    g = fn(va)
                    print(("BL" if (w>>24)&1 else "B"), hex(va), "fn", hex(g[0]) if g else None, g[2] if g else "")

# MOVW/MOVT pairs for 0x60CC4E6C (low 0x4E6C, high 0x60CC) and table 0x60C774B4 (low 0x74B4, high 0x60C7)
def is_movw(w):
    return (w & 0x0FF00000) == 0x03000000
def is_movt(w):
    return (w & 0x0FF00000) == 0x03400000
def imm16(w):
    return (((w >> 16) & 0xF) << 12) | (w & 0xFFF)
def rd(w):
    return (w >> 12) & 0xF

for target, label in ((0x60CC4E6C, "state 0xCC4E6C"), (0x60C774B4, "table 0x60C774B4"),
                      (0x60C77A0C, "table 0x60C77A0C")):
    lo, hi = target & 0xFFFF, (target >> 16) & 0xFFFF
    print("==== MOVW/MOVT", label, hex(target), "lo", hex(lo), "hi", hex(hi))
    for s in segs:
        if s.get("type") != 1: continue
        b = d[s["offset"]:s["offset"] + s["filesz"]]
        base = s["vaddr"]
        n = len(b)
        for i in range(0, n - 4, 4):
            w = struct.unpack_from("<I", b, i)[0]
            if is_movw(w) and imm16(w) == lo:
                # look ahead 64 bytes for movt same rd with hi
                for j in range(i + 4, min(n, i + 64), 4):
                    w2 = struct.unpack_from("<I", b, j)[0]
                    if is_movt(w2) and rd(w2) == rd(w) and imm16(w2) == hi:
                        va = base + i
                        g = fn(va)
                        print("pair at", hex(va), "fn", hex(g[0]) if g else None, g[2] if g else "")
                        break

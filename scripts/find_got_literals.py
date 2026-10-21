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

for t in (0x60C774B4, 0x00C774B4, 0x60CC4E6C, 0x00CC4E6C,
          0x60C260DC, 0x00C260DC, 0x60C25B30, 0x00C25B30):
    print("==== value", hex(t))
    pat = struct.pack("<I", t)
    for s in segs:
        b = d[s["offset"]:s["offset"] + s["filesz"]]
        st = 0
        while True:
            i = b.find(pat, st)
            if i < 0: break
            va = s["vaddr"] + i
            g = fn(va)
            print("  va", hex(va), "align", i % 4, "fn", hex(g[0]) if g else None, g[2] if g else "")
            st = i + 1

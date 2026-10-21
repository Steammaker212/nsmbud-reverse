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

for t in (0xC774B4, 0xC77480, 0xC77440, 0xC77400, 0xC77500, 0xC77A0C, 0xC77A00):
    print("==== value", hex(t))
    for s in segs:
        b = d[s["offset"]:s["offset"] + s["filesz"]]
        pat = struct.pack("<I", t)
        st = 0
        while True:
            i = b.find(pat, st)
            if i < 0: break
            va = s["vaddr"] + i
            g = fn(va)
            print("  segtype", s.get("type"), "va", hex(va), "fn", hex(g[0]) if g else None, g[2] if g else "")
            st = i + 1

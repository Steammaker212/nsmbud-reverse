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

# direct branches to 0x607CC0DC and 0x60760754
for target in (0x607CC0DC, 0x60760754, 0x607600A4):
    print("==== branch to", hex(target))
    for s in segs:
        if s.get("type") != 1:
            continue
        b = d[s["offset"]:s["offset"] + s["filesz"]]
        base = s["vaddr"]
        for i in range(0, len(b) - 4, 4):
            w = struct.unpack_from("<I", b, i)[0]
            if (w & 0x0F000000) in (0x0A000000, 0x0B000000):
                off = w & 0xFFFFFF
                if off & 0x800000:
                    off -= 0x1000000
                t = base + i + 8 + off * 4
                if t == target:
                    va = base + i
                    g = fn(va)
                    print(("BL" if (w >> 24) & 1 else "B"), hex(va), "fn", hex(g[0]) if g else None, g[2] if g else "")

# references to the rodata pointer variable 0x60A66270
for t in (0x60A66270, 0x60A6626C, 0x60A66274):
    print("==== ptr refs to", hex(t))
    for s in segs:
        b = d[s["offset"]:s["offset"] + s["filesz"]]
        for pat, name in ((struct.pack("<I", t), "VA"), (struct.pack("<I", t - 0x60000000), "RVA")):
            st = 0
            while True:
                i = b.find(pat, st)
                if i < 0:
                    break
                va = s["vaddr"] + i
                g = fn(va)
                print(name, "file", hex(s["offset"] + i), "va", hex(va), "fn", hex(g[0]) if g else None, g[2] if g else "")
                st = i + 1

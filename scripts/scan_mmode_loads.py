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

seen = {}
for i in range(0, len(b) - 4, 4):
    va = base + i; w = g(va)
    if (w & 0xFFF00000) != 0xE5900000: continue
    if (w & 0xFFF) != 0x528: continue
    r = fn(va)
    if not r: continue
    seen.setdefault((r[0], r[2], r[1]), []).append(va)

for (a, n, sz), sites in sorted(seen.items()):
    print("%s size=0x%X %s  sites=%s" % (hex(a), sz, n, ",".join(hex(x) for x in sites[:8])))
print("total funcs", len(seen))

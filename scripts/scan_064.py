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

print("mov rX,#0x64 in 0x60780000..0x607C0000:")
for i in range(0, len(b)-4, 4):
    va = base+i; w = g(va)
    if (w & 0xFFFFF000) != 0xE3A00064: continue
    if not (0x60780000 <= va < 0x607C0000): continue
    r = fn(va)
    if not r: continue
    print("  %s fn %s %s" % (hex(va), hex(r[0]), r[2]))
    for k in range(-3, 6):
        vv = va + 4*k
        print("      %s %08X" % (hex(vv), g(vv)))

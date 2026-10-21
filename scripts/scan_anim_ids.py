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

for imm, label in [(33,"fire_at"), (143,"fire_at2"), (34,"swim_fire_at"), (35,"swim_fire_at2")]:
    print("\n=== mov r1,#%d (%s) ===" % (imm, label))
    seen = set()
    for i in range(0, len(b)-4, 4):
        va = base+i; w = g(va)
        if w != (0xE3A01000 | imm): continue
        r = fn(va)
        if not r: continue
        if not (0x60780000 <= va < 0x607C0000): continue
        if (r[0], r[2]) in seen: continue
        seen.add((r[0], r[2]))
        # show next 6 words
        nxt = [g(va+4*k) for k in range(1,7)]
        print("  %s fn %s %s  next %s" % (hex(va), hex(r[0]), r[2], " ".join("%08X"%x for x in nxt)))

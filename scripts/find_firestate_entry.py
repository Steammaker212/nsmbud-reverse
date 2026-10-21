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

def find_val(val):
    hits = []
    for s in segs:
        if not s.get("filesz"): continue
        buf = d[s["offset"]:s["offset"]+s["filesz"]]
        needle = struct.pack("<I", val)
        i = buf.find(needle)
        while i != -1:
            if i % 4 == 0:
                hits.append(s["vaddr"] + i)
            i = buf.find(needle, i+1)
    return hits

print("literal 0x00CC4D68 occurrences:")
for h in find_val(0xCC4D68):
    r = fn(h)
    print("  ", hex(h), "section", hex(h & 0xFF000000), "fn", hex(r[0]) if r else None, r[2] if r else None)

# scan for BL to Player_changeState and print preceding 10 words
text = [s for s in segs if s["vaddr"] == 0x60000000][0]
b = d[text["offset"]:text["offset"]+text["filesz"]]
base = text["vaddr"]
def g(va): return struct.unpack_from("<I", b, va-base)[0]
def lit(va):
    # decode ldr rX,[pc,#imm] -> value at pc+8+imm
    w = g(va)
    if (w & 0xFFFFF000) == 0xE59F0000:
        imm = w & 0xFFF
        return g(va+8+imm)
    return None
print("\nPlayer_changeState call sites (state arg candidates):")
for i in range(0, len(b)-4, 4):
    va = base+i
    w = g(va)
    if w != 0xEB000000 | ((0x60773DC0 - (va+8)) >> 2 & 0xFFFFFF):
        continue
    # actually BL encoding: EB imm24
    # recompute
    off = (0x60773DC0 - (va+8)) >> 2
    if (w & 0xFF000000) != 0xEB000000: continue
    if ((w & 0xFFFFFF) << 2) + 8 + va != 0x60773DC0: continue
    r = fn(va)
    ctx = []
    for k in range(-6, 0):
        vv = va+4*k
        ww = g(vv)
        ctx.append("%s:%08X" % (hex(vv), ww))
    print("  callsite", hex(va), "fn", hex(r[0]) if r else "?", r[2] if r else "?")
    print("     ", " ".join(ctx))

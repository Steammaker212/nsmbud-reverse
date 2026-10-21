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
b = d[text["offset"]:text["offset"]+text["filesz"]]
base = text["vaddr"]
def g(va):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"] + s["filesz"]:
            return struct.unpack_from("<I", d, s["offset"] + (va - s["vaddr"]))[0]
    return None

target = 0x60773DC0
count = 0
print("Player_changeState call sites with decoded state RVA:")
for i in range(0, len(b)-4, 4):
    va = base+i
    w = g(va)
    is_b = False
    if (w & 0xFF000000) == 0xEB000000 and ((w & 0xFFFFFF) << 2) + 8 + va == target:
        is_b = False
    elif (w & 0xFF000000) == 0xEA000000 and ((w & 0xFFFFFF) << 2) + 8 + va == target:
        is_b = True
    else:
        continue
    r = fn(va)
    ldr_lit = None; ldr_got = None
    for k in range(1, 11):
        vv = va - 4*k
        ww = g(vv)
        if (ww & 0xFFFFF000) == 0xE59F0000 and ldr_lit is None:
            ldr_lit = (vv, ww)
        if ww == 0xE79F1000 and ldr_got is None:
            ldr_got = (vv, ww)
    state = None
    if ldr_lit:
        la = ldr_lit[0] + 8 + (ldr_lit[1] & 0xFFF)
        G = g(la)
        if G is not None and ldr_got:
            sa = ldr_got[0] + 8 + G
            state = g(sa)
    count += 1
    print("  %s callsite %s fn %s %s  state=%s" % ("B " if is_b else "BL", hex(va), hex(r[0]) if r else "?", r[2] if r else "?", hex(state) if state is not None else "?"))
print("total", count)

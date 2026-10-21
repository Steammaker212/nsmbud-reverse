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

print("LDR mMode (+0x528) followed within 6 insns by CMP #2:")
for i in range(0, len(b) - 4, 4):
    va = base + i; w = g(va)
    # LDR Rt,[Rn,#0x528], cond AL, I=1, P=1, U=1, W=0, L=1
    if (w & 0xFFF00000) != 0xE5900000: continue
    if (w & 0xFFF) != 0x528: continue
    if ((w >> 16) & 0xF) == 15: continue
    rt = (w >> 12) & 0xF
    for k in range(1, 7):
        va2 = va + 4*k
        if va2 >= base + len(b): break
        w2 = g(va2)
        # CMP Rt, #2 : E35t0002
        if (w2 & 0xFFFF0FF0) == 0xE3500002 and ((w2 >> 12) & 0xF) == rt:
            r = fn(va)
            print("  %s: ldr r%d,[r%d,#0x528] @%s ; cmp r%d,#2 @%s  fn %s %s" % (
                hex(va), rt, (w>>16)&0xF, hex(va), rt, hex(va2), hex(r[0]) if r else "?", r[2] if r else "?"))
            break

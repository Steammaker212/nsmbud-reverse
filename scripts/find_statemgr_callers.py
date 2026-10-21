import struct, sys, bisect, json
sys.path.insert(0, r".rea")
from elfutil import load_elf

d, segs = load_elf(r"convertedmain.rebased.elf")
f = json.load(open(r".rea/functions_all.json"))["data"]
funcs = sorted((int(x["address"],16), int(x["size"],16), x["name"]) for x in f)
starts = [x[0] for x in funcs]
def fn(va):
    i = bisect.bisect_right(starts, va)-1
    if i>=0 and va < funcs[i][0]+funcs[i][1]: return funcs[i]
    return None

text = [s for s in segs if s["vaddr"]==0x60000000][0]
b = d[text["offset"]:text["offset"]+text["filesz"]]
base = text["vaddr"]

TARGETS=[0x60818168,0x60818198,0x608181D4,0x60818224,0x60818290,0x607C1BB0,0x60795CDC]
for t in TARGETS:
    print("==== bl to", hex(t))
    for i in range(0,len(b)-4,4):
        w=struct.unpack_from("<I",b,i)[0]
        if (w & 0x0F000000) in (0x0A000000,0x0B000000):
            off=w & 0xFFFFFF
            if off & 0x800000: off-=0x1000000
            if base+i+8+off*4==t:
                va=base+i; g=fn(va)
                print(("BL" if (w>>24)&1 else "B"),hex(va),"fn",hex(g[0]) if g else None,g[2] if g else "")

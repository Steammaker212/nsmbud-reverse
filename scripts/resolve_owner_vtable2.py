import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf
d, segs = load_elf(r"convertedmain.rebased.elf")
def rdw(va):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"]+s["filesz"]:
            o = s["offset"] + (va - s["vaddr"])
            return struct.unpack_from("<I", d, o)[0]
    return None

vt = 0x60C2479C
print("owner vtable (VA)",hex(vt))
for off in range(0,0x40,4):
    v = rdw(vt+off)
    if v is None:
        print(" +",hex(off),"None"); continue
    print(" +",hex(off), hex(v), "-> VA", hex(0x60000000+v) if v and v < 0x1000000 else "")

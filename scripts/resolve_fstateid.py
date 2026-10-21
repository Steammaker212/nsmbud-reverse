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
for base, offs, name in [(0xCBF864, (0x318,0x31C,0x320), "0xCC4C04 id+3"),
                          (0xCBF864, (0x300,0x304,0x308), "id+1"),
                          (0xC25364, (0x318,0x31C,0x320), "player state vtable")]:
    print("====", name, "vt base", hex(base))
    for off in offs:
        v = rdw(0x60000000 + base + off) if base < 0x1000000 else rdw(base+off)
        print(" offset",hex(off),"->",hex(v) if v is not None else None)
print("dwords at 0x60CBF864:")
for off in range(0, 0x30, 4):
    print(" +",hex(off),hex(rdw(0x60CBF864+off)))
print("dwords at 0x60CBFB64..0x60CBFBA0:")
for a in range(0x60CBFB64, 0x60CBFBA4, 4):
    print(hex(a), hex(rdw(a)))

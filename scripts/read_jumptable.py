import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf
d, segs = load_elf(r"convertedmain.rebased.elf")
def rdw(va):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"] + s["filesz"]:
            return struct.unpack_from("<I", d, s["offset"] + (va - s["vaddr"]))[0]
    return None
print("jump table at 0x607A2724 (base for add pc = 0x607A2724):")
for i in range(12):
    va = 0x607A2724 + 4*i
    w = rdw(va)
    print("  idx %2d va %08X word %08X -> 0x%08X" % (i, va, w, 0x607A2724 + w))
print()
print("player vtable +0x84..0xA8:")
for off in range(0x84, 0xAC, 4):
    v = rdw(0x60C24C74 + off)
    print("  +0x%02X %08X -> 0x%08X" % (off, v, 0x60000000 + v if v else 0))
print()
print("raw words around 0x607A2700..0x607A2760:")
for va in range(0x607A2700, 0x607A2764, 4):
    print("  %08X %08X" % (va, rdw(va)))

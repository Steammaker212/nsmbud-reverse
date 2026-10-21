import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf
d, segs = load_elf(r"convertedmain.rebased.elf")
def rdw(va):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"] + s["filesz"]:
            return struct.unpack_from("<I", d, s["offset"] + (va - s["vaddr"]))[0]
    return None
print("dword_60B0C230 array (model resource per mode?):")
for i in range(14):
    va = 0x60B0C230 + 4*i
    w = rdw(va)
    print("  [%2d] %08X = %08X" % (i, va, w))
print()
print("surrounding data 0x60B0C200..0x60B0C280:")
for va in range(0x60B0C200, 0x60B0C284, 4):
    print("  %08X %08X" % (va, rdw(va)))

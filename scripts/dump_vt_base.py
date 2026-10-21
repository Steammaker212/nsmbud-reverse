import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf
d, segs = load_elf(r"convertedmain.rebased.elf")
def rdw(va):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"] + s["filesz"]:
            return struct.unpack_from("<I", d, s["offset"] + (va - s["vaddr"]))[0]
    return None
for a in range(0x60C25060, 0x60C250C4, 4):
    v = rdw(a)
    tag = ""
    if v and 0x60000000 <= 0x60000000 + v < 0x60D00000:
        tag = "-> 0x%X" % (0x60000000 + v)
    print(hex(a), hex(v) if v is not None else None, tag)

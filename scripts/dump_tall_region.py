import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf
d, segs = load_elf(r"convertedmain.rebased.elf")
def rdw(va):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"] + s["filesz"]:
            return struct.unpack_from("<I", d, s["offset"] + (va - s["vaddr"]))[0]
    return None
def rdf(va):
    w = rdw(va)
    return struct.unpack("<f", struct.pack("<I", w))[0] if w is not None else None
print("0x60B0C300 .. 0x60B0C400:")
for va in range(0x60B0C300, 0x60B0C400, 4):
    w = rdw(va)
    print("  %08X %08X %12d %10.4f" % (va, w, w, rdf(va)))

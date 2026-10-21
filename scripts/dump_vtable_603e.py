import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf
d, segs = load_elf(r"convertedmain.rebased.elf")
def rdw(va):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"] + s["filesz"]:
            return struct.unpack_from("<I", d, s["offset"] + (va - s["vaddr"]))[0]
    return None
print("data around 0x60BF8E6C:")
for va in range(0x60BF8E00, 0x60BF8F00, 4):
    w = rdw(va)
    mark = " <-- sub_603E56C0" if va == 0x60BF8E6C else ""
    print("  %08X %08X%s" % (va, w, mark))

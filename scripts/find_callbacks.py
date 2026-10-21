import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf
d, segs = load_elf(r"convertedmain.rebased.elf")

def va_of(off):
    for s in segs:
        if s["offset"] <= off < s["offset"] + s["filesz"]:
            return s["vaddr"] + (off - s["offset"])
    return None

for val in (0x007A0E98, 0x007A06E0, 0x007B5350, 0x007A0C20,
            0x007A1278, 0x007C849C):
    pat = struct.pack("<I", val)
    print("\n===", hex(val), "===")
    start = 0; n = 0
    while True:
        i = d.find(pat, start)
        if i < 0: break
        va = va_of(i)
        print(" file", hex(i), "va", hex(va) if va else None)
        start = i + 1; n += 1
        if n > 30: break

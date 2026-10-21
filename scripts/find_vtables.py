import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf
d, segs = load_elf(r"convertedmain.rebased.elf")

def va_of(off):
    for s in segs:
        if s["offset"] <= off < s["offset"] + s["filesz"]:
            return s["vaddr"] + (off - s["offset"])
    return None

for val in (0x00C253D4, 0x00C24C74, 0x00C24204, 0x00C2479C,
            0x00C2478C, 0x00C247AC, 0x00C247D0):
    pat = struct.pack("<I", val)
    print("\n===", hex(val), "===")
    start = 0
    n = 0
    while True:
        i = d.find(pat, start)
        if i < 0: break
        print(" file", hex(i), "va", hex(va_of(i)) if va_of(i) else None)
        start = i + 1
        n += 1
        if n > 30: break

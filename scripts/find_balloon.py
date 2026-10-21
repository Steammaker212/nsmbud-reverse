import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf
d, segs = load_elf(r"convertedmain.rebased.elf")

def find(pat, label):
    print(label, pat.hex())
    for s in segs:
        if not s.get("filesz"): continue
        buf = d[s["offset"]:s["offset"]+s["filesz"]]
        i = buf.find(pat)
        while i != -1:
            va = s["vaddr"] + i
            print("   VA 0x%X" % va)
            for k in range(-1, 12):
                vv = va + 4*k
                w = struct.unpack_from("<I", d, s["offset"] + (vv - s["vaddr"]))[0]
                f = struct.unpack("<f", struct.pack("<I", w))[0]
                print("      [%2d] %08X %08X %10.4f" % (k, vv, w, f))
            i = buf.find(pat, i+1)

# 9-entry (Wii U) and 10-entry (Deluxe) balloon offset arrays
base = struct.pack("<9f", 0.0, -4.0, -4.0, 4.0, -5.0, -2.0, -4.0, -4.0, -4.0)
find(base, "balloon 9:")
find(base + struct.pack("<f", -4.0), "balloon 10 (-4):")
find(base + struct.pack("<f", 0.0), "balloon 10 (0):")

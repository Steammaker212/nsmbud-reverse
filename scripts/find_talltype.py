import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf
d, segs = load_elf(r"convertedmain.rebased.elf")

patterns = [
    bytes([0x01,0x02,0x02,0x00,0x02,0x02,0x02,0x02,0x02]),
    bytes([0x01,0x02,0x02,0x00,0x02,0x02,0x02,0x02,0x02,0x02]),
]
for pat in patterns:
    print("pattern", pat.hex())
    for s in segs:
        if not s.get("filesz"): continue
        buf = d[s["offset"]:s["offset"]+s["filesz"]]
        i = buf.find(pat)
        while i != -1:
            va = s["vaddr"] + i
            print("   found at VA 0x%X (section vaddr 0x%X off 0x%X)" % (va, s["vaddr"], s["offset"]))
            lo = max(0, i-16); hi = min(len(buf), i+len(pat)+16)
            print("     before/after:", buf[lo:hi].hex())
            i = buf.find(pat, i+1)

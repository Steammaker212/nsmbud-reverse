import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf

d, segs = load_elf(r"convertedmain.rebased.elf")

targets = [0x60C25B30, 0x60C25B3C, 0x60C25B40, 0x60C24290, 0x60C24294,
           0x60C24C64, 0x60C24C74, 0x60C253D4, 0x60760754, 0x60760760]
for t in targets:
    print("==== target", hex(t))
    for s in segs:
        b = d[s["offset"]:s["offset"] + s["filesz"]]
        for pat, name in ((struct.pack("<I", t), "VA"), (struct.pack("<I", t - 0x60000000), "RVA")):
            st = 0
            while True:
                i = b.find(pat, st)
                if i < 0:
                    break
                print(name, "file", hex(s["offset"] + i), "va", hex(s["vaddr"] + i))
                st = i + 1

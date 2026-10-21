import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf

d, segs = load_elf(r"convertedmain.rebased.elf")

def scan_ptr(target, label):
    print("==== target", hex(target), label)
    pats = [struct.pack("<I", target), struct.pack("<I", target - 0x60000000),
            struct.pack("<I", target | 1), struct.pack("<I", (target - 0x60000000) | 1)]
    names = ["VA", "RVA", "VA|1", "RVA|1"]
    for s in segs:
        b = d[s["offset"]:s["offset"] + s["filesz"]]
        for p, n in zip(pats, names):
            st = 0
            while True:
                i = b.find(p, st)
                if i < 0:
                    break
                print(n, "file", hex(s["offset"] + i), "va", hex(s["vaddr"] + i))
                st = i + 1

scan_ptr(0x60795CDC, "setPlayerModeImpl")
scan_ptr(0x60760754, "setPlayerMode trampoline")
scan_ptr(0x607C814C, "damage wrapper")

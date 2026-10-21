import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf
from rpc import call

d, segs = load_elf(r"convertedmain.rebased.elf")

def rd(a):
    return call("data_read_dword", {"address": hex(a)}, 20)

print("===== around 0x60C77A0C")
for a in range(0x60C77960, 0x60C77B20, 4):
    try:
        v = rd(a)
        tag = ""
        if 0x60000000 <= v < 0x60A00000: tag = "TEXT"
        elif 0x60A00000 <= v < 0x60BC0000: tag = "RODATA"
        elif 0x60BC0000 <= v < 0x60C80000: tag = "DATA"
        elif 0x60C80000 <= v < 0x60D00000: tag = "BSS?"
        print(hex(a), hex(v), tag)
    except Exception as e:
        print(hex(a), "ERR", e)

print("===== refs to 0xCC4E6C")
for t in (0x60CC4E6C, 0x00CC4E6C, 0xCC4E6C):
    print("target", hex(t))
    for s in segs:
        b = d[s["offset"]:s["offset"] + s["filesz"]]
        pat = struct.pack("<I", t)
        st = 0
        while True:
            i = b.find(pat, st)
            if i < 0: break
            print("  file", hex(s["offset"] + i), "va", hex(s["vaddr"] + i))
            st = i + 1

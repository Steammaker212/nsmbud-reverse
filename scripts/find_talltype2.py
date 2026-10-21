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
            if i % 4 == 0:
                print("   VA 0x%X" % va)
            i = buf.find(pat, i+1)

# int32 arrays
find(struct.pack("<9i", 1,2,2,0,2,2,2,2,2), "int32 tall 9:")
find(struct.pack("<10i", 1,2,2,0,2,2,2,2,2,2), "int32 tall 10:")

# byte arrays with mode 9 maybe other value
for last in range(0,4):
    find(bytes([1,2,2,0,2,2,2,2,2,last]), "byte tall 10 last=%d:" % last)

import sys, struct
sys.path.insert(0, r".rea")
from rpc import call
from elfutil import load_elf

d, segs = load_elf(r"convertedmain.rebased.elf")
def rd(va):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"] + s["filesz"]:
            return d[s["offset"] + (va - s["vaddr"]):s["offset"] + (va - s["vaddr"]) + 4]
    return None

vt = 0x60C253D4
print("player vtable", hex(vt))
for off in range(0, 0x430, 4):
    b = rd(vt + off)
    if b is None:
        continue
    v = struct.unpack("<I", b)[0]
    if v:
        print(hex(off), hex(v))

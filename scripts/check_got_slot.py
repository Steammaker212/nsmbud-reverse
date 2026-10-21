import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf
d, segs = load_elf(r"convertedmain.rebased.elf")
def rds(va, n):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"]+s["filesz"]:
            o = s["offset"] + (va - s["vaddr"])
            return d[o:o+n]
    return None
for va in [0x60C771B0,0x60C771B8,0x60C771C0,0x60C24790,0x60C2479C,0x60C247A4,0x60C247AC]:
    b = rds(va,16)
    print(hex(va), b.hex() if b else None, [hex(x) for x in struct.unpack("<4I",b)] if b else None)

# scan rel.plt for r_offset 0xC247A4/0xC247A8
base=0x60AAE298; size=0x60AAF118-0x60AAE298
blob=rds(base,size)
print("rel.plt size",hex(size))
for i in range(0,size,8):
    off,info=struct.unpack_from("<II",blob,i)
    if off in (0xC247A4,0xC247A8,0xC2479C,0xC247A0,0xC247AC):
        print("rel.plt",hex(off),"type",info&0xff,"sym",info>>8)

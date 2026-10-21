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

print("mem @0x60C24794:", rds(0x60C24794, 0x40).hex())
print("mem @0x6075E758:", rds(0x6075E758, 0x40).hex())

# find .rel.dyn section
for s in segs:
    print("seg", hex(s["vaddr"]), hex(s["offset"]), hex(s["filesz"]), s.get("type"))

# scan rel.dyn for target 0xC2479C .. 0xC247C8
# .rel.dyn vaddr 0x609af048 size 0xff250
base = 0x609af048
size = 0xff250
blob = rds(base, size)
targets = set(range(0xC24794, 0xC247D0))
for i in range(0, size, 8):
    off, info = struct.unpack_from("<II", blob, i)
    if off in targets:
        typ = info & 0xFF
        sym = info >> 8
        print("RELOC r_offset", hex(off), "type", typ, "sym", sym)

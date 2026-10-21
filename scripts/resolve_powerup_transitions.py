import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf
d, segs = load_elf(r"convertedmain.rebased.elf")
def rdw(va):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"]+s["filesz"]:
            o = s["offset"] + (va - s["vaddr"])
            return struct.unpack_from("<I", d, o)[0]
    return None
for va in [0x607a1b0c, 0x607a1b10, 0x607a1b14, 0x607a1b18, 0x607a1b1c, 0x607a1b20]:
    v = rdw(va)
    sv = v - (1<<32) if v & 0x80000000 else v
    print(hex(va), hex(v), "signed", sv)
    # ldr r0,[pc,#imm] site -> target = site+8+imm ; then ldr r1,[pc,r0] target slot
# resolve for 0x607a1a00 and 0x607a1a44 and 0x607a1a60 and 0x607a1aa0
for site, dish in [(0x607a1a00,0x110),(0x607a1a44,0xc4),(0x607a1a60,0xb4),(0x607a1aa0,0x78)]:
    lit = rdw(site+8+dish)
    sv = lit - (1<<32) if lit & 0x80000000 else lit
    # ldr r1,[pc,r0] at site+8, pc = site+8+8 = site+16
    slot = (site+16 + sv) & 0xFFFFFFFF
    val = rdw(slot)
    print("site",hex(site),"lit",hex(lit),"slot",hex(slot),"value@slot",hex(val) if val is not None else None)
    if val is not None:
        print("   target object", hex(val), "id/field", hex(rdw(val+4) or 0))

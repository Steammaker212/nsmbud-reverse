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

def ldr_pc_lit(site, imm):
    return rdw(site+8+imm)

# sl resolution: 0x6075e158 ldr r0,[pc,#0x440] ; 0x6075e160 ldr r0,[pc,r0] ; add r2,r0,#8
lit = ldr_pc_lit(0x6075e158, 0x440)
sv = lit-(1<<32) if lit & 0x80000000 else lit
slot = (0x6075e168 + sv) & 0xFFFFFFFF
base = rdw(slot)
print("lit",hex(lit),"slot",hex(slot),"base",hex(base),"sl(base+8)",hex(base+8))

# resolve all the pc-relative loads around 0x6075e140..0x6075e1b0
for site, imm, note in [(0x6075e140,0x454,"player+0x25BC?"),
                        (0x6075e158,0x440,"sl"),
                        (0x6075e174,0x428,"player+0x25C4"),
                        (0x6075e17c,0x424,"r8")]:
    lit = ldr_pc_lit(site, imm)
    sv2 = lit-(1<<32) if lit & 0x80000000 else lit
    slot2 = (site+16+sv2) & 0xFFFFFFFF
    val = rdw(slot2)
    print(note,"site",hex(site),"lit",hex(lit),"slot",hex(slot2),"val",hex(val) if val is not None else None)

# owner vtable = base+8 ; entries at +8 and +12
vt = base+8
print("owner vtable",hex(vt))
for off in range(0,0x20,4):
    v = rdw(vt+off)
    print(" +",hex(off), hex(v) if v is not None else None)

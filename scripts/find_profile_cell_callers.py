"""Confirm HOW 0xC61BE4 is indexed, to pin the exact off-by-ten.

Retail:  [0xC61BE4] = 0x00AF3498 -> table = 476, 477, 478, ...
We wrote 0x00AF3904                -> table = 759, 760, 761, ...

Two readings give completely different consequences:

  READING 1 (index = mode)
      mode 0  -> 476   (Fire Flower)      <- retail behaviour, consistent
      mode 10 -> 486   retail / 769 ours  <- profile 769 is out of range
      => OUR PATCH IS WRONG BY 10. Fix: make the base pointer 0xAF3904 - 10*4,
         i.e. 0x00AF38DC, so index 10 lands on 759. But then modes 0..9 would read
         749..758, which do not exist. So this reading means a single pointer swap
         CANNOT be correct.

  READING 2 (pointer is a base for a *selector*, e.g. profileId = base + slot)
      then the base 476 vs 759 swap changes the whole range, which is only correct if
      the caller adds a small slot (0..9) inside a per-powerup block.

Which reading is right depends on the code that reads 0xC61BE4. This scans .text for
instructions that load from 0xC61BE4 (or from a literal pool word equal to it) and
prints the surrounding instructions, so the indexing is read off the assembly instead
of guessed.
"""
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
TARGET = 0x00C61BE4


def segs(d):
    ph = struct.unpack_from("<I", d, 0x1C)[0]
    e = struct.unpack_from("<H", d, 0x2A)[0]
    n = struct.unpack_from("<H", d, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * e
        if struct.unpack_from("<I", d, b)[0] != 1:
            continue
        off = struct.unpack_from("<I", d, b + 4)[0]
        va = struct.unpack_from("<I", d, b + 8)[0]
        fs = struct.unpack_from("<I", d, b + 16)[0]
        fl = struct.unpack_from("<I", d, b + 24)[0]
        if va >= 0x60000000:
            out.append((va - 0x60000000, fs, off, fl))
    return out


retail = open(RETAIL, "rb").read()
S = segs(retail)
md = Cs(CS_ARCH_ARM, CS_MODE_ARM)
md.detail = True

TEXT_LO, TEXT_HI = 0x288, 0x9AD134

# 1. find literal words equal to TARGET inside .text (literal pools), then find the
#    LDR [pc, #imm] that loads them.
pool_sites = []
for rva in range(TEXT_LO, TEXT_HI - 4, 4):
    for v, sz, o, fl in S:
        if v <= rva < v + sz:
            if struct.unpack_from("<I", retail, o + rva - v)[0] == TARGET:
                pool_sites.append(rva)
            break
print(f"literal-pool words equal to {TARGET:#x}: {len(pool_sites)}")
for p in pool_sites:
    print(f"  pool at {p:#010x}")

# 2. scan .text for any LDR whose computed target is TARGET
print("\n=== LDR instructions targeting 0xC61BE4 ===")
hits = []
for rva in range(TEXT_LO, TEXT_HI - 4, 4):
    off = None
    for v, sz, o, fl in S:
        if v <= rva < v + sz:
            off = o + rva - v
            break
    if off is None:
        continue
    w = struct.unpack_from("<I", retail, off)[0]
    ins = next(md.disasm(struct.pack("<I", w), 0x60000000 + rva), None)
    if not ins or ins.mnemonic != "ldr":
        continue
    for op in ins.operands:
        if op.type == 2 and op.mem.base == 15:      # [pc, #imm]
            tgt = 0x60000000 + rva + 8 + op.mem.disp
            if tgt - 0x60000000 == TARGET:
                hits.append(rva)

print(f"found {len(hits)} LDR(s)")
for h in hits:
    print(f"\n--- context around {h:#010x} ---")
    start = h - 0x30
    rva = start
    while rva <= h + 0x30:
        off = None
        for v, sz, o, fl in S:
            if v <= rva < v + sz:
                off = o + rva - v
                break
        if off is not None:
            w = struct.unpack_from("<I", retail, off)[0]
            ins = next(md.disasm(struct.pack("<I", w), 0x60000000 + rva), None)
            mark = "  <== loads 0xC61BE4" if rva == h else ""
            if ins:
                print(f"  {rva:#010x}  {w:08x}  {ins.mnemonic} {ins.op_str}{mark}")
        rva += 4

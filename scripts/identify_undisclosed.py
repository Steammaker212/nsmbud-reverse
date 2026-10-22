#!/usr/bin/env python3
"""Identify the undisclosed changes: the third table and the extra mode gate."""
import struct
import sys

try:
    from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
except ImportError:
    print("capstone required")
    sys.exit(2)

SRC = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"
HEIGHT = 0x60B493A8
BODY = 0x60B493D8
THIRD = 0x60B49404
BLOCK_END = 0x60B49448


def segs(data):
    ph = struct.unpack_from("<I", data, 0x1C)[0]
    ents = struct.unpack_from("<H", data, 0x2A)[0]
    n = struct.unpack_from("<H", data, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * ents
        if struct.unpack_from("<I", data, b)[0] == 1:
            out.append((struct.unpack_from("<I", data, b + 8)[0],
                        struct.unpack_from("<I", data, b + 16)[0],
                        struct.unpack_from("<I", data, b + 4)[0]))
    return out


def off(s, va):
    for v, sz, o in s:
        if v <= va < v + sz:
            return o + va - v
    return None


a = open(SRC, "rb").read()
b = open(OUT, "rb").read()
SA, SB = segs(a), segs(b)
md = Cs(CS_ARCH_ARM, CS_MODE_ARM)

print("=== FULL relocation block in patched file (0x60B493A8..0x60B49448) ===")
o = off(SB, HEIGHT)
blk = b[o:o + 0xA0]
print("  height 11f @ +0x00 :", [round(x, 2) for x in struct.unpack_from("<11f", blk, 0)])
print("  body   11I @ +0x30 :", list(struct.unpack_from("<11I", blk, 0x30)))
print(f"  third  region @ +0x5C (0x{THIRD:08X}):")
for i in range(0, 0x44, 4):
    if 0x5C + i >= 0xA0:
        break
    v = struct.unpack_from("<I", blk, 0x5C + i)[0]
    f = struct.unpack_from("<f", blk, 0x5C + i)[0]
    print(f"    +0x{0x5C+i:02X}  0x{v:08X}  ({f:.4f})")

print("\n=== consumer function of the third-table redirect 0x607982D8 ===")
# the add is at 0x6079821c -> function containing it
for start in range(0x60798224, 0x60798100, -4):
    pass
start = None
for cand in range(0x60798100, 0x60798224, 4):
    o = off(SB, cand)
    if o is None:
        continue
    for ins in md.disasm(b[o:o + 4], cand):
        if ins.mnemonic == "push" and "lr" in ins.op_str:
            start = cand
            break
    if start and cand + 4 > 0x60798200:
        break

# simpler: disassemble a window and show what reads the table
print("  disassembly 0x60798210..0x60798260:")
o = off(SB, 0x60798210)
for ins in md.disasm(b[o:o + 0x50], 0x60798210):
    print(f"    {ins.address:#010x}  {ins.mnemonic:8} {ins.op_str}")

print("\n=== the extra mode gate at 0x6078E6A8 ===")
oa, ob = off(SA, 0x6078E6A8), off(SB, 0x6078E6A8)
print(f"  src word 0x{struct.unpack_from('<I', a, oa)[0]:08X}")
print(f"  out word 0x{struct.unpack_from('<I', b, ob)[0]:08X}")
print("  context 0x6078E690..0x6078E6D0 (patched):")
o = off(SB, 0x6078E690)
for ins in md.disasm(b[o:o + 0x40], 0x6078E690):
    print(f"    {ins.address:#010x}  {ins.bytes.hex():8}  {ins.mnemonic:8} {ins.op_str}")

#!/usr/bin/env python3
"""Disassemble the item-gate region with capstone and account for all diffs."""
import struct
import sys

try:
    from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_THUMB
except ImportError:
    print("capstone not available")
    sys.exit(2)

SRC = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"


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
    raise ValueError(hex(va))


a = open(SRC, "rb").read()
b = open(OUT, "rb").read()
SA, SB = segs(a), segs(b)

md = Cs(CS_ARCH_ARM, CS_MODE_ARM)

print("=== PATCHED 0x60465F2C..0x60465F58 ===")
start = 0x60465F2C
code = b[off(SB, start):off(SB, start) + 0x30]
for ins in md.disasm(code, start):
    print(f"  {ins.address:#010x}  {ins.bytes.hex():8}  "
          f"{ins.mnemonic:8} {ins.op_str}")

print("\n=== PATCHED 0x60465FF8..0x6046601C ===")
start = 0x60465FF8
code = b[off(SB, start):off(SB, start) + 0x28]
for ins in md.disasm(code, start):
    print(f"  {ins.address:#010x}  {ins.bytes.hex():8}  "
          f"{ins.mnemonic:8} {ins.op_str}")

print("\n=== diff regions (grouped) ===")
diffs = [i for i in range(min(len(a), len(b))) if a[i] != b[i]]
print(f"total differing bytes: {len(diffs)}")

# map file offsets back to VAs
def off2va(segs_, o):
    for v, sz, so in segs_:
        if so <= o < so + sz:
            return v + (o - so)
    return None

groups = []
cur = [diffs[0]] if diffs else []
for i in diffs[1:]:
    if i == cur[-1] + 1:
        cur.append(i)
    else:
        groups.append(cur)
        cur = [i]
if cur:
    groups.append(cur)

for g in groups:
    va0 = off2va(SA, g[0])
    va1 = off2va(SA, g[-1])
    print(f"  {len(g):3d} bytes  file {g[0]:#08x}..{g[-1]:#08x}  "
          f"VA {va0:#x}..{va1:#x}" if va0 else f"  {len(g):3d} bytes  file {g[0]:#x}")

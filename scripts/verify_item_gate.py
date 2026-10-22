#!/usr/bin/env python3
"""Verify the item-gate patch (0x60465F34 etc.) in the patched ELF.

Checks both the original and patched bytes, and disassembles the surrounding
context so the gate's actual semantics can be read rather than assumed.
"""
import struct
import sys

SRC = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

SITES = [0x60465F34, 0x60465F40, 0x60466000, 0x6046600C]


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

print("=== item gate sites: original vs patched ===")
for va in SITES:
    wa = struct.unpack_from("<I", a, off(SA, va))[0]
    wb = struct.unpack_from("<I", b, off(SB, va))[0]
    print(f"  {va:#010x}  src={wa:08X}  out={wb:08X}  "
          f"{'CHANGED' if wa != wb else 'same'}")

print("\n=== window around 0x60465F20..0x60465F60 (patched) ===")
for va in range(0x60465F20, 0x60465F60, 4):
    w = struct.unpack_from("<I", b, off(SB, va))[0]
    print(f"  {va:#010x}  {w:08X}")

print("\n=== window around 0x60465FF0..0x60466020 (patched) ===")
for va in range(0x60465FF0, 0x60466020, 4):
    w = struct.unpack_from("<I", b, off(SB, va))[0]
    print(f"  {va:#010x}  {w:08X}")

# total diff count
diffs = [i for i in range(min(len(a), len(b))) if a[i] != b[i]]
print(f"\ntotal differing bytes vs source: {len(diffs)}")

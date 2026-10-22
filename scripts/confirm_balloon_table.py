#!/usr/bin/env python3
"""Confirm the third relocated table is c_balloon_offset_y with index 10 = -4.0."""
import struct
import sys

SRC = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"
BALLOON_ORIG = 0x60B0C34C
THIRD = 0x60B49404
HEIGHT = 0x60B493A8


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

orig = struct.unpack_from("<11f", a, off(SA, BALLOON_ORIG))
third = struct.unpack_from("<11f", b, off(SB, THIRD))
after = struct.unpack_from("<11f", b, off(SB, BALLOON_ORIG))

print("=== c_balloon_offset_y comparison ===")
print(f"{'idx':>3}  {'orig table':>12} {'new copy':>10} {'orig @endstate':>14}")
for i in range(11):
    mark = "  <-- differs" if orig[i] != third[i] else ""
    print(f"{i:3d}  {orig[i]:12.2f} {third[i]:10.2f} {after[i]:14.2f}{mark}")

print()
print(f"original table untouched in patched file: {orig == after}")
print(f"new copy is original with idx10=-4.0:     "
      f"{list(orig[:10]) == list(third[:10]) and third[10] == -4.0}")
print()
print("=== offsets within the reloc block ===")
print(f"  height  base 0x{HEIGHT:08X}  +0x00   (11 floats = 0x2C bytes)")
print(f"  body    base 0x{HEIGHT+0x30:08X}  +0x30   (11 dwords = 0x2C bytes)")
print(f"  balloon base 0x{THIRD:08X}  +0x{THIRD-HEIGHT:02X}   (11 floats = 0x2C bytes)")
used = (THIRD - HEIGHT) + 44
print(f"  used {used} of 160 bytes; tail still zero: "
      f"{all(x == 0 for x in b[off(SB,HEIGHT)+used:off(SB,HEIGHT)+0xA0])}")

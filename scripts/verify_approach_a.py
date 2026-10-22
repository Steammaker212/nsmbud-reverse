#!/usr/bin/env python3
"""Verify Approach A's 11 Hammer actor/projectile patches in the final ELF."""
import struct
import sys

SRC = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

# (VA, original bytes LE hex, new bytes LE hex, purpose)
PATCHES = [
    (0x60C61BE4, "9834AF00", "0439AF00", "Fire profile ptr 476->759"),
    (0x60BD3208, "00000000", "13000000", "Hammer Info#1 subtype=19"),
    (0x60BD3210, "00820800", "01000800", "Hammer Info#1 mask=0x00080001"),
    (0x60AF6620, "00080000", "00000000", "Hammer Info#2 mask=0"),
    (0x6013FB38, "011000E2", "5012E0E7", "direction=(param>>4)&1"),
    (0x6013FB68, "5008E7E7", "0A00A0E3", "scale denominator=10"),
    (0x60140744, "005086E5", "146094E5", "LDR R6,[R4,#0x14]"),
    (0x60140748, "005087E5", "0F6006E2", "AND R6,R6,#0xF"),
    (0x6014074C, "00508AE5", "136486E3", "ORR R6,R6,#0x13000000"),
    (0x60140770, "005084E7", "FF6C86E3", "ORR R6,R6,#0xFF00"),
    (0x60140778, "005084E7", "546084E5", "STR R6,[R4,#0x54]"),
]


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


def main():
    a = open(SRC, "rb").read()
    b = open(OUT, "rb").read()
    SA, SB = segs(a), segs(b)

    def off(segs_, va):
        for v, sz, o in segs_:
            if v <= va < v + sz:
                return o + va - v
        raise ValueError(hex(va))

    fails = 0
    print("=== Approach A: 11 patches ===")
    for va, old, new, what in PATCHES:
        oa, ob = off(SA, va), off(SB, va)
        ga = a[oa:oa + 4].hex().upper()
        gb = b[ob:ob + 4].hex().upper()
        good = (ga == old and gb == new)
        if not good:
            fails += 1
        print(f"  {va:#010x} {what:34} src={ga} out={gb} {'OK' if good else 'FAIL'}")

    print(f"\nFAILS: {fails}")
    return fails


if __name__ == "__main__":
    sys.exit(0 if main() == 0 else 1)

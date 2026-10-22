#!/usr/bin/env python3
"""Verify the relocation target block and the current mode tables."""
import struct

ELF = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"


def segs(data):
    phoff = struct.unpack_from("<I", data, 0x1C)[0]
    ents = struct.unpack_from("<H", data, 0x2A)[0]
    num = struct.unpack_from("<H", data, 0x2C)[0]
    out = []
    for i in range(num):
        b = phoff + i * ents
        if struct.unpack_from("<I", data, b)[0] == 1:
            out.append((struct.unpack_from("<I", data, b + 8)[0],
                        struct.unpack_from("<I", data, b + 16)[0],
                        struct.unpack_from("<I", data, b + 4)[0]))
    return out


SEGS = []
def off(va):
    for v, sz, o in SEGS:
        if v <= va < v + sz:
            return o + va - v
    raise ValueError(hex(va))


data = open(ELF, "rb").read()
SEGS = segs(data)

print("=== RELOCATION BLOCK 0x60B493A8..0x60B49448 (expect all zero) ===")
start, end = 0x60B493A8, 0x60B49448
blob = data[off(start):off(start) + (end - start)]
nonzero = [(i, b) for i, b in enumerate(blob) if b != 0]
print(f"  size {len(blob)} bytes, nonzero: {len(nonzero)}")

print("\n=== HEIGHT TABLE (current) flt_60B0C2BC, 10 entries ===")
base = 0x60B0C2BC
for i in range(12):
    v = struct.unpack_from("<f", data, off(base + 4 * i))[0]
    tag = "  <-- index 10 (must stay 0.0)" if i == 10 else ""
    print(f"  [{i:2d}] {v:10.4f}{tag}")

print("\n=== BODY TABLE (current) cPlayerModelData 0x60B0C230, 10 entries ===")
base = 0x60B0C230
for i in range(12):
    v = data[off(base + 4 * i)]
    tag = "  <-- index 10 (must stay 0xA5)" if i == 10 else ""
    print(f"  [{i:2d}] 0x{v:02X}{tag}")

print("\n=== TALL TYPE table 0x60B0C300 ===")
base = 0x60B0C300
for i in range(12):
    v = data[off(base + 4 * i)]
    print(f"  [{i:2d}] 0x{v:02X}")

print("\n=== flt_60B0C8A0 (tall-type Y offsets) ===")
for i in range(4):
    v = struct.unpack_from("<f", data, off(0x60B0C8A0 + 4 * i))[0]
    print(f"  [{i}] {v:.4f}")

print("\n=== balloon_offset_y 0x60B0C34C ===")
for i in range(11):
    v = struct.unpack_from("<f", data, off(0x60B0C34C + 4 * i))[0]
    print(f"  [{i}] {v:.4f}")

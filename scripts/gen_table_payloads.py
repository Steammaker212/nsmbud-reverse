"""Generate the balloon (and re-verify all) table payloads FROM the reference build.

The hand-written balloon hex was wrong in four bytes and over-ran the span. Rather than
transcribe floats by eye, derive every payload mechanically from
convertedmain.hammer_b.elf and print ready-to-paste `data:` lines.

Balloon table at 0xB49404 has 11 entries:
    [0]=0.0 [1]=-4.0 [2]=-4.0 [3]=4.0 [4]=-5.0 [5]=-2.0
    [6]=-4.0 [7]=-4.0 [8]=-4.0 [9]=0.0 [10]=-4.0
That is 44 bytes, so the span is 0xB49404..0xB49430.
"""
import struct

HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"


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
        if va >= 0x60000000:
            out.append((va - 0x60000000, fs, off))
    return out


hammer = open(HAMMER, "rb").read()
SH = segs(hammer)


def rd(rva, n):
    for v, sz, o in SH:
        if v <= rva < v + sz:
            return hammer[o + rva - v: o + rva - v + n]
    return None


TABLES = [
    ("height", 0x00B493A8, "f"),
    ("body", 0x00B493D8, "i"),
    ("balloon", 0x00B49404, "f"),
]

CHUNK = 16   # bytes per data: line

for name, base, kind in TABLES:
    raw = rd(base, 44)
    if kind == "f":
        vals = [round(struct.unpack_from("<f", raw, i * 4)[0], 4) for i in range(11)]
    else:
        vals = [struct.unpack_from("<I", raw, i * 4)[0] for i in range(11)]
    print(f"# {name} @ {base:#010x}  11 entries")
    print(f"#   {vals}")
    for i in range(0, 44, CHUNK):
        chunk = raw[i:i + CHUNK]
        hexs = " ".join(f"{b:02X}" for b in chunk)
        print(f"{name}_{i//CHUNK}:")
        print(f"    type:    data")
        print(f"    data:    {hexs}")
        print(f"    address: {base + i:#010x}")
        print()

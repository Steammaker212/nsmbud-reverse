"""Find who reads 0xC61BE4, to settle the profile-cell indexing.

Earlier scan for `LDR [pc,#imm] -> 0xC61BE4` found none, so the cell is reached some
other way. Options:
  * a GOT entry (an absolute pointer stored in .data) holds 0xC61BE4, and code loads
    the pointer then dereferences it;
  * it is a member of a large struct indexed as base+offset.

This searches the whole image for any 4-byte word equal to 0xC61BE4 or close to it
(the containing struct's base), and reports what surrounds the cell so the layout is
visible.
"""
import struct

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
        if va >= 0x60000000:
            out.append((va - 0x60000000, fs, off, i))
    return out


retail = open(RETAIL, "rb").read()
S = segs(retail)

print("=== searching entire image for the word 0xC61BE4 (file-offset order) ===")
needle = struct.pack("<I", TARGET)
hits = []
start = 0
while True:
    i = retail.find(needle, start)
    if i < 0:
        break
    hits.append(i)
    start = i + 1
print(f"found {len(hits)} occurrence(s) of the raw value")
for h in hits:
    # map file offset -> rva
    rva = None
    for v, sz, o, _ in S:
        if o <= h < o + sz:
            rva = v + (h - o)
            break
    print(f"  file {h:#010x}  rva {rva if rva is None else hex(rva)}")

print("\n=== searching for any word within 0x200 of 0xC61BE4 (struct base candidates) ===")
for delta in range(-0x200, 0x201, 4):
    val = TARGET + delta
    needle = struct.pack("<I", val)
    i = retail.find(needle)
    if i >= 0:
        rva = None
        for v, sz, o, _ in S:
            if o <= i < o + sz:
                rva = v + (i - o)
                break
        print(f"  word {val:#010x} (delta {delta:+#x}) appears at file {i:#010x}"
              f"  rva {rva if rva is None else hex(rva)}")

print("\n=== the array around 0xC61BE4: is it power-up keyed? ===")
# read a window and interpret every word as a possible pointer to a profile-id table
base = 0x00C61B00
for v, sz, o, _ in S:
    if v <= base < v + sz:
        raw = retail[o + base - v: o + base - v + 0x140]
        break
for i in range(0, len(raw), 4):
    rva = base + i
    w = struct.unpack_from("<I", raw, i)[0]
    mark = ""
    if rva == TARGET:
        mark = "  <== THE CELL WE PATCH"
    if 0xAF0000 <= w <= 0xB10000:
        mark += "  [profile-id table ptr]"
    print(f"  {rva:#010x}  {w:#010x}{mark}")

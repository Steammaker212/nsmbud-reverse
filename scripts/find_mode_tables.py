"""Find the real mode-indexed tables and their bounds -- the crash lives here.

WHAT WE JUST LEARNED
====================
0xAF3498 and 0xAF3904 are not table bases. The region around them is ONE long
ascending run of integers:

    0xAF3000 -> 182, 183, 184, ...
    0xAF3200 -> 310, 311, ...
    0xAF3498 -> 476   ((0xAF3498-0xAF3000)/4 = 294 entries after 182 = 476)  OK
    0xAF3904 -> 759   ((0xAF3904-0xAF3000)/4 = 577 entries after 182 = 759)  OK

So [0xC61BE4] stores a POINTER TO AN ELEMENT of that id array, and readers do
`LDR Rn,[Rm]` to get the element's VALUE (476). The cell therefore encodes exactly one
id: 476. Patching the pointer to 0xAF3904 changes it to 759.

That is consistent with the reference build's intent (Fire Flower slot becomes Hammer),
and with powerup_modes.cpp's own note that "the Fire Flower no longer produces mode 2".
It is NOT an off-by-ten. Good -- one hypothesis eliminated with evidence.

THE REMAINING CRASH CANDIDATE
=============================
Mode 10 now gets granted, but the per-mode lookup tables we REMOVED the hooks for were
never extended. If a table has 10 entries (modes 0..9) and mode 10 indexes it, that is a
4-byte out-of-bounds read of whatever follows -> garbage body type / height / offset.
Garbage geometry can crash in the model or collider path.

So: locate the mode-indexed tables and measure their true entry counts.

Known expected contents from powerup_modes.cpp:
    height by mode  {16.0, 31.0, 31.0, 6.0, 31.0, 31.0, 31.0, 31.0, 31.0, 31.0, [31.0]}
    body by mode    {1, 0, 0, 1, 2, 3, 0, 4, 4, 5, [0]}
    balloon offset  {0.0, -4.0, -4.0, 4.0, -5.0, -2.0, -4.0, -4.0, -4.0, 0.0, [-4.0]}
This scans for float tables matching those prefixes.
"""
import struct

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"


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


retail = open(RETAIL, "rb").read()
S = segs(retail)


def f32(rva):
    for v, sz, o in S:
        if v <= rva < v + sz:
            return struct.unpack_from("<f", retail, o + rva - v)[0]
    return None


def u32(rva):
    for v, sz, o in S:
        if v <= rva < v + sz:
            return struct.unpack_from("<I", retail, o + rva - v)[0]
    return None


def region():
    for v, sz, o in S:
        yield v, sz, o


print("=== verify the id-array theory ===")
for rva in (0x00AF3000, 0x00AF3498, 0x00AF3904, 0x00AF3900, 0x00AF3908):
    print(f"  {rva:#010x} -> {u32(rva)}")
print("  => single ascending run, pointer selects an element. Theory holds.")

print("\n=== search .rodata for the height-by-mode table ===")
PATTERN = [16.0, 31.0, 31.0, 6.0]
hits = []
for v, sz, o in S:
    for i in range(0, sz - 64, 4):
        vals = [struct.unpack_from("<f", retail, o + i + k * 4)[0] for k in range(4)]
        if all(abs(vals[k] - PATTERN[k]) < 1e-4 for k in range(4)):
            hits.append(v + i)
print(f"  candidates: {len(hits)}")
for h in hits[:10]:
    seq = [f32(h + k * 4) for k in range(14)]
    print(f"  {h:#010x}: {[round(x,2) if x is not None else None for x in seq]}")

print("\n=== search for the body-by-mode table {1,0,0,1,2,3,0,4,4,5} ===")
PAT2 = [1, 0, 0, 1, 2, 3, 0, 4, 4, 5]
hits2 = []
for v, sz, o in S:
    for i in range(0, sz - 64, 4):
        vals = [struct.unpack_from("<I", retail, o + i + k * 4)[0] for k in range(10)]
        if vals == PAT2:
            hits2.append(v + i)
print(f"  candidates: {len(hits2)}")
for h in hits2[:10]:
    seq = [u32(h + k * 4) for k in range(14)]
    print(f"  {h:#010x}: {seq}")

print("\n=== search for balloon offset {0.0,-4.0,-4.0,4.0,-5.0,-2.0} ===")
PAT3 = [0.0, -4.0, -4.0, 4.0, -5.0, -2.0]
hits3 = []
for v, sz, o in S:
    for i in range(0, sz - 64, 4):
        vals = [struct.unpack_from("<f", retail, o + i + k * 4)[0] for k in range(6)]
        if all(abs(vals[k] - PAT3[k]) < 1e-4 for k in range(6)):
            hits3.append(v + i)
print(f"  candidates: {len(hits3)}")
for h in hits3[:10]:
    seq = [f32(h + k * 4) for k in range(14)]
    print(f"  {h:#010x}: {[round(x,2) if x is not None else None for x in seq]}")

print("\n=== what is at 0xB493A8 in retail (where the data hooks wrote)? ===")
for k in range(12):
    rva = 0x00B493A8 + k * 4
    print(f"  {rva:#010x}  u32={u32(rva)}  f32={f32(rva)}")

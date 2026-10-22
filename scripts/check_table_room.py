"""Is there room to extend the mode tables in place, and what does mode 10 need?

THE REAL TABLES (retail .rodata)
================================
    body    0xB0C230  10 entries [1,0,0,1,2,3,0,4,4,5]  then 165,164,163,162
    height  0xB0C2BC  10 entries [16,31,31,6,31,31,31,31,31,31] then 0,1,2,3
    balloon 0xB0C34C  10 entries [0,-4,-4,4,-5,-2,-4,-4,-4,0] then 0,13,2,17

Index is the power-up MODE (0..9). Mode 10 currently reads the word just past each end:
    body[10]    = 165     <-- the crash: invalid body type
    height[10]  = 0.0
    balloon[10] = 0.0

WHY THE 6 REMOVED HOOKS EXISTED
===============================
Their xrefs are revealing: the "redirect" DCD words at 0x6078C58C / 0x6078E604 /
0x6078E7E8 / 0x60795FF0 / 0x607960F8 / 0x607982D8 sit exactly where the READERS of these
three tables hold their DCD literals pointing at the table bases. The reference build
REPOINTED those literals at relocated, extended copies -- which is why the patched words
were the retail value + a constant offset: they pointed into a NEW region.

So the intent was right and our mistake was copying the *pointer values* (valid only in
the reference build's layout) instead of creating the laid-out tables ourselves in a
region we control, and pointing the literals there.

To judge feasibility, this checks what immediately follows each table:
  * for body,   the next 4 words are 165,164,163,162 -- NOT free space, so the table
    cannot simply be extended in place
  * for height, the next words are 0,1,2,3       -- also data
  * for balloon, 0,13,2,17                        -- also data
so in-place extension is impossible; a relocated copy plus a repointed literal is the
only option, which is exactly what the reference build did.
"""
import struct

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"

TABLES = [("body", 0x00B0C230), ("height", 0x00B0C2BC), ("balloon", 0x00B0C34C)]


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


def u32(rva):
    for v, sz, o in S:
        if v <= rva < v + sz:
            return struct.unpack_from("<I", retail, o + rva - v)[0]
    return None


print("=== what immediately follows each table? (is in-place extension possible?) ===")
for name, base in TABLES:
    nxt = [u32(base + 40 + k * 4) for k in range(8)]
    prev = [u32(base - 4 - k * 4) for k in range(4)]
    print(f"\n{name} @ {base:#x}")
    print(f"  preceding 4 words: {prev}")
    print(f"  10 entries then   : {nxt}")
    nonzero_after = any(x for x in nxt)
    print(f"  words after table non-zero? {nonzero_after} "
          f"-> in-place extension {'NOT possible' if nonzero_after else 'possible'}")

print("""
=== therefore ===
The two faults and their correct fixes:

FAULT A (fixed): six hooks wrote pointer values that were only valid inside the
reference build's own layout. Applied to retail they aimed live table readers at code.
Correct fix: either build our own relocated tables and point the literals at THEM with
addresses valid in retail, or do not extend the tables at all.

FAULT B (newly found, NOT yet fixed): mode 10 reads one word past three 10-entry tables.
    body[10] = 165  <- invalid body type, concrete crash mechanism
The reference build handled this by relocating the tables. We removed the relocation
(necessary, because the copied pointers were wrong) but have not yet replaced it with a
correct one.

So: granting mode 10 without extending the real tables is unsafe. Two options:
  1. Build a correct relocation: our own copies at a free .rodata address, with the
     reader literals patched to those retail addresses. Needs a free region and exact
     literal addresses.
  2. Gate the feature so mode 10 never reaches the body/height lookups until the tables
     are extended -- i.e. treat the Hammer as not-yet-shippable.
""")

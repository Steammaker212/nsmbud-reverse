"""Settle it: is the table at retail 0x37FCF0 the SAME data as hammer 0x3BCE98?

If the Hammer build RELOCATED a table from 0x37FCF0 to 0x3BCE98, then within the
hammer image the bytes at 0x3BCE98 equal the retail bytes at 0x37FCF0. That would make
the six "redirect" hooks genuine pointer updates -- but valid ONLY inside the hammer
layout, so still not applicable to the retail image.

If they do NOT match, the value is not a relocated table pointer at all.

This compares, for each of the six sites, retail[retail_ptr] against hammer[patched_ptr].
"""
import struct

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

SITES = [
    ("a", 0x0037FCF0, 0x003BCE98),
    ("b", 0x0037DC70, 0x003BAE18),
    ("c", 0x0037DC00, 0x003BADA8),
    ("d", 0x00376578, 0x003B3664),
    ("e", 0x003762A4, 0x003B3390),
    ("f", 0x00374128, 0x003B11E0),
]


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
hammer = open(HAMMER, "rb").read()
SR, SH = segs(retail), segs(hammer)


def rd(d, S, rva, n=16):
    for v, sz, o in S:
        if v <= rva < v + sz:
            return d[o + rva - v: o + rva - v + n]
    return None


print(f"{'site':<5} {'retail ptr':<11} {'hammer ptr':<11} "
      f"{'retail[ptr]':<34} {'hammer[ptr]':<34} match?")
print("-" * 118)
any_match = 0
for name, rp, hp in SITES:
    a = rd(retail, SR, rp)
    b = rd(hammer, SH, hp)
    m = a == b
    if m:
        any_match += 1
    print(f"{name:<5} {rp:#010x}  {hp:#010x}  "
          f"{a.hex() if a else 'None':<34} {b.hex() if b else 'None':<34} "
          f"{'YES' if m else 'no'}")

print(f"\nmatching: {any_match}/{len(SITES)}")

print("\n=== does the retail-table content appear ANYWHERE near the hammer pointer? ===")
for name, rp, hp in SITES:
    a = rd(retail, SR, rp, 16)
    if not a:
        continue
    found = None
    # search +/- 0x4000 around the hammer pointer for the retail block
    lo = max(0x288, hp - 0x4000)
    for probe in range(lo, hp + 0x4000, 4):
        if rd(hammer, SH, probe, 16) == a:
            found = probe
            break
    print(f"  {name}: retail block at {rp:#x} found in hammer at "
          f"{found:#x}" if found else f"  {name}: retail block at {rp:#x} NOT found near {hp:#x}")

print("""
=== what this means ===
If 'matching' is 0 and the blocks are not found near the new pointers, then the patched
value is not a relocated copy of the old table. In that case the six hooks do not
"redirect to a relocated table" at all, and applying them to the retail image points
live pointers at unrelated data. That is the rendering corruption.
""")

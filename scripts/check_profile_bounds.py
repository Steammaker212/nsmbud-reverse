"""How many profiles exist, and is 769 valid? This decides the crash.

hammer_profile.hks points the power-up cell at a table starting 759:
    [0]=759 [1]=760 ... [10]=769
Retail's table started at 476 (Fire Flower).

If a caller indexes that table with the power-up MODE, mode 10 reads index 10 => 769.
So the question is whether profile 769 exists. If the profile table ends before 769, the
game dereferences a nonexistent Profile and crashes exactly on pickup.

Evidence:
  * sweetdx/docs/nsmbudx_removed_symbols.txt / prior work: sprite->profile table is
    exactly 724 entries (sprite 0..723), and Profile 759 (Hammer) has no sprite id.
  * Find the profile table and count entries, and check the region around 0xAF3904 /
    0xAF3498 to see how the 24-entry blocks are laid out and where they stop.
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


def rd(rva, n):
    for v, sz, o in S:
        if v <= rva < v + sz:
            return retail[o + rva - v: o + rva - v + n]
    return None


print("=== the 24-entry blocks of consecutive profile ids ===")
# walk backwards and forwards from both known block starts, collecting runs
for label, base in (("retail 0xAF3498", 0x00AF3498), ("patched 0xAF3904", 0x00AF3904)):
    b = rd(base, 0x40)
    vals = [struct.unpack_from("<I", b, i)[0] for i in range(0, 0x40, 4)]
    print(f"\n{label}:")
    print(f"  {vals}")
    print(f"  consecutive run starting {vals[0]}: "
          f"{all(vals[i+1] == vals[i] + 1 for i in range(len(vals)-1))}")

print("\n=== where does the *table of table pointers* live, and how long is it? ===")
# The cell at 0xC61BE4 holds 0xAF3498. Look at words around 0xC61BE4: if it is an array
# of such pointers (one per power-up), its length tells us the mode range.
b = rd(0x00C61B80, 0x100)
print("  words around 0xC61B80 (candidate pointer array):")
for i in range(0, 0x100, 4):
    rva = 0x00C61B80 + i
    v = struct.unpack_from("<I", b, i)[0]
    mark = ""
    if rva == 0x00C61BE4:
        mark = "  <== the cell we patch (retail 0xAF3498)"
    if 0xAF0000 <= v <= 0xB10000:
        mark += "   [looks like a pointer to profile-id table]"
    print(f"    {rva:#010x}  {v:#010x}{mark}")

print("""
=== BOUNDS CHECK on the profile-id table ===
The retail table at 0xAF3498 is 476,477,...  Our injected 0xAF3904 is 759,760,...
If this array is indexed by mode, mode 10 reads index 10 -> 769.
""")
b2 = rd(0x00AF3904, 0x80)
vals = [struct.unpack_from("<I", b2, i)[0] for i in range(0, 0x80, 4)]
print(f"  our injected table, 32 entries: {vals}")
# is it embedded in a longer ascending sequence (i.e. part of a big profile list)?
print(f"  entry[10] = {vals[10]}   <-- what mode 10 would select")
print(f"  entry[ 0] = {vals[0]}    <-- what mode 0 would select")

"""The profile-cell hook is the prime crash suspect. Verify its semantics.

hammer_profile.hks:
    hammer_profile_cell:
        data:    04 39 AF 00
        address: 0x00C61BE4
    @ "Point the power-up slot at the Hammer profile (759) instead of the Fire Flower (476)"

We found 0x00AF3904 holds ints [0x2F7, 0x2F8, 0x2F9] = [759, 760, 761].
0x2F7 is indeed 759, so the claim "759" is right about the VALUE AT THE TARGET.

But that makes 0xAF3904 a table OF PROFILE IDS, and 0xC61BE4 a POINTER TO such a table.
Two things must both hold or the game crashes on spawn:

  1. retail 0xC61BE4 must hold a pointer to a comparable table (so we are replacing
     like with like, not a size/format mismatch);
  2. the table we point at must be indexed the same way the caller indexes it. The
     caller wants the power-up slot for MODE 10. If it does table[mode] then it needs
     index 10, and a table whose index 0 is 759 will read 769 -- a different profile.

Print the retail pointer, both tables in full, and work out the indexing.
"""
import struct

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"

SITE = 0x00C61BE4
PATCHED_PTR = 0x00AF3904


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


raw = rd(SITE, 4)
retail_ptr = struct.unpack("<I", raw)[0]
print(f"site            : {SITE:#010x}")
print(f"retail word     : {raw.hex()}  = {retail_ptr:#010x}")
print(f"patched word    : 0439af00  = {PATCHED_PTR:#010x}")
print(f"retail ptr looks like a valid RVA? {retail_ptr < 0xCD1000}")

print(f"\n=== table at retail pointer {retail_ptr:#010x} ===")
b = rd(retail_ptr, 0x60)
if b:
    vals = [struct.unpack_from("<I", b, i)[0] for i in range(0, 0x60, 4)]
    print(f"  {vals}")
    print(f"  as decimal: {vals}")

print(f"\n=== table at patched pointer {PATCHED_PTR:#010x} ===")
b2 = rd(PATCHED_PTR, 0x60)
if b2:
    vals2 = [struct.unpack_from("<I", b2, i)[0] for i in range(0, 0x60, 4)]
    print(f"  {vals2}")
    for i, v in enumerate(vals2):
        tag = ""
        if v == 759:
            tag = "  <-- Hammer profile"
        elif v == 476:
            tag = "  <-- Fire Flower profile"
        print(f"    [{i:>2}] {v}{tag}")

print("""
=== the indexing problem ===
If a caller does `table[mode]` to fetch the profile for a power-up mode, then for
mode 10 it reads index 10. The table we inject starts with 759 at index 0, so:
""")
if b2:
    v0 = struct.unpack_from("<I", b2, 0)[0]
    v10 = struct.unpack_from("<I", b2, 40)[0] if len(b2) >= 44 else None
    print(f"    index  0 -> {v0}")
    if v10 is not None:
        print(f"    index 10 -> {v10}   <-- what mode 10 would actually get")
    print(f"""
  If index 10 is not 759, the Hammer gets some other profile -- and if it is 0 or
  out of range, spawning the power-up dereferences a null/garbage Profile and crashes
  exactly when the player picks up the Hammer.
""")

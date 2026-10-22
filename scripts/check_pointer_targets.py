"""Decisive test: what do our patched pointer words point AT, in the retail image?

The six "redirect" hooks and the profile-slot hook all write POINTER words.
Each patched value is ~0x3D1A8 higher than the retail value, which is the signature of
an address that was computed against a different layout -- not of an instruction edit.

If those targets hold the tables we think, the redirect is sound. If they hold code or
unrelated data, then every table read produces garbage: broken rendering, and a crash
when the code dereferences a bogus Profile.

This prints the actual content at each candidate target in the RETAIL image.
"""
import struct

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"

# (hook, site rva, retail pointer value, patched pointer value)
POINTERS = [
    ("body_table_redirect_a", 0x0078C58C, 0x0037FCF0, 0x003BCE98),
    ("body_table_redirect_b", 0x0078E604, 0x0037DC70, 0x003BAE18),
    ("body_table_redirect_c", 0x0078E7E8, 0x0037DC00, 0x003BADA8),
    ("height_table_redirect_a", 0x00795FF0, 0x00376578, 0x003B3664),
    ("height_table_redirect_b", 0x007960F8, 0x003762A4, 0x003B3390),
    ("draw_offset_redirect", 0x007982D8, 0x00374128, 0x003B11E0),
    ("profile_cell (data)", 0x00C61BE4, None, 0x00AF3904),
]

# where our data hooks put the relocated tables
RELOCATED = {
    "height table (hooked)": 0x00B493A8,
    "body table (hooked)": 0x00B493D8,
    "tall actor type": 0x00B0C328,
    "actorinfo subtype": 0x00BD3208,
    "actorinfo dist": 0x00BD3210,
}


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
TEXT_LO, TEXT_HI = 0x288, 0x9AD134
RODATA_LO, RODATA_HI = 0x9AF000, 0xBBFA53


def rd(rva, n=16):
    for v, sz, o in S:
        if v <= rva < v + sz:
            return retail[o + rva - v: o + rva - v + n]
    return None


def describe(rva, n=16):
    b = rd(rva, n)
    if b is None:
        return "outside mapped image"
    words = [struct.unpack_from("<I", b, i)[0] for i in range(0, min(len(b), 16), 4)]
    floats = [struct.unpack_from("<f", b, i)[0] for i in range(0, min(len(b), 16), 4)]
    where = ("in .text (executable code)" if TEXT_LO <= rva < TEXT_HI
             else "in .rodata" if RODATA_LO <= rva < RODATA_HI
             else "in .data/.bss region" if rva >= 0xBC0000 else "elsewhere")
    return (f"{b.hex()}  words={[hex(w) for w in words[:3]]}  "
            f"floats={[round(f, 3) for f in floats[:3]]}  [{where}]")


print("=" * 100)
print("WHERE OUR PATCHED POINTERS AIM, IN THE RETAIL IMAGE")
print("=" * 100)
for name, site, ret, pat in POINTERS:
    print(f"\n{name}   (site {site:#010x})")
    if ret is not None:
        print(f"  retail pointer  {ret:#010x} -> {describe(ret)}")
    print(f"  PATCHED pointer {pat:#010x} -> {describe(pat)}")
    if ret is not None:
        print(f"  delta {pat - ret:+#x}")

print("\n" + "=" * 100)
print("WHERE OUR DATA HOOKS PUT THE 'RELOCATED' TABLES (retail content there)")
print("=" * 100)
for name, rva in RELOCATED.items():
    print(f"\n{name}   {rva:#010x}")
    print(f"  retail: {describe(rva)}")

print("\n" + "=" * 100)
print("CONSISTENCY CHECK: do the redirect pointers agree with the relocated tables?")
print("=" * 100)
print("  The data hooks place height/body tables at 0x00B493A8 / 0x00B493D8.")
print("  The redirect hooks point the readers at 0x003BCE98 / 0x003BAE18 / ... instead.")
for name, site, ret, pat in POINTERS[:6]:
    agrees = 0xB49000 <= pat <= 0xB4A000 or abs(pat - 0xB493A8) < 0x200
    print(f"    {name:<24} patched->{pat:#010x}  points at relocated table? "
          f"{'YES' if agrees else 'NO'}")

print("\n  If every answer above is NO, the two halves of this patch disagree with each")
print("  other: the tables were written at 0xB4xxxx but the readers were pointed at")
print("  0x3Bxxxx. The readers then index into .text, get bogus floats/ints, and the")
print("  game mis-renders; the Profile pointer at 0xAF3904 is likewise not the profile.")

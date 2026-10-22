"""Final test: are the patched pointers self-consistent inside the HAMMER image?

We established the six 'redirect' words in convertedmain.hammer_b.elf hold
`retail_value + ~0x3D1xx`. Two possible explanations:

  (A) They are literal pointers recomputed by a rebuild. Then inside the HAMMER image
      they must point at something meaningful (a real table), and the retail values
      point at the SAME logical table in the retail layout.
  (B) They are garbage.

Distinguish by looking at what the patched pointers point at IN THE HAMMER IMAGE. If the
hammer image is a coherent rebuild, its own pointer must land on a plausible table of
small monotonic values (body types / heights) rather than on code.

This directly tells us the correct fix: repoint the readers at the table as it actually
exists in the retail image.
"""
import struct

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

SITES = [
    ("body_table_redirect_a", 0x0078C58C, 0x0037FCF0, 0x003BCE98),
    ("body_table_redirect_b", 0x0078E604, 0x0037DC70, 0x003BAE18),
    ("body_table_redirect_c", 0x0078E7E8, 0x0037DC00, 0x003BADA8),
    ("height_table_redirect_a", 0x00795FF0, 0x00376578, 0x003B3664),
    ("height_table_redirect_b", 0x007960F8, 0x003762A4, 0x003B3390),
    ("draw_offset_redirect", 0x007982D8, 0x00374128, 0x003B11E0),
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

TEXT_LO, TEXT_HI = 0x288, 0x9AD134


def rd(d, S, rva, n=32):
    for v, sz, o in S:
        if v <= rva < v + sz:
            return d[o + rva - v: o + rva - v + n]
    return None


def look(d, S, rva, label):
    b = rd(d, S, rva, 32)
    if b is None:
        print(f"      {label}: {rva:#010x} -> UNMAPPED")
        return
    ws = [struct.unpack_from("<I", b, i)[0] for i in range(0, 32, 4)]
    fs = [round(struct.unpack_from("<f", b, i)[0], 3) for i in range(0, 32, 4)]
    where = "TEXT" if TEXT_LO <= rva < TEXT_HI else "data"
    print(f"      {label}: {rva:#010x} [{where}]")
    print(f"         ints  : {ws}")
    print(f"         floats: {fs}")


print("=" * 98)
print("WHAT EACH POINTER POINTS AT, IN EACH IMAGE")
print("=" * 98)
for name, site, ret_ptr, pat_ptr in SITES:
    print(f"\n{name}")
    print("   retail image:")
    look(retail, SR, ret_ptr, "retail ptr")
    print("   hammer image:")
    look(hammer, SH, pat_ptr, "patched ptr")

print("\n" + "=" * 98)
print("INTERPRETATION KEY")
print("=" * 98)
print("""  A real body-type / height table is a run of SMALL ints (0..10) or plausible
  floats (heights in the 1.0 .. 3.0 range, or 0.0).
  Code read as ints gives values like 0xE3A0000A = 3811786738.
  Code read as floats gives values like -9.3e+22.

  If the patched pointers land on small ints in the HAMMER image, then explanation (A)
  holds: these words are pointers into a rebuilt layout, and copying them into a retail
  image sends the readers into .text. That is the rendering corruption.
""")

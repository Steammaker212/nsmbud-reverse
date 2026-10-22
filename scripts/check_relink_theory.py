"""Test the relocation theory: were the 3-byte 'redirect' changes pointer retargets?

OBSERVATION
===========
The six sites we labelled "redirect" all changed in exactly 3 bytes, and in every case
the retail and patched 3-byte big-endian values both look like small RVAs:

    0x78C58C  retail f0fc37  ->  patched 98ce3b
    0x78E604  retail 70dc37  ->  patched 18ae3b
    0x78E7E8  retail 00dc37  ->  patched a8ad3b
    0x795FF0  retail 786537  ->  patched 64363b
    0x7960F8  retail a46237  ->  patched 90333b
    0x7982D8  retail 284137  ->  patched e0113b

Read little-endian, the *whole words* were:
    0x0037FCF0 -> 0x003BCE98
    0x0037DC70 -> 0x003BAE18
    0x0037DC00 -> 0x003BADA8
    0x00376578 -> 0x003B3664
    0x003762A4 -> 0x003B3330
    0x00374128 -> 0x003BE011

Both sides are small numbers < 0x1000000 increasing by ~0x3C000. That is the signature
of **RVA pointer retargeting**: retail points at 0x37xxxx, the build points at 0x3Bxxxx.
So `convertedmain.hammer_b.elf` is NOT a simple in-place patch of the retail image --
it was RELINKED/REBASED, and these .text words are literal pointers whose targets moved.

THE CONSEQUENCE FOR OUR PATCH
=============================
Writing such a word into our build does not "redirect a table" -- it hardcodes a pointer
that is only valid in the *rebuilt* image's address layout. In the retail layout the
patched value points somewhere unrelated. That both (a) breaks whatever it points to,
and (b) explains nonsense disassembly, because these words are data inside .text.

This script confirms by checking what each of those RVAs points AT in each image.
"""
import struct

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

SITES = [
    ("body_table_redirect_a", 0x0078C58C),
    ("body_table_redirect_b", 0x0078E604),
    ("body_table_redirect_c", 0x0078E7E8),
    ("height_table_redirect_a", 0x00795FF0),
    ("height_table_redirect_b", 0x007960F8),
    ("draw_offset_redirect", 0x007982D8),
]


def segs(d):
    ph = struct.unpack_from("<I", d, 0x1C)[0]
    e = struct.unpack_from("<H", d, 0x2A)[0]
    n = struct.unpack_from("<H", d, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * e
        ptype = struct.unpack_from("<I", d, b)[0]
        off = struct.unpack_from("<I", d, b + 4)[0]
        va = struct.unpack_from("<I", d, b + 8)[0]
        fs = struct.unpack_from("<I", d, b + 16)[0]
        if ptype == 1 and va >= 0x60000000:
            out.append((va - 0x60000000, fs, off))
    return out


retail = open(RETAIL, "rb").read()
hammer = open(HAMMER, "rb").read()
SR, SH = segs(retail), segs(hammer)


def rd(d, S, rva, n=4):
    for v, sz, o in S:
        if v <= rva < v + sz:
            return d[o + rva - v: o + rva - v + n]
    return None


print("=== are the 'redirect' words really pointers (RVAs) that moved? ===")
print(f"{'site':<24} {'rva':<10} {'retail ptr':<12} {'patched ptr':<12} "
      f"{'delta':<10} {'retail target is'}")
print("-" * 100)
for name, rva in SITES:
    rb = rd(retail, SR, rva)
    hb = rd(hammer, SH, rva)
    if not rb:
        continue
    rw = struct.unpack("<I", rb)[0]
    hw = struct.unpack("<I", hb)[0]
    delta = hw - rw
    # what is at the retail target?
    tb = rd(retail, SR, rw, 16) if rw < 0xCD1000 else None
    desc = "past end of image"
    if tb:
        try:
            txt = tb[:8].decode("ascii")
            if all(32 <= ord(c) < 127 for c in txt):
                desc = f'ascii "{txt}"'
            else:
                desc = tb.hex()
        except Exception:
            desc = tb.hex()
    print(f"{name:<24} {rva:#010x} {rw:#012x} {hw:#012x} {delta:+#x}    {desc}")

print("\n=== both sides consistent with a ~+0x3C000 relink shift? ===")
deltas = []
for name, rva in SITES:
    rb, hb = rd(retail, SR, rva), rd(hammer, SH, rva)
    if rb and hb:
        deltas.append(struct.unpack("<I", hb)[0] - struct.unpack("<I", rb)[0])
print(f"  deltas: {[hex(d) for d in deltas]}")
if deltas:
    print(f"  min {min(deltas):#x}  max {max(deltas):#x}  "
          f"spread {max(deltas) - min(deltas):#x}")
    print("  A tight, positive, similar spread means every one of these words is a")
    print("  pointer retargeted by the SAME relink shift -- i.e. these are NOT")
    print("  hand-made instruction edits, they are artifacts of rebuilding the image.")

print("\n=== sanity: do the retail words at these sites decode as real ARM code? ===")
print("  (they do not -- see check_literal_pool.py: 'ldrshteq pc,[r7],-r0' etc.)")
print("  Combined with the RVA interpretation above, these words are DATA inside .text.")

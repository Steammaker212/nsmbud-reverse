"""Check whether the 'instr' hook texts are faithful, and what they really are.

SUSPICION
=========
These hooks claim to "redirect to a relocated table" but the instructions read as
nonsense:

    body_table_redirect_a:   mlaseq fp, r8, lr, ip        @ 0x78C58C
    body_table_redirect_b:   eorseq sl, fp, r8, lsl lr    @ 0x78E604
    body_table_redirect_c:   eorseq sl, fp, r8, lsr #27   @ 0x78E7E8
    height_table_redirect_a: eorseq r3, fp, r4, ror #12   @ 0x795FF0
    height_table_redirect_b: mlaseq fp, r0, r3, r3        @ 0x7960F8
    draw_offset_redirect:    eorseq r1, fp, r0, ror #3    @ 0x7982D8

Several are conditional-execution (`eq`) data-processing ops with bizarre
operand/shift combinations. Real code that "repoints a table" would be an
`add`/`ldr`/`sub` against a literal. These look like 32-bit DATA words that were
disassembled as ARM -- which happens when you take a table of pointers or floats and
try to read it as code.

These addresses are in .text (in-image .text spans 0x288..0x9AD134), and 0x78xxxx /
0x79xxxx is squarely in the player/actor draw path. That would explain rendering
problems that show up BEFORE any Hammer is touched.

WHAT THIS SCRIPT DOES
=====================
For each of those 6 addresses, compare:
  * the retail word
  * the patched (hammer_b) word
  * the instruction text our .hks claims
and report whether the declared text actually encodes the patched bytes, plus whether
the retail word looks like code or like data.
"""
import struct
from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

SITES = [
    ("body_table_redirect_a", 0x0078C58C, "mlaseq fp, r8, lr, ip"),
    ("body_table_redirect_b", 0x0078E604, "eorseq sl, fp, r8, lsl lr"),
    ("body_table_redirect_c", 0x0078E7E8, "eorseq sl, fp, r8, lsr #27"),
    ("mode_six_or_ten", 0x0078E6A8, "cmp r0, #0xa"),
    ("height_table_redirect_a", 0x00795FF0, "eorseq r3, fp, r4, ror #12"),
    ("height_table_redirect_b", 0x007960F8, "mlaseq fp, r0, r3, r3"),
    ("draw_offset_redirect", 0x007982D8, "eorseq r1, fp, r0, ror #3"),
]

# data hooks (for reference)
DATA_SITES = [
    ("tall_actor_type_hammer", 0x00B0C328, "02 00 00 00"),
    ("height_table_slot_10", 0x00B493A8, "00 00 80 41"),
    ("body_table_slot_10", 0x00B493D8, "01 00 00 00"),
]


def segs(d):
    ph = struct.unpack_from("<I", d, 0x1C)[0]
    e = struct.unpack_from("<H", d, 0x2A)[0]
    n = struct.unpack_from("<H", d, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * e
        if struct.unpack_from("<I", d, b)[0] == 1:
            out.append((struct.unpack_from("<I", d, b + 8)[0],
                        struct.unpack_from("<I", d, b + 16)[0],
                        struct.unpack_from("<I", d, b + 4)[0]))
    return out


def rd(d, S, rva, n=4):
    va = 0x60000000 + rva
    for v, sz, o in S:
        if v <= va < v + sz:
            return d[o + va - v: o + va - v + n]
    return None


retail = open(RETAIL, "rb").read()
hammer = open(HAMMER, "rb").read()
SR = segs(retail)
SH = segs(hammer)
md = Cs(CS_ARCH_ARM, CS_MODE_ARM)


def dis(word, rva):
    return next(
        (f"{i.mnemonic} {i.op_str}" for i in md.disasm(struct.pack('<I', word), 0x60000000 + rva)),
        "?")


print(f"{'hook':<24} {'rva':<10} {'retail word':<10} {'retail means':<28} "
      f"{'patched':<22} {'declared matches?'}")
print("-" * 132)

mismatch = 0
for name, rva, declared in SITES:
    rb = rd(retail, SR, rva)
    hb = rd(hammer, SH, rva)
    if rb is None or hb is None:
        print(f"{name:<24} {rva:#010x} <unmapped>")
        continue
    rw = struct.unpack("<I", rb)[0]
    hw = struct.unpack("<I", hb)[0]
    rdis = dis(rw, rva)
    hdis = dis(hw, rva)
    same = rw == hw
    # normalise declared text for comparison
    dnorm = declared.replace(" ", "").replace("#", "").lower()
    hnorm = hdis.replace(" ", "").replace("#", "").lower()
    ok = dnorm == hnorm
    if not ok:
        mismatch += 1
    print(f"{name:<24} {rva:#010x} {rw:08x}   {rdis:<28} {hdis:<22} "
          f"{'YES' if ok else 'NO -> declared=' + declared}")
    if same:
        print(f"{'':<24} {'':<10} NOTE: retail and patched are IDENTICAL here — "
              f"this hook changes nothing")

print(f"\ndeclared-text mismatches: {mismatch}/{len(SITES)}")

print("\n=== do the 'redirect' sites even differ between retail and patched? ===")
for name, rva, declared in SITES:
    rb = rd(retail, SR, rva)
    hb = rd(hammer, SH, rva)
    if rb is None or hb is None:
        continue
    if rb == hb:
        print(f"  {name:<24} {rva:#010x} identical -> hook is a no-op, not a redirect")

print("\n=== data hooks: decode as float / int ===")
for name, rva, declared in DATA_SITES:
    rb = rd(retail, SR, rva)
    hb = rd(hammer, SH, rva)
    if rb is None or hb is None:
        continue
    rf = struct.unpack("<f", rb)[0]
    hf = struct.unpack("<f", hb)[0]
    ri = struct.unpack("<I", rb)[0]
    hi = struct.unpack("<I", hb)[0]
    print(f"  {name:<24} {rva:#010x} retail={ri:#010x} ({rf:.3f}f)  "
          f"patched={hi:#010x} ({hf:.3f}f)  declared={declared}")

print("\n=== is 0x78C58C inside a function that looks like drawing code? ===")
print("  (in-image .text spans 0x288..0x9AD134, so yes: this is executable code)")

"""DECISIVE: compare the bytes our EXACT tested IPS produced against the reference
build, across the whole relocated-table region.

WHY THIS MATTERS -- A MAJOR CORRECTION
======================================
I previously concluded the six "redirect" hooks "pointed live lookups at executable
code". That was WRONG, and the error was mine: I read the DCD stored values as if they
were absolute addresses.

They are PC-relative offsets. The ARM idiom is

    LDR Rn, =(target - pc)
    LDR Rn, [PC, Rn]

so `stored + pc = target`. Applying that:

    retail  0x0037FCF0 + 0x0078C540 = 0x00B0C230   <- the REAL body table
    patched 0x003BCE98 + 0x0078C540 = 0x00B493D8   <- the RELOCATED body table

Both decode perfectly. The patched literals are correct.

So the six hooks were byte-correct and semantically correct. The tables the data hooks
wrote at 0xB493A8 / 0xB493D8 / 0xB49404 are exactly where the reference build's
relocated tables live, with a proper mode-10 slot:

    height 0xB493A8: [16,31,31,6,31,31,31,31,31,31, 31]   <- mode 10 = 31.0
    body   0xB493D8: [1,0,0,1,2,3,0,4,4,5, 0]             <- mode 10 = 0
    balloon 0xB49404:[0,-4,-4,4,-5,-2,-4,-4,-4,0, -4]     <- mode 10 = -4.0

This script proves it end-to-end: apply our hook set to the retail image IN MEMORY and
diff the ENTIRE patched region against the reference build. If they match, the hooks are
correct and removing them was a mistake that must be reverted.
"""
import struct

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

# the six literals: site rva, pc, and what our hook set wrote there
LITERALS = [
    (0x0078C58C, 0x0078C540, 0x003BCE98, 0x00B493D8),
    (0x0078E604, 0x0078E5C0, 0x003BAE18, 0x00B493D8),
    (0x0078E7E8, 0x0078E630, 0x003BADA8, 0x00B493D8),
    (0x00795FF0, 0x00795D44, 0x003B3664, 0x00B493A8),
    (0x007960F8, 0x00796018, 0x003B3390, 0x00B493A8),
    (0x007982D8, 0x00798224, 0x003B11E0, 0x00B49404),
]

# the data hooks we wrote (site rva -> bytes), from the original mode_tables.hks
DATA = {
    0x00B0C328: bytes.fromhex("02000000"),
    0x00B493A8: bytes.fromhex("00008041"),
    0x00B493AC: bytes.fromhex("0000F841"),
    0x00B493B0: bytes.fromhex("0000F841"),
    0x00B493B4: bytes.fromhex("0000C040"),
    0x00B493B8: bytes.fromhex("0000F841"),
    0x00B493BC: bytes.fromhex("0000F841"),
    0x00B493C0: bytes.fromhex("0000F841"),
    0x00B493C4: bytes.fromhex("0000F841"),
    0x00B493C8: bytes.fromhex("0000F841"),
    0x00B493CC: bytes.fromhex("0000F841"),
    0x00B493D0: bytes.fromhex("0000F841"),
    0x00B493D8: bytes.fromhex("01000000"),
    0x00B493E4: bytes.fromhex("01000000"),
    0x00B493E8: bytes.fromhex("02000000"),
    0x00B493EC: bytes.fromhex("03000000"),
    0x00B493F4: bytes.fromhex("04000000"),
    0x00B493F8: bytes.fromhex("04000000"),
    0x00B493FC: bytes.fromhex("05000000"),
    0x00B49408: bytes.fromhex("000080C0"),
    0x00B4940C: bytes.fromhex("000080C0"),
    0x00B49410: bytes.fromhex("00008040"),
    0x00B49414: bytes.fromhex("0000A0C0"),
    0x00B49418: bytes.fromhex("000000C0"),
    0x00B4941C: bytes.fromhex("000080C0"),
    0x00B49420: bytes.fromhex("000080C0"),
    0x00B49424: bytes.fromhex("000080C0"),
    0x00B4942C: bytes.fromhex("000080C0"),
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
hammer = open(HAMMER, "rb").read()
SR, SH = segs(retail), segs(hammer)


def rd(d, S, rva, n=4):
    for v, sz, o in S:
        if v <= rva < v + sz:
            return d[o + rva - v: o + rva - v + n]
    return None


print("=" * 94)
print("1. DO THE SIX LITERALS DECODE TO THE INTENDED TABLES?")
print("=" * 94)
allok = True
for site, pc, stored, intended in LITERALS:
    resolved = (stored + pc) & 0xFFFFFFFF
    ok = resolved == intended
    allok &= ok
    ret = struct.unpack("<I", rd(retail, SR, site, 4))[0]
    ret_res = (ret + pc) & 0xFFFFFFFF
    print(f"  site {site:#010x}: retail {ret:#010x} -> {ret_res:#010x}   "
          f"ours {stored:#010x} -> {resolved:#010x}  "
          f"{'OK' if ok else 'MISMATCH (wanted %#x)' % intended}")
print(f"\n  all literals resolve correctly: {allok}")

print("\n" + "=" * 94)
print("2. BUILD A SIMULATED PATCHED IMAGE (retail + our hook set)")
print("=" * 94)
patched = bytearray(retail)


def off(S, rva):
    for v, sz, o in S:
        if v <= rva < v + sz:
            return o + rva - v
    return None


for site, pc, stored, intended in LITERALS:
    o = off(SR, site)
    patched[o:o + 4] = struct.pack("<I", stored)
for rva, by in DATA.items():
    o = off(SR, rva)
    if o is not None:
        patched[o:o + len(by)] = by
print(f"  applied {len(LITERALS)} literals + {len(DATA)} data hooks")

print("\n" + "=" * 94)
print("3. COMPARE THE RESULT AGAINST THE REFERENCE BUILD, REGION BY REGION")
print("=" * 94)

REGIONS = [
    ("height table", 0x00B493A8, 0x30),
    ("body table",   0x00B493D8, 0x30),
    ("balloon table", 0x00B49404, 0x30),
    ("tall actor",   0x00B0C320, 0x10),
]
for name, rva, n in REGIONS:
    o = off(SR, rva)
    ours = bytes(patched[o:o + n])
    ref = rd(hammer, SH, rva, n)
    match = ours == ref
    print(f"\n  {name} @ {rva:#010x}  {'MATCH' if match else 'DIFFERS'}")
    print(f"    ours: {ours.hex()}")
    if ref is not None:
        print(f"    ref : {ref.hex()}")
        if not match:
            for i in range(n):
                if ours[i] != ref[i]:
                    print(f"      byte {i} ({rva+i:#x}): ours {ours[i]:02x} "
                          f"vs ref {ref[i]:02x}")

print("\n" + "=" * 94)
print("4. HOW MANY BYTES OF THE WHOLE IMAGE NOW DIFFER FROM THE REFERENCE?")
print("=" * 94)
diffs = [i for i in range(len(retail)) if patched[i] != hammer[i]]
print(f"  differing bytes vs reference build: {len(diffs)}")
# map to rvas
def off2rva(o):
    for v, sz, so in SR:
        if so <= o < so + sz:
            return v + (o - so)
    return None
rvas = sorted({(off2rva(i) // 4) * 4 for i in diffs if off2rva(i) is not None})
print(f"  differing words: {len(rvas)}")
for v in rvas[:40]:
    print(f"    {v:#010x}")

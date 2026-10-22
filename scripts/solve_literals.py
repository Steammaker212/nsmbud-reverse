"""Recover the exact `pc` for the balloon literal, then confirm all three tables.

The height and body literals decode cleanly and produce SELF-CONFIRMING results:

    height_a/b  patched stored + pc = 0x00B493A8
                and 0x00B493A8 holds [16,31,31,6,31,31,31,31,31,31, 31]
                                                                  ^^ 11th entry = mode 10
    body_a/b/c  patched stored + pc = 0x00B493D8
                and 0x00B493D8 holds [1,0,0,1,2,3,0,4,4,5, 0]
                                                            ^ 11th entry = mode 10

Those are exactly the values our (removed) data hooks were writing. So the DATA was
right all along; only the six literal VALUES were wrong -- they had been copied from the
reference build, where the tables sat at the same RVAs but the literals had been recomputed
against a different code layout.

The balloon site gave 0xB0C388 for retail instead of 0xB0C34C, i.e. my pc estimate was
24 bytes too high (the literal is 0x607982D8 and I assumed pc=0x60798260). Correct pc is
0x60798260 - 0x18 = ... let me just solve it: we need
    patched_stored + pc = <balloon table in build>
and the build's tables are laid out in the order height(0xB493A8), body(0xB493D8),
...
so balloon most likely sits right after body's 11 entries + padding.
Better: solve pc from the RETAIL relation instead, which we know exactly:
    pc = retail_table - retail_stored = 0x00B0C34C - 0x00374128 = 0x00798224
Then the build table = patched_stored + pc.
"""
import struct

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

SITES = [
    ("body_a",   0x0078C58C, 0x0037FCF0, 0x003BCE98, 0x00B0C230),
    ("body_b",   0x0078E604, 0x0037DC70, 0x003BAE18, 0x00B0C230),
    ("body_c",   0x0078E7E8, 0x0037DC00, 0x003BADA8, 0x00B0C230),
    ("height_a", 0x00795FF0, 0x00376578, 0x003B3664, 0x00B0C2BC),
    ("height_b", 0x007960F8, 0x003762A4, 0x003B3390, 0x00B0C2BC),
    ("balloon",  0x007982D8, 0x00374128, 0x003B11E0, 0x00B0C34C),
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


def rd(d, S, rva, n=4):
    for v, sz, o in S:
        if v <= rva < v + sz:
            return d[o + rva - v: o + rva - v + n]
    return None


print("=" * 92)
print("SOLVING pc FROM THE RETAIL RELATION, THEN DECODING THE BUILD'S TABLES")
print("=" * 92)
print(f"{'site':<10} {'pc (solved)':<13} {'build table':<13} {'check'}")
print("-" * 92)

resolved = {}
for name, site, ret, pat, table in SITES:
    pc = (table - ret) & 0xFFFFFFFF
    build = (pat + pc) & 0xFFFFFFFF
    # sanity: retail relation must be exact by construction; check pc < image size
    plausible = pc < 0xCD1000
    resolved.setdefault(build, []).append(name)
    print(f"{name:<10} {pc:#011x}  {build:#011x}   "
          f"{'ok' if plausible else 'IMPLAUSIBLE pc'}")

print("\ndecompressed table addresses in the reference build:")
for addr in sorted(resolved):
    print(f"\n  {addr:#010x}  ({', '.join(resolved[addr])})")
    b = rd(hammer, SH, addr, 0x34)
    if not b:
        print("      (unmapped)")
        continue
    ints = [struct.unpack_from("<I", b, i)[0] for i in range(0, len(b), 4)]
    flts = [round(struct.unpack_from("<f", b, i)[0], 2) for i in range(0, len(b), 4)]
    print(f"      ints  : {ints}")
    print(f"      floats: {flts}")

print("\n" + "=" * 92)
print("VERDICT")
print("=" * 92)
print("""The reference build's extended tables live at 0x00B493A8 (height),
0x00B493D8 (body) and the balloon table nearby. Those are EXACTLY the addresses our
removed `data` hooks wrote to.

That changes the diagnosis materially:

  * our TABLE DATA was correct -- 11 entries, with a proper mode-10 slot
  * our READER LITERALS were wrong -- copied from the reference build, where they encode
    `table - pc` against ITS instruction layout. In the retail layout the same stored
    value resolves to `table + (PcRef - PcRetail)`, which is the constant offset we saw,
    landing in .text.

So the fix is not "drop the relocation". It is:
  1. keep the 11-entry tables at 0x00B493A8 / 0x00B493D8 / balloon slot
  2. write each literal as `table - pc` computed for the RETAIL layout
  3. tag the literals `data`, not `instr` (they are DCD words)
""")

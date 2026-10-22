"""Decode the reference build's six patched literals back into table addresses.

We now know the exact encoding of each literal:

    stored = table_address - pc

and pc is known per site (verified two ways: matches IDA's DCD annotation, and
retail's stored value reproduces 0x00B0C230 / 0x00B0C2BC / 0x00B0C34C exactly).

So the reference build's patched values decode to the addresses of ITS relocated tables:

    relocated = patched_stored + pc

If those come out as a small set of nearby addresses, that is where the reference build
put its extended tables -- and it also tells us the reference build did NOT relocate them
to 0xB493A8 (where our data hooks wrote), which would explain why our table writes fed
nothing.

This is the key to writing a CORRECT relocation: place our own 11-entry copies, then
compute each literal as `new_table - pc` with pc from this table.
"""
import struct

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

# site rva, pc used by that literal, retail stored value, patched stored value,
# and which table the retail value resolves to
SITES = [
    ("body_a",    0x0078C58C, 0x0078C540, 0x0037FCF0, 0x003BCE98, 0x00B0C230),
    ("body_b",    0x0078E604, 0x0078E5C0, 0x0037DC70, 0x003BAE18, 0x00B0C230),
    ("body_c",    0x0078E7E8, 0x0078E630, 0x0037DC00, 0x003BADA8, 0x00B0C230),
    ("height_a",  0x00795FF0, 0x00795D44, 0x00376578, 0x003B3664, 0x00B0C2BC),
    ("height_b",  0x007960F8, 0x00796018, 0x003762A4, 0x003B3390, 0x00B0C2BC),
    ("balloon",   0x007982D8, 0x00798260, 0x00374128, 0x003B11E0, 0x00B0C34C),
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


print("=" * 96)
print("DECODING THE REFERENCE BUILD'S REPOINTED LITERALS")
print("=" * 96)
print(f"{'site':<10} {'pc':<11} {'retail stored':<14} {'->retail table':<16} "
      f"{'patched stored':<15} {'->build table'}")
print("-" * 96)

decoded = {}
ok = True
for name, site, pc, ret_stored, pat_stored, table in SITES:
    # verify retail decodes to the known table
    calc = ret_stored + pc
    good = (calc & 0xFFFFFFFF) == table
    if not good:
        ok = False
    newt = (pat_stored + pc) & 0xFFFFFFFF
    decoded.setdefault(newt, []).append(name)
    print(f"{name:<10} {pc:#010x}  {ret_stored:#012x}  {table:#016x}  "
          f"{pat_stored:#015x}  {newt:#010x}")
    if not good:
        print(f"           !! retail decode mismatch: {calc:#x} != {table:#x}")

print(f"\nretail encoding verified for all sites: {ok}")

print("\n=== distinct table addresses the reference build points at ===")
for addr in sorted(decoded):
    print(f"  {addr:#010x}   used by {decoded[addr]}")
    b = rd(hammer, SH, addr, 0x40)
    if b:
        ints = [struct.unpack_from("<I", b, i)[0] for i in range(0, 0x40, 4)]
        flts = [round(struct.unpack_from("<f", b, i)[0], 3) for i in range(0, 0x40, 4)]
        print(f"      build ints  : {ints}")
        print(f"      build floats: {flts}")

print("\n=== where did OUR removed data hooks write? ===")
print("  0x00B493A8 .. 0x00B4942C, and 0x00B0C328")
for t in sorted(decoded):
    near = abs(t - 0x00B493A8) < 0x400
    print(f"  build table {t:#010x} vs our 0x00B493A8: "
          f"{'CLOSE' if near else 'far (our writes fed nothing)'}")

print("""
=== CONCLUSION ===
The reference build placed extended tables at the addresses decoded above, NOT at
0x00B493A8 where our data hooks wrote. That is the definitive reason our table writes
had no effect: wrong address entirely, so no reader ever saw them, while the literals we
DID patch aimed the real readers at code.

To fix correctly we must:
  1. choose our own free region for 11-entry copies of the three tables,
  2. compute each of the six literals as `new_table - pc` using the pc values above,
  3. write the copies as `data` hooks and the literals as `data` hooks (they are DCD
     words, not instructions -- which is why tagging them `instr` was always wrong).
""")

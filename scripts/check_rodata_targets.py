"""Does the .rodata region our data hooks write to contain a table at all?

THE WORRY
=========
mode_tables.hks contains 32 `data` hooks writing into .rodata at 0xB493A8..0xB4942C,
in a dense run at 4-byte intervals including:

    0xB493E4 01000000   0xB493E8 02000000   0xB493EC 03000000
    0xB493F4 04000000   0xB493F8 04000000   0xB493FC 05000000

That pattern (1,2,3,4,4,5) looks like someone wrote a *body-type table* into a region
assuming it was free space. If retail .rodata actually holds something else there --
strings, collision geometry, model data, another table -- then these writes corrupt
unrelated data. That would produce rendering corruption immediately and a crash later.

This reads the RETAIL bytes for the whole range our data hooks touch, and characterises
them: printable ASCII, floats, pointers, or small ints. It also checks whether the
Hammer build's bytes at those addresses differ at all from retail -- if a data hook
writes bytes that retail already has, it is a no-op; if it writes into what is clearly
not a table, it is damage.
"""
import struct

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

# every data hook address from mode_tables.hks
DATA_HOOKS = [
    (0x00B0C328, "tall_actor_type_hammer", bytes.fromhex("02000000")),
    (0x00B493A8, "height_table_slot_10", bytes.fromhex("00008041")),
    (0x00B493AC, "patch_b493ac", bytes.fromhex("0000F841")),
    (0x00B493B0, "patch_b493b0", bytes.fromhex("0000F841")),
    (0x00B493B4, "patch_b493b4", bytes.fromhex("0000C040")),
    (0x00B493B8, "patch_b493b8", bytes.fromhex("0000F841")),
    (0x00B493BC, "patch_b493bc", bytes.fromhex("0000F841")),
    (0x00B493C0, "patch_b493c0", bytes.fromhex("0000F841")),
    (0x00B493C4, "patch_b493c4", bytes.fromhex("0000F841")),
    (0x00B493C8, "patch_b493c8", bytes.fromhex("0000F841")),
    (0x00B493CC, "patch_b493cc", bytes.fromhex("0000F841")),
    (0x00B493D0, "patch_b493d0", bytes.fromhex("0000F841")),
    (0x00B493D8, "body_table_slot_10", bytes.fromhex("01000000")),
    (0x00B493E4, "patch_b493e4", bytes.fromhex("01000000")),
    (0x00B493E8, "patch_b493e8", bytes.fromhex("02000000")),
    (0x00B493EC, "patch_b493ec", bytes.fromhex("03000000")),
    (0x00B493F4, "patch_b493f4", bytes.fromhex("04000000")),
    (0x00B493F8, "patch_b493f8", bytes.fromhex("04000000")),
    (0x00B493FC, "patch_b493fc", bytes.fromhex("05000000")),
    (0x00B49408, "patch_b49408", bytes.fromhex("000080C0")),
    (0x00B4940C, "patch_b4940c", bytes.fromhex("000080C0")),
    (0x00B49410, "patch_b49410", bytes.fromhex("00008040")),
    (0x00B49414, "patch_b49414", bytes.fromhex("0000A0C0")),
    (0x00B49418, "patch_b49418", bytes.fromhex("000000C0")),
    (0x00B4941C, "patch_b4941c", bytes.fromhex("000080C0")),
    (0x00B49420, "patch_b49420", bytes.fromhex("000080C0")),
    (0x00B49424, "patch_b49424", bytes.fromhex("000080C0")),
    (0x00B4942C, "patch_b4942c", bytes.fromhex("000080C0")),
]


def segs(d):
    ph = struct.unpack_from("<I", d, 0x1C)[0]
    e = struct.unpack_from("<H", d, 0x2A)[0]
    n = struct.unpack_from("<H", d, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * e
        ptype = struct.unpack_from("<I", d, b)[0]
        fl = struct.unpack_from("<I", d, b + 24)[0]
        if ptype != 1:
            continue
        va = struct.unpack_from("<I", d, b + 8)[0]
        fs = struct.unpack_from("<I", d, b + 16)[0]
        off = struct.unpack_from("<I", d, b + 4)[0]
        if va >= 0x60000000:
            out.append((va, fs, off, fl))
    return out


retail = open(RETAIL, "rb").read()
hammer = open(HAMMER, "rb").read()
SR, SH = segs(retail), segs(hammer)


def rd(d, S, rva, n=4):
    va = 0x60000000 + rva
    for v, sz, o, fl in S:
        if v <= va < v + sz:
            return d[o + va - v: o + va - v + n]
    return None


print("=== data hook ranges: retail vs hammer, and what retail holds ===")
print(f"{'name':<24} {'rva':<10} {'retail':<12} {'hammer':<12} {'declared':<12} "
      f"{'same?':<6} {'retail as float'}")
print("-" * 108)
same_count = 0
diff_count = 0
for rva, name, declared in DATA_HOOKS:
    rb = rd(retail, SR, rva)
    hb = rd(hammer, SH, rva)
    if rb is None or hb is None:
        print(f"{name:<24} {rva:#010x} <unmapped>")
        continue
    rf = struct.unpack("<f", rb)[0]
    same = rb == hb
    if same:
        same_count += 1
    else:
        diff_count += 1
    decl_ok = "ok" if hb == declared else "MISMATCH"
    print(f"{name:<24} {rva:#010x} {rb.hex():<12} {hb.hex():<12} "
          f"{declared.hex():<12} {'yes' if same else 'no':<6} "
          f"{rf:>12.4f}  {decl_ok}")

print(f"\n  identical retail/hammer: {same_count}   differing: {diff_count}")

print("\n=== what is around 0xB493A8 in RETAIL? (0x40 words either side) ===")
base = 0xB49300
raw = rd(retail, SR, base, 0x120)
if raw:
    for i in range(0, len(raw), 4):
        rva = base + i
        w = struct.unpack_from("<I", raw, i)[0]
        f = struct.unpack_from("<f", raw, i)[0]
        mark = ""
        if any(rva == h[0] for h in DATA_HOOKS):
            mark = "  <== HOOKED"
        # printable ascii?
        b = raw[i:i + 4]
        if all(32 <= c < 127 for c in b):
            mark += f'  "{b.decode()}"'
        print(f"  {rva:#010x}  {w:#010x}  {f:>14.4f}{mark}")

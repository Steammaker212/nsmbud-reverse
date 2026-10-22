"""Are the actor-constructor 'instr' changes real edits, or relink artifacts?

The six table 'redirect' hooks turned out to be RVA pointers retargeted by a near
constant +0x3D1xx shift. That is the fingerprint of a REBUILT image: when code moves,
every absolute pointer and every PC-relative branch offset inside it must be recomputed.

If the same is true of the constructor hooks at 0x140744..0x14077B, then those hooks
are not "Hammer actor setup" either -- they would just be patching moved branches.

Test: decode the full 4-byte words at each site in both images, and classify each one:
  * branch (B / BL / BLX) -- its offset must change if either end moves  => relink artifact
  * literal pointer (value < 0x1000000)                                  => relink artifact
  * plain data-processing instruction (mov / and / orr / str / ldr)      => real edit
"""
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

SITES = [
    ("hammer_direction_bit", 0x0013FB38),
    ("hammer_scale_denom", 0x0013FB68),
    ("hammer_ctor_read_settings", 0x00140744),
    ("hammer_ctor_mask", 0x00140748),
    ("hammer_ctor_or_mode", 0x0014074C),
    ("hammer_ctor_or_player", 0x00140770),
    ("hammer_ctor_store", 0x00140778),
    ("grant_hammer_mode", 0x0045DDCC),
    ("mode_six_or_ten", 0x0078E6A8),
    ("w_0x7a2708", 0x007A2708),
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
md = Cs(CS_ARCH_ARM, CS_MODE_ARM)


def word(d, S, rva):
    for v, sz, o in S:
        if v <= rva < v + sz:
            return struct.unpack_from("<I", d, o + rva - v)[0]
    return None


def classify(w, rva):
    ins = next(md.disasm(struct.pack("<I", w), 0x60000000 + rva), None)
    if ins and ins.mnemonic in ("b", "bl", "blx"):
        return f"BRANCH -> relink artifact if targets moved", f"{ins.mnemonic} {ins.op_str}"
    if w < 0x1000000:
        return f"LITERAL POINTER ({w:#x}) -> relink artifact", \
               f"ptr -> {w:#x}"
    if ins:
        # conditional data-processing with 'eq' and odd shifts usually means data
        if ins.mnemonic in ("ldrshteq", "eorseq", "mlaseq", "strheq", "subseq"):
            return "looks like DATA read as code -> relink artifact", \
                   f"{ins.mnemonic} {ins.op_str}"
        return "REAL instruction edit (candidate)", f"{ins.mnemonic} {ins.op_str}"
    return "undecodable", "?"


print(f"{'hook':<28} {'rva':<10} {'retail word':<11} {'patched word':<11} "
      f"{'verdict':<46} decoded")
print("-" * 132)
real_edits = []
relink = []
for name, rva in SITES:
    rw = word(retail, SR, rva)
    hw = word(hammer, SH, rva)
    if rw is None or hw is None:
        continue
    verdict, decoded = classify(hw, rva)
    if rw == hw:
        verdict = "IDENTICAL - hook is a no-op"
    if "REAL instruction" in verdict:
        real_edits.append((name, rva))
    else:
        relink.append((name, rva))
    print(f"{name:<28} {rva:#010x} {rw:08x}    {hw:08x}    {verdict:<46} {decoded}")

print(f"\nREAL instruction edits: {len(real_edits)}")
for n, r in real_edits:
    print(f"   {n:<28} {r:#010x}")
print(f"\nrelink artifacts / no-ops: {len(relink)}")
for n, r in relink:
    print(f"   {n:<28} {r:#010x}")

print("""
=== the decisive point ===
A rebuilt image differs from the original in three kinds of way:
  1. genuine behavioural edits  (a mov immediate, a cmp immediate)
  2. recomputed branch offsets  (BL/B targets moved)
  3. recomputed absolute pointers (literal pools moved)
Only (1) is a patch. (2) and (3) are consequences of the rebuild and must NOT be
applied to the retail image -- they relocate execution into whatever happens to sit at
the shifted address.
""")

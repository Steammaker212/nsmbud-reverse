#!/usr/bin/env python3
"""Disassemble every patch site (original vs patched) at instruction boundaries.

Determines, per site, whether it is:
  - an instruction rewrite  -> .hks type: instr   (text of the PATCHED instruction)
  - a literal/data word     -> .hks type: data    (raw patched bytes)
and prints the exact assembly text needed.
"""
import struct

try:
    from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
except ImportError:
    raise SystemExit("capstone required")

SRC = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"
IDB = 0x60000000


def segs(data):
    ph = struct.unpack_from("<I", data, 0x1C)[0]
    ents = struct.unpack_from("<H", data, 0x2A)[0]
    n = struct.unpack_from("<H", data, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * ents
        if struct.unpack_from("<I", data, b)[0] == 1:
            out.append((struct.unpack_from("<I", data, b + 8)[0],
                        struct.unpack_from("<I", data, b + 16)[0],
                        struct.unpack_from("<I", data, b + 4)[0]))
    return out


def off(s, va):
    for v, sz, o in s:
        if v <= va < v + sz:
            return o + va - v
    raise ValueError(hex(va))


a = open(SRC, "rb").read()
b = open(OUT, "rb").read()
SA, SB = segs(a), segs(b)
md = Cs(CS_ARCH_ARM, CS_MODE_ARM)

TEXT = (0x60000288, 0x609AD3BC)

SITES = [
    (0x60C61BE4, "profile_ptr_476_to_759"),
    (0x60BD3208, "hammer_info1_subtype_mask"),
    (0x60BD3210, "hammer_info1_dist"),
    (0x60AF6620, "hammer_info2_flags"),
    (0x6013FB38, "hammer_direction_bit"),
    (0x6013FB68, "hammer_scale_denom"),
    (0x60140744, "hammer_ctor_0"),
    (0x60140770, "hammer_ctor_1"),
    (0x60140778, "hammer_ctor_2"),
    (0x6045DDCC, "grant_mode_10"),
    (0x607A2708, "canChangeTo"),
    (0x607AAA88, "setFireBallAction"),
    (0x607AA9BC, "checkSetFireBall"),
    (0x607AABB8, "createFireBall_a"),
    (0x607AAC94, "createFireBall_b"),
    (0x607AAFF4, "execute_cmp"),
    (0x607AB000, "execute_mask"),
    (0x607AB0E4, "execute_cmp2"),
    (0x60B0C328, "tall_type_10"),
    (0x60465F34, "item_gate_cmp"),
    (0x60465F40, "item_gate_mask"),
    (0x60466000, "item_gate_cmp2"),
    (0x6046600C, "item_gate_mask2"),
    (0x6078E6A8, "extra_gate"),
]

print(f"{'VA':>10} {'RVA':>10}  {'src':>9} {'out':>9}  kind   text")
print("-" * 92)
for va, label in SITES:
    rva = va - IDB
    wa = struct.unpack_from("<I", a, off(SA, va))[0]
    wb = struct.unpack_from("<I", b, off(SB, va))[0]
    in_text = TEXT[0] <= va < TEXT[1]
    ins_a = next(iter(md.disasm(struct.pack("<I", wa), va)), None)
    ins_b = next(iter(md.disasm(struct.pack("<I", wb), va)), None)
    # decide kind: if the ORIGINAL decodes to something plausible that also
    # round-trips, treat as instruction; else data
    if in_text and ins_a and ins_b:
        kind = "instr"
        text = f"{ins_b.mnemonic} {ins_b.op_str}"
    else:
        kind = "data"
        text = " ".join(f"{x:02X}" for x in struct.pack("<I", wb))
    mark = "" if (wa & 0xFFF) or True else ""
    print(f"{va:#10x} {rva:#10x}  {wa:08X} {wb:08X}  {kind:6} {text:34} {label}")

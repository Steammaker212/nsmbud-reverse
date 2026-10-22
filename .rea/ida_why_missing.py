"""WHY ARE SOME NAMED FUNCTIONS MISSING FROM THE CORPUS?

The bulk decompiler filters to live functions of >=0x30 bytes. ItemNameTable_init at
0x45CC68 did not appear in powerup.c, so it fails one of those filters. That matters
because the point of the exercise is that important functions are present and readable.

This reports, for a set of functions of interest, exactly which filter excludes each one,
so the corpus selection can be corrected rather than guessed at.
"""
import idautils
import ida_funcs
import ida_name
import ida_xref
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

CHECK = [
    ("ItemNameTable_init", 0x0045CC68),
    ("Player_animSet_load", 0x00782DB0),
    ("Player_playDoubleJumpSound", 0x007AF67C),
    ("Player_animSetCarry_load", 0x0078F32C),
    ("Player_animSetMetamorphose_load", 0x0078BA10),
    ("Player_getActorSlotChecked", 0x00788DFC),
    ("PlayerBase_dispatchVirtual3", 0x007948E8),
    ("CourseNameTable_init", 0x0047C13C),
]

REGIONS = [
    (0x000000, 0x0F0000, "core"), (0x0F0000, 0x200000, "actor_construction"),
    (0x200000, 0x300000, "actors_a"), (0x300000, 0x450000, "actors_b"),
    (0x450000, 0x480000, "powerup"), (0x480000, 0x600000, "systems"),
    (0x600000, 0x780000, "states"), (0x780000, 0x7C0000, "player"),
    (0x7C0000, 0x800000, "player_states"), (0x800000, 0x9A0000, "libs"),
]


def region_of(rva):
    for lo, hi, n in REGIONS:
        if lo <= rva < hi:
            return n
    return None


def xrefs_code(ea):
    n = 0
    xb = ida_xref.xrefblk_t()
    ok = xb.first_to(ea, ida_xref.XREF_CODE)
    while ok:
        n += 1
        ok = xb.next_to()
    return n


print(f"{'name':<34}{'rva':>10}{'region':>22}{'size':>8}{'codexrefs':>11}  verdict")
for name, rva in CHECK:
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    if not f:
        print(f"{name:<34}{rva:#010x}{'?':>22}{'-':>8}{'-':>11}  NOT A FUNCTION")
        continue
    size = f.end_ea - f.start_ea
    nx = xrefs_code(ea)
    reg = region_of(rva) or "OUTSIDE REGIONS"
    verdict = []
    if size < 0x30:
        verdict.append("too small")
    if nx == 0:
        verdict.append("no code xrefs")
    if reg == "OUTSIDE REGIONS":
        verdict.append("region not covered")
    if f.start_ea != ea:
        verdict.append("not function head")
    print(f"{name:<34}{rva:#010x}{reg:>22}{size:>8x}{nx:>11}  "
          f"{', '.join(verdict) if verdict else 'SHOULD BE INCLUDED'}")

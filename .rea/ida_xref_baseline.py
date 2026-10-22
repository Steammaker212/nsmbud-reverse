"""Is "zero xrefs" meaningful in this database?

Three functions I expect to be called (Player_setPowerupMode, the item gate, ItemNameTable_build)
all report zero xrefs AND no pc-relative literal. That combination is implausible, so before
concluding anything about the call graph I need to know whether xref data is reliable here.

This measures the baseline: what fraction of all functions have zero xrefs, and what do
functions I am CERTAIN are called (constructors, the decompiled entry points) report? If known-
called functions also report zero, xref analysis is incomplete for this database and every
"no callers" conclusion drawn from it is worthless.
"""
import idautils
import ida_funcs
import ida_name
import ida_xref
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000


def nxrefs(ea):
    n = 0
    xb = ida_xref.xrefblk_t()
    ok = xb.first_to(ea, ida_xref.XREF_ALL)
    while ok:
        n += 1
        ok = xb.next_to()
    return n


total = 0
zero = 0
for ea in idautils.Functions():
    total += 1
    if nxrefs(ea) == 0:
        zero += 1

print("=" * 84)
print("BASELINE: xref coverage of the whole database")
print("=" * 84)
print(f"  functions            : {total:,}")
print(f"  with zero xrefs      : {zero:,}  ({100.0*zero/total:.1f}%)")

print()
print("=" * 84)
print("KNOWN-CALLED functions -- do they report xrefs?")
print("=" * 84)
KNOWN = [
    (0x00794EC0, "Player_ctor"),
    (0x0075DEFC, "PlayerBase_ctor"),
    (0x00782DB0, "Player_animSet_load"),
    (0x007AF67C, "Player_playDoubleJumpSound"),
    (0x004F2044, "ItemNameTable_build"),
    (0x0045CC68, "ItemNameTable_init"),
    (0x00795CDC, "Player_setPowerupMode"),
    (0x00465E4C, "ItemId_resolveGuardedByPlayerMode"),
    (0x00028FBC, "_ZN12SumoBrosBoss5buildEPK14ActorBuildInfo"),
]
for rva, label in KNOWN:
    ea = BASE + rva
    print(f"  {rva:#010x}  {label:<44} xrefs {nxrefs(ea)}")

print()
print("=" * 84)
print("are data segments even present / typed?")
print("=" * 84)
for seg_ea in idautils.Segments():
    print(f"  {idc.get_segm_name(seg_ea):<10} {idc.get_segm_start(seg_ea) - BASE:#09x}"
          f" .. {idc.get_segm_end(seg_ea) - BASE:#09x}"
          f"  size {idc.get_segm_end(seg_ea) - idc.get_segm_start(seg_ea):#x}")

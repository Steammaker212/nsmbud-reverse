"""WHAT CALLS vtable slot 0x94, and is it the fire-flower path?

Player_setPowerupMode is vtable slot 37 (byte offset 0x94) in two 367-slot Player vtables at
0xC24C74 and 0xC253D4. So it is called virtually as:

    LDR  R0, [player]        ; vtable
    LDR  R0, [R0, #0x94]
    BLX  R0

To find the real callers I must look for that pattern on a *player* pointer, not any [Rt,#0x94]
load -- most of the 0x94 hits are unrelated structure fields (the offset is common).

The strongest candidate from the scan is ActiveCollider_doOverlapMaybe (0x15989C and 0x1598BC),
which would mean this slot is a COLLISION-REACTION handler, not a pickup handler. That would
explain a lot: a collision reaction to an enemy or hazard could set the mode, and a fire flower
pickup would take a different route entirely.

This decompiles the collision function and the other plausible callers, and reports what
arguments they pass -- in particular whether a mode constant is among them.
"""
import idautils
import ida_funcs
import ida_name
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

# functions that load [reg,#0x94]; we look at the interesting ones only
SUSPECTS = [
    0x0015989C,  # in ActiveCollider_doOverlapMaybe
    0x001598BC,  # in ActiveCollider_doOverlapMaybe
    0x0015D274,
    0x001627C8,  # ShapedCollider_vf20
    0x00074A24,  # _ZN11FinalBowser5vf3F0Ev
]

seen = set()
for site in SUSPECTS:
    ea = BASE + site
    f = ida_funcs.get_func(ea)
    if not f or f.start_ea in seen:
        continue
    seen.add(f.start_ea)
    print("=" * 96)
    print(f"site {site:#010x} in {f.start_ea - BASE:#010x}  {ida_name.get_name(f.start_ea)}")
    # print the instructions from the load through the indirect call
    print("  around the call:")
    cur = ea
    for _ in range(14):
        if cur == idc.BADADDR:
            break
        print(f"    {cur - BASE:#010x}  {idc.GetDisasm(cur)}")
        cur = idc.next_head(cur)
    print("=" * 96)
    try:
        cf = ida_hexrays.decompile(f.start_ea)
    except Exception as e:
        print(f"  error {e}")
        continue
    if not cf:
        print("  declined")
        continue
    lines = str(cf).splitlines()
    for ln in lines[:70]:
        print("  " + ln)
    if len(lines) > 70:
        print(f"  ... {len(lines)-70} more")
    print()

"""WHAT GATE CAN ABORT A FIREBALL? Identify the virtual slots checked in onCreate.

FireballBase_onCreate is a nest of two virtual calls that can return "no" and skip the rest:

    if ( (*(vtable + 252))(a1) == 1 )        // 0xFC  slot 63
    {
        ...
        if ( (*(vtable + 248))(a1) == 1 )    // 0xF8  slot 62
        {
            ... vtable+256, vtable+260 ...   // 0x100 slot 64, 0x104 slot 65
            ActiveCollider::init(...)
        }
    }

Only when both return 1 does the fireball get a collider and enter the active list. If a virtual
returns 0, the object exists but is inert -- which would look exactly like "the fire flower
appeared, but nothing fires".

This resolves those four slots (0xFC, 0xF8, 0x100, 0x104) in the concrete PlayerFireball vtable
so the gate functions get names, and prints their bodies. Then the gate becomes readable code
instead of a virtual dispatch mystery.
"""
import idautils
import ida_bytes
import ida_funcs
import ida_name
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
TEXT_LO, TEXT_HI = 0x288, 0x9AD3BC

# PlayerFireball_ctor / FireballBase_ctor are at 0x13A7A4 / 0x135A90.
# Find vtables that contain FireballBase_ctor's vtable pointer assignments:
# ctor sets *(a1) = 12395168 = 0xBC?? (a vtable RVA). Resolve it.
print("=" * 90)
print("vtable assigned by FireballBase_ctor: 0x%X" % 12395168)
print("=" * 90)
vt = 12395168
print(f"  RVA {vt:#x}  name={ida_name.get_name(BASE + vt) or '(none)'}")

# find the PlayerFireball ctor's vtable too
print()
print("=" * 90)
print("vtables assigned by the three derived ctors")
print("=" * 90)
for rva, label in ((0x0013A7A4, "PlayerFireball_ctor"),
                   (0x00138918 if False else 0x00139918, "PlantFireball_ctor")):
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    if not f:
        print(f"  {label}: no func")
        continue
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        if "=" in idc.print_operand(insn, 1):
            disp = idc.get_operand_value(insn, 1)
            if disp and BASE <= disp < BASE + 0x00CD1000:
                w = ida_bytes.get_dword(disp)
                if 0x00BC0000 <= w < 0x00C70000:
                    print(f"  {label}: loads vtable-ish {w:#x} at {insn - BASE:#010x}"
                          f"  {ida_name.get_name(BASE + w) or ''}")

# Now resolve slots in the base vtable
print()
print("=" * 90)
print("SLOTS in the FireballBase vtable")
print("=" * 90)
for slot_off in (0xF8, 0xFC, 0x100, 0x104):
    idx = slot_off // 4
    a = BASE + vt + slot_off
    v = ida_bytes.get_dword(a)
    nm = ida_name.get_name(BASE + v) or f"sub_{v:X}"
    print(f"  slot {idx:>3} (+{slot_off:#x})  ->  {v:#010x}  {nm}")

print()
print("=" * 90)
print("BODIES of the two gate functions")
print("=" * 90)
for slot_off in (0xFC, 0xF8):
    v = ida_bytes.get_dword(BASE + vt + slot_off)
    f = ida_funcs.get_func(BASE + v)
    print(f"--- +{slot_off:#x} -> {v:#010x}  {ida_name.get_name(BASE + v) or ''} ---")
    if not f:
        print("    no func")
        continue
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        print(f"    {insn - BASE:#010x}  {idc.GetDisasm(insn)}")
    print()
    try:
        cf = ida_hexrays.decompile(BASE + v)
        if cf:
            for ln in str(cf).splitlines()[:30]:
                print("    " + ln)
        else:
            print("    declined")
    except Exception as e:
        print(f"    error {e}")
    print()

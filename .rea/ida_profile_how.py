"""SETTLE HOW PROFILE IDS ARE ASSIGNED -- before I claim PlayerFireball is id 130.

Evidence so far contradicts the assumption. In the registration initialisers the last argument is
0 for almost every actor:

    Profile::Profile(0xC87B30, 0x28FBC, MEMORY[0xAF383C], v1, &ActorInfo, 0)

but sub_6013B948 (PlayerFireball) passes 130 and sub_6013A5A8 (PlantFireball) passes 162. If the
last argument were the id, nearly every actor would have id 0, which cannot be right.

Meanwhile sub_6013B948 also does

    MEMORY[0xC87B4C] = ++MEMORY[0xC7B788];

which looks like "assign the next id from a global counter". If that is the real mechanism then ids
are assigned by registration ORDER (i.e. .init_array order), and 130 is something else entirely --
so my "PlayerFireball profile id = 130" claim would be WRONG and must be retracted before it reaches
the repo.

This reads Profile::Profile's body and Profile::get's body, plus the .init_array ordering, to
determine the truth.
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
NSO = 0x00CD1000

CTOR = 0x00017F6C


def show(rva, label, limit=80):
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    print("=" * 94)
    print(f"{label}   {rva:#010x}   {(f.end_ea - f.start_ea) if f else 0:#x} bytes")
    print("=" * 94)
    if f:
        for insn in idautils.Heads(f.start_ea, min(f.end_ea, f.start_ea + 4 * 60)):
            print(f"  {insn - BASE:#010x}  {idc.GetDisasm(insn)}")
    print()
    try:
        cf = ida_hexrays.decompile(ea)
        if cf:
            lines = str(cf).splitlines()
            for ln in lines[:limit]:
                print("  " + ln)
            if len(lines) > limit:
                print(f"  ... {len(lines)-limit} more")
        else:
            print("  declined")
    except Exception as e:
        print(f"  error {e}")
    print()


show(CTOR, "Profile::Profile")

# Profile::get
pget = None
for ea in idautils.Functions():
    if (ida_name.get_name(ea) or "") == "_ZN7Profile3getEj":
        pget = ea - BASE
        break
if pget is not None:
    show(pget, "Profile::get")

# the counter and the array
print("=" * 94)
print("globals")
print("=" * 94)
for a, lab in ((0x00C7B788, "counter 0xC7B788"), (0x00C7C304, "Profiles[] 0xC7C304")):
    v = ida_bytes.get_dword(BASE + a)
    print(f"  {lab}: static value = {v:#x}")
    for xr in idautils.XrefsTo(BASE + a, 0):
        f = ida_funcs.get_func(xr.frm)
        print(f"      ref from {xr.frm - BASE:#010x} in "
              f"{ida_name.get_name(f.start_ea) if f else '?'}")

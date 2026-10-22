"""AUDIT the 2,453 string-derived names before trusting them.

Naming a function after a string it references is only valid if the function really is
"the thing that does X". A function that merely contains the literal "SE_OBJ_GET_COIN" might
be the coin sound player -- or a sound-id lookup table builder, or a debug print.

This dumps the pseudocode of a sample of the newly named functions so the names can be
judged against behaviour. Any name that does not match its body is a name we should not
keep, so this is the check that decides whether the batch stands.
"""
import idautils
import ida_funcs
import ida_name
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

SAMPLES = [
    0x00000A44,   # SE_EMY_KAME
    0x00002BC0,   # SE_OBJ_GET_COIN
    0x00007B5C,   # ActorUnitHeap
    0x000082CC,   # PlayerHeap
    0x00021B50,   # SE_SYS_THREE
    0x0002A9F0,   # SE_BOSS_KK_SHIKO
    0x00032ECC,   # power_up
    0x00033D4C,   # SE_OBJ_BOSS  (suspicious: prefix truncation)
]

for rva in SAMPLES:
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    if not f:
        print(f"{rva:#x}: no function")
        continue
    nm = ida_name.get_name(ea)
    n_callers = len(list(idautils.CodeRefsTo(ea, 0)))
    print("=" * 92)
    print(f"{rva:#010x}  {nm}   size {f.end_ea - f.start_ea:#x}   callers {n_callers}")
    print("=" * 92)
    try:
        cf = ida_hexrays.decompile(ea)
    except Exception as e:
        print(f"  error {e}")
        continue
    if not cf:
        print("  declined")
        continue
    for ln in str(cf).splitlines()[:32]:
        print("  " + ln)
    print()

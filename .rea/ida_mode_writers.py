"""READ the two STRB mode-writers: which one is the power-up transition?

0x452EDC and 0x4531F8 both write Player + 0x528 with STRB (byte store), which matches the
field width. One of them is very likely the real power-up transition. This dumps both in full,
lists their callers, and reports whether the caller mentions an item id.
"""
import idautils
import ida_funcs
import ida_name
import ida_hexrays
import ida_bytes
import ida_xref
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

for rva in (0x00452EDC, 0x004531F8, 0x00451FEC):
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    if not f:
        print(f"{rva:#x}: not a function")
        continue
    callers = list(idautils.CodeRefsTo(ea, 0))
    print("=" * 96)
    print(f"{rva:#010x}  {ida_name.get_name(ea)}  size {f.end_ea - f.start_ea:#x}  "
          f"callers {len(callers)}")
    for c in callers[:20]:
        cf = ida_funcs.get_func(c)
        print(f"    called from {c - BASE:#010x} "
              f"({ida_name.get_name(cf.start_ea) if cf else '?'})")
    print("=" * 96)
    try:
        cf = ida_hexrays.decompile(ea)
    except Exception as e:
        print(f"  error {e}")
        continue
    if not cf:
        print("  declined")
        continue
    for ln in str(cf).splitlines()[:95]:
        print("  " + ln)
    print()

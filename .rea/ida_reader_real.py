"""DUMP the actual body reader at 0x78C540 -- and check for a clamp.

The DCD at 0x78C58C encodes `table - pc` with pc = 0x6078C540, so the LDR that consumes it is
inside the function starting at RVA 0x78C540. The instructions just after that pool word are a
different function's prologue, which is why earlier dumps looked confusing.

Of particular interest: immediately before the pool there is

    CMP    R4, #9
    MOV    R0, R4
    MOVWEQ R0, #8
    CMP    R8, #6
    MOVEQ  R0, R4
    STR    R0, [R5,#0x1D8]

`MOVWEQ R0,#8` when R4 == 9 is a clamp-shaped idiom. If the mode index is clamped, then my
earlier statement that "mode 10 reads past the ten entries with no clamp" is WRONG and must be
corrected. This prints the reader function in full so the question is settled from code.
"""
import idautils
import ida_funcs
import ida_name
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

CANDIDATES = [0x0078C540, 0x0078E5C0, 0x0078E630, 0x00795D44, 0x00796018, 0x00798224]

for rva in CANDIDATES:
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    print("=" * 92)
    if not f:
        print(f"{rva:#010x}: not inside a function (may be mid-function or data)")
        continue
    print(f"{rva:#010x}  in func {f.start_ea - BASE:#010x} "
          f"{ida_name.get_name(f.start_ea)}  size {f.end_ea - f.start_ea:#x}")
    print("=" * 92)
    n = 0
    for insn in idautils.Heads(ea, min(f.end_ea, ea + 0x120)):
        print(f"  {insn - BASE:#010x}  {idc.GetDisasm(insn)}")
        n += 1
        if n > 60:
            break
    print()

"""Show the real instruction form of a vtable store, then match it.

FireballBase_ctor decompiles as `*(_DWORD *)a1 = 12395168;` (12395168 = 0xBD22A0). The literal
loading idiom in this image is a PC-relative LDR of the form

    LDR R3, =(dword_60C628C4 - 0x60017F78)

i.e. the literal holds a PC-relative OFFSET, not the address itself, and the `;` comment names the
target. So matching on the numeric value alone will fail. This dumps the real instructions around
the store so the correct pattern is derived from evidence.
"""
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

for rva, label in ((0x00135A90, "FireballBase_ctor"),
                   (0x00794EC0, "Player_ctor")):
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    print("=" * 92)
    print(f"{label} {rva:#010x}")
    print("=" * 92)
    if not f:
        continue
    n = 0
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        d = idc.GetDisasm(insn)
        print(f"  {insn - BASE:#010x}  {d}")
        n += 1
        if n > 40:
            break
    print()

"""VERIFY the gate's index base: is it bit(mode) or bit(mode-1)?

powerup_modes.cpp claims:

    sub  r0, r0, #1        ; index = mMode - 1
    cmp  r0, #9
    bhi  reject
    tst  r2, r1, lsr r0    ; test bit(mMode - 1)

If that is right, then 0x1FB = bits 0,1,3,4,5,6,7,8 corresponds to modes 1,2,4,5,6,7,8,9 and
excludes mode 3 (IceFlower) and mode 10. And 0x3FB adds bit 9 = mode 10, which is exactly what
the Hammer patch needs -- so the shipped hook is correct.

But the decompiled C in sub_60465E4C reads:

    (v7 = *(_DWORD *)(v6 + 1320) - 1, v7 <= 8)
    && ((0x1FBu >> v7) & 1) != 0

which also subtracts 1 before shifting. So both agree the index is mode-1. The remaining
question is whether `v6 + 1320` is the mode field via a *byte* or *word* load, because that
decides whether the value is the mode at all.

This prints the raw instructions at and around 0x465F34 so the whole comparison is visible
rather than inferred from decompiler output.
"""
import idautils
import ida_funcs
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

print("=== 0x465ef0 .. 0x465f60 (the mode-1 test in the gate) ===")
for insn in idautils.Heads(BASE + 0x00465EF0, BASE + 0x00465F60):
    print(f"  {insn - BASE:#010x}  {idc.GetDisasm(insn)}")

print()
print("=== 0x465fd0 .. 0x466020 (second site) ===")
for insn in idautils.Heads(BASE + 0x00465FD0, BASE + 0x00466020):
    print(f"  {insn - BASE:#010x}  {idc.GetDisasm(insn)}")

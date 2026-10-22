"""Is the height-table index in 0x795CDC clamped? Decisive check on a claim I committed.

I wrote in ITEM_GRANT_GATE.md that the mode indexes the height table "directly, with no clamp,
so mode 10 reads past the ten retail entries". That came from Hex-Rays rendering it as
`v6 = flt_60B0C2BC[v5];`, which may hide a bounds check.

This finds the actual table load and index inside 0x795CDC and prints every instruction from
the table load through the store, so the clamp question is answered from raw code. If a clamp
exists, the doc is wrong and gets corrected.
"""
import idautils
import ida_funcs
import ida_bytes
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
FUNC = 0x00795CDC
HEIGHT = 0x00B0C2BC

f = ida_funcs.get_func(BASE + FUNC)
print(f"func {FUNC:#x} .. {(f.end_ea - BASE):#x}  {ida_name.get_name(f.start_ea)}")
print()

# find the pool word that encodes the height table
print("=" * 92)
print(f"pool words encoding flt_60B0C2BC ({HEIGHT:#x})")
print("=" * 92)
pcs = []
for insn in idautils.Heads(f.start_ea, f.end_ea):
    op1 = idc.print_operand(insn, 1)
    if "=" not in op1:
        continue
    disp = idc.get_operand_value(insn, 1)
    if not disp or not (BASE <= disp < BASE + 0xCD1000):
        continue
    w = ida_bytes.get_dword(disp)
    # stored + pc == target  =>  w + pc == HEIGHT (where pc = disp-pool semantics)
    print(f"  {insn - BASE:#010x}  {idc.GetDisasm(insn)}")
    print(f"        pool word {w:#x}  at {disp - BASE:#010x}")
    pcs.append((insn, disp, w))

print()
print("=" * 92)
print("first 40 instructions after the function entry, to see the mode read and indexing")
print("=" * 92)
n = 0
for insn in idautils.Heads(f.start_ea, f.end_ea):
    print(f"  {insn - BASE:#010x}  {idc.GetDisasm(insn)}")
    n += 1
    if n > 40:
        break

"""FIND THE CALLER of Player_setPowerupMode by decoding PC-relative literals correctly.

Two failed searches so far, both for instructive reasons:

  1. looked for code xrefs          -> none
  2. looked for the raw address in data, even and Thumb-bit -> none

Reason 2 can never work. These functions are never loaded with their absolute address. The
compiler emits

    LDR Rt, =func - pc      ; literal pool holds a DELTA
    ADD Rt, PC, Rt          ; add pc back to recover the address

so the pool word is `func - (pool_address + 8)`, not `func`. Searching data for 0x60795CDD was
therefore guaranteed to fail no matter how the function is reached.

This decodes every 4-byte data slot W at address A and tests whether `W + A + 8` (the Thumb
pc convention used by the pool) lands on a target of interest. It also tests a few variants
because the exact pc base depends on how the ADD is placed.

It also confirms the function is complete and not fallen into, so "dead code" can be
distinguished from "reached some way I have not found".
"""
import idautils
import ida_funcs
import ida_bytes
import ida_name
import ida_xref
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

TARGETS = {
    0x00795CDC: "Player_setPowerupMode",
    0x00465E4C: "ItemId_resolveGuardedByPlayerMode",
    0x004F2044: "ItemNameTable_build",
}

print("=" * 92)
print("PC-RELATIVE LITERAL SCAN")
print("=" * 92)
found = {t: [] for t in TARGETS}
for seg_ea in idautils.Segments():
    s = idc.get_segm_start(seg_ea)
    e = idc.get_segm_end(seg_ea)
    segname = idc.get_segm_name(seg_ea)
    a = s
    while a + 4 <= e:
        w = ida_bytes.get_dword(a)
        if w == 0 or w > 0x1000000:
            a += 4
            continue
        for delta, label in ((8, "+8"), (4, "+4"), (0, "+0")):
            tgt = (w + a + delta) & 0xFFFFFFFF
            for t in TARGETS:
                if tgt in (BASE + t, BASE + t + 1):
                    found[t].append((a, segname, label, w))
        a += 4

for t, label in TARGETS.items():
    print(f"  {label}  ({t:#010x})")
    if found[t]:
        for a, segname, lab, w in found[t][:8]:
            print(f"      slot {a - BASE:#010x} in {segname}  word {w:#x}  pc {lab}"
                  f"  -> {base_label if False else ''}")
    else:
        print("      no pc-relative literal found")

# is the function self-contained?
print()
print("=" * 92)
print("is 0x795CDC a complete, well-formed function?")
print("=" * 92)
f = ida_funcs.get_func(BASE + 0x00795CDC)
print(f"  start {f.start_ea - BASE:#010x}  end {f.end_ea - BASE:#010x}  size {f.end_ea - f.start_ea:#x}")
print(f"  flags {f.flags:#x}  does_return {f.does_return()}")
print("  first 4 instrs:")
for insn in idautils.Heads(f.start_ea, f.start_ea + 16):
    print(f"    {insn - BASE:#010x}  {idc.GetDisasm(insn)}")
print("  last 6 instrs:")
heads = list(idautils.Heads(f.end_ea - 32, f.end_ea))
for insn in heads[-6:]:
    print(f"    {insn - BASE:#010x}  {idc.GetDisasm(insn)}")

# does anything fall through into it from the previous function?
prev_end = f.start_ea - 1
prevf = ida_funcs.get_func(prev_end)
print()
print(f"  previous function ends at {prevf.end_ea - BASE:#010x}" if prevf else "  no previous func")
if prevf and prevf.end_ea == f.start_ea:
    print("    -> contiguous; check that the previous one does not fall through")
    for insn in idautils.Heads(prevf.end_ea - 12, prevf.end_ea):
        print(f"      {insn - BASE:#010x}  {idc.GetDisasm(insn)}")

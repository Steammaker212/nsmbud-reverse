"""Two things: what sub_6047488C does, and who CONSUMES the 20-entry animation table.

sub_6047488C is the resolver called 20 times by __Player__applyPowerUpTransform; the results are
stored into an array at player+3632 (0xE30). That array is the runtime animation-id table.

The important question for the Fire Flower symptom is the ORDER MISMATCH:

    registration order (dword_60CA6BB8):
        Kinoko, FireFlower, Penguin, Star, IceFlower, MameKinoko,
        Propeller, NutKinoko, PNutKinoko, PeachCrown          (index 0..9)

    power-up mode order:
        0 Kinoko, 1 FireFlower, 2 Star, 3 IceFlower, 4 Propeller,
        5 MameKinoko, 6 Penguin, 7 NutKinoko, 8 PNutKinoko, 9 PeachCrown

Index 2 is Penguin in one list and Star in the other. If any consumer indexes the registered
array with the MODE directly, then mode 2 (Star) would get Penguin's animation and mode 6
(Penguin) would get Propeller's. That would be a visible bug class -- but note FireFlower is
index 1 in BOTH lists, so FireFlower itself would be unaffected by that particular mismatch.

This resolves sub_6047488C and finds readers of player+0xE30, so the consumption is concrete.
"""
import collections
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

# 1. resolver body
ea = BASE + 0x0047488C
f = ida_funcs.get_func(ea)
print("=" * 94)
print(f"sub_6047488C  {(f.end_ea - f.start_ea) if f else 0:#x} bytes")
print("=" * 94)
if f and (f.end_ea - f.start_ea) < 600:
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        print(f"  {insn - BASE:#010x}  {idc.GetDisasm(insn)}")
try:
    cf = ida_hexrays.decompile(ea)
    if cf:
        print()
        for ln in str(cf).splitlines()[:45]:
            print("  " + ln)
except Exception as e:
    print(f"  err {e}")

# 2. who reads [Rx, #0xE30]
print()
print("=" * 94)
print("readers of player+0xE30 (the 20-entry animation id array)")
print("=" * 94)
hits = collections.defaultdict(list)
for fn in idautils.Functions():
    g = ida_funcs.get_func(fn)
    if not g:
        continue
    for insn in idautils.Heads(g.start_ea, g.end_ea):
        d = idc.GetDisasm(insn)
        if "#0xE30]" in d and ("LDR" in d or "ADD" in d):
            hits[fn - BASE].append((insn - BASE, d))
print(f"  functions: {len(hits)}")
for rva, lst in sorted(hits.items(), key=lambda kv: -len(kv[1]))[:20]:
    nm = ida_name.get_name(BASE + rva) or f"sub_{rva:X}"
    print(f"  {rva:#010x}  {len(lst):>2} ref(s)  {nm}")
    for site, d in lst[:3]:
        print(f"      {site:#010x}  {d}")

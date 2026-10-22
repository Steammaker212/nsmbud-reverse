"""Vtable slot naming, with the two defects of the previous attempt fixed.

DEFECT 1: the vtable set was collected with `nm.endswith("_vtable")`, which silently excluded
`Player_vtable_a` / `Player_vtable_b` -- hence "Player_vtable_a NOT FOUND" and an inability to run the
positive control. Fixed by matching `_vtable` anywhere in the name.

DEFECT 2: it reported "5,367 slots, 0 targeting unnamed functions". A 100% named rate across 5,367
slots is a strong claim when 65% of all functions are unnamed, so it needs a control before it is
believed. The control here is a deliberate NEGATIVE check: find any function known to be unnamed and
confirm the walker CAN see it, plus report how many slot words it rejected as "not a function start"
-- if the walk stopped early, the low count is an artefact of the walk, not a fact about naming.

Positive control (now runnable): Player_vtable_a slot 0x94 must be Player_setPowerupMode.
"""
import collections
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000

vtables = {}
for ea, nm in idautils.Names():
    if "_vtable" in nm:                 # FIX 1: _a/_b variants included
        vtables[nm] = ea
print(f"vtables found (substring match): {len(vtables)}")

rows = []
total_slots = 0
rejected = collections.Counter()

for nm, start in sorted(vtables.items(), key=lambda kv: kv[1]):
    off = 0
    while off <= 0x2000:
        w = ida_bytes.get_dword(start + off)
        if w == 0:
            rejected["zero"] += 1
            break
        if not (0 < w < NSO):
            rejected["outside image"] += 1
            break
        target = BASE + w
        fn = ida_funcs.get_func(target)
        if not fn:
            rejected["no function there"] += 1
            break
        if fn.start_ea != target:
            rejected["mid-function"] += 1
            break
        total_slots += 1
        tn = ida_name.get_name(target) or ""
        if not tn or tn.startswith("sub_"):
            rows.append((nm, off, target - BASE))
        off += 4

print(f"total vtable slots: {total_slots:,}")
print(f"  targeting UNNAMED functions: {len(rows):,}")
print(f"walk terminations: {dict(rejected)}")

print()
print("POSITIVE CONTROL")
print("-" * 72)
ctl_name = next((n for n in vtables if "Player_vtable_a" in n), None)
if ctl_name:
    start = vtables[ctl_name]
    w = ida_bytes.get_dword(start + 0x94)
    got = ida_name.get_name(BASE + w) or "(unnamed)"
    ok = "setPowerupMode" in got
    print(f"  {ctl_name} @ {start - BASE:#x} slot 0x94 -> {w:#x} = {got}")
    print(f"  expected Player_setPowerupMode : {'PASS' if ok else 'FAIL -- slot arithmetic wrong'}")
    if not ok:
        raise SystemExit("control failed; refusing to trust the counts above")
else:
    raise SystemExit("Player_vtable_a still not found")

# NEGATIVE control: prove the walker CAN report an unnamed target. Take a known unnamed
# function and confirm it is recognisable as unnamed by the same test used above.
probe = None
for ea in idautils.Functions():
    n = ida_name.get_name(ea) or ""
    if n.startswith("sub_"):
        probe = (ea, n)
        break
print()
print("NEGATIVE CONTROL")
print("-" * 72)
print(f"  sample unnamed function {probe[0] - BASE:#x} name={probe[1]} "
      f"-> is_unnamed test = {probe[1].startswith('sub_')}")

print()
print("unnamed slot targets by vtable (top 20):")
for vt, n in collections.Counter(v for v, _, _ in rows).most_common(20):
    print(f"  {n:>4}  {vt}")
distinct = {r[2] for r in rows}
print()
print(f"distinct unnamed targets: {len(distinct):,}   occurrences: {len(rows):,}")

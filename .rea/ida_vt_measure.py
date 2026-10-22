"""Vtable-slot naming: measure first, and validate against a KNOWN slot before naming anything.

The remaining unnamed functions have no strings, so the next verifiable signal is virtual dispatch:
every vtable slot is a function the class is known to implement. For each authoritative `<Class>_vtable`
(220 of them, built from the binary's own 134 `_ZTV` symbols), walk the table and see which slot
targets are still unnamed.

The name this can justify is narrow but checkable:

    <Class>_vf<slot>    where <slot> is the vtable byte offset
    implies: this function is the virtual implementation at <slot> in <Class>'s vtable

That is exactly the claim already used for 564 existing `_vf` names, and it is falsifiable by reading
one word of the table.

POSITIVE CONTROL, stated up front: `Player_vtable_a` slot 0x94 (37) must resolve to
`Player_setPowerupMode`, already established from disassembly in an earlier round. If that slot does
NOT come out as expected, the slot arithmetic is wrong and nothing below can be trusted.

This run only MEASURES and reports. Naming is a separate, gated step.
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

# 1. collect vtable start addresses from the names we already trust
vtables = {}
for ea, nm in idautils.Names():
    if nm.endswith("_vtable"):
        vtables[nm] = ea
print(f"vtables found: {len(vtables)}")

# 2. walk each table. Vtable layout: [-2]=offset-to-top, [-1]=RTTI, [0..]=slots
rows = []
total_slots = 0
unnamed_slots = 0
for nm, start in sorted(vtables.items(), key=lambda kv: kv[1]):
    slots = []
    off = 0
    while True:
        ea = start + off
        w = ida_bytes.get_dword(ea)
        if w == 0 or not (0 < w < NSO):
            break                     # end of table / not a slot
        target = BASE + w
        fn = ida_funcs.get_func(target)
        if not fn or fn.start_ea != target:
            break                     # points mid-function: table ended
        slots.append((off, target))
        off += 4
        if off > 0x2000:
            break
    total_slots += len(slots)
    for off, target in slots:
        tn = ida_name.get_name(target) or ""
        if not tn or tn.startswith("sub_"):
            unnamed_slots += 1
            rows.append((nm, off, target - BASE))

print(f"total vtable slots: {total_slots:,}")
print(f"  targeting unnamed functions: {unnamed_slots:,}")

# 3. POSITIVE CONTROL
print()
print("POSITIVE CONTROL")
print("-" * 72)
ctl = None
for nm, start in vtables.items():
    if "Player_vtable_a" in nm:
        ctl = (nm, start)
        break
if ctl:
    nm, start = ctl
    w = ida_bytes.get_dword(start + 0x94)
    tgt = BASE + w
    got = ida_name.get_name(tgt) or "(unnamed)"
    print(f"  {nm} slot 0x94 -> {w:#x} = {got}")
    print(f"  expected Player_setPowerupMode : "
          f"{'PASS' if 'setPowerupMode' in got else 'FAIL -- slot arithmetic wrong'}")
else:
    print("  Player_vtable_a NOT FOUND -- cannot validate, refusing to trust results")

# 4. how concentrated is the unnamed set?
print()
print("unnamed slot targets by vtable (top 20):")
by_vt = collections.Counter(vt for vt, _, _ in rows)
for vt, n in by_vt.most_common(20):
    print(f"  {n:>4}  {vt}")

distinct = {r[2] for r in rows}
print()
print(f"distinct unnamed targets: {len(distinct):,}  (vs {len(rows):,} slot occurrences)")

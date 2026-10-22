"""CURRENT NAMING COVERAGE, broken down so the remaining work is visible.

Reports:
  * total functions, named vs sub_
  * named by category: mangled _ZN (compiler's own), Actor_*_build, *_ref, Player_*, other
  * which regions still have the most unnamed functions
  * the largest unnamed functions -- those are the ones most worth naming, since a big function
    is more likely to be important than a 4-byte thunk
"""
import collections
import idautils
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

REGIONS = [
    (0x000000, 0x0F0000, "core"), (0x0F0000, 0x200000, "actor_construction"),
    (0x200000, 0x300000, "actors_a"), (0x300000, 0x450000, "actors_b"),
    (0x450000, 0x480000, "powerup"), (0x480000, 0x600000, "systems"),
    (0x600000, 0x780000, "states"), (0x780000, 0x7C0000, "player"),
    (0x7C0000, 0x800000, "player_states"), (0x800000, 0x9A0000, "libs"),
]


def region_of(rva):
    for lo, hi, n in REGIONS:
        if lo <= rva < hi:
            return n
    return "?"


def category(nm):
    if nm.startswith("_ZN") or nm.startswith("_ZTV") or nm.startswith("_ZTI"):
        return "mangled C++"
    if nm.startswith("Actor_") and nm.endswith("_build"):
        return "actor debug tag"
    if "_ref" in nm:
        return "string ref"
    if nm.startswith("sub_"):
        return "unnamed"
    return "other named"


cats = collections.Counter()
total = 0
per_region_named = collections.Counter()
per_region_total = collections.Counter()
unnamed = []

for ea in idautils.Functions():
    total += 1
    nm = ida_name.get_name(ea) or ""
    c = category(nm)
    cats[c] += 1
    rva = ea - BASE
    r = region_of(rva)
    per_region_total[r] += 1
    if c != "unnamed":
        per_region_named[r] += 1
    else:
        f = ida_funcs.get_func(ea)
        if f:
            unnamed.append((f.end_ea - f.start_ea, rva, r))

print("=" * 84)
print(f"TOTAL FUNCTIONS: {total:,}")
print("=" * 84)
for k, v in cats.most_common():
    print(f"  {k:<18} {v:>7,}  {100.0*v/total:5.1f}%")
named = total - cats["unnamed"]
print(f"  {'NAMED':<18} {named:>7,}  {100.0*named/total:5.1f}%")

print()
print("=" * 84)
print("PER REGION")
print("=" * 84)
for lo, hi, n in REGIONS:
    t = per_region_total.get(n, 0)
    g = per_region_named.get(n, 0)
    if t:
        print(f"  {n:<20} {g:>6,} / {t:>6,}  {100.0*g/t:5.1f}%")

print()
print("=" * 84)
print("LARGEST UNNAMED FUNCTIONS (most worth naming next)")
print("=" * 84)
unnamed.sort(reverse=True)
for size, rva, r in unnamed[:25]:
    print(f"  {rva:#010x}  {size:>6,} bytes  {r}")

"""SIZE-WEIGHTED NAMING COVERAGE: what "important" should actually mean here.

Counting functions treats a 4-byte thunk and a 27 KB system routine as equal. They are not.
This weights by function size, which is a defensible proxy for importance: large functions hold
the real logic, small ones are tail-call thunks, destructors and stubs.

Reports:
  * named vs unnamed by BYTE COUNT, not function count
  * the same per region
  * identifies the "long tail": how many functions hold 80% of all bytes, which is the set
    actually worth naming
  * ranks unnamed functions by size so the next targets are explicit

This is the measurement that tells me whether 29.4% by count is already most of the code by
volume, or whether the bulk is still unnamed.
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


def is_named(nm):
    return bool(nm) and not nm.startswith("sub_")


tot_bytes = 0
named_bytes = 0
tot_fn = 0
named_fn = 0
reg = collections.defaultdict(lambda: [0, 0, 0, 0])   # totb, namedb, totfn, namedfn
rows = []

for ea in idautils.Functions():
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    size = f.end_ea - f.start_ea
    if size <= 0:
        continue
    nm = ida_name.get_name(ea) or ""
    nmd = is_named(nm)
    r = region_of(ea - BASE)
    tot_bytes += size
    tot_fn += 1
    reg[r][0] += size
    reg[r][2] += 1
    if nmd:
        named_bytes += size
        named_fn += 1
        reg[r][1] += size
        reg[r][3] += 1
    rows.append((size, ea - BASE, nmd, r))

print("=" * 86)
print("SIZE-WEIGHTED COVERAGE")
print("=" * 86)
print(f"  functions : {named_fn:>7,} / {tot_fn:>7,} named   = {100.0*named_fn/tot_fn:5.1f}%")
print(f"  bytes     : {named_bytes:>7,} / {tot_bytes:>7,} named   = "
      f"{100.0*named_bytes/tot_bytes:5.1f}%")

print()
print("=" * 86)
print("PER REGION (by bytes)")
print("=" * 86)
print(f"  {'region':<20}{'named bytes':>13}{'total bytes':>13}{'%':>8}{'fn %':>8}")
for lo, hi, n in REGIONS:
    tb, nb, tf, nf = reg[n]
    if tb:
        print(f"  {n:<20}{nb:>13,}{tb:>13,}{100.0*nb/tb:7.1f}%{100.0*nf/tf:7.1f}%")

print()
print("=" * 86)
print("THE LONG TAIL: how few functions hold most of the bytes")
print("=" * 86)
rows.sort(reverse=True)
cum = 0
marks = [0.5, 0.8, 0.9]
mi = 0
for i, (size, rva, nmd, r) in enumerate(rows, 1):
    cum += size
    while mi < len(marks) and cum >= marks[mi] * tot_bytes:
        print(f"  {marks[mi]*100:.0f}% of all bytes live in the {i:,} largest functions "
              f"(of {tot_fn:,})")
        mi += 1
    if mi >= len(marks):
        break

print()
print("=" * 86)
print("UNNAMED BY SIZE BUCKET")
print("=" * 86)
buckets = [(0, 16), (16, 64), (64, 256), (256, 1024), (1024, 4096), (4096, 1 << 30)]
for lo, hi in buckets:
    t = n = 0
    for size, rva, nmd, r in rows:
        if lo <= size < hi:
            t += 1
            if not nmd:
                n += 1
    if t:
        print(f"  {lo:>6}..{hi if hi < (1<<30) else 'inf':>6} bytes : "
              f"{n:>6,} unnamed of {t:>6,}  ({100.0*n/t:4.1f}%)")

print()
print("=" * 86)
print("TOP 20 UNNAMED BY SIZE")
print("=" * 86)
shown = 0
for size, rva, nmd, r in rows:
    if nmd:
        continue
    print(f"  {rva:#010x}  {size:>7,} b  {r}")
    shown += 1
    if shown >= 20:
        break

"""MEASURE what a "decompile everything" pass would actually cost.

The current bulk gate excludes a function if
    (no code xref  AND  not named)  or  (size < 0x30 AND not named)

With 66.5% of functions having zero code xrefs, that gate is what limits the corpus to ~16k of
49,470. But before removing it I need the arithmetic, because "decompile everything" is only a good
idea if the output stays readable and the run stays bounded.

This counts, over all 49,470 functions, how many fall into each exclusion bucket, and the total
byte volume -- so the decision to expand is made on numbers rather than enthusiasm.

Buckets:
  A  decompilable now (passes the gate)
  B  excluded only by no-xref
  C  excluded only by small size
  D  excluded by both
  E  excluded by name (j_, nullsub_, thunk_, std templates)
  F  Hex-Rays could not decompile (counted separately after a trial)
"""
import collections
import idautils
import ida_funcs
import ida_name
import ida_xref
import ida_bytes
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
MIN_SIZE = 0x30
SKIP_PREFIX = ("j_", "j__", "nullsub_", "thunk_")


def has_xref(ea):
    xb = ida_xref.xrefblk_t()
    ok = xb.first_to(ea, ida_xref.XREF_CODE)
    while ok:
        return True
    return False


stats = collections.Counter()
bytes_by = collections.Counter()
size_hist = collections.Counter()

for ea in idautils.Functions():
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    nm = ida_name.get_name(ea) or ""
    size = f.end_ea - f.start_ea
    is_named = bool(nm) and not nm.startswith("sub_")
    xr = has_xref(ea)
    small = size < MIN_SIZE
    named_cls = any(nm.startswith(p) for p in SKIP_PREFIX)

    if named_cls:
        b = "E_skipname"
    elif not xr and not is_named and small:
        b = "D_both"
    elif not xr and not is_named:
        b = "B_noxref"
    elif small and not is_named:
        b = "C_small"
    else:
        b = "A_decompilable"

    stats[b] += 1
    bytes_by[b] += size
    size_hist[(b, min(size // 0x100, 8))] += 1

total = sum(stats.values())
total_bytes = sum(bytes_by.values())
print("=" * 88)
print(f"TOTAL FUNCTIONS: {total:,}   TOTAL BYTES: {total_bytes:,}")
print("=" * 88)
for b in ("A_decompilable", "B_noxref", "C_small", "D_both", "E_skipname"):
    n = stats[b]
    print(f"  {b:<16} {n:>7,}  {100.0*n/total:5.1f}%   {bytes_by[b]:>10,} bytes")

print()
print("  if the no-xref gate is removed (B and D become eligible):")
add = stats["B_noxref"] + stats["D_both"]
print(f"    adds {add:,} functions, {bytes_by['B_noxref']+bytes_by['D_both']:,} bytes")
print(f"    new total {stats['A_decompilable']+add:,} of {total:,}"
      f" = {100.0*(stats['A_decompilable']+add)/total:.1f}%")

print()
print("  if the size gate is ALSO removed (C too):")
add2 = add + stats["C_small"]
print(f"    adds {stats['C_small']:,} more, {bytes_by['C_small']:,} bytes")
print(f"    new total {stats['A_decompilable']+add2:,} of {total:,}"
      f" = {100.0*(stats['A_decompilable']+add2)/total:.1f}%")

print()
print("=" * 88)
print("size distribution of the newly-eligible no-xref bucket (min 0x100-sized bins)")
print("=" * 88)
for i in range(9):
    n = size_hist[("B_noxref", i)]
    if n:
        lo = i * 0x100
        hi = "inf" if i == 8 else f"{lo+0x100:#x}"
        print(f"  {lo:#06x} - {hi:>6} : {n:>6,}")

"""Prioritise the unnamed functions WITHOUT decompiling everything.

The first attempt walked `idautils.Heads(start, end)` for 32,173 functions to find string
references, which is O(total instructions) in IDAPython and ran for over ten minutes without
finishing. The ranking does not need that: caller count and size come from cheap indexed lookups,
and string references can be fetched for the TOP FEW ONLY once the ranking exists.

So: rank first (cheap), then gather evidence for the head of the list (bounded).
"""
import json
import ida_funcs
import ida_auto
import idautils
import idc

idc.auto_wait()
BASE = 0x60000000
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\unnamed_ranked.json"

rows = []
for ea in idautils.Functions():
    nm = ida_funcs.get_func_name(ea) or ""
    if not nm.startswith("sub_"):
        continue
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    rows.append({
        "name": nm,
        "va": ea,
        "rva": ea - BASE,
        "size": f.end_ea - f.start_ea,
        "callers": len(list(idautils.CodeRefsTo(ea, 0))),
    })

print("unnamed functions: %d" % len(rows))

print()
print("caller-count distribution:")
buckets = [(0, 0), (1, 1), (2, 4), (5, 9), (10, 19), (20, 49), (50, 99), (100, 10 ** 9)]
for lo, hi in buckets:
    n = sum(1 for r in rows if lo <= r["callers"] <= hi)
    label = "%d" % lo if lo == hi else ("%d-%d" % (lo, hi) if hi < 10 ** 9 else "%d+" % lo)
    print("  %-8s : %6d" % (label, n))

rows.sort(key=lambda r: (-r["callers"], -r["size"]))
print()
print("top 30 by callers:")
for r in rows[:30]:
    print("  %-16s RVA 0x%06X  size 0x%-5X callers %d"
          % (r["name"], r["rva"], r["size"], r["callers"]))

with open(OUT, "w", encoding="utf-8") as fh:
    json.dump({"data": rows}, fh)
print()
print("wrote %s" % OUT)

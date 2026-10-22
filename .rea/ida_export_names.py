"""Export current names to functions_all.json for the corpus and symbol generators.

IMPORTANT: this must export ALL named addresses, not only `idautils.Functions()`.

An earlier version of this script used Functions() alone, and regenerating the .sym from it dropped
the file from 19,593 symbols to 7,997. The cause was not a loss of names: the <Class>_vtable (217)
and <Class>_vf<slot> (564) families are VTABLE WORDS IN .data, not function start addresses, so
Functions() never sees them -- yet they are exactly what a linker script needs. The generators want
the full named-address set.

So the export walks idautils.Names() (every named address, code and data) and additionally records
each function's size where the address begins one.

Refuses to write if the sanity checks fail, because a bad export silently poisons both the generated
headers and the .sym file.
"""
import json
import idautils
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO_MEM = 0x00CD1000
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\functions_all.json"

rows = []
n_func = 0
for ea, nm in idautils.Names():
    if not nm:
        continue
    f = ida_funcs.get_func(ea)
    size = (f.end_ea - ea) if (f and f.start_ea == ea) else 0
    if size:
        n_func += 1
    rows.append({"address": f"0x{ea:08X}", "name": nm,
                 "rva": f"0x{ea - BASE:08X}", "size": size})

print(f"named addresses exported: {len(rows):,}")
print(f"  of which function starts: {n_func:,}")
print(f"  data / other            : {len(rows) - n_func:,}")

in_image = [r for r in rows if 0 <= int(r["rva"], 16) < NSO_MEM]
named = [r for r in rows if not r["name"].startswith("sub_")]
print(f"  inside image            : {len(in_image):,}")
print(f"  non-sub_ names          : {len(named):,}")

# sanity: the vtable families that a function-only export loses must be present
n_vt = sum(1 for r in rows if r["name"].endswith("_vtable"))
n_vf = sum(1 for r in rows if "_vf" in r["name"])
print(f"  <Class>_vtable names    : {n_vt}")
print(f"  <Class>_vf<slot> names  : {n_vf}")

assert len(rows) > 30000, f"too few names ({len(rows)})"
assert n_vt > 150, f"vtable family missing ({n_vt}) -- export is probably function-only again"
assert n_vf > 400, f"_vf family missing ({n_vf}) -- export is probably function-only again"

seen = {}
ci_dupes = []
for r in rows:
    k = r["name"].lower()
    if k in seen:
        ci_dupes.append((seen[k], r["name"]))
    seen[k] = r["name"]
print(f"  case-insensitive duplicate pairs: {len(ci_dupes)}")
for a, b in ci_dupes[:8]:
    print(f"      {a}  <->  {b}")

with open(OUT, "w", encoding="utf-8") as f:
    json.dump({"data": rows}, f)
print()
print(f"wrote {OUT}")

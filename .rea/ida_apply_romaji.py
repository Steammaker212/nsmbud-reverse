"""APPLY the 767 romanized actor names to IDA.

Each name comes from the developer's own Japanese debug tag, transliterated to ASCII
because IDA rejects non-ASCII identifiers. The mapping is committed alongside as
decompiled/data/actor_names_romaji.txt, which keeps the original tag next to each name so
the transliteration stays auditable.

Names are only applied where the address is still a `sub_` default, so nothing already
named from a mangled C++ symbol is overwritten.
"""
import json
import ida_funcs
import ida_name
import idc
import ida_auto
import idaapi

idc.auto_wait()
BASE = 0x60000000
SRC = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\out_tags_romaji.json"

rows = json.load(open(SRC, encoding="utf-8"))
out = []
applied = skipped_named = skipped_func = failed = 0

for r in rows:
    ea = BASE + r["ctor_rva"]
    cur = ida_name.get_name(ea) or ""
    if cur and not (cur.startswith("sub_") or cur.startswith("nullsub_")):
        skipped_named += 1
        continue
    f = ida_funcs.get_func(ea)
    if not f or f.start_ea != ea:
        skipped_func += 1
        continue
    name = f"Actor_{r['ident']}_build"
    if len(name) > 100:
        name = name[:100]
    if ida_name.set_name(ea, name, ida_name.SN_NOWARN):
        applied += 1
    else:
        failed += 1
        if failed <= 5:
            out.append(f"  FAILED {r['ctor_rva']:#010x} -> {name}")

print(f"rows                : {len(rows)}")
print(f"applied             : {applied}")
print(f"skipped (already nm): {skipped_named}")
print(f"skipped (not a func): {skipped_func}")
print(f"failed              : {failed}")
for o in out:
    print(o)

# coverage
import idautils

REGIONS = [
    (0x000000, 0x0F0000, "core"), (0x0F0000, 0x200000, "actor_construction"),
    (0x200000, 0x300000, "actors_a"), (0x300000, 0x450000, "actors_b"),
    (0x450000, 0x480000, "powerup"), (0x480000, 0x600000, "systems"),
    (0x600000, 0x780000, "states"), (0x780000, 0x7C0000, "player"),
    (0x7C0000, 0x800000, "player_states"), (0x800000, 0x9A0000, "libs"),
]
stats = {}
for ea in idautils.Functions():
    rva = ea - BASE
    for lo, hi, n in REGIONS:
        if lo <= rva < hi:
            d = stats.setdefault(n, [0, 0])
            d[1] += 1
            nm = ida_name.get_name(ea) or ""
            if nm and not (nm.startswith("sub_") or nm.startswith("nullsub_")):
                d[0] += 1
            break

print()
print("COVERAGE")
tn = tt = 0
for lo, hi, n in REGIONS:
    a, b = stats.get(n, [0, 0])
    tn += a
    tt += b
    print(f"  {n:<22}{a:>8,}{b:>9,}{100.0 * a / b if b else 0:>6.1f}%")
print(f"  {'TOTAL':<22}{tn:>8,}{tt:>9,}{100.0 * tn / tt:>6.1f}%")

idaapi.save_database("", 0)
print("saved")

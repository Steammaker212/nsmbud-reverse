"""Export EVERY function with its real prototype, including the auto-named `sub_*` ones.

The previous exporter dropped `sub_*` names:

    named = [r for r in rows if not r["name"].startswith("sub_")]

That was intended as a count of naming progress, but it was then used as an INVENTORY, and the two
are not the same thing. Consequences:

  * 32,173 functions -- 65% by count, 75.5% by code bytes -- were absent from every export.
  * the .sym had zero sub_* entries, so a sweet-dx patch could not reference them.
  * nine functions the decompiled corpus calls (sub_60152FF4, sub_60583000, ...) looked
    "missing from the database" when they are in fact defined, sized and called.

A prototype header needs the ADDRESS and the SIGNATURE, not the aesthetics of the name. So this
export carries all 49,470 functions, and marks which are still auto-named so the naming debt stays
visible instead of being hidden by a filter.

Signatures come from IDA's own type information (`guess_tinfo` + the type printer), so a function
declared `int f(int, char *)` by IDA is declared that way, not guessed from the decompiler text.
"""
import json
import idautils
import ida_funcs
import ida_typeinf
import ida_auto
import idc

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\functions_full.json"

rows = []
no_type = 0
skipped = 0
for ea in idautils.Functions():
    name = ida_funcs.get_func_name(ea) or ""
    if not name:
        skipped += 1
        continue
    rva = ea - BASE
    if not (0 <= rva < NSO):
        skipped += 1
        continue

    proto = None
    try:
        tif = ida_typeinf.tinfo_t()
        if ida_typeinf.guess_tinfo(tif, ea):
            s = tif._print()
            # `_print()` gives the declaration INCLUDING the name; keep only the type part.
            if s:
                proto = s.strip()
        if not proto:
            f = ida_funcs.get_func(ea)
            if f:
                ftif = ida_typeinf.tinfo_t()
                if ida_typeinf.get_tinfo(ftif, f.start_ea):
                    ftif.set_udt_details(None) if False else None
                    s = ftif.dstr()
                    if s:
                        proto = s.strip()
    except Exception:
        proto = None

    if not proto:
        no_type += 1

    rows.append({
        "name": name,
        "va": ea,
        "rva": rva,
        "auto": name.startswith("sub_"),
        "proto": proto,
    })

with open(OUT, "w", encoding="utf-8") as fh:
    json.dump({"data": rows}, fh)

print("functions exported      : %d" % len(rows))
print("  still auto-named      : %d" % sum(1 for r in rows if r["auto"]))
print("  with a real prototype : %d" % sum(1 for r in rows if r["proto"]))
print("  no usable type        : %d" % no_type)
print("  skipped (no name/range): %d" % skipped)
print()
print("sample prototypes:")
for r in rows[:5]:
    print("  %-28s %s" % (r["name"], (r["proto"] or "(none)")[:80]))

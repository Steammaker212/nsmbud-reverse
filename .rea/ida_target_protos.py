"""Decompile nine specific functions and emit exact prototypes for them.

These are the only identifiers in the corpus that are CALLED but cannot be declared from any existing
header, because the export that fed the headers filtered them out (`sub_*`). Each one is a real,
defined function with a known size and known callers -- sub_60583000 alone has 40.

The signature must come from the decompiler, not from `guess_tinfo`: guess_tinfo returns `int()` for
most functions in this image, and declaring `f(void)` would contradict every call site. The
decompiler's own signature is the one the body will be generated with, so a prototype taken from it
cannot conflict.

Output is a small header, and a JSON record so the choice can be audited later.
"""
import json
import ida_funcs
import ida_hexrays
import ida_auto
import idc

idc.auto_wait()
ida_hexrays.init_hexrays_plugin()

BASE = 0x60000000
OUT_JSON = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\target_protos.json"

TARGETS = [
    "sub_60152FF4", "sub_6015DF58", "sub_60236E40", "sub_6050A4EC",
    "sub_60583000", "sub_6058385C", "sub_605B6238", "sub_6079AE3C",
    "sub_60959BAC",
]

rows = []
for nm in TARGETS:
    ea = idc.get_name_ea_simple(nm)
    row = {"name": nm, "va": ea, "rva": ea - BASE if ea != idc.BADADDR else None}
    if ea == idc.BADADDR:
        row["error"] = "name not found"
        rows.append(row)
        continue
    f = ida_funcs.get_func(ea)
    if not f:
        row["error"] = "not a function"
        rows.append(row)
        continue
    row["size"] = f.end_ea - f.start_ea
    try:
        cfunc = ida_hexrays.decompile(ea)
        if cfunc is None:
            row["error"] = "decompile returned None"
            rows.append(row)
            continue
        # lvars/type of the function itself, printed as a declaration
        tif = cfunc.type
        decl = tif._print(nm) if tif else None
        row["decl"] = decl
    except Exception as e:
        row["error"] = "decompile failed: %s" % e
    rows.append(row)

with open(OUT_JSON, "w", encoding="utf-8") as fh:
    json.dump({"data": rows}, fh)

print("=== target prototypes ===")
for r in rows:
    print()
    print("%s  RVA 0x%X" % (r["name"], r["rva"] if r["rva"] is not None else -1))
    if "error" in r:
        print("    ERROR: %s" % r["error"])
    else:
        print("    size: 0x%X" % r["size"])
        print("    decl: %s" % r.get("decl"))

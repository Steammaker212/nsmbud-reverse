"""Export every function of the authoritative database as raw Hex-Rays text.

Run headless on a COPY of main.i64:

    idat.exe -A -S"export_all.py" auth.i64

Writes a single JSONL file: one record per function with the exact
Hex-Rays output. Nothing is post-processed here; the raw text is the
input to the structuring stage.
"""
import json
import os
import time

import ida_auto
import ida_funcs
import ida_hexrays
import ida_name
import idautils
import idc

OUT_DIR = r"C:\Users\Saif Khan\Downloads\main.idb\_work\export"


def main():
    ida_auto.auto_wait()
    if not ida_hexrays.init_hexrays_plugin():
        print("FATAL: hexrays unavailable")
        return

    os.makedirs(OUT_DIR, exist_ok=True)
    path = os.path.join(OUT_DIR, "all_functions.jsonl")

    eas = sorted(idautils.Functions())
    total = len(eas)
    print("EXPORT_START total=%d" % total)

    ok = 0
    failed = 0
    t0 = time.time()
    with open(path, "w", encoding="utf-8") as fh:
        for i, ea in enumerate(eas):
            name = ida_name.get_name(ea) or ""
            f = ida_funcs.get_func(ea)
            if not f:
                continue
            rec = {
                "ea": ea,
                "name": name,
                "end": f.end_ea,
                "size": f.end_ea - f.start_ea,
                "c": None,
                "err": None,
            }
            try:
                cf = ida_hexrays.decompile(ea)
                if cf is None:
                    rec["err"] = "decompile_returned_none"
                    failed += 1
                else:
                    rec["c"] = str(cf)
                    ok += 1
            except Exception as exc:
                rec["err"] = "%s: %s" % (type(exc).__name__, exc)
                failed += 1
            fh.write(json.dumps(rec, ensure_ascii=False) + "\n")
            if (i + 1) % 5000 == 0:
                fh.flush()
                print("PROGRESS %d/%d ok=%d failed=%d %.1fs" % (i + 1, total, ok, failed, time.time() - t0))

    print("EXPORT_DONE total=%d ok=%d failed=%d secs=%.1f" % (total, ok, failed, time.time() - t0))
    print("OUT %s" % path)


main()
idc.qexit(0)

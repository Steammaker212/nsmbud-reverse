"""Decompile specific functions from main.i64 and write each to its own .c file.

Needed because the corpus lost three `goto` targets (`LABEL_134`, `LABEL_484`, `LABEL_485` in player.c):
no definition of them survives anywhere in the repository, so the merged file is not a trustworthy source
for them. Re-running Hex-Rays on the owning function produces a fresh decompilation WITH the labels, and
that is evidence rather than a guess.

Set NSMBUDX_RVAS to a comma-separated list of RVAs (hex or decimal) and NSMBUDX_OUTDIR for the output.
"""
import os

import ida_funcs
import ida_hexrays
import idaapi

idaapi.auto_wait()

outdir = os.environ.get("NSMBUDX_OUTDIR", r"C:\Users\Saif Khan\Downloads\main.idb\.rea\redecomp")
os.makedirs(outdir, exist_ok=True)
rvas = []
for tok in os.environ.get("NSMBUDX_RVAS", "").split(","):
    tok = tok.strip()
    if tok:
        rvas.append(int(tok, 0))

if not ida_hexrays.init_hexrays_plugin():
    print("Hex-Rays unavailable")
else:
    for rva in rvas:
        ea = 0x60000000 + rva if rva < 0x60000000 else rva
        fn = ida_funcs.get_func(ea)
        if fn is None:
            print("0x%08X : no function" % ea)
            continue
        try:
            cf = ida_hexrays.decompile(fn.start_ea)
        except Exception as exc:                # noqa: BLE001
            print("0x%08X : decompile failed %s" % (ea, exc))
            continue
        if cf is None:
            print("0x%08X : null result" % ea)
            continue
        text = str(cf)
        path = os.path.join(outdir, "sub_%08X.c" % ea)
        with open(path, "w", encoding="utf-8") as fh:
            fh.write(text)
        labels = sorted(set(w for w in text.split() if w.startswith("LABEL_")))
        print("0x%08X -> %s  (%d lines, labels: %s)"
              % (ea, os.path.basename(path), text.count("\n"), ",".join(labels[:8]) or "none"))
print("done")

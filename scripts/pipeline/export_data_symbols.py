"""Export every named data symbol so the corpus can declare it.

Function names are covered by the per-group headers. Data the decompiled bodies
refer to (``PlayerLookTarget_vtable``, ``..._instance``, string tables) also has
a real name in the database; this exports those names with their address and
size so the corpus can emit ``extern`` declarations instead of failing to link
an unknown identifier.

Run headless:
    idat.exe -A -S"export_data_symbols.py" <db.i64>
"""
import json

import ida_auto
import ida_bytes
import ida_funcs
import ida_name
import idautils
import idc

OUT = r"C:\Users\Saif Khan\Downloads\main.idb\_work\data_symbols.json"


def main():
    ida_auto.auto_wait()
    rows = []
    for ea, name in idautils.Names():
        if not name:
            continue
        # Skip function names: those are exported with signatures already.
        if ida_funcs.get_func(ea) is not None:
            continue
        if name.startswith(("loc_", "sub_", "nullsub_", "unk_", "byte_", "word_",
                            "dword_", "qword_", "off_", "asc_", "algn_")):
            continue
        size = ida_bytes.get_item_size(ea)
        rows.append({
            "ea": ea,
            "name": name,
            "size": size if 0 < size < (1 << 20) else 0,
            "is_str": bool(ida_bytes.get_flags(ea) & ida_bytes.FF_0STRO),
            "is_off": bool(ida_bytes.get_flags(ea) & ida_bytes.FF_0OFF),
        })
    with open(OUT, "w", encoding="utf-8") as fh:
        json.dump(rows, fh)
    print("DATA_SYMBOLS %d" % len(rows))


main()
idc.qexit(0)

"""Export every struct/union layout the database knows, with member offsets.

The held-back functions use `->` because Hex-Rays had a struct type for them.
Those types live in the database's local type library, so their member offsets
are measured facts, not guesses -- exporting them is what lets the arrow
accesses become `FIELD_U*(base, offset)` without inventing a layout.

Writes JSON: { "types": [ { "name":..., "size":..., "members":[{"name","offset","size","type"}] } ] }

Run headless:
    idat.exe -A -S"export_types.py" <db.i64>
"""
import json

import ida_auto
import ida_typeinf
import idc

OUT = r"C:\Users\Saif Khan\Downloads\main.idb\_work\types.json"


def main():
    ida_auto.auto_wait()

    til = ida_typeinf.get_idati()
    limit = ida_typeinf.get_ordinal_limit(til)
    types = []
    seen = 0
    for ordinal in range(1, limit):
        tif = ida_typeinf.tinfo_t()
        if not tif.get_numbered_type(til, ordinal):
            continue
        name = tif.get_type_name() or ""
        if not name:
            continue
        seen += 1
        kind = tif.get_type_name()
        udt = ida_typeinf.udt_type_data_t()
        if not tif.get_udt_details(udt):
            continue
        members = []
        for m in udt:
            mt = m.type
            members.append({
                "name": m.name or "",
                "offset": m.offset // 8 if m.offset % 8 == 0 else m.offset,
                "bit_offset": m.offset,
                "size": mt.get_size() if mt else 0,
                "type": mt.dstr() if mt else "",
            })
        if not members:
            continue
        types.append({
            "name": name,
            "size": tif.get_size(),
            "is_union": bool(udt.is_union),
            "members": members,
        })

    print("numbered types seen: %d, with members: %d" % (seen, len(types)))
    with open(OUT, "w", encoding="utf-8") as fh:
        json.dump({"types": types}, fh, indent=1)
    print("wrote %s" % OUT)


main()
idc.qexit(0)

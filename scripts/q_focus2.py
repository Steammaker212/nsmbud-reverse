#!/usr/bin/env python3
"""Confirm the pukupuku model-binding pattern across variants + get profile IDs."""
import json

from rpc import call

OUT = r"pukupuku_re2.txt"


def w(f, label, obj):
    f.write(f"\n{'=' * 70}\n{label}\n{'=' * 70}\n")
    f.write(obj if isinstance(obj, str) else json.dumps(obj, indent=2))
    f.write("\n")


FN = {
    "sub_60375E24__pukupuku_toge": "0x60375E24",
    "sub_60370B74__pukupuku_mecha": "0x60370B74",
    "sub_6013F02C__hammer_factory_ref": "0x6013F02C",
}

with open(OUT, "w", encoding="utf-8") as f:
    for name, va in FN.items():
        try:
            w(f, f"DECOMP {name} ({va})",
              call("decompile_function", {"address": va}, 240))
        except Exception as e:
            f.write(f"\n{name} failed: {e}\n")

    # profile-table window: dwords around each pukupuku site in
    # sInit_ProfileArchiveLists, to locate the profile-ID numbering.
    for label, site in (("pukupuku", 0x6001A064),
                        ("pukupuku_toge", 0x6001EBA4)):
        rows = []
        for off in range(-0x20, 0x24, 4):
            a = site + off
            try:
                v = call("data_read_dword", {"address": hex(a)}, 20)
                rows.append(f"{hex(a)}  {v}  0x{v:08X}")
            except Exception as e:
                rows.append(f"{hex(a)}  ERR {str(e)[:60]}")
        w(f, f"CELLS around {label} ptr-site {hex(site)}", "\n".join(rows))

print(f"wrote {OUT}")

"""Resolve a contradiction between my hand-rolled table reads and IDA.

My earlier Python read said:
    contents 2 -> action code 0 -> itemId 0 (Mushroom)
but the editor labels contents 2 as "Fire Flower", and the report's item table says
Fire Flower is itemId 1. Both cannot be true.

block_populate (sub_604663F4) decompiled by Hex-Rays indexes a profile table with
`a4`, clamped at >10, and calls Profile::get. So `a4` is an itemId in 0..10.

This script finds what actually READS the two tables, decompiles those readers, and
dumps the raw table bytes with their owning segments so alignment can be checked.
"""
import json
import os

import ida_bytes
import ida_funcs
import ida_hexrays
import ida_lines
import ida_segment
import idautils
import idc

OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "ida_tables.json")
ACTION = 0x60B04164
ITEM = 0x60B0267C
PROFILE_TBL = 0x60C9D3F4

report = {}


def disasm(ea_, n=30):
    out = []
    for _ in range(n):
        d = idc.generate_disasm_line(ea_, 0)
        if d is None:
            break
        out.append({"ea": ea_, "text": ida_lines.tag_remove(d)})
        nxt = idc.next_head(ea_)
        if nxt == idc.BADADDR or nxt == ea_:
            break
        ea_ = nxt
    return out


def decompile_at(ea_):
    f = ida_funcs.get_func(ea_)
    if f is None:
        return {"error": "no function", "ea": ea_}
    out = {"function": ida_funcs.get_func_name(f.start_ea), "start": f.start_ea,
           "end": f.end_ea}
    try:
        cf = ida_hexrays.decompile(f.start_ea)
        out["pseudocode"] = str(cf) if cf else None
    except Exception as e:
        out["pseudocode_error"] = f"{type(e).__name__}: {e}"
    return out


def xref_report(label, addr):
    entries = []
    for x in idautils.XrefsTo(addr, 0):
        f = ida_funcs.get_func(x.frm)
        entries.append({
            "from": x.frm,
            "type": x.type,
            "in_function": ida_funcs.get_func_name(f.start_ea) if f else None,
            "func_start": f.start_ea if f else None,
        })
    # decompile each distinct containing function once
    seen = {}
    for e in entries:
        if e["func_start"] is not None and e["func_start"] not in seen:
            seen[e["func_start"]] = decompile_at(e["func_start"])
    report[label] = {"address": addr, "xrefs": entries,
                     "readers": list(seen.values())}


def seg_of(addr):
    s = ida_segment.getseg(addr)
    if s is None:
        return None
    return {"name": ida_segment.get_segm_name(s), "start": s.start_ea,
            "end": s.end_ea}


report["segments"] = {hex(a): seg_of(a) for a in (ACTION, ITEM, PROFILE_TBL)}

# raw dumps, so alignment can be judged from real bytes
for label, addr, count in (("action_table_raw", ACTION, 32),
                           ("item_table_raw", ITEM, 16),
                           ("profile_table_raw", PROFILE_TBL, 16)):
    raw = ida_bytes.get_bytes(addr, count * 4)
    if raw is None:
        report[label] = {"address": hex(addr), "error": "unreadable"}
        continue
    vals = [int.from_bytes(raw[i:i + 4], "little") for i in range(0, len(raw), 4)]
    report[label] = {"address": hex(addr),
                     "entries": {str(i): v for i, v in enumerate(vals)}}

xref_report("xrefs_action_table", ACTION)
xref_report("xrefs_item_table", ITEM)
xref_report("xrefs_profile_table", PROFILE_TBL)

with open(OUT, "w", encoding="utf-8") as fh:
    json.dump(report, fh, indent=2, default=str)
print(f"[ida_tables] wrote {OUT}")
idc.qexit(0)

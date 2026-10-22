"""Find how block contents really becomes an item, using IDA call-graph evidence.

The problem: my earlier hand-derived tables do not reproduce the editor's labels.
  editor: contents 2 = Fire Flower, 4 = Propeller, 5 = Penguin
  my read of dword_60B0267C: contents 2 -> 7, 4 -> 1, 5 -> 4
Those cannot all be right, so at least one table address/interpretation is wrong.

Approach: block_populate (sub_604663F4) takes the itemId directly and clamps it at
>10. So whoever CALLS it converted contents -> itemId. Decompile the callers; the
conversion is in there. Also force function creation where autoanalysis missed it.
"""
import json
import os

import ida_bytes
import ida_funcs
import ida_hexrays
import ida_lines
import idautils
import idc

OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "ida_contents_chain.json")

CANDIDATES = [
    0x604663F4,   # block_populate(a1, a2, a3, a4=itemId, a5, a6)
    0x60465E4C,   # item reader: returns dword_60B0267C[a2]
    0x60465F34,   # nearby
    0x60466000,
]
TABLES = {"action": 0x60B04164, "item": 0x60B0267C}

report = {"candidates": {}, "table_xrefs": {}}


def disasm(ea_, n):
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


def ensure_func(ea_):
    f = ida_funcs.get_func(ea_)
    if f is None:
        try:
            ida_funcs.add_func(ea_)
        except Exception:
            pass
        f = ida_funcs.get_func(ea_)
    return f


def decompile_safe(ea_):
    f = ensure_func(ea_)
    if f is None:
        return {"ea": ea_, "error": "no function even after add_func"}
    out = {"function": ida_funcs.get_func_name(f.start_ea), "start": f.start_ea,
           "end": f.end_ea}
    try:
        cf = ida_hexrays.decompile(f.start_ea)
        out["pseudocode"] = str(cf) if cf else None
    except Exception as e:
        out["pseudocode_error"] = f"{type(e).__name__}: {e}"
    return out


for addr in CANDIDATES:
    entry = {"decompiled": decompile_safe(addr), "xrefs_to": []}
    for x in idautils.XrefsTo(addr, 0):
        f = ida_funcs.get_func(x.frm)
        entry["xrefs_to"].append({
            "from": x.frm, "type": x.type,
            "in_function": ida_funcs.get_func_name(f.start_ea) if f else None,
            "func_start": f.start_ea if f else None,
        })
    # decompile each distinct caller
    callers = {}
    for e in entry["xrefs_to"]:
        if e["func_start"] is not None and e["func_start"] not in callers:
            callers[e["func_start"]] = decompile_safe(e["func_start"])
    entry["callers"] = list(callers.values())
    report["candidates"][hex(addr)] = entry

# Who reads each table, with a wider net than before (no function requirement).
for label, addr in TABLES.items():
    hits = []
    for x in idautils.XrefsTo(addr, 0):
        f = ida_funcs.get_func(x.frm)
        hits.append({"from": x.frm, "type": x.type,
                     "in_function": ida_funcs.get_func_name(f.start_ea) if f else None,
                     "func_start": f.start_ea if f else None})
    readers = {}
    for h in hits:
        if h["func_start"] is not None and h["func_start"] not in readers:
            readers[h["func_start"]] = decompile_safe(h["func_start"])
    report["table_xrefs"][label] = {"address": hex(addr), "xrefs": hits,
                                    "readers": list(readers.values())}

# Also dump a wider window of .rodata around the item table, so a shifted base is
# visible instead of guessed.
raw = ida_bytes.get_bytes(0x60B0267C - 32, 32 * 4)
if raw:
    vals = [int.from_bytes(raw[i:i + 4], "little") for i in range(0, len(raw), 4)]
    report["item_table_window"] = {
        "start": hex(0x60B0267C - 32),
        "values": {hex(0x60B0267C - 32 + i * 4): v for i, v in enumerate(vals)},
    }

with open(OUT, "w", encoding="utf-8") as fh:
    json.dump(report, fh, indent=2, default=str)
print(f"[ida_contents] wrote {OUT}")
idc.qexit(0)

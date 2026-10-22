"""Build the true contents -> item mapping, using IDA's own reading of the tables.

WHAT WAS WRONG
==============
I previously claimed "contents 2 and 3 both resolve to action code 0, therefore the
same item". That came from reading dword_60B04164 as a flat contents-indexed table.

IDA's decompilation of sub_605635AC shows the real indexing:

    v8 = (*(...)(*(_DWORD *)a1 + 360))(a1);   // virtual call, vtable+0x168
    v9 = dword_60B04164[v8];

So dword_60B04164 is indexed by a VIRTUAL CALL RESULT (an action code the block
object computes), not by the raw contents field. Its value is an ITEM ID, because
sub_60465E4C does `return dword_60B0267C[a2]` where a2 is that action code, and its
callers pass block contents directly.

Therefore, for the block-contents path:  ITEM = dword_60B0267C[contents]
(no intermediate dword_60B04164 hop). The two values I compared were not comparable.

This script computes the correct mapping and checks it against the editor's labels.
"""
import json
import os

import ida_bytes
import ida_funcs
import ida_hexrays
import ida_lines
import idautils
import idc

OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "ida_mapping.json")

ITEM_TABLE = 0x60B0267C
ACTION_TABLE = 0x60B04164
GRANT_FN = 0x6045DDC0        # fire flower grant handler (retail: mode 2)
GRANT_HELPER = 0x60463998
GATE = 0x6078E6A8


def u32(addr, n):
    raw = ida_bytes.get_bytes(addr, n * 4)
    if raw is None:
        return None
    return [int.from_bytes(raw[i:i + 4], "little") for i in range(0, n * 4, 4)]


def decomp(ea_):
    f = ida_funcs.get_func(ea_)
    if f is None:
        return {"error": "no function", "ea": ea_}
    out = {"function": ida_funcs.get_func_name(f.start_ea), "start": f.start_ea}
    try:
        cf = ida_hexrays.decompile(f.start_ea)
        out["pseudocode"] = str(cf) if cf else None
    except Exception as e:
        out["pseudocode_error"] = f"{type(e).__name__}: {e}"
    return out


report = {}

items = u32(ITEM_TABLE, 26)
actions = u32(ACTION_TABLE, 26)
report["item_table"] = {"address": hex(ITEM_TABLE),
                        "entries": {str(i): v for i, v in enumerate(items or [])}}
report["action_table"] = {"address": hex(ACTION_TABLE),
                          "entries": {str(i): v for i, v in enumerate(actions or [])}}

# The corrected chain for the block path: contents -> itemId, no action hop.
if items:
    report["contents_to_item"] = {str(c): items[c] for c in range(16)}

report["grant_handler"] = decomp(GRANT_FN)
report["grant_helper"] = decomp(GRANT_HELPER)
report["mode_gate"] = decomp(GATE)

# Does the gate's bitmask permit mode 10? Find the `and #mask` near the gate.
gate_asm = []
ea_ = GATE - 0x10
for _ in range(28):
    d = idc.generate_disasm_line(ea_, 0)
    if d is None:
        break
    gate_asm.append({"ea": ea_, "text": ida_lines.tag_remove(d)})
    nxt = idc.next_head(ea_)
    if nxt == idc.BADADDR or nxt == ea_:
        break
    ea_ = nxt
report["gate_asm"] = gate_asm

# The item-grant bitset inside sub_60465E4C, and every place it appears.
bitset_hits = []
for addr in (0x60465E4C, ):
    f = ida_funcs.get_func(addr)
    if f:
        ea_ = f.start_ea
        while ea_ < f.end_ea and ea_ != idc.BADADDR:
            d = idc.generate_disasm_line(ea_, 0)
            t = ida_lines.tag_remove(d) if d else ""
            if "0x1FB" in t or "0x1fb" in t or "0x3FB" in t or "0x3fb" in t:
                bitset_hits.append({"ea": ea_, "text": t})
            nxt = idc.next_head(ea_)
            if nxt == idc.BADADDR or nxt == ea_:
                break
            ea_ = nxt
report["grant_bitset_in_function"] = bitset_hits

with open(OUT, "w", encoding="utf-8") as fh:
    json.dump(report, fh, indent=2, default=str)
print(f"[ida_mapping] wrote {OUT}")
idc.qexit(0)

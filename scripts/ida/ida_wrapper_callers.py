"""Where does the value entering sub_60465E4C actually come from?

sub_60466328(a1, a2, a3, a4) calls sub_60465E4C(a1, a3, a2[32], byte(a2+13)).
So `a3` is the contents-like code. If a3 is raw block contents, then
dword_60B0267C[contents] should reproduce the editor's labels -- it does not.

Possibility: a2[32] is a flags dword and a3 is NOT raw contents but an action code
already derived. To settle it, decompile the CALLERS of sub_60466328 and see what
they pass as a3, and read the field of the block object it comes from.
"""
import json
import os

import ida_funcs
import ida_hexrays
import ida_lines
import idautils
import idc

OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "ida_wrapper_callers.json")
WRAPPER = 0x60466328
READER = 0x60465E4C

report = {"wrapper": hex(WRAPPER), "callers": []}


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


def decomp(ea_):
    f = ida_funcs.get_func(ea_)
    if f is None:
        try:
            ida_funcs.add_func(ea_)
        except Exception:
            pass
        f = ida_funcs.get_func(ea_)
    if f is None:
        return {"ea": ea_, "error": "no function"}
    out = {"function": ida_funcs.get_func_name(f.start_ea), "start": f.start_ea}
    try:
        cf = ida_hexrays.decompile(f.start_ea)
        out["pseudocode"] = str(cf) if cf else None
    except Exception as e:
        out["pseudocode_error"] = f"{type(e).__name__}: {e}"
    return out


# callers of the wrapper
seen = {}
for x in idautils.XrefsTo(WRAPPER, 0):
    f = ida_funcs.get_func(x.frm)
    entry = {"from": hex(x.frm), "type": x.type,
             "in_function": ida_funcs.get_func_name(f.start_ea) if f else None,
             "func_start": f.start_ea if f else None,
             "around": disasm(x.frm - 0x18, 14)}
    report["callers"].append(entry)
    if f and f.start_ea not in seen:
        seen[f.start_ea] = decomp(f.start_ea)
report["caller_decompilations"] = list(seen.values())

# Also: the reader itself, full body, to see the exact gate arithmetic.
report["reader"] = decomp(READER)
report["reader_disasm"] = disasm(READER, 90)

with open(OUT, "w", encoding="utf-8") as fh:
    json.dump(report, fh, indent=2, default=str)
print(f"[ida_wrapper] wrote {OUT}")
idc.qexit(0)

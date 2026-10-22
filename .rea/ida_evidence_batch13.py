"""Evidence sheets for the highest-caller unnamed functions, refreshing the stale ranking.

`unnamed_ranked.json` was written BEFORE the previous round's 17 renames, so it still lists functions
that are now named. Rank must be recomputed from the live database or the work order drifts.

Emitted per function: callers, size, string refs, callee census, and the decompiled body. Bodies are
truncated deliberately -- a name is chosen from the shape of the code, and 30 lines is enough to see
the shape while keeping the log readable.

Renames nothing.
"""
import json
import ida_funcs
import ida_hexrays
import ida_auto
import idautils
import idc

idc.auto_wait()
ida_hexrays.init_hexrays_plugin()

BASE = 0x60000000
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\evidence_batch13.json"
MIN_CALLERS = 50
N = 1

rows = []
for ea in idautils.Functions():
    nm = ida_funcs.get_func_name(ea) or ""
    if not nm.startswith("sub_"):
        continue
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    c = len(list(idautils.CodeRefsTo(ea, 0)))
    if c < MIN_CALLERS:
        continue
    rows.append({"name": nm, "va": ea, "rva": ea - BASE,
                 "size": f.end_ea - f.start_ea, "callers": c})

rows.sort(key=lambda r: (-r["callers"], -r["size"]))
print("unnamed with %d+ callers: %d" % (MIN_CALLERS, len(rows)))
targets = rows[:N]
print("gathering evidence for top %d" % len(targets))

str_at = {}
for s in idautils.Strings():
    try:
        str_at[s.ea] = str(s)
    except Exception:
        pass

out = []
for t in targets:
    ea = t["va"]
    f = ida_funcs.get_func(ea)
    strings, callees = [], []
    if f:
        for head in idautils.Heads(f.start_ea, f.end_ea):
            for d in idautils.DataRefsFrom(head):
                v = str_at.get(d)
                if v and v not in strings:
                    strings.append(v)
            for c2 in idautils.CodeRefsFrom(head, 0):
                v = str_at.get(c2)
                if v and v not in strings:
                    strings.append(v)
                if c2 != ea:
                    cf = ida_funcs.get_func(c2)
                    cn = ida_funcs.get_func_name(cf.start_ea) if cf else None
                    if cn and cn not in callees:
                        callees.append(cn)
    rec = dict(t)
    rec["strings"] = strings[:10]
    rec["callees"] = callees[:10]
    try:
        cf = ida_hexrays.decompile(ea)
        rec["body"] = "\n".join(str(cf).split("\n")[:26]) if cf else "(null)"
    except Exception as e:
        rec["body"] = "(failed: %s)" % e
    out.append(rec)

    print()
    print("=" * 76)
    print("%s  RVA 0x%06X  size 0x%X  callers %d"
          % (rec["name"], rec["rva"], rec["size"], rec["callers"]))
    if strings:
        print("  STR: " + " | ".join(s[:60] for s in strings[:4]))
    if callees:
        print("  CALLS: " + ", ".join(callees[:6]))
    for line in rec["body"].split("\n")[:22]:
        print("  " + line[:104])

with open(OUT, "w", encoding="utf-8") as fh:
    json.dump({"data": out, "all_ranked": rows}, fh)
print()
print("wrote %s" % OUT)

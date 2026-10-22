"""Dump evidence for the highest-value unnamed functions so they can be named from facts.

Naming has to be justified by evidence, not by a plausible-sounding guess: four bulk naming rules
have already been reverted in this project (2,450 SE_*, 78 Actor_*_build, 14 _uses1, 1,076 _vf),
and each was caught only by testing the batch.

For each target this collects, in one pass:
  * caller count and code size
  * every string the body references (the strongest signal for a name)
  * a callee census (what it calls -- a wrapper looks different from a leaf)
  * the decompiled body head

Bounded to N functions so it finishes: walking every head of every function took >10 min before.

It renames NOTHING. Renaming is a separate, deliberate step.
"""
import json
import re
import ida_funcs
import ida_hexrays
import ida_auto
import idautils
import idc

idc.auto_wait()
ida_hexrays.init_hexrays_plugin()

BASE = 0x60000000
RANKED = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\unnamed_ranked.json"
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\top_evidence.json"
N = 45

ranked = json.load(open(RANKED, encoding="utf-8"))["data"]
targets = ranked[:N]

# Build the string table ONCE. `idautils.Strings()` is a generator over the whole image and was
# being re-walked per function in the first attempt, which is why that run never finished.
str_at = {}
for s in idautils.Strings():
    try:
        str_at[s.ea] = str(s)
    except Exception:
        pass
print("strings indexed: %d" % len(str_at))

out = []
for t in targets:
    ea = t["va"]
    f = ida_funcs.get_func(ea)
    rec = dict(t)

    strings = []
    callees = []
    if f:
        for head in idautils.Heads(f.start_ea, f.end_ea):
            for d in idautils.DataRefsFrom(head):
                if d in str_at:
                    v = str_at[d]
                    if v and v not in strings:
                        strings.append(v)
            for c in idautils.CodeRefsFrom(head, 0):
                if c in str_at:
                    v = str_at[c]
                    if v and v not in strings:
                        strings.append(v)
                if c != ea:
                    cf = ida_funcs.get_func(c)
                    cn = ida_funcs.get_func_name(cf.start_ea) if cf else None
                    if cn and cn not in callees:
                        callees.append(cn)
    rec["strings"] = strings[:12]
    rec["callees"] = callees[:12]

    body = ""
    try:
        cf = ida_hexrays.decompile(ea)
        if cf:
            text = str(cf)
            lines = [l for l in text.split("\n")]
            body = "\n".join(lines[:16])
    except Exception as e:
        body = "(decompile failed: %s)" % e
    rec["body"] = body
    out.append(rec)

    print()
    print("=" * 78)
    print("%s  RVA 0x%06X  size 0x%X  callers %d"
          % (rec["name"], rec["rva"], rec["size"], rec["callers"]))
    if strings:
        print("  STRINGS:")
        for s in strings[:6]:
            print("    %s" % s[:100])
    if callees:
        print("  CALLS: %s" % ", ".join(callees[:8]))
    print("  BODY:")
    for line in body.split("\n")[:14]:
        print("    %s" % line[:110])

with open(OUT, "w", encoding="utf-8") as fh:
    json.dump({"data": out}, fh)
print()
print("wrote %s" % OUT)

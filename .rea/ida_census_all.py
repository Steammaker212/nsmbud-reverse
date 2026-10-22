"""Census of every name in the database, INCLUDING the auto-generated `sub_*` ones.

Why this matters. The existing exporter filters out `sub_*`:

    named = [r for r in rows if not r["name"].startswith("sub_")]

so every downstream count was "how many names are NOT auto-generated". That is a useful measure of
naming progress, but it is a terrible inventory: it silently omits 30,000+ functions, which is why
nine functions the corpus calls (sub_60152FF4 and friends) could not be found in any export even
though they are real, named, defined functions in the database.

This script reports the full picture:
  * total functions vs total named addresses
  * how many are still `sub_*`  (naming debt)
  * which of those the corpus actually calls (so the debt can be prioritised)

It changes nothing.
"""
import idautils
import ida_funcs
import ida_name
import ida_auto
import idc

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000

funcs = list(idautils.Functions())
print("=== full name census ===")
print("functions               : %d" % len(funcs))

sub_funcs = []
named_funcs = []
for ea in funcs:
    nm = ida_funcs.get_func_name(ea) or ida_name.get_name(ea) or ""
    if nm.startswith("sub_"):
        sub_funcs.append((ea, nm))
    else:
        named_funcs.append((ea, nm))

print("  still sub_*           : %d  (%.1f%% of functions)"
      % (len(sub_funcs), 100.0 * len(sub_funcs) / max(1, len(funcs))))
print("  have a real name      : %d  (%.1f%%)"
      % (len(named_funcs), 100.0 * len(named_funcs) / max(1, len(funcs))))

# all named addresses, not just function starts -- vtables live in .data
all_names = list(idautils.Names())
print("all named addresses     : %d" % len(all_names))
all_sub = [(a, n) for a, n in all_names if n.startswith("sub_")]
print("  of which sub_*        : %d" % len(all_sub))

# how much of the image text is covered by sub_* functions?
text = sum(f.end_ea - f.start_ea for f in (ida_funcs.get_func(ea) for ea, _ in sub_funcs) if f)
total = sum(f.end_ea - f.start_ea for f in (ida_funcs.get_func(ea) for ea in funcs) if f)
print("code bytes               : %d total, %d inside sub_* (%.1f%%)"
      % (total, text, 100.0 * text / max(1, total)))

# the nine call sites that motivated this
print()
print("=== the corpus's unresolved calls ===")
for nm in ["sub_60152FF4", "sub_6015DF58", "sub_60236E40", "sub_6050A4EC",
           "sub_60583000", "sub_6058385C", "sub_605B6238", "sub_6079AE3C",
           "sub_60959BAC"]:
    ea = idc.get_name_ea_simple(nm)
    f = ida_funcs.get_func(ea)
    if f:
        print("  %s  defined %s  size 0x%X  callers %d"
              % (nm, "yes" if f.start_ea == ea else "NO(start=0x%X)" % f.start_ea,
                 f.end_ea - f.start_ea, len(list(idautils.CodeRefsTo(ea, 0)))))
    else:
        print("  %s  NOT A FUNCTION" % nm)

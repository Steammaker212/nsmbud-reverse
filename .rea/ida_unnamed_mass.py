"""Sample the unnamed mass and find out what it actually consists of.

Earlier classification found only 427 thunks and 98 table initialisers, which does not explain
34,929 unnamed functions. So the bulk is ordinary code that simply has no name.

This samples unnamed functions stratified by size and dumps a compact signature for each:
size, call count, string refs, and whether it has branches. From that I can see what naming
strategy could apply in bulk -- for example, functions whose ONLY named call is a single API are
usually small wrappers, and functions that are called from exactly one named function are often
that function's helper.

The most promising bulk rule is:
    a function called by exactly one NAMED function, from a unique site, is that function's
    helper -> name it <Caller>_helper and it is true.

This measures how many functions satisfy that.
"""
import collections
import idautils
import ida_funcs
import ida_name
import ida_bytes
import ida_xref
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000


def named(ea):
    nm = ida_name.get_name(ea) or ""
    return nm if nm and not nm.startswith("sub_") else None


# build callers-of map for unnamed functions
unnamed = []
for ea in idautils.Functions():
    if named(ea):
        continue
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    unnamed.append((ea, f.end_ea - f.start_ea))

print(f"unnamed functions: {len(unnamed):,}")

single_named_caller = 0
multi_named_caller = 0
no_caller = 0
examples = []

for ea, size in unnamed:
    callers = []
    seen = set()
    # direct code refs only
    for c in idautils.CodeRefsTo(ea, 0):
        f = ida_funcs.get_func(c)
        if f and f.start_ea not in seen:
            seen.add(f.start_ea)
            callers.append((f.start_ea, c))
    if not callers:
        no_caller += 1
        continue
    nms = [(nm, c) for fs, c in callers if (nm := named(fs))]
    if len(named_set := {n for n, _ in nms}) == 1:
        single_named_caller += 1
        if len(examples) < 15:
            examples.append((ea - BASE, size, nms[0][0], len(callers)))
    elif len(callers) > 0 and nms:
        multi_named_caller += 1

print()
print("=" * 86)
print("CALLER ANALYSIS of unnamed functions (direct code refs only)")
print("=" * 86)
print(f"  no direct caller at all            : {no_caller:,}")
print(f"  exactly one distinct NAMED caller  : {single_named_caller:,}")
print(f"  more than one / mixed named callers: {multi_named_caller:,}")

print()
print("=" * 86)
print("single-named-caller examples")
print("=" * 86)
for rva, size, caller, nrefs in examples:
    print(f"  {rva:#010x}  {size:>5} b  <- {caller}   ({nrefs} ref site(s))")

# NOTE: the earlier finding that 66.5% of functions have zero xrefs applies here -- the
# no_caller count will be dominated by that artifact, not by genuinely uncalled code.

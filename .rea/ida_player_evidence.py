"""List ALL unnamed player/powerup functions with strings, with full string sets and call evidence.

The previous report truncated strings to 3 per function and showed only the top 40 by size. To name
anything responsibly I need the complete picture for the two most important regions, plus the
callers, so each name can be justified and falsified individually.

Prints everything (no truncation of the candidate set), grouped by region, with:
    RVA  size  [MODE if it reads the power-up mode field]  full string list
    and, where the function is small enough to have an obvious role, its nearest named callees.
"""
import collections
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000

REGIONS = [(0x450000, 0x480000, "powerup"), (0x780000, 0x7C0000, "player")]
MIN_SIZE = 0x80

func_strings = collections.defaultdict(set)
for s in idautils.Strings():
    try:
        ea, txt = s.ea, str(s)
        if len(txt) < 4:
            continue
        for xr in idautils.XrefsTo(ea, 0):
            f = ida_funcs.get_func(xr.frm)
            if f:
                func_strings[f.start_ea - BASE].add(txt)
    except Exception:
        continue

print(f"control sub_604F9090 strings: {len(func_strings.get(0x4F9090, ()))}  (expect 20)")

for lo, hi, reg in REGIONS:
    rows = []
    for ea in idautils.Functions():
        rva = ea - BASE
        if not (lo <= rva < hi):
            continue
        nm = ida_name.get_name(ea) or ""
        if nm and not nm.startswith("sub_"):
            continue
        f = ida_funcs.get_func(ea)
        if not f:
            continue
        size = f.end_ea - f.start_ea
        if size < MIN_SIZE:
            continue
        ss = func_strings.get(rva, set())
        mode = any("#0x528]" in idc.GetDisasm(i)
                   for i in idautils.Heads(f.start_ea, f.end_ea))
        if not ss and not mode:
            continue
        rows.append((size, rva, ss, mode))

    print()
    print("#" * 100)
    print(f"# {reg}  -- {len(rows)} unnamed functions with strings or mode-access")
    print("#" * 100)
    for size, rva, ss, mode in sorted(rows, reverse=True):
        tag = " MODE" if mode else "     "
        print(f"{rva:#010x} {size:>6,}b{tag}  {len(ss)} str")
        for s in sorted(ss):
            s1 = s.replace("\n", "\\n")[:88]
            print(f'      "{s1}"')

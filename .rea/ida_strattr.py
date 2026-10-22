"""CORRECT string-to-function attribution, then evidence for the focus subsystems.

The previous attempt reported ZERO string references across 649 functions, including
sub_604F9090 -- which provably references 20 animation names. The positive control showed why:

    xrefs to "P_FireFlower_00" (0xACDE20) come from 0x4F90E8 and 0x4F90F0, type=1 (DATA)

Those are LITERAL-POOL slots holding the string address, not instruction operands. And the LDR that
reads them uses a PC-relative delta (`=unk - 0x604F90A8`), so the pool word is a DIFFERENCE, not an
absolute address. Scanning `operand1 -> dword` therefore finds nothing, which is exactly what it
reported.

Correct route: enumerate the strings, take data xrefs TO each string, and attribute each xref address
to the function containing it. This is how the existing `_ref` names were built, and it works.

Output: per-function string evidence for player/powerup/player_states -- a report for justified
naming, not a bulk rename.
"""
import collections
import idautils
import ida_bytes
import ida_funcs
import ida_name
import ida_xref
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

FOCUS = [(0x450000, 0x480000, "powerup"),
         (0x780000, 0x7C0000, "player"),
         (0x7C0000, 0x800000, "player_states")]
MIN_SIZE = 0x80

# 1. map function -> set of strings, via data xrefs to strings, attributed by containing func
func_strings = collections.defaultdict(set)
n_strings = 0
for s in idautils.Strings():
    try:
        n_strings += 1
        ea = s.ea
        txt = str(s)
        if len(txt) < 4:
            continue
        for xr in idautils.XrefsTo(ea, 0):
            f = ida_funcs.get_func(xr.frm)
            if f:
                func_strings[f.start_ea - BASE].add(txt)
    except Exception:
        continue

print(f"defined strings scanned: {n_strings:,}")
print(f"functions with >=1 attributed string: {len(func_strings):,}")

# positive control, stated explicitly
ctl = 0x004F9090
lst = sorted(func_strings.get(ctl, ()))
print()
print(f"POSITIVE CONTROL sub_604F9090 -> {len(lst)} string(s)")
for x in lst[:6]:
    print(f'    "{x}"')
if not lst:
    print("    *** CONTROL FAILED -- scanner still wrong, do not trust any result below ***")

# 2. evidence report for the focus regions
rows = []
for ea in idautils.Functions():
    rva = ea - BASE
    reg = None
    for lo, hi, nm in FOCUS:
        if lo <= rva < hi:
            reg = nm
            break
    if not reg:
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
    rows.append({"rva": rva, "region": reg, "size": size, "strings": ss, "mode": mode})

print()
print(f"unnamed >= {MIN_SIZE:#x}b in focus regions: {len(rows)}")
print(f"  with strings        : {sum(1 for r in rows if r['strings'])}")
print(f"  read player mode    : {sum(1 for r in rows if r['mode'])}")
print()
print("=" * 96)
print("CANDIDATES: unnamed, has strings, sorted by size")
print("=" * 96)
shown = 0
for r in sorted(rows, key=lambda r: -r["size"]):
    if not r["strings"]:
        continue
    shown += 1
    if shown > 40:
        break
    sl = sorted(r["strings"])
    print(f"  {r['rva']:#010x} {r['size']:>6,}b {r['region']:<14}"
          f"{'MODE ' if r['mode'] else '     '}{len(sl)} str")
    for s in sl[:3]:
        print(f'        "{s}"')
    if len(sl) > 3:
        print(f"        ... +{len(sl)-3} more")
print()
print(f"  total candidates with strings: {sum(1 for r in rows if r['strings'])}, shown {min(shown,40)}")

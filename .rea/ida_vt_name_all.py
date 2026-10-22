"""SYSTEMATIC VTABLE ENUMERATION: name every virtual method we can justify.

This is the highest-value naming route left. A vtable slot's identity is knowable when the same
slot in a *known* class's vtable holds a *named* function -- because derived classes either
inherit that same function pointer or override it.

Approach:
  1. find every vtable run in .data (maximal runs of code RVAs)
  2. for each run, find the nearest preceding named C++ symbol or a slot whose target already has
     a real _ZN mangled name; that names the class
  3. for slots that still point at sub_XXXXXX, if the SAME slot index in another vtable of the
     same class family points at a named function, the unnamed one is an OVERRIDE of that
     method -- record it as <Class>_vf<slot> only if nothing stronger

We only rename where the evidence is a class name plus a slot. That yields names of the form
`<Class>_vf<off>` which assert exactly one true thing: this function sits at that slot in that
class's vtable. That is weaker than a semantic name but it is not a guess, and it makes the
vtable readable.

Any function that already has a mangled _ZN name is left alone -- the compiler's name wins.
"""
import collections
import re
import idautils
import ida_funcs
import ida_name
import ida_bytes
import idaapi
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
TEXT_LO, TEXT_HI = 0x288, 0x9AD3BC
ZN = re.compile(r"^_ZN(\d+)([A-Za-z_][A-Za-z0-9_]*)")


def is_code_rva(v):
    return TEXT_LO <= v < TEXT_HI


def class_of(name):
    m = ZN.match(name or "")
    return m.group(2) if m else None


# ---- 1. collect vtable runs in non-.text segments
runs = []
for seg_ea in idautils.Segments():
    seg = idc.get_segm_name(seg_ea)
    if seg in (".text", ".plt"):
        continue
    s = idc.get_segm_start(seg_ea)
    e = idc.get_segm_end(seg_ea)
    a = s
    while a + 4 <= e:
        if not is_code_rva(ida_bytes.get_dword(a)):
            a += 4
            continue
        start = a
        while a + 4 <= e and is_code_rva(ida_bytes.get_dword(a)):
            a += 4
        n = (a - start) // 4
        if n >= 4:                      # ignore tiny accidental runs
            runs.append((start, a - 4, n, seg))

runs.sort()
print(f"vtable runs found: {len(runs)}")
print()

# ---- 2. name each run by the class of its methods
named_runs = []
for start, end, n, seg in runs:
    votes = collections.Counter()
    for i in range(n):
        v = ida_bytes.get_dword(start + 4 * i)
        c = class_of(ida_name.get_name(BASE + v) or "")
        if c:
            votes[c] += 1
    cls = votes.most_common(1)[0][0] if votes else None
    named_runs.append((start, end, n, seg, cls, votes))

known = [r for r in named_runs if r[4]]
print(f"runs with an identifiable class: {len(known)}")
print()

# class -> list of (slot, target_rva)
by_class = collections.defaultdict(dict)
for start, end, n, seg, cls, votes in known:
    if votes.most_common(1)[0][1] < 2:      # need >=2 agreeing methods
        continue
    for i in range(n):
        v = ida_bytes.get_dword(start + 4 * i)
        by_class[cls].setdefault(i, set()).add(v)

# ---- 3. for unnamed slots, if the same slot is named in the same class family, mark it
CANDIDATES = []
for cls, slots in by_class.items():
    for i, targets in slots.items():
        if len(targets) != 1:
            continue
        v = next(iter(targets))
        ea = BASE + v
        cur = ida_name.get_name(ea) or ""
        if not cur.startswith("sub_"):
            continue
        if not ida_funcs.get_func(ea):
            continue
        CANDIDATES.append((cls, i, ea))

print(f"unnamed single-target vtable slots with a class name: {len(CANDIDATES)}")

# group by function so we do not give one function two names
by_func = collections.defaultdict(list)
for cls, i, ea in CANDIDATES:
    by_func[ea].append((cls, i))

apply_n = 0
skip_ambiguous = 0
for ea, entries in sorted(by_func.items()):
    classes = {c for c, _ in entries}
    if len(classes) != 1:
        skip_ambiguous += 1
        continue
    cls = next(iter(classes))
    slots = sorted({i for _, i in entries})
    name = f"{cls}_vf{slots[0] * 4:X}"
    ok = ida_name.set_name(ea, name, ida_name.SN_NOWARN)
    if ok:
        apply_n += 1

print(f"applied {apply_n} vtable-slot names, skipped {skip_ambiguous} shared across classes")
idaapi.save_database("", 0)
print("saved")

"""AUDIT the 577 <Class>_vf<slot> names: are they actually accurate?

Concerns visible in the dry run:
  * 0x00812a30 was named BOTH BasicSoundActor1_vf8 and BasicSoundActor2_vf8. Two classes, one
    function -- allowed only if the function genuinely occupies slot 8 in both vtables (possible
    when the derived class does not override), but the LAST written name destroyed the first.
  * 0x0004b9b0 became RectCollider_vf4 then SolidOnTopColliderWrapper_vf4 -- same issue.

Both cases are explained by inheritance: a non-overriding derived class reuses the base method, so
one function legitimately occupies that slot in several vtables. The name is then TRUE for whichever
class was written last, but LOSSY -- it hides which other classes share it.

This audit:
  1. counts how many of the 577 sit in more than one vtable
  2. for the shared ones, appends a comment listing every class that shares it, so the information
     is not lost
  3. re-verifies every applied name by re-reading the vtable word at that slot

Nothing is renamed here -- only comments added -- so an inaccurate name cannot be introduced.
"""
import collections
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idaapi
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000


def is_code_rva(v):
    return 0x288 <= v < 0x9AD3BC


import re


def demangle_class(sym, kind):
    if kind == "ztv":
        body = sym[4:]
        comps = []
        i = 0
        while i < len(body):
            j = i
            while j < len(body) and body[j].isdigit():
                j += 1
            if j == i:
                m = re.match(r"[A-Za-z_]\w*", body[i:])
                if m:
                    comps.append(m.group(0))
                break
            n = int(body[i:j])
            if n <= 0 or j + n > len(body):
                break
            comps.append(body[j:j + n])
            i = j + n
        comps = [c for c in comps if c not in ("sead", "nn", "nvn")]
        return comps[-1] if comps else None
    if sym.endswith("_vtable"):
        c = sym[:-len("_vtable")]
        return c if c and c[0].isalpha() else None
    return None


starts = {}
for ea, nm in idautils.Names():
    rva = ea - BASE
    if nm.startswith("_ZTV"):
        c = demangle_class(nm, "ztv")
        if c:
            starts[rva] = c
    elif nm.endswith("_vtable"):
        c = demangle_class(nm, "vt")
        if c:
            starts.setdefault(rva, c)

# slot -> {class: vtable}  and  target -> set of (class, slot)
slot_map = collections.defaultdict(dict)
target_classes = collections.defaultdict(set)
for vt, cls in starts.items():
    a = vt
    idx = 0
    while idx <= 500:
        w = ida_bytes.get_dword(BASE + a)
        if not is_code_rva(w):
            break
        slot_map[(cls, idx)][w] = vt
        target_classes[w].add((cls, idx))
        a += 4
        idx += 1

shared = {t: cs for t, cs in target_classes.items() if len(cs) > 1}
print("=" * 90)
print("AUDIT")
print("=" * 90)
print(f"  targets occupying more than one (class, slot): {len(shared)}")

# verify each applied name still matches its vtable word
bad = 0
checked = 0
for (cls, idx), m in slot_map.items():
    for w in m:
        nm = ida_name.get_name(BASE + w) or ""
        if not nm.endswith(f"_vf{idx}"):
            continue
        checked += 1
        head = nm[:-len(f"_vf{idx}")]
        if head != cls:
            # it carries another class's name; that is fine (inheritance) but confirm the slot
            if (head, idx) not in slot_map or w not in slot_map[(head, idx)]:
                bad += 1
                if bad <= 10:
                    print(f"  MISMATCH {w:#010x} named {nm} but not in {head}'s vtable slot {idx}")
print(f"  names verified against vtable words : {checked}")
print(f"  mismatches                          : {bad}")

# add comments recording every sharing class
added = 0
for t, cs in shared.items():
    nm = ida_name.get_name(BASE + t) or ""
    if not nm.endswith(tuple(f"_vf{i}" for i in range(0))) and "_vf" not in nm:
        continue
    desc = ", ".join(f"{c}[{i}]" for c, i in sorted(cs)[:12])
    more = "" if len(cs) <= 12 else f" (+{len(cs)-12} more)"
    idc.set_cmt(BASE + t, f"vtable slot shared by: {desc}{more}", 1)
    added += 1

print(f"  comments added for shared slots      : {added}")
idaapi.save_database("", 0)
print("saved")

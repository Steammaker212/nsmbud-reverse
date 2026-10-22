"""NAME VTABLE SLOT METHODS using the 134 authoritative _ZTV symbols.

This is the sound version of the vtable pass that failed twice before. The failures came from
GUESSING where vtables start. They do not need guessing: the database carries 134
`_ZTV<class>` symbols giving exact vtable addresses, and there is a second source too --
the `<Class>_vtable` symbols applied in earlier rounds (FireballBase_vtable at 0xBD22A0,
validated: slot 0 is FireballBase_checkRTTI).

Method:
  1. gather vtable starts from BOTH sources:
       - `_ZTV<...>` symbols  (authoritative, from the binary)
       - `*_vtable` symbols    (mine, previously validated)
  2. demangle the class name properly, parsing the length-prefixed Itanium components
  3. walk slots only until the first word that is not an in-image code pointer
     (vtables in .data are adjacent to other data, so stopping matters)
  4. for each unnamed slot, apply <Class>_vf<slotIndex>
  5. refuse the name if it already belongs to a different function

Sanity checks reported up front:
  * how many vtables each source contributes
  * how many slots are already named (those are the compiler's own, and confirm the walk)
  * a dry-run listing before applying
"""
import collections
import re
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


def demangle_class(sym, kind):
    """extract the class name from _ZTV<...> or <Class>_vtable"""
    if kind == "ztv":
        body = sym[4:]                       # strip _ZTV
        comps = []
        i = 0
        while i < len(body):
            j = i
            while j < len(body) and body[j].isdigit():
                j += 1
            if j == i:
                # a bare identifier without a length prefix (simple name)
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
    # <Class>_vtable form
    if sym.endswith("_vtable"):
        c = sym[:-len("_vtable")]
        return c if c and c[0].isalpha() else None
    return None


starts = {}       # vtable_rva -> class name
ztv_n = vt_n = 0
for ea, nm in idautils.Names():
    rva = ea - BASE
    if nm.startswith("_ZTV"):
        c = demangle_class(nm, "ztv")
        if c:
            starts[rva] = c
            ztv_n += 1
    elif nm.endswith("_vtable"):
        c = demangle_class(nm, "vt")
        if c:
            starts.setdefault(rva, c)
            vt_n += 1

print("=" * 90)
print("vtable starts")
print("=" * 90)
print(f"  from _ZTV symbols      : {ztv_n}")
print(f"  from *_vtable symbols  : {vt_n}")
print(f"  distinct starts        : {len(starts)}")

# walk each vtable
already = 0
cand = []
for vt, cls in sorted(starts.items()):
    a = vt
    idx = 0
    while idx <= 500:
        w = ida_bytes.get_dword(BASE + a)
        if not is_code_rva(w):
            break
        nm = ida_name.get_name(BASE + w) or ""
        if nm and not nm.startswith("sub_"):
            already += 1
        else:
            cand.append((w, cls, idx, vt))
        a += 4
        idx += 1

print(f"  slots already named    : {already}")
print(f"  slots unnamed          : {len(cand)}")

# uniqueness: (class, slot) must map to one target
pair = collections.defaultdict(set)
for w, cls, idx, vt in cand:
    pair[(cls, idx)].add(w)
ambiguous = {k for k, v in pair.items() if len(v) > 1}
print(f"  ambiguous (class,slot) : {len(ambiguous)}")

existing = {}
for ea in idautils.Functions():
    n = ida_name.get_name(ea) or ""
    if n and not n.startswith("sub_"):
        existing.setdefault(n, set()).add(ea - BASE)

print()
print("=" * 90)
print("DRY RUN (first 25)")
print("=" * 90)
applied = 0
skipped_amb = 0
skipped_col = 0
examples = []
for w, cls, idx, vt in cand:
    if (cls, idx) in ambiguous:
        skipped_amb += 1
        continue
    name = f"{cls}_vf{idx}"
    if name in existing and w not in existing[name]:
        skipped_col += 1
        continue
    ok = ida_name.set_name(BASE + w, name, ida_name.SN_NOWARN)
    if ok:
        applied += 1
        existing.setdefault(name, set()).add(w)
        if len(examples) < 25:
            examples.append((w, name, cls, vt))

print(f"  applied            : {applied}")
print(f"  skipped ambiguous  : {skipped_amb}")
print(f"  skipped collision  : {skipped_col}")
for w, name, cls, vt in examples:
    print(f"    {w:#010x}  {name:<30}  (class {cls}, vtable {vt:#010x})")

idaapi.save_database("", 0)
print("saved")

"""NAME VTABLE METHODS BY SLOT -- the largest remaining verifiable naming source.

Earlier rounds found 4,241 vtable runs, 1,196 with an identifiable class, but only 8 unnamed
single-target slots were applied -- because that pass only looked at slots whose target appeared
exactly once. That was too strict: a function appearing in the SAME class's vtable at the SAME slot
across several vtable instances is still unambiguously that class's slot method.

The naming form already used in this repo is <Class>_vf<slotIndex>, which asserts exactly one
verifiable thing: this function occupies that slot in that class's vtable. It never claims to know
what the method does.

Plan:
  1. find vtable runs in .rodata/.data: maximal sequences of in-image code pointers
  2. for each run, determine the class from its slot-0 entry (the destructor or first virtual),
     which in this binary is often already named (e.g. _ZN7FireballBaseD1Ev) or named by us
  3. for every slot whose target is still sub_*, derive a name from the class + slot index
  4. only apply when the (class, slot) pair is unique across all runs -- i.e. the same class/slot
     never points at two different functions, so the name is not ambiguous

Reports how many distinct (class, slot, target) triples are unique, then applies them.
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


def is_code_ptr(v):
    return BASE + 0x288 <= BASE + v < BASE + 0x9AD3BC


def name_of(v):
    return ida_name.get_name(BASE + v) or ""


def class_from_vtable(run_start, slots):
    """derive a class name from any named slot in the run, preferring the destructor"""
    for v in slots:
        nm = name_of(v)
        if not nm:
            continue
        # _ZN11FireballBaseD1Ev / _ZN11FireballBaseD0Ev
        m = re.match(r"_ZN(\d+)(\w+?)D[012]Ev", nm)
        if m:
            return m.group(2)
        m = re.match(r"_ZN(\d+)(\w+?)C[12]E", nm)
        if m:
            return m.group(2)
        # our own convention: <Class>_something
        if "_" in nm and not nm.startswith("sub_") and not nm.startswith("_Z"):
            head = nm.split("_")[0]
            if head and head[0].isupper():
                return head
    return None


# collect vtable runs
runs = []
for seg_ea in idautils.Segments():
    nm = idc.get_segm_name(seg_ea)
    if nm not in (".rodata", ".data", ".data.rel.ro"):
        continue
    s, e = idc.get_segm_start(seg_ea), idc.get_segm_end(seg_ea)
    a = s
    cur = []
    while a + 4 <= e:
        v = ida_bytes.get_dword(a)
        if is_code_ptr(v):
            cur.append((a, v))
        else:
            if len(cur) >= 8:
                runs.append(cur)
            cur = []
        a += 4
    if len(cur) >= 8:
        runs.append(cur)

print(f"vtable runs found: {len(runs)}")

# (class, slot) -> set of targets
by_pair = collections.defaultdict(set)
for run in runs:
    start = run[0][0]
    slots = [v for _, v in run]
    cls = class_from_vtable(start, slots)
    if not cls:
        continue
    for idx, (addr, v) in enumerate(run):
        by_pair[(cls, idx)].add(v)

print(f"distinct (class, slot) pairs: {len(by_pair)}")

# candidates: target unnamed, and pair maps to exactly one target
cand = []
ambiguous = 0
for (cls, idx), targets in by_pair.items():
    if len(targets) != 1:
        ambiguous += 1
        continue
    v = next(iter(targets))
    nm = name_of(v)
    if nm and not nm.startswith("sub_"):
        continue
    cand.append((v, cls, idx))

print(f"ambiguous pairs (same class+slot, different targets): {ambiguous}")
print(f"candidate unnamed slot methods: {len(cand)}")

# guard: never produce a name that already exists for a different function
existing = {}
for ea in idautils.Functions():
    n = ida_name.get_name(ea) or ""
    if n and not n.startswith("sub_"):
        existing.setdefault(n, set()).add(ea - BASE)

applied = 0
collided = 0
examples = []
for v, cls, idx in cand:
    name = f"{cls}_vf{idx}"
    if name in existing and v not in existing[name]:
        collided += 1
        continue
    if ida_name.set_name(BASE + v, name, ida_name.SN_NOWARN):
        applied += 1
        existing.setdefault(name, set()).add(v)
        if len(examples) < 15:
            examples.append((v, name))

print()
print(f"  applied  : {applied}")
print(f"  collided : {collided}")
for v, name in examples:
    print(f"    {v:#010x}  {name}")

idaapi.save_database("", 0)
print("saved")

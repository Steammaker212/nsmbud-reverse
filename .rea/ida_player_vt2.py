"""FIND the big player vtable (367 slots) and where the Fire Flower logic sits in it.

Earlier rounds established Player_vtable_a at 0xC24C74 and Player_vtable_b at 0xC253D4, each 367
slots. Those were reached by hand. With 220 authoritative vtable starts available now, this:

  1. locates those two vtables and confirms 367 slots each
  2. lists every slot with size / xref count, flagging SMALL (predicate) slots
  3. cross-references against the 259 functions known to read [.,#0x528] -- any vtable slot whose
     target reads the mode field is a power-up-aware player method, which is where the Fire Flower
     behaviour lives

That intersection is the shortlist: player virtual methods that read power-up mode. It is exactly
where "acts like a mushroom" must be decided.
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

VT_A = 0x00C24C74
VT_B = 0x00C253D4


def is_code_rva(v):
    return 0x288 <= v < 0x9AD3BC


def xref_count(rva):
    n = 0
    for xr in idautils.XrefsTo(BASE + rva, 0):
        n += 1
    return n


# which functions read mode 0x528
mode_readers = set()
for ea in idautils.Functions():
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        d = idc.GetDisasm(insn)
        if "#0x528]" in d and "LDR" in d:
            mode_readers.add(ea - BASE)
            break

print(f"functions reading [.,#0x528]: {len(mode_readers)}")

for vt, label in ((VT_A, "Player_vtable_a"), (VT_B, "Player_vtable_b")):
    print()
    print("=" * 96)
    print(f"{label}  @ {vt:#010x}")
    print("=" * 96)
    a = vt
    idx = 0
    slots = []
    while idx <= 600:
        w = ida_bytes.get_dword(BASE + a)
        if not is_code_rva(w):
            break
        slots.append(w)
        a += 4
        idx += 1
    print(f"  slots: {len(slots)}")
    if not slots:
        continue

    # which slots read mode?
    aware = [(i, w) for i, w in enumerate(slots) if w in mode_readers]
    print(f"  slots whose target reads [.,#0x528]: {len(aware)}")
    for i, w in aware:
        f = ida_funcs.get_func(BASE + w)
        sz = (f.end_ea - f.start_ea) if f else 0
        nm = ida_name.get_name(BASE + w) or f"sub_{w:X}"
        print(f"    [{i:>3}] {w:#010x} {sz:>5}b xref={xref_count(w):<3} {nm}")

    # small slots (predicates)
    small = []
    for i, w in enumerate(slots):
        f = ida_funcs.get_func(BASE + w)
        if f and (f.end_ea - f.start_ea) <= 48:
            small.append((i, w, f.end_ea - f.start_ea))
    print(f"  small slots (<=48b, likely predicates): {len(small)}")
    for i, w, sz in small[:25]:
        nm = ida_name.get_name(BASE + w) or f"sub_{w:X}"
        print(f"    [{i:>3}] {w:#010x} {sz:>3}b {nm}")

# also name the two vtables themselves if unnamed
for vt, label in ((VT_A, "Player_vtable_a"), (VT_B, "Player_vtable_b")):
    cur = ida_name.get_name(BASE + vt) or ""
    print(f"\n  {vt:#010x} currently named: {cur or '(none)'}")

"""READ THE PLAYER'S OWN VIRTUAL METHOD TABLE, now that vtable starts are authoritative.

Every previous attempt to name player behaviour ran into "0 callers": Player methods are reached by
virtual dispatch through the player's vtable, never by BL. With 220 authoritative vtable starts and
564 verified slot names, the player's method table can finally be read as a list.

This:
  1. finds the Player / PlayerBase / PlayerStates vtable(s)
  2. prints every slot with its current name and size
  3. flags slots whose target is small enough to be a simple predicate (a permission check), since
     the Fire Flower symptom is a capability question
  4. for slots with 0 xrefs anywhere, says so -- those are the ones only reachable virtually, and
     they are exactly the methods a hook would need to replace

The point is to identify, by slot, where "can the player do X" lives.
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


def is_code_rva(v):
    return 0x288 <= v < 0x9AD3BC


def callers_of(rva):
    n = 0
    for xr in idautils.XrefsTo(BASE + rva, 0):
        f = ida_funcs.get_func(xr.frm)
        if f and f.start_ea != BASE + rva:
            n += 1
    return n


# find player-ish vtables
vts = []
for ea, nm in idautils.Names():
    rva = ea - BASE
    if not nm.endswith("_vtable"):
        continue
    cls = nm[:-len("_vtable")]
    if any(k in cls for k in ("Player", "Yoshi", "Mario", "Luigi", "Toadette", "Nabbit")):
        vts.append((rva, cls, nm))

print("=" * 96)
print(f"player-related vtables: {len(vts)}")
print("=" * 96)
for rva, cls, nm in sorted(vts):
    a = rva
    idx = 0
    n_slots = 0
    while idx <= 500:
        w = ida_bytes.get_dword(BASE + a)
        if not is_code_rva(w):
            break
        n_slots += 1
        a += 4
        idx += 1
    print(f"  {rva:#010x}  {cls:<28} {n_slots} slots")

print()
print("=" * 96)
print("PlayerBase / Player slot listing (first 120 slots)")
print("=" * 96)
for rva, cls, nm in sorted(vts):
    if cls not in ("Player", "PlayerBase", "PlayerStates", "PlayerMgr"):
        continue
    print(f"--- {cls}  vtable {rva:#010x} ---")
    a = rva
    idx = 0
    while idx <= 500:
        w = ida_bytes.get_dword(BASE + a)
        if not is_code_rva(w):
            break
        f = ida_funcs.get_func(BASE + w)
        sz = (f.end_ea - f.start_ea) if f else 0
        snm = ida_name.get_name(BASE + w) or f"sub_{w:X}"
        xr = callers_of(w)
        flag = ""
        if sz and sz <= 64:
            flag = " SMALL"
        if xr == 0:
            flag += " NOXREF"
        print(f"  [{idx:>3}] {w:#010x} {sz:>5}b xref={xr:<3} {snm}{flag}")
        a += 4
        idx += 1
        if idx > 120:
            print("  ...")
            break
    print()

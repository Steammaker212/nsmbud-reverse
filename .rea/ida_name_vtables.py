"""Name the two Player vtables and the generic dispatch wrappers found this round.

Only names that assert something verifiable:

  0xC24C74 / 0xC253D4 -> Player_vtable_a / Player_vtable_b
        367 slots each; both contain Player_setPowerupMode at slot 37; both begin with the
        Actor::beforeCreate slot then sub_6079569C. "Player" is justified because
        Player_ctor/PlayerBase_ctor sit in the derived head and the mode setter is here.

  0x600D7390 -> Object_invokeSlot37
  0x600D79C4 -> Object_invokeSlot37_b
        Small wrappers whose body is exactly: load vtable, load slot 37, BLX. They operate on
        ANY object, so the name must not claim Player.

These slots are NOT written; they are code, so the vtable names are labels on data.
"""
import ida_bytes
import ida_name
import ida_bytes as ib
import idaapi
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

APPLY = [
    (0x00C24C74, "Player_vtable_a"),
    (0x00C253D4, "Player_vtable_b"),
    (0x000D7390, "Object_invokeSlot37"),
    (0x000D79C4, "Object_invokeSlot37_b"),
]

for rva, name in APPLY:
    ea = BASE + rva
    cur = ida_name.get_name(ea) or ""
    ok = ida_name.set_name(ea, name, ida_name.SN_NOWARN)
    print(f"  {rva:#010x}  {cur or '(none)':<28} -> {name}  ok={ok}")

# add a repeatable comment recording the slot, which survives in the .idb for later rounds
for vt in (0x00C24C74, 0x00C253D4):
    ea = BASE + vt
    c = ("367-slot Player vtable. Slot 37 (byte offset 0x94) = Player_setPowerupMode "
         "(RVA 0x795CDC). RTTI words before the run are zero (stripped).")
    idc.set_cmt(ea, c, 1)

print("comments set on both vtables")
idaapi.save_database("", 0)
print("saved")

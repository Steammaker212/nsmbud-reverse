"""Apply names for the block system discovered this round.

All of these already carry real mangled C++ names from the compiler, so most need nothing. The
ones that need naming are the helper functions the block code calls, where the purpose is now
established from code:

  0x005649F8  the real spawner behind spawnItemUp/spawnItemDown thunks. It changes the block's
              state, sets collision type 12, and installs a new collider -- so it is not a
              "spawn an item object" routine but a "turn this block into an empty block" one.
              Named BlockBase_onEmptied. If that is wrong it is still literally what the code
              does (sets an empty state), so the name is defensible.

  0x00563C28  called by onCreate; drives MovementHandler with the param-derived mask.
              Named BlockBase_setupMovement.

  0x005D0024  called by onCreate right before the vtable+192 call. Purpose not established ->
              leave unnamed.

Nothing here claims more than the body shows.
"""
import ida_name
import idaapi
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

APPLY = [
    (0x005649F8, "BlockBase_onEmptied"),
    (0x00563C28, "BlockBase_setupMovement"),
]

for rva, name in APPLY:
    ea = BASE + rva
    cur = ida_name.get_name(ea) or ""
    ok = ida_name.set_name(ea, name, ida_name.SN_NOWARN)
    print(f"  {rva:#010x}  {cur or '(none)':<34} -> {name}  ok={ok}")

# record the param-word layout as a repeatable comment on getContents so it is not lost
ea = BASE + 0x00563294
idc.set_cmt(ea, "Block contents item id = (param@+24 & 0xF) | ((param>>24 & 0x10) ? 0x10 : 0). "
                "Range 0..31; resolver dword_60B0267C maps 0..11 to objects and marks 12+ "
                "invalid. Vtable slot 90 in 29 block vtables.", 1)
print("  comment set on BlockBase::getContents")

idaapi.save_database("", 0)
print("saved")

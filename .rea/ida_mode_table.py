"""DUMP dword_60B0C300 -- the power-up mode -> model/animation index table.

Slot 39 of the player vtable is literally

    LDR R0, =dword_60B0C300
    LDR R0, [R0, R1, LSL #2]     ; R1 = mode
    BX  LR

so dword_60B0C300[mode] is the engine's canonical mapping from power-up mode to whatever the
callers index. Slot 305 then does unk_60B0C8F0[that value].

A wrong or absent entry for the Fire Flower (mode 1) would make it behave/render as the entry it
falls back to -- which is exactly the reported symptom ("appears and acts as a normal mushroom").

This prints the table with the known item ordering for comparison:
    0 Kinoko, 1 FireFlower, 2 Star, 3 IceFlower, 4 Propeller, 5 MameKinoko,
    6 Penguin, 7 NutKinoko, 8 PNutKinoko, 9 PeachCrown
and checks whether index 1 (FireFlower) holds a distinct value or duplicates index 0 (Kinoko).
"""
import ida_bytes
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
TAB = 0x00B0C300

ITEMS = {0: "Kinoko", 1: "FireFlower", 2: "Star", 3: "IceFlower", 4: "Propeller",
         5: "MameKinoko", 6: "Penguin", 7: "NutKinoko", 8: "PNutKinoko", 9: "PeachCrown"}

print("=" * 92)
print(f"dword_60B0C300  (name: {ida_name.get_name(BASE + TAB) or '(none)'})")
print("=" * 92)
vals = []
for i in range(32):
    v = ida_bytes.get_dword(BASE + TAB + i * 4)
    vals.append(v)
    item = ITEMS.get(i, "")
    print(f"  [{i:>2}] {v:#010x} ({v:>10})   {item}")

print()
print("=" * 92)
print("CHECK: is FireFlower (index 1) distinct from Kinoko (index 0)?")
print("=" * 92)
print(f"  [0] Kinoko     = {vals[0]:#x} ({vals[0]})")
print(f"  [1] FireFlower = {vals[1]:#x} ({vals[1]})")
if vals[0] == vals[1]:
    print("  ** IDENTICAL -- the Fire Flower maps to the same value as Kinoko. This alone would")
    print("     explain 'appears and acts like a normal mushroom'.")
else:
    print("  distinct -- the mode->index table does differentiate the Fire Flower.")

print()
print("  full duplicate analysis:")
seen = {}
for i, v in enumerate(vals[:16]):
    seen.setdefault(v, []).append(i)
for v, idxs in sorted(seen.items(), key=lambda kv: -len(kv[1])):
    if len(idxs) > 1:
        names = [ITEMS.get(i, f"[{i}]") for i in idxs]
        print(f"    value {v:#x} shared by indices {idxs} = {names}")

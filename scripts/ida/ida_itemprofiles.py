"""Pin down contents -> item by finding the itemProfile table it actually feeds.

Verified so far (by decompilation):
  sub_60466328(a1, a2, a3, a4)
      v6 = sub_60465E4C(a1, a3, a2[32], byte(a2+13))     // contents -> itemId
      sub_604663F4(v6, a2[0], ..., a4)                    // itemId -> actor

and sub_604663F4's first parameter (Hex-Rays named it a1, but it is used as
`a4 + 1` when indexing a profile table) is really the itemId.

Two things must be pinned down:
  A. which table maps itemId -> Profile (so itemId 7 vs 1 can be identified)
  B. which table maps block contents -> itemId (the one the editor's labels follow)

For A: sub_604663F4 indexes `(&unk_60C9D3F0)[v11 + 1]` where v11 = itemId (clamped at
>10). That is a .bss array filled at runtime from .rodata, one dword per slot. The
fill sequence in the decompilation names the sources:
    dword_60C9D3F4 = MEMORY[0xAF3664]; ... etc.
so each itemId's Profile comes from a distinct .rodata slot. Reading those slots and
matching them to the report's profile ids identifies each itemId's class.

For B: read the dword_60B0267C entries and test the mapping against the editor's
labels, admitting the possibility that the editor's list is simply keyed differently
(index 0 of the list may not be contents 0).
"""
import json
import os

import ida_bytes
import ida_funcs
import ida_hexrays
import ida_lines
import idautils
import idc

OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "ida_itemprofiles.json")

POPULATE = 0x604663F4
FILL_SLOTS = [0xAF3664, 0xAF3668, 0xAF3A80, 0xAF366C, 0xAF3670, 0xAF3674,
              0xAF3678, 0xAF367C, 0xAF3680, 0xAF3684, 0xAF368C]
PROFILE_TBL = 0x60C9D3F4
ITEM_TABLE = 0x60B0267C

report = {}


def disasm(ea_, n):
    out = []
    for _ in range(n):
        d = idc.generate_disasm_line(ea_, 0)
        if d is None:
            break
        out.append({"ea": ea_, "text": ida_lines.tag_remove(d)})
        nxt = idc.next_head(ea_)
        if nxt == idc.BADADDR or nxt == ea_:
            break
        ea_ = nxt
    return out


# A. resolve the .rodata slots that seed the itemId -> Profile table
report["fill_slots"] = {}
for slot in FILL_SLOTS:
    # MEMORY[0xAF3664] in Hex-Rays is an absolute address in the loader's space.
    # In this rebased image the literal is a plain address; read it as u32.
    val = ida_bytes.get_dword(slot)
    report["fill_slots"][hex(slot)] = {
        "raw": val,
        "as_va": hex(val) if val and val > 0x60000000 else None,
    }

# The dwords themselves are Profile ids in this game's layout; record neighbours too
# so an off-by-one in my slot list is visible rather than silent.
base = 0xAF3650
raw = ida_bytes.get_bytes(base, 0x60)
if raw:
    report["rodata_window_AF3650"] = {
        hex(base + i * 4): int.from_bytes(raw[i * 4:i * 4 + 4], "little")
        for i in range(len(raw) // 4)
    }

# B. the item table, plus the profile ids it implies
items = []
raw = ida_bytes.get_bytes(ITEM_TABLE, 26 * 4)
if raw:
    items = [int.from_bytes(raw[i:i + 4], "little") for i in range(0, 26 * 4, 4)]
report["item_table"] = {str(i): v for i, v in enumerate(items)}

# editor labels, for comparison
EDITOR = {0: "Nothing", 1: "1 coin", 2: "Fire Flower", 3: "Fire Flower",
          4: "Propeller Mushroom", 5: "Penguin Suit", 6: "Mini mushroom",
          7: "Star", 8: "Continuous star", 9: "Yoshi egg", 10: "10-Coin",
          11: "1-UP", 12: "Vine", 13: "Spring", 14: "Super mushroom (if small)",
          15: "Ice flower"}

# Report's verified itemId -> mode map (HAMMER_POWERUP_REPORT 10.2).
ITEM_MODE = {0: 1, 1: 2, 2: 1, 3: 3, 4: 6, 5: 4, 6: 5, 7: 1, 8: 7, 9: 1, 10: 9}
ITEM_NAME = {0: "Mushroom", 1: "Fire Flower", 2: "LightMask", 3: "Propeller",
             4: "Star", 5: "Penguin", 6: "Mini", 7: "1-UP", 8: "Ice Flower",
             9: "1-UP", 10: "Yoshi Egg"}

comparison = {}
for c in range(16):
    item = items[c] if c < len(items) else None
    comparison[str(c)] = {
        "editor_label": EDITOR.get(c),
        "itemId": item,
        "item_class": ITEM_NAME.get(item) if item is not None and item < 11 else None,
        "mode": ITEM_MODE.get(item) if item is not None and item < 11 else None,
    }
report["comparison"] = comparison

with open(OUT, "w", encoding="utf-8") as fh:
    json.dump(report, fh, indent=2, default=str)
print(f"[ida_itemprofiles] wrote {OUT}")
idc.qexit(0)

# The item table, and the correction it forces

Read out of the shipped Deluxe binary, not inferred.

`sub_604F2044` (RVA `0x004F2044`, now named `ItemNameTable_build`) initialises a table of
`{vtable, char* name}` pairs into `.bss`. The first word of every record is the constant
`12321336 == 0xBC0000`, which is an existing symbol in the binary (`??g_ResourceManager`) —
so each record simply begins with that shared pointer, and the constant is recorded as an
observed value rather than a purpose-built symbol. The name half is quoted verbatim from
`.rodata`. The list, in declaration order:

| index | name | meaning |
|---|---|---|
| 0 | `Kinoko` | Mushroom |
| 1 | `FireFlower` | Fire Flower |
| 2 | `Star` | Super Star |
| 3 | `IceFlower` | Ice Flower |
| 4 | `Propeller` | Propeller Mushroom |
| 5 | `MameKinoko` | Mini Mushroom |
| 6 | `Penguin` | Penguin Suit |
| 7 | `NutKinoko` | Acorn Mushroom |
| 8 | `PNutKinoko` | P-Acorn |
| 9 | `PeachCrown` | Peachette's crown |

Ten entries — and the three power-up **mode tables are also ten entries each**, read back
from memory with the correct dword stride:

```
body    0x00B0C230  [1, 0, 0, 1, 2, 3, 0, 4, 4, 5]
height  0x00B0C2BC  [16.0, 31.0, 31.0, 6.0, 31.0 x6]
balloon 0x00B0C34C  [0.0, -4.0, -4.0, 4.0, -5.0, -2.0, -4.0, -4.0, -4.0, 0.0]
```

## A correction this forces

An earlier note in this repository said **"item value 3 is Fire Flower"**. Against this
list that is wrong: index **1** is `FireFlower`, index **3** is `IceFlower`.

This matters directly for the Fire Flower still behaving like a mushroom. If the mode
being written for a fire flower is derived from an assumed item id, the assumption may be
off by two — which would select `IceFlower` rather than `FireFlower`. The question block's
own item id is an argument at its spawn call site and must be read from that call, not
taken from this ordering. **This is the next thing to check.**

## Why Hammer needs new table entries

Mode 10 is outside all three ten-entry tables. The body table would resolve index 10 to
whatever follows it, and no Hammer body type or model exists in the build (`EF_MortonHammer*`
and `SE_OBJ_HAMMER_HIT_BOTH` are the only hammer strings). So a Hammer Suit needs:

1. a new body-table entry (currently mode 10 must fall back to type 0, colour 2 — big Mario),
2. a new height entry,
3. a model and animation set that the build does not ship.

That is why the mode-10 work looks like "big Mario with no hammer": the tables have no slot
for it, and the visual assets are absent.

## What is shipped

`sweetdx/include/nsmbudx_item_table.h` — the enum, the record layout, the table addresses,
the six reader sites, the player mode offset (`+0x528`, byte), and the vtable constant.
`decompiled/data/item_names.txt` — the raw extraction.

The four words immediately after the body table are `0xA5, 0xA4, 0xA3, 0xA2`. They belong to
the following data and must not be overwritten by any patch that lengthens the table.

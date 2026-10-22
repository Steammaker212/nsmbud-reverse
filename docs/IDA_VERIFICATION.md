# IDA Pro verification: what it confirmed, and what it overturned

Everything below was checked with **IDA Professional 9.3 + Hex-Rays** against a real
database of the retail image, and separately against the Hammer build. Scripts are in
`scripts/`.

This document exists because the IDA work **overturned one of my own earlier
claims**, and the repository should say so rather than quietly deleting it.

## Confirmed: the Hammer build really does permit mode 10

Verified byte-for-byte on `convertedmain.hammer_b.elf`, not inferred from a patch
script's output.

| What | Retail | Hammer build |
|---|---|---|
| Fire Flower grant handler, mode immediate at `0x6045DDCC` | `0220a0e3` = `mov r2,#2` | `0a20a0e3` = `mov r2,#10` |
| Suit-colour gate at `0x6078E6A8` | `02 00 50 e3` = `cmp r0,#2` | `0a 00 50 e3` = `cmp r0,#10` |
| Item-grant mode bitset at `0x60465F40` **and** `0x6046600C` | `movw r1,#0x1FB` | `movw r1,#0x3FB` |

The bitset is the important one, and it is worth spelling out because it is what
actually gates the grant:

```
0x1FB = 0b0_0111_1110_11  bits 0,1,3,4,5,6,7,8  -> modes 1,2,4,5,6,7,8,9
0x3FB = 0b0_1111_1110_11  bits 0,1,3,4,5,6,7,8,9 -> modes 1,2,4,5,6,7,8,9,10
```

Mode 10 needs **bit 9**. Retail `0x1FB` does not have it; the build's `0x3FB` does.
So the grant path genuinely accepts a player already in mode 10. That is the claim
the whole Hammer feature rests on, and it holds.

## Confirmed: the item table identity, 11/11

`sub_604663F4` fills a runtime profile array from eleven `.rodata` seed slots. Read
directly, they match `HAMMER_POWERUP_REPORT.md` §10.2 exactly:

| itemId | seed value | item class | itemId | seed value | item class |
|---:|---:|---|---:|---:|---|
| 0 | 591 | Mushroom | 6 | 596 | Mini Mushroom |
| 1 | 592 | Fire Flower | 7 | 597 | 1-UP (silent) |
| 2 | 854 | LightMask | 8 | 598 | Ice Flower |
| 3 | 593 | Propeller | 9 | 599 | 1-UP (silent) |
| 4 | 594 | Star | 10 | 601 | Yoshi Egg |
| 5 | 595 | Penguin | | | |

**11 of 11.** The item-class mapping in the report is sound.

## Overturned: my "contents 2 and 3 are the same item" claim

I previously wrote, and based the `HammerQuestionBlock` patch on, this:

> contents 2 and 3 both resolve to action code 0, therefore they are the same item,
> therefore relabelling either is free.

**That reasoning was invalid.** IDA/Hex-Rays shows `dword_60B04164` is *not* a flat
contents-indexed table. In `sub_605635AC`:

```c
v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 360))(a1);  // virtual call
v9 = dword_60B04164[v8];
*(_DWORD *)(a1 + 6856) = v9;
```

It is indexed by the result of a **virtual call** on the block object. And the
caller of the spawn wrapper passes that computed field, not the raw contents byte:

```c
return sub_60466328(MEMORY[0xC9D3E4], (int)v18, *(_DWORD *)(a1 + 6856), v14);
```

So comparing "contents 2" against "contents 3" through that table was comparing
indices that the table is not addressed by. Two equal entries proved nothing about
the two contents values.

## Still unresolved: the contents → item mapping

I tried to reconcile the binary with the editor's 16 labels. I tested the full chain
(`contents → dword_60B04164 → dword_60B0267C`), the direct table, and index bases
from −2 to +2. **The best fit was 3/16.**

My forward chain disagrees with the editor at almost every row:

| contents | my chain says | editor says |
|---:|---|---|
| 2 | Mushroom | Fire Flower |
| 4 | Penguin | Propeller Mushroom |
| 5 | Mini | Penguin Suit |
| 15 | Star | Ice flower |

Since the item table itself is confirmed 11/11, the fault is upstream: either the
contents field is not the value I think it is at that point, or the editor's list
order is derived from data I have not located.

**Consequence:** the per-entry relabel in `HammerQuestionBlock` is **not
justified**, and that patch is now marked unreleased. Shipping a dropdown that says
"Hammer" over a value that spawns a Mushroom would be worse than shipping nothing.

## What this means for the Cheep Cheep patch

Unaffected. That patch adds `Movement Type` / `Movement ID` (nybbles 19-20, 21-22)
to sprites that do not expose them, and rests on the base game's own convention
across 143 other sprites rather than on this item chain. It does not touch contents
at all.

## Reproducing

The IDA scripts need the licensed headless binary and a database that is not locked
by a running GUI:

```
idat.exe -Olicense:keyfile=<idapro.hexlic> -A -S"<script>.py" "<db>.i64"
```

Two traps worth recording:

- Headless IDA fails with **error 4** if a GUI already has the database open. The
  `.id0`/`.id1` files are locked; copying them fails. The fix is to copy only the
  packed `.i64` into a fresh directory and let IDA unpack it there.
- `idc.tag_remove` does not exist in IDA 9.x; it moved to `ida_lines.tag_remove`.

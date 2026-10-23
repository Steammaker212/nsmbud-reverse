# Making Ice Flower behave like the other power-ups

This is the single most useful power-up finding in this repository, and it is a two-instruction change rather than a
decompilation problem.

## The symptom

Collecting an Ice Flower does not put the player into Ice Flower mode. The item is picked up, the sound plays, the
HUD updates -- and the player stays as they were.

## The cause

Nothing in the item tables is wrong. The grant gate refuses the mode.

`sub_60465E4C` (RVA `0x00465E4C`, the question-block item grant gate) checks four conditions before it will return
an item id. The last of them is a bitmap test, decompiled at `decompiled/blocks/ITEM_gate_60465E4C.c:45`:

```c
if ( v6
  && (**(int (__fastcall ***)(int, int))v6)(v6, 13087608) == 1
  && (v7 = *(_DWORD *)(v6 + 1320) - 1, v7 <= 8)
  && ((0x1FBu >> v7) & 1) != 0 )
{
    return arr_dword_60B0267C[a2];
}
return 0;
```

`*(v6 + 1320)` is the player's current mode; `v7` is that mode minus one, so `v7 = 2` means mode 3. `0x1FB` is a
bitmap in which bit *n* corresponds to mode *n + 1*. Written out:

```
0x1FB = 0b111111011
         bit 8 7 6 5 4 3 2 1 0
               1 1 1 1 1 1 0 1 1
                           ^ bit 2 is 0, so mode 3 is refused
```

Read it as "which modes may be granted":

| bit | mode | admitted by 0x1FB |
|---|---|---|
| 0 | 1 Fire Flower | yes |
| 1 | 2 Star | yes |
| 2 | 3 Ice Flower | **no** |
| 3 | 4 Propeller | yes |
| 4 | 5 Mini Mushroom | yes |
| 5 | 6 Penguin | yes |
| 6 | 7 Nut Mushroom | yes |
| 7 | 8 P-Nut Mushroom | yes |
| 8 | 9 Peach Crown | yes |

Every power-up is admitted except mode 3. Ice Flower is the one mode the shipped mask excludes.

## The patch

The mask appears twice in the function, as an immediate in the instruction pair that materialises the comparison
value. Both are `MOVW r1, #0x1FB`, encoded `E30011FB`:

| RVA | word in the NSO (after decompression) |
|---|---|
| `0x00465F40` | `E30011FB` |
| `0x0046600C` | `E30011FB` |

`0x1FF` is the same bitmap with bit 2 set, which admits mode 3. `MOVW r1, #0x1FF` encodes as `E30011FF`, derived
from the MOVW immediate split rather than guessed:

```
MOVW Rd, #imm16   cond 0011 0000 imm4 Rd imm12
E30011FB  ->  Rd=r1  imm4=0x0  imm12=0x1FB  ->  imm16 = (0x0 << 12) | 0x1FB = 0x1FB   [decoded back, matches]
E30011FF  ->  Rd=r1  imm4=0x0  imm12=0x1FF  ->  imm16 = (0x0 << 12) | 0x1FF = 0x1FF   [what we want]
```

So the patch is **`E30011FB` -> `E30011FF` at both `0x00465F40` and `0x0046600C`**, in the decompressed `.text`.

One of the two sites is the comparison the decompiler shows; the other is the same mask materialised on the path
that reaches the return. Both must change, because patching only one leaves the other path refusing the mode.

### A wrong answer worth recording

The obvious guess is `0x3FB`, on the assumption that the next free high bit enables the next mode. It does not:

```
0x1FB = 0b0111111011   admits modes 1,2,4,5,6,7,8,9
0x3FB = 0b1111111011   admits modes 1,2,4,5,6,7,8,9,10   <- bit 2 still 0, mode 3 still refused
0x1FF = 0b0111111111   admits modes 1,2,3,4,5,6,7,8,9    <- bit 2 set, mode 3 admitted
```

`0x3FB` sets bit 9 (mode 10, which does not exist) and leaves mode 3 out. Only `0x1FF` enables Ice Flower. Every one
of these was checked by decoding the bits, not by reading the hex.

## What this does not fix

There is a second guard in the same family. `Player + 0x528` receives the mode, but the mode-group table
(`dword_60B0C300`, read by `sub_60796A60`, player vtable slot 39) maps mode 3 to group **0** while every other
power-up maps to group 1 or 2:

| mode | power-up | group |
|---|---|---|
| 0 | Kinoko | 1 |
| 1 | Fire Flower | 2 |
| 2 | Star | 2 |
| 3 | **Ice Flower** | **0** |
| 4 | Propeller | 2 |
| 5 | MameKinoko | 2 |
| 6 | Penguin | 2 |
| 7 | NutKinoko | 2 |
| 8 | PNutKinoko | 2 |
| 9 | Peach Crown | 2 |

If Ice Flower still misbehaves after the mask patch, group 0 is the next thing to look at -- it is the only entry
that is not 1 or 2, so whatever group 0 selects is a code path no other power-up exercises. That table has not been
traced to its consumer in this repository yet, so this file does not claim what to change there.

## Evidence

* `0x1FB` present in the decompiled gate at `ITEM_gate_60465E4C.c:45`
* both words read as `0xE30011FB` / bytes `fb1100e3` directly from `main.i64`
* the mode order matches `MODE_PLUMBING.md` entry for entry
* the MOVW encoding was decoded and re-encoded, not assumed

See `decompiled/include/nsmbudx_modding.h` for the modes, item ids and table addresses in C form.

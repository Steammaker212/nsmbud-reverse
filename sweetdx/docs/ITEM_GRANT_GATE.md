# The item-grant hook is on a permission query, not the grant

This settles the standing question: **why does the Fire Flower appear and behave normally,
but nothing catches fire, even with `item_grant.hks` applied?**

## What `sub_60465E4C` actually is

```c
int __fastcall sub_60465E4C(int a1, unsigned int a2, unsigned int a3, int a4)
{
  if ( a4 == 1 )
    return dword_60B0267C[a2];
  if ( a3 == 15 )
    return 0;
  if ( a2 > 0x19 || ((1 << a2) & 0x24004E0) == 0 )
    return dword_60B0267C[a2];
  if ( a3 >= 4 )
    a3 = 0;
  v6 = *(_DWORD *)(MEMORY[0xCC436C] + 4 * a3 + 48);
  ...
  if ( v6
    && (**(int (__fastcall ***)(int, int))v6)(v6, 13087608) == 1
    && (v7 = *(_DWORD *)(v6 + 1320) - 1, v7 <= 8)
    && ((0x1FBu >> v7) & 1) != 0 )
  {
    return dword_60B0267C[a2];
  }
  return 0;
}
```

Three things follow directly from reading it:

1. **It returns a value; it never stores the mode byte.** The caller `sub_60466328` has
   **0 writes** to `+0x528`. So this function cannot, by itself, grant a power-up.
2. **The return is a table lookup `dword_60B0267C[a2]`, not a boolean.** That table, read from
   memory, is a permutation-ish id map:

   ```
   [0]=0  [1]=3  [2]=7  [3]=0  [4]=1  [5]=4  [6]=6  [7]=5  [8]=2  [9]=2
   [10]=8 [11]=9  [12..19]=0xFFFFFFFF
   ```

   A lookup table of small integers indexed by an argument is an **id translation**, so `a2`
   is an item id being mapped to something else. It is not a mode test.
3. **The bitmask tests argument 0's mode, not the item's.** `v6` comes from
   `MEMORY[0xCC436C] + 4*a3 + 48` — a player slot. So `(_DWORD *)(v6 + 1320)` is
   *the receiving player's current mode*, and the mask asks "may this player take this item
   right now?" Bit 2 (Star) is excluded because a star player already has the strongest
   state; bit 9 (PeachCrown) was excluded before the patch.

## Why the patch produced no visible change

`item_grant.hks` changes:

| site | retail | patched |
|---|---|---|
| `0x465F34` | `CMP R0,#8` | `CMP R0,#9` |
| `0x465F40` | `MOVW R1,#0x1FB` | `MOVW R1,#0x3FB` |
| `0x466000` | `CMP R0,#8` | `CMP R0,#9` |
| `0x46600C` | `MOVW R1,#0x1FB` | `MOVW R1,#0x3FB` |

That widens the *permission* check to include mode 10 (since the index is mode-1). It does not touch what item is granted,
which mode is written, or whether the fire-flower capability is enabled. If the mask was
never the blocker for the fire flower — and the report says a fire flower *is* received and
*does* act normally — then widening it is correctly a no-op. **The patch is additive and
harmless; it is simply on the wrong function for this symptom.**

## The field is a 4-byte word, not a byte — corrected

An earlier version of this document said `+0x528` was byte-sized, because the `0x45xxxx`
functions touch it with `STRB`. That was wrong, and the correction matters because the whole
table-indexing argument depends on the field width.

Every access to displacement `0x528` in the player region, grouped by mnemonic:

```
player   LDR     209
player   LDREQ    23
player   LDRNE     2
player   STR       4
------------------------
word accesses:    238
byte accesses:      0
```

238 word accesses and **zero** byte accesses. The three `LDR` sites that index the height table
all use `LSL#2`, i.e. a dword stride, which only makes sense for a 4-byte index. And
`Player_setPowerupMode` reads and writes it with a full `LDR`/`STR`.

So the `STRB R0,[R4,#0x528]` sites in the `0x45xxxx` range are a **different struct** that
happens to share the displacement. They are not player mode writes and must not be treated as
such — which retires the "`0x452EDC` / `0x4531F8` are the power-up transition" hypothesis that
the earlier version of this document proposed. Both of those functions still read as hardcoded
transitions to mode 0 and mode 1 respectively, but on some other object.

## What is actually established

| fact | evidence |
|---|---|
| the setter is `0x795CDC`, now `Player_setPowerupMode` | `LDR R0,[R4,#0x528]` → `STR R0,[R4,R2]` (R2=0x2C78) → `STR R1,[R4,#0x528]` |
| it indexes the height table by mode with **no clamp** | `LDR R2,[R4,#0x528]` then `LDR R0,[R0,R2,LSL#2]`, no bounds test |
| the gate subtracts 1 before testing | `LDR R0,[R6,#0x528]` → `SUB R0,R0,#1` → `CMP R0,#8` → `TST R2,R1,LSR R0` |
| the gate is an id resolver, and its result is conditional on **another** player's mode | returns `dword_60B0267C[a2]`, gated on `a3`'s mode; `a3>=4` is forced to 0, `a3==15` means none |

Since the gate index is `mode-1` and `0x1FB` = bits 0,1,3,4,5,6,7,8, the modes it accepts are
**1,2,4,5,6,7,8,9** — it excludes mode 3 and mode 10. `0x3FB` adds bit 9, i.e. accepts mode 10.
That is the correct extension for a Hammer mode, and it is what `item_grant.hks` writes.

## The open problem, stated honestly

`Player_setPowerupMode` has **zero xrefs**: no `BL` reaches it, and its address (even or with
the Thumb bit set) appears nowhere in data. So it cannot currently be shown to be called at
all. Either its callers were folded into an inlined path, or its address is computed rather
than loaded.

That is the next real question, and it is not answered by guessing at another hook. The way to
settle it is a debugger, which the project already has configured: set a breakpoint on
`0x795CDC` (runtime address = `base + 0x795CDC`, `base` from the module list), collect a fire
flower, and see whether it hits. If it hits, the stack gives the caller. If it never hits, the
mode is being set by a genuinely different function and this whole line of reasoning needs
replacing.

**No hook should be added for this until that is read.** A single ARM `cmp` cannot express
"mode 2 or 10" anyway; anything needing membership must be a real `hook` with a trampoline in
`subsdk0`.

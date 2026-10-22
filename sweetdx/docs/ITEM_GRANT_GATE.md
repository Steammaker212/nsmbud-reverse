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

That widens the *permission* check to include mode 9. It does not touch what item is granted,
which mode is written, or whether the fire-flower capability is enabled. If the mask was
never the blocker for the fire flower — and the report says a fire flower *is* received and
*does* act normally — then widening it is correctly a no-op. **The patch is additive and
harmless; it is simply on the wrong function for this symptom.**

## Where the real behaviour must come from

The mode byte `Player + 0x528` **is** written in several places, with a distinguishing shape:

| site | instruction | form |
|---|---|---|
| `0x452EDC` | `STRB R0, [R4,#0x528]` | **byte** store, in a small dedicated function |
| `0x4531F8` | `STRB R0, [R4,#0x528]` | **byte** store, `MOV R0,#1` before it |
| `0x451FEC` | `STRB R5,[R4,#0x528]` | byte store, `R5 = 0` (clearing to small Mario) |
| `0x795CDC` | `STR R1,[R4,#0x528]` | word store, also copies old value to `+0x2C78` |
| `0x190428` | `STR R1,[R0,#0x528]` | word store inside a run of `+0x518..+0x528` |
| `0x9318FC` | `STR R11,[R4,#0x528]` | word store, large function |

The two `STRB` functions at **`0x452EDC`** and **`0x4531F8`** are the strongest candidates for
the actual power-up transition: they are small, dedicated, and write a *byte*, which matches
the field's declared width. `0x4531F8` sets `R0 = 1` before the store, i.e. it is the
"Mushroom → Super" path.

Note the earlier retracted claim: the field is **`+0x528` (1320), byte-sized**. Many hits on
this displacement are unrelated structs — 311 functions touch it — so only the ones on a
verified Player pointer count.

## What to do next, stated as a test

Read `0x452EDC` and `0x4531F8` and identify which one the fire-flower pickup calls. If
neither is called for a fire flower, the grant path is elsewhere and the mode is being set by
a table-driven constructor instead. That is the check that will actually move the Fire Flower,
and it does not depend on any further guessing.

**No hook should be added for this until that is read.** A single ARM `cmp` cannot express
"mode 2 or 10" anyway; anything needing membership must be a real `hook` with a trampoline in
`subsdk0`.

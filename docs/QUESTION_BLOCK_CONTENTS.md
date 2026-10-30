# What is inside a question block, and where that comes from

Settled from code. This replaces two earlier wrong ideas: that item ids could be inferred from
`ItemNameTable` ordering, and that `FlyingBlock` was the item-bearing question block.

## The answer: a 32-bit parameter word on the block object

`BlockBase::getContents` — **vtable slot 90 in 29 block vtables**, so it is *the* virtual
"what is in this block" hook:

```c
int __fastcall BlockBase::getContents(int a1)
{
  return HIBYTE(*(_DWORD *)(a1 + 24)) & 0x10 | *(_DWORD *)(a1 + 24) & 0xF;
}
```

```
LDR  R0, [R0, #0x18]     ; the block's parameter word (object + 24)
MOV  R1, #0x10
AND  R1, R1, R0, RSR #24 ; bit 24..31 of the param, landing on bit 4
AND  R0, R0, #0xF        ; low nibble
ORR  R0, R1, R0
BX   LR
```

So:

```
item_id = (param & 0x0F) | ((param >> 24) & 0x10 ? 0x10 : 0)
range   : 0..31
```

Note the shift: `HIBYTE(x) & 0x10` is **bit 28** of the original word, not bit 24. The decompiler
renders it as `HIBYTE(...) & 0x10`, which is correct but easy to misread.

`onCreate` uses the same word for other purposes, which corroborates the layout:

```c
*(a1 + 7304) = *(_BYTE *)(a1 + 28);                                       // whole high byte
*(a1 + 7300) = *(dword *)((char *)&unk_60AF2188 + ((param >> 2) & 4));    // bit 4
```

| bits | meaning |
|---|---|
| `0..3` | **block contents item id** (low nibble) |
| `4` | movement variant, indexes the `{3, 4}` table at `0xAF2188` |
| `28` | item id `+16` |
| `24..31` | also read whole as a secondary parameter |

## The id space lines up with the item resolver

`ItemId_resolveGuardedByPlayerMode` (`0x465E4C`) rejects `a2 > 0x19` (25), and its table
`dword_60B0267C` is:

```
[0]=0  [1]=3  [2]=7  [3]=0  [4]=1  [5]=4  [6]=6  [7]=5  [8]=2  [9]=2
[10]=8 [11]=9 [12..19]=0xFFFFFFFF
```

Valid entries run to index 11; 12 and up are `0xFFFFFFFF`, i.e. "no such object". A block whose
decoded id is 12..31 therefore spawns nothing. This is consistent with the resolver's bound and
confirms the table is an **id → object-id translation**, not a mode list.

## Why `FlyingBlock` is NOT the item block

`FlyingBlock::onCreate` (`0x5688B8`) does use the same param word, but:

* `+7300` (from the `{3,4}` table) is passed straight into
  `MovementHandler::getMaskForMovementType`, so it is a **movement type**, and `+7304` is a
  movement parameter;
* `+7300 == 3` only selects float offsets (`-32.0` vs `-18.0`) and a sound;
* the class's strings are movement/animation names.

`FlyingBlock` is the block that *moves*. It inherits `getContents` from `BlockBase` like every
other block, and its contents come from the same param bits.

## What this means for adding a Hammer block

Two routes, and the parameter encoding decides which is better:

**Route A — level data (Yaz0moto).** Set the block's param so the low nibble is a valid id with a
mapped object. But ids 0..11 already mean existing objects, so a new power-up cannot be given a
new id without also extending `dword_60B0267C` — which is `.rodata` and repointable.

**Route B — code (sweet-dx).** Repoint `dword_60B0267C`, extend it with a 12th entry pointing at
a Hammer item object, and give a block param the id 12. `getContents` already returns 12
unmodified, so nothing in the block path needs patching: **only the resolver table does.**

Route B is the finding worth having. Earlier rounds assumed the block itself needed a hook; it
does not. `getContents` is a pure bit extractor with no validation, so the entire change is one
table plus one level parameter.

The remaining blocker is unchanged and is an asset problem, not a logic problem: there is no
Hammer item model in romfs (`l_hammer` does not exist — see
[ROMFS_INVENTORY.md](ROMFS_INVENTORY.md)), so id 12 can be made to *resolve* but there is
nothing to draw. The Fire Flower, by contrast, has both a model and a valid id already.

## Method note

`getContents` has **0 direct code callers** yet **29 vtable hits**. That is the same lesson as
CALL_GRAPH_METHOD.md (in the removed `decompiled/` corpus): virtual methods have no direct
callers, and the address scan only works when searching for the **RVA** rather than the absolute
address.

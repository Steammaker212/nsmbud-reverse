# How functions are actually reached in this binary

Three separate searches for the callers of `Player_setPowerupMode` failed before the fourth
worked, and the reasons matter more than the result: they apply to every function in the image.

## Mistake 1: trusting "zero xrefs"

`Player_setPowerupMode` reported zero code xrefs, so I concluded it might be dead code. That was
worthless, because **66.5% of all functions in this database have zero xrefs**:

```
functions            : 49,470
with zero xrefs      : 32,897  (66.5%)
```

Functions I know are called report zero too — `Player_animSet_load`, `ItemNameTable_build`, and
all **705** actor builder functions (100%). A missing xref is the normal state here, not
evidence of unreachability.

## Mistake 2: searching for absolute addresses

I scanned `.data`/`.rodata` for `0x60795CDD` (image base + RVA + Thumb bit) and found nothing.
Then I "confirmed" it by scanning for the even address too. Both were wasted effort, because
**this binary stores RVAs in its tables, not absolute virtual addresses**. Look at a real vtable:

```
_ZTV10StageActor   first4 = 0x260c, 0x270c, 0x500, 0x568
_ZTV5Actor         first4 = 0x2f74, 0x2ff8, 0x2d98, 0x2e5c
```

`0x260c`, not `0x60260c`. The relative-value convention carried over from the ELF conversion.
Every absolute-address scan in this repository's history was searching for a number that does
not appear on disk.

## Mistake 3: assuming an absent pointer means an absent caller

`ItemNameTable_build` has no callers and no data pointer in the obvious place — because it is a
**static constructor**, registered in `.init_array` at `0xC7A874`, and run before the game's
main loop. Likewise the profile table `Profiles` lives in `.bss`, so it is populated by running
code and has no meaningful static contents to search.

## What actually works: search for the bare RVA

Scanning all non-`.text` data for the **RVA with the Thumb bit set** finds the registration:

```
Player_setPowerupMode  rva 0x00795cdc  -> 2 hits
    at 0x00C24D08 in .data
    at 0x00C25468 in .data
```

Both land inside runs of code RVAs, i.e. vtables:

| | |
|---|---|
| vtable A | `0xC24C74` .. `0xC2522C`, **367 slots** |
| vtable B | `0xC253D4` .. `0xC2598C`, **367 slots** |
| slot index | **37** |
| byte offset | **`0x94`** |
| `[−8]`, `[−4]` before run | both `0` — RTTI stripped, consistent with earlier findings |

So the dispatch is:

```
LDR  R0, [player]        ; vtable
LDR  R0, [R0, #0x94]     ; slot 37
BLX  R0
```

`Player_setPowerupMode` is **reachable and virtual**. It is not dead code, and the earlier note
saying it "cannot currently be shown to be called at all" was wrong.

## The one thing this does *not* yet prove

Finding the slot tells me the function's identity in the class layout, not who invokes it. I
tried two ways to find the invoker and both hit the same wall:

1. `LDR Rt,#0x94` sites — the strongest candidate, `ActiveCollider_doOverlapMaybe`, turned out
   to use `0x94` as a plain bitmask field on a collider. `0x94` is a common struct offset and
   appears in hundreds of unrelated places.
2. The proper dispatch idiom — `LDR Rt,[Robj]` then `LDR Rt,[Rt,#0x94]` then `BLX Rt` — has
   **55 matches**, all structurally identical:

```
LDR  R0, [R4]        ; vtable from the object
LDR  R1, [R0, #0x94] ; slot 37
MOV  R0, R4
BLX  R1
```

They are indistinguishable statically because the pattern is generic: **slot `0x94` means
"whatever the 37th virtual method of this object's class is"**, and the code does not know or
care which vtable it holds. `sub_600D7390` and `sub_600D79C4` are almost certainly reflection
or animation wrappers working on arbitrary objects, not Player-specific code.

Determining which of the 55 receives a Player requires knowing the runtime type, which is the
one thing a static database cannot supply. That is precisely what the debugger is for:

> break on `base + 0x795CDC`, collect a fire flower, and if it hits, the stack names the caller.

Until that runs, the honest statement is: **`Player_setPowerupMode` is slot 37 of two 367-slot
Player vtables at `0xC24C74` and `0xC253D4`, and is therefore reachable, but the invoker is not
statically determinable.**

## Rules for future rounds

1. **Never conclude "unreachable" from zero xrefs.** Measure against the 66.5% baseline.
2. **Search for RVAs, not absolute addresses.** `0x795cdc` or `0x795cdd`, never `0x60795cdc`.
3. Functions in `.init_array` are static constructors; zero callers is correct for them.
4. Tables in `.bss` are built at runtime and cannot be read statically.
5. Verify a scan method against a positive control before trusting a negative result. Had I
   tested `Player_ctor` (which has 2 real xrefs) first, I would have seen the address scan fail
   on a function that is certainly called, and known the method was broken.

# Naming method, and what it can and cannot support

Coverage is **9.7%** of 48,331 functions. That number is deliberately conservative: a wrong
name is worse than no name, because it propagates into every decompiled caller and into the
generated headers. This document records what each naming method actually proves, so the
low coverage is understandable rather than mysterious.

## What works

### Symbols from the existing symbol file — 3,170 names

`sweetdx/symbols/nsmbudx.sym` already had human-curated names from earlier work. These are
applied first and are the most trustworthy source: several came from mangled C++ symbols,
which are the compiler's own names.

### Two-hop string attribution — 9,099 strings across 4,275 functions

On ARM32 a string address is not materialised directly in an instruction. It is stored in a
literal pool (a word inside `.text`) and loaded with `LDR Rn, [PC, #off]`:

```
instruction --reads--> literal-pool slot --holds--> string address
```

A one-hop scan from the string lands on the pool slot, which is *code*, and so attributes
every string to nothing useful. That is why the first two attempts found zero. Taking the
second hop — from the pool slot to the instructions that reference it — is what works.

This is the single most useful signal available, because it uses the game's own vocabulary.
Examples that produced names:

| function | strings it loads | name |
|---|---|---|
| `0x45CC68` | `I_crown`, `I_fireflower`, `I_iceflower`, `I_kinoko`, `I_musasabi` | `ItemNameTable_init` |
| `0x782DB0` | `Sjump`, `balloon_wait`, `carryP_throw` | `Player_animSet_load` |
| `0x7AF67C` | `SE_PLY_2NDJUMP`, `SE_PLY_2NDJUMP_S` | `Player_playDoubleJumpSound` |
| `0x78BA10` | `CH_Metamorphose`, `PEH_spike`, `M_TAIL_wait` | `Player_animSetMetamorphose_load` |
| `0x47C13C` | `CourseName_1-1` … `CourseName_2-3` | `CourseNameTable_init` |

### Behaviour read from the decompilation — 11 names

Used only where the instruction pattern is unambiguous:

| function | evidence | name |
|---|---|---|
| `0x788DFC` | `index >= 4 -> 0`; reads `base+0x20+4*idx`; validates via `0x7C7184`; 290 callers | `Player_getActorSlotChecked` |
| `0x7948E8` | three consecutive vtable slots (`+76`, `+80`, `+84`) on one object; 216 callers | `PlayerBase_dispatchVirtual3` |
| `0x794EC0` | sets vtable, calls `PlayerBase_ctor`, writes mode at `+0x528` | `Player_ctor` |

## What does not work, and why

### The `Profiles[]` table — reached, but it holds no names

`Profile::get` is `return Profiles[id]` for `id < 0x392`, so there are 914 profile records.
`Profile::Profile(ctor, profileId, _, info, actorId)` registers each one, and there are
**911 call sites** that all resolve their constructor argument to a real function.

That is genuinely useful: it gives 911 verified actor constructors, and
`out_profile_map.json` records every one. But **the profile records contain no name
string**. `ActorInfo` was dumped in full and holds only numeric physics fields. So this maps
constructor → profile id, not constructor → name.

### Naming constructors after their registration function's strings — reverted

Tried and undone. Registration functions contain long lists of *animation state* names:

```
fly_throw_ed_wait, walk_ed_AL_d, swim_down_st, demo_battleA_wait
```

Naming a constructor `Actor_fly_throw_ed_wait_build` asserts something false. 78 such names
were applied and then all reverted; the database now contains **zero** `Actor_*_build`
names. This is recorded because it is the obvious trap: the strings are present, nearby, and
plausible, and they are not actor names.

### RTTI — the data is not where expected

The plan was to read each constructor's vtable, take `vtable[-4]` as the `type_info`, and
demangle `type_info+4`. Zero of 775 constructors resolved. The cause is that on ARM the
vtable address is loaded through the literal pool rather than built with `MOVW`/`MOVT`, so
the constant-scan did not find it. Doing this properly means resolving pool loads, which is
the same machinery the string attribution already uses — a reasonable next step, not a dead
end.

## What this means for the objective

"Every known and important function has a proper name" is met for the functions whose
purpose is *known*: the 3,170 curated symbols, the 20 names added here, and the 911 actor
constructors which are identified by profile id even though their display names are not yet
recovered.

The remaining 90% are unnamed because the evidence to name them has not been extracted yet,
not because they are unimportant. The concrete next steps, in order of expected yield:

1. **Resolve RTTI through literal pools.** Every polymorphic class then names itself. This
   is the largest remaining win and reuses working machinery.
2. **Decode `Profile` → sprite name via the sprite table.** `sInit_SpriteToProfileTable`
   copies a stride-4 id array from `0xAF3474`; the sprite names live in a parallel table and
   the two need joining through the profile id.
3. **Attribute remaining strings to the 15,889 functions currently excluded for having no
   code xref**, in case some are table-driven initialisers like `ItemNameTable_init`.

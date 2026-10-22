# Naming method, and what it can and cannot support

Coverage is **9.7%** of 48,331 functions. That number is deliberately conservative: a wrong
name is worse than no name, because it propagates into every decompiled caller and into the
generated headers. This document records what each naming method actually proves, so the
low coverage is understandable rather than mysterious.

## What works

### Developer debug tags -- 694 actor constructors

The single biggest win. Every actor registration passes a {0x00BC0000, char* name} record
whose name is the developers' own Japanese debug tag. Decoding them and transliterating to
ASCII named 694 constructors. See [ACTOR_NAMES.md](ACTOR_NAMES.md).

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

Tried and undone, then done correctly by a different route (see ACTOR_NAMES.md). Registration functions do contain long lists of *animation state* names:

```
fly_throw_ed_wait, walk_ed_AL_d, swim_down_st, demo_battleA_wait
```

Naming a constructor `Actor_fly_throw_ed_wait_build` asserts something false. 78 such names
were applied and then all reverted; the database now contains **zero** `Actor_*_build`
names. This is recorded because it is the obvious trap: the strings are present, nearby, and
plausible, and they are not actor names.

### RTTI — genuinely stripped from this binary

The plan was to read each constructor's vtable, take the `type_info` pointer from the two
words before it, and demangle the name at `type_info+4`. This failed twice, and the second
attempt found the real reason: **the RTTI pointers are zero.**

```
_ZTV10StageActor   symbol at 0x00bc000c
   0x00bc0004 [-0x08]  0x0000000000  (zero)
   0x00bc0008 [-0x04]  0x0000000000  (zero)
   0x00bc000c [+0x00]  0x000000260c   <- first virtual function
```

All four vtable probes (`StageActor`, `Actor`, `Enemy`, `CollisionActor`) show zero in both
RTTI slots. The linker stripped them, which is normal for a shipped game. So there is no
class name to recover this way at all — the mangled symbols that *do* exist in the binary
(`_ZTV10StageActor`, `_ZN12SumoBrosBoss...`) come from the symbol file we curated, not from
in-binary RTTI.

One related detail, which matters for anyone reading constructor disassembly: constructors
load the vtable indirectly because it is patched at runtime from a pointer in `.data`:

```
LDR R0, =(dword_60C62BD0 - pc)   ; address of the pointer slot
LDR R0, [PC, R0]                 ; load the pointer
ADD R0, R0, #8                   ; skip the two RTTI slots
STR R0, [object]                 ; store the vtable into the object
```

So vtable identity lives in `.data`, not `.rodata`, and the `+8` confirms the two RTTI
slots exist but are unused.


## What this means for the objective

"Every known and important function has a proper name" is met for the functions whose
purpose is *known*: the 3,170 curated symbols, the 20 names added here, and the 911 actor
constructors which are identified by profile id even though their display names are not yet
recovered.

The remaining 90% are unnamed because the evidence to name them has not been extracted yet,
not because they are unimportant. The concrete next steps, in order of expected yield:

1. **Join the sprite table to the profile map.** `sInit_SpriteToProfileTable` copies a
   stride-4 id array from `0xAF3474` into `0xC7B7B4`; the sprite *names* live in a parallel
   table. Both halves exist and only need joining through the profile id. This is the
   largest remaining win.
2. **Decode the `Profile` → name path** that the engine itself uses to print or look up an
   actor, which is a code path rather than a data layout, so it cannot be wrong.
3. **Attribute strings to the 15,889 functions currently excluded for having no code
   xref**, in case more of them are table-driven initialisers like `ItemNameTable_init`.

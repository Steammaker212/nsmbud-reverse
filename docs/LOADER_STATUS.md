# Status

State at goal round 6, 2026-10-23. This file states what is measured and what is
not; it is not a changelog.

## The one number that matters

| Question | Answer |
| --- | --- |
| Can you read the game's C? | Yes — 46,879 functions, one file each |
| Can you find the function you want? | Yes — 9,671 have evidence-backed names |
| Can you verify a hook will branch where you think? | Yes — `verify_hooks.py`, 80/80 |
| Can you build a patch with it? | Yes — `loader/`, 14 hooks, links and verifies |
| Does the built patch apply at the right addresses? | Yes — decoded back from the IPS, 14/14 |
| **Has a built module run on a Switch?** | **No.** No console was reachable. |

That last row is still the honest boundary and this phase did not cross it. What
changed is everything up to it: the framework now *produces an artifact* rather
than describing one.

## What is newly true

| Claim | Evidence |
| --- | --- |
| The loader links a real module | `make -C loader deploy` → `out/mod.elf`, 3 PT_LOAD, MOD0 valid |
| 14 hooks build, up from 1 | `loader/hooks/*.c`, all compiled with clang |
| Each hook's arity is measured, not guessed | `check_prototypes.py` reads which of r0..r3 the target body uses |
| Each branch lands on its own hook | `verify_ips.py` decodes the emitted IPS back, 14/14 `ok` |
| The module is loadable by an NSO loader | `inspect_module.py`: MOD0 fields inside the module, 8/8 relocations `R_ARM_RELATIVE`, `_init` is `bx lr` |
| The same hooks compile through sweet-dx | 14 records, 14 distinct destinations, all inside the module |

### The 14 hooks

Every one is a behaviour-preserving wrapper: it counts its calls, forwards every
argument, and returns what the original returned. That is deliberate — a module
that quietly changed gameplay would make a successful boot impossible to
attribute.

| Site RVA | Target | Arity | Callers |
| --- | --- | --- | --- |
| 0x00019C | `static_init_hook` (mandatory) | 0 | — |
| 0x001BD4 | `Actor__getProfileId` | 1 | 669 |
| 0x005664 | `ActorMgr__create` | 3 | 323 |
| 0x07CF14 | `Player_getActorSlotChecked` | 2 | 290 |
| 0x009324 | `StateMgr_ctor` | 3 | 198 |
| 0x02DB34 | `StageActor__delete` | 2 | 74 |
| 0x23F99C | `Enemy__endState_DieFall` | 1 | 34 |
| 0x003094 | `ActorCollisionMgr_ctor` | 1 | 29 |
| 0x024C54 | `PlayerLookTargetList_add` | 2 | 26 |
| 0x111DAC | `Actor__removeChild` | 2 | 23 |
| 0x260C30 | `Enemy__vf26C` | 1 | 17 |
| 0x0637DC | `CollisionActor__afterCreate` | 2 | 12 |
| 0x024E34 | `CollisionActor__afterExecute` | 2 | 11 |
| 0x27C8B8 | `Enemy__endState_DieFumi` | 1 | 9 |

`static_init` is not optional and is not in the 80-site catalogue. Without it the
module loads, `mod_init` never runs, no proof is written, and every other check
still passes. That is the worst failure mode available, so it is emitted first
and named as mandatory in `hooks/hooks.hks`.

## Corpus

| Measure | Value | How checked |
| --- | --- | --- |
| Functions decompiled | 45,148 units | `measure_compile_failures.py` |
| Compile clean (`-fsyntax-only`) | 37,789 (83.70%) | same run |
| **Fail to compile** | **7,359 (16.30%)** | same run, bucketed by cause |
| Named (not `sub_`) | 9,671 | database |

All three previously published failure counts were wrong: `CORPUS_STATUS.md`
said 9,339, this file said 9,092, and 7,303 was also in circulation. Measured:
**7,359**. The bucketing shows 469 units fail on a *single* `member not found`
error and 907 on a single `conflicting types` error, so those two causes are the
cheapest mechanical wins.

## Readability of the decompiled C

The arrow-chain rewrite flattens pointer hops. `Actor__getProfileId` is published
as `FIELD_U32(a1, 0x14)` when the code is two dereferences,
`FIELD_U32(FIELD_U32(a1, 0xC), 0x8)` — the rewrite sums `0xC + 0x8` because
`load_types()` strips the `*` from each member's type before walking the chain.

Measured scope: 75 chains pass through a pointer hop (0.63% of 11,934 resolved),
of which **42 are confirmed flattened across 35 functions**. This does not affect
the hooks: prototypes are byte-identical in 35/35 cases, and both expression forms
compile cleanly. It does affect 10 indirect calls across 8 functions, where the
published code dispatches through the wrong pointer — `StateMgr__execute` is the
clearest case. See `ARROW_CHAIN_AUDIT.md`.

## Loader

| Artefact | Count | Verified how |
| --- | --- | --- |
| `data/loader/main.sym` symbols | 23,502 | every address checked inside a loaded section |
| Symbols emitted into `main.ld` | 22,932 | excludes 5 module-owned, 565 past the image |
| Verified hook sites | 80 | `verify_hooks.py`, displacement re-decoded |
| **Buildable hooks** | **14** | `select_hooks.py` + `gen_wrapper_hooks.py` |

### Three loader bugs found and fixed this round

1. **`_DYNAMIC` was the game's, not the module's.** `main.sym` contains the game's
   own `_DYNAMIC` at RVA 0x00C611AC, and a linker-script assignment is absolute,
   so it overrode the `-pie`-generated value. crt0 emitted a MOD0 whose `dynamic`
   field pointed at `0xFFF901AC` — outside the module. This is the same class of
   failure that made sweetdx ship `DT_INIT = 0xff32f024` and render every model
   black. Now `module_symbols.py` is the single list both scripts consult.

2. **559 symbols sat past the end of the image.** The main module's last byte is
   RVA 0x00CD1000. Symbols at or past it cannot be main-module addresses; they
   are SDK names that leaked into the map. Subtracting the module size from them
   yielded small *positive* offsets like `0x1030` — which would have placed an SDK
   function inside the module's own code. 67 are double-defined in `sdk.ld`; the
   other 492 have no verified address and are now counted, not guessed.

3. **`static_init_hook` was silently dropped from the symbol table.** Two
   independent reasons: it lives in `.crt0` rather than `.text`, and it is an
   assembly label carrying no `F` flag, so both the section filter and the
   function filter excluded it. The module linked and every check passed; it
   simply would never have run.

A fourth, smaller one: `.hks` comments must use `@`, not `#`. `#` turns every
comment line into a malformed hook definition, and `.sym` files are the reverse —
sweet-dx rejects `@` there with "Invalid symbol definition at line 1".

## Accounting closed honestly

| Item previously open | Outcome |
| --- | --- |
| "117 codedx names differ in kind" | **Wrong. Measured 45.** See `CODEDX_KIND_RECONCILIATION.md` |
| of those, reconciled | 44 cosmetic, **1 genuinely unresolved** |
| "9,092 / 7,303 / 9,339 units fail to compile" | **All three wrong. Measured 7,359.** See `COMPILE_FAILURES.md` |
| `sub_` functions left unnamed | 37,482, unchanged, deliberately |

The 117 was never a measurement. It reproduces exactly as `414 − 262 − 31 − 4`
using figures quoted elsewhere in this same document, and those inputs are
themselves stale (measured: 329 match, 40 alias). No definition of "differs in
kind" yields 117.

The compile-failure count was quoted three different ways across the docs and
none of them was measured. It is now one number from one run, with the script
that reproduces it.

## Still open

1. **No hardware test.** No console was reachable on the LAN; ports 5000, 21,
   5555, 1337 and 6464 were probed on every ARP peer and all were closed. The
   artifact is built and verified against the image, but it has not booted.
2. **37,482 functions are still `sub_`.** No name is invented to close that.
3. **One codedx name pair is genuinely unresolved** (`0x00008A78`, the `const`
   qualifier on `seassureTerminationImpl_`). Not resolvable from disassembly: the
   qualifier is not encoded in the ARM calling convention.
4. **The arrow-chain collapse.** 42 confirmed flattened chains across 35
   functions. It does not affect prototypes or the compile-clean count; it does
   mis-target 10 indirect calls in 8 functions. See `ARROW_CHAIN_AUDIT.md`.
5. **7,359 units still fail to compile.** Two causes account for 469 and 907
   single-error units respectively and are the cheapest mechanical fixes; see
   `COMPILE_FAILURES.md` for the full 18-bucket breakdown.

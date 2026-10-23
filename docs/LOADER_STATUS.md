# Status

The mod framework is wired and its details are being filled in goal round 5,
2026-10-23. This file is not a changelog; it states what is measured and what is
not.

## The one number that matters

| Question | Answer |
| --- | --- |
| Can you read the game's C? | Yes — 46,879 functions, one file each |
| Can you find the function you want? | Yes — 9,671 have evidence-backed names |
| Can you verify a hook will branch where you think? | Yes — `verify_hooks.py`, 80/80 |
| Can you build a patch with it? | Yes — `loader/`, path used by codedx |
| Has a built module run on a Switch? | **No.** Not tested on hardware. |

That last row is the honest boundary. Everything above it is checked against the
binary in this repo; the row itself needs a console.

## Corpus

| Measure | Value | How checked |
| --- | --- | --- |
| Functions decompiled | 46,879 | `verify_all.py` |
| Compile clean (`-fsyntax-only`) | ~37,787 (80.6%) | `verify_all.py` |
| Named (not `sub_`) | 9,671 (20.5%) | database |
| C calls corroborated by a real `BL`/`B` | 418/419 (99.8%) | `verify_codegen.py` |

## Loader

| Artefact | Count | Verified how |
| --- | --- | --- |
| `data/loader/main.sym` symbols | 23,503 | every address checked inside a loaded section |
| of which functions | 9,401 | — |
| of which data | 13,537 | includes the 31 adopted from codedx |
| of which linker-absolute | 565 | past the last section, kept and marked |
| Verified hook sites | 80 | `verify_hooks.py`, displacement re-decoded |
| Buildable hooks | 1 | `select_hooks.py` (needs real C) |
| `operator_delete` veneers collapsed | 1,789 | all branch to `0x008DE3A0` |

The gap between 80 verified sites and 1 buildable hook is the important one: a
* site is an opportunity, a hook needs a function whose true prototype you know.
Emitting forwarders for all 80 would produce 79 wrong-arity calls.

## Data symbols adopted from codedx

31 symbols that existed in codedx's `main.sym` but not our database. Each was
verified before writing: the address falls inside a real section, the slot was
unnamed, and the name does not contradict anything measured.

Notable ones:

- `got_main_crt0`, `got_spriteToProfileList` — GOT slots
- `ActorMgr__instance`, `sead__GlobalRandom__instance` — singletons in `.bss`
- `Profile__profilesOriginal`, `Profile__prioritiesOriginal`,
  `Profile__hasResourcesOriginal`, `Profile__resourceCountOriginal`,
  `Profile__resourceListsOriginal` — the tables a profile patch must reach
- `ActorInfo__Default`

Verified present in the saved database by re-opening it and reading each name
back: 31/31.

### What codedx also gave us

262 of its 414 `main.sym` entries turned out to be symbols we already had under a
demangled name. Auditing that list found a real bug in our demangler: it dropped
the `f` suffix, so `_Z3sinf` became `sin` instead of `sinf`. 128 float functions
were mis-named. Fixed; `sinf`, `cosf`, `atan2f`, `powf`, `fmodf` now resolve to
their actual libc names.

## Stub collapse

1,793 functions named `operator_delete_*`. 1,789 are 4 bytes and every one
branches to `0x608DE3A0`. They are veneers, not functions, and occupied 1,793
filenames for 7.5 KB of code.

Now recorded once in `decompiled/src/stubs/operator_delete_maplist.c` plus
`data/loader/stub_maplist.txt` (RVA → target, 1,789 rows). The 4 outliers have
88-byte bodies and stay in the corpus.

## Still open

1. **9,092 units fail to compile.** Causes are catalogued; the largest are
   undeclared types and array-versus-scalar assignment.
2. **37,482 functions are still `sub_`.** No name is invented to close that; it
   needs evidence per function.
3. **No hardware test.** The toolchain path matches codedx's, but a module has not
   been booted.
4. **117 main.sym names differ from ours in kind, not identity** (template forms,
   `operator new[]`). Not yet reconciled.

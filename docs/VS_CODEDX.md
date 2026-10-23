# How this compares to codedx

Short version: they solve different problems and do not overlap much. codedx is
a **mod loader**; this repository is **a decompilation**. Each is weak at what
the other does.

## What codedx is

Measured from the checkout (`github.com/RicBent/codedx`, GPL-3.0):

| Content | Amount |
| --- | --- |
| Hand-written C++ | 13 files |
| Hand-written assembly | 5 files |
| Headers | 53 files |
| Hook scripts (`.hks`) | 7 files |
| Data files | `doc/profiles.csv` (911 rows), `main.sym` (414 symbols) |

It is a patching framework: it supplies a linker script, a `main.sym` of GOT and
libc addresses, hook scripts, and a handful of C++ reimplementations (Bob-omb,
Koopa Troopa, magic lift, Mr. Sun) that get linked into the game at fixed
addresses. Its purpose is to **add or replace** code, not to describe the code
that is already there.

## What codedx does better than this repository

**It can produce a runnable mod.** This repo has no loader, no linker script,
and no hook scaffolding. Nothing here links into the game. If the goal is a
working `.nsp` modification, codedx's approach is the one that ships.

**Its `main.sym` pins addresses this repo had not resolved.** 31 entries point
at globals the database had not identified — `got_main_crt0`,
`got_spriteToProfileList`, `_ZN7Profile16profilesOriginalE`,
`_ZN4sead12GlobalRandom8instanceE`. Those are real finds.

**Its `profiles.csv` is unique reference data.** 911 rows of
`ProfileId, spriteId, Japanese name, English name, factory address`. Nothing in
this repo has the names in both languages. It has been pulled into
`data/recovered/profiles.json` (reference only — GPL-3.0, not vendored).

## What this repository has that codedx does not

**Scale of coverage.** 46,831 functions as readable C, versus 13 hand-written
files. Every function in the module, not a chosen few.

**Measured naming.** 9,403 functions carry a real name from the Deluxe database
itself, plus 55 from vtable slot ownership and 1,881 from demangling. A codedx
hook names the five functions it hooks; this names thousands.

**Type layouts.** 176 types and 1,294 members at exact bit offsets, exported
from the database's type library. That is what let the `->` accesses become
`FIELD_U32(base, 0xNN)` and brought 2,777 previously excluded functions into the
corpus.

**Provenance discipline.** Every claim in `docs/CORPUS_STATUS.md` has a number
behind it and a script that reproduces it. The 3,099 functions that fail to
compile are catalogued by cause rather than omitted.

## The honest summary

| | codedx | this repo |
| --- | --- | --- |
| Runnable mod | **yes** | no |
| Full function coverage | no | **yes** (46,831) |
| Named functions | ~5 | **9,403+** |
| Struct layouts | ~10 headers | **176 types, 1,294 members** |
| Actor profile table | **911 rows, bilingual** | extracted from codedx |
| GOT/libc symbol map | **414 entries** | not reproduced |
| Licence | GPL-3.0 | findings only, reference-only use of codedx |

They are complementary. A modding workflow wants codedx's loader plus this
repo's decompiled bodies as the thing you read to decide *what* to hook.

## What this means for modding use

Ready now:

- `decompiled/src/` — every function, one file each, named by address and
  symbol, grouped by subsystem.
- `decompiled/src/include/nsmbudx_prototypes.h` — a declaration for every
  function, so any call in the corpus type-checks.
- `data/recovered/type_layouts.json` — the struct offsets, which is what a hook
  needs to read a field.
- `data/recovered/profiles.json` — actor id to name, for choosing a target.

Not ready:

- No build system that produces a patch. The C here compiles under
  `clang -fsyntax-only`; it is not linked into anything, and it is not a
  byte-exact reimplementation — control flow is faithful, but the C is written
  to be read, not to reproduce the object code.
- 7,359 units still fail `-fsyntax-only`, so they cannot be lifted into a build
  without fixing them first. See [`COMPILE_FAILURES.md`](COMPILE_FAILURES.md).

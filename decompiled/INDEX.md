# NSMBU Deluxe (Switch) v1.0.0 - decompiled corpus

Human-readable C recovered from the retail NSO by Hex-Rays, with our
symbol names applied so cross-calls read by name.

| | |
|---|---|
| Game | New Super Mario Bros. U Deluxe |
| Version | v1.0.0 |
| Symbols applied | 21,588 |
| Files | 11 source files, 5 subsystems |

## Naming

Only 14.0% of functions are named, and that is deliberate. [NAMING.md](NAMING.md) and [ACTOR_NAMES.md](ACTOR_NAMES.md) record what the names mean.

Most of the remaining names end in `_ref`, which claims only that the function
references that string -- not that it is the thing the string names. See
[NAMING_RULES.md](NAMING_RULES.md) for why that distinction was worth throwing
away 2,450 names over.
records which methods work, which do not, and why a wrong name is worse than
none.

## Layout

| Directory | Contents |
|---|---|
| `player/` | player object, controller, state machine |
| `powerup/` | power-up modes, item grant, fireball/projectile |
| `actors/` | actor construction, sprite table, actor bodies |
| `systems/` | managers, scenes, engine core |
| `libs/` | sead and NintendoSDK code that is shared |
| `include/` | generated prototype headers per subsystem |

## What these files are

Machine output from IDA Pro 9.3's Hex-Rays decompiler, post-processed for
readability. They are **evidence, not source**.

- `int a1` means *"first argument, type not yet established"*, not literally `int`.
- Field offsets like `*(_DWORD *)(a1 + 1320)` are exact. The *names* of those
  fields are not yet recovered, except where a header in `sweetdx/include/`
  documents them.
- A name starting `sub_` is unnamed. Everything else came from
  `sweetdx/symbols/nsmbux.sym` or from a naming pass whose evidence is
  recorded alongside the change.

## How to regenerate

```
# inside IDA, against the rebased .i64:
idat -A -Llog.txt -S.rea/ida_apply_names.py      work.i64   # apply symbols
idat -A -Llog.txt -S.rea/ida_bulk_decompile.py   work.i64   # emit C

# on the host:
python scripts/make_decompiled_corpus.py                     # lay out repo
```

## Coverage

Only **live** functions (at least one incoming code xref) of at least
`0x30` bytes are included, plus **every named function regardless of xrefs** --
table-driven static initialisers are called indirectly and would otherwise be
dropped. That excludes ~15.9k unreferenced unnamed functions and ~10.1k small
unnamed thunks. 32,897 of the image's 49,470 functions have no incoming xref at
all.

| Subsystem | Functions | Prototypes |
|---|---|---|
| `player/` | 898 | 793 |
| `powerup/` | 867 | 688 |
| `actors/` | 12,578 | 9,365 |
| `systems/` | 16,498 | 12,121 |
| `libs/` | 7,293 | 5,364 |

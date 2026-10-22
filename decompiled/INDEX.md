# NSMBU Deluxe (Switch) v1.0.0 - decompiled corpus

Human-readable C recovered from the retail NSO by Hex-Rays, with our
symbol names applied so cross-calls read by name.

| | |
|---|---|
| Game | New Super Mario Bros. U Deluxe |
| Version | v1.0.0 |
| Symbols applied | 3,170 |
| Files | 11 source files, 5 subsystems |

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

Only functions that are **live** (at least one incoming code xref) and at
least `0x30` bytes are included. That skips ~16.9k unreferenced functions,
~11.2k small thunks, and ~8.9k jump-table stubs. 32,897 of the image's 49,470
functions have no incoming xref at all.

| Subsystem | Functions | Prototypes |
|---|---|---|
| `player/` | 430 | 375 |
| `powerup/` | 303 | 253 |
| `actors/` | 3,282 | 2,753 |
| `systems/` | 3,841 | 3,280 |
| `libs/` | 3,229 | 2,506 |

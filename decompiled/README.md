# Decompilation corpus

Human-readable C for NSMBU Deluxe v1.0.0, recovered from the retail NSO with IDA Pro
9.3's Hex-Rays decompiler.

## Where to look

| Directory | Contents |
|---|---|
| [`INDEX.md`](INDEX.md) | generated overview: counts, layout, how to regenerate |
| `player/` | player object, controller, power-up application, state machine |
| `powerup/` | power-up modes, item grant, fireball and projectile logic |
| `actors/` | actor construction, sprite→profile table, actor bodies |
| `systems/` | managers, scenes, engine core |
| `libs/` | shared sead and NintendoSDK code |
| `include/` | generated prototypes per subsystem |
| `blocks/` | question-block, item-grant and item-factory functions |
| `annotated/` | hand-written C++ written while tracing specific behaviour |

The single-function files at the top level are targeted dumps made while investigating a
specific question; each is named after the function it contains.

## Read this before trusting a type

These files are **evidence, not source**:

- `int a1` means "first argument, type not yet established", not literally `int`.
- Field offsets such as `*(_DWORD *)(a1 + 1320)` are exact and were read from the binary.
  The *names* of those fields are mostly not yet recovered. Where a header under
  `sweetdx/include/` documents one, use that name.
- A function still called `sub_XXXXXXX` is unnamed. Everything else came from
  `sweetdx/symbols/nsmbudx.sym` (3,170 names) or from a naming pass whose evidence is
  written down.
- A decompiler output that looks wrong is more likely to be an inferred-type problem than
  a wrong disassembly. Check the offsets, not the types.

## Coverage

Only functions that are **live** (at least one incoming code xref) and at least `0x30`
bytes are included. That deliberately excludes:

| excluded | count | why |
|---|---|---|
| no incoming xref | 16,948 | unreachable code |
| under 0x30 bytes | 11,166 | thunks and stubs |
| jump-table stubs | 8,850 | one-line forwarders |

The image has 49,470 functions; 32,897 of them have no incoming xref at all. Naming
coverage is concentrated in `std / runtime` (77%); the parts that matter for gameplay are
thin — player was 11 of 941 named before the passes recorded here.

## Regenerating

The database must be rebased to `0x60000000` so RVAs match. Scripts live in `.rea/`:

```
idat -A -Llog.txt -S.rea/ida_apply_names.py      work.i64   # apply symbols
idat -A -Llog.txt -S.rea/ida_bulk_decompile.py   work.i64   # emit C

python scripts/make_decompiled_corpus.py                    # lay out the repo
```

`scripts/make_decompiled_corpus.py` only reads produced files; it does not need IDA.

## Conventions

- All addresses are **RVAs**: `VA = 0x60000000 + RVA`. A sweet-dx hook on a sweet-dx
  `address:` field uses exactly this number.
- Offsets are decimal in older dumps and hex in newer ones. `1320` and `0x528` are the same
  field: the player power-up mode byte.

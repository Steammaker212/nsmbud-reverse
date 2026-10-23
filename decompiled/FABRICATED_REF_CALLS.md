# Fabricated `_ref` call names

An earlier naming pass promoted string literals into function names by appending `_ref`. The database has the
strings, not symbols:

| Address | String |
|---|---|
| 0x60AC5354 | `pol_block_hatena` |
| 0x60AC5389 | `pol_light_hatena` |
| 0x60ABA59E | `SE_SYS_NICE_S` |
| 0x60ABAE73 | `SE_OBJ_PNGN_ICEBALL_DISAPP` |
| 0x60AC9A3F | `message` |
| 0x60AEAABA | `untitled` |

`idautils.Functions()` contains no function whose name mentions `hatena`, and `idautils.Names()` contains only the
string labels above. So a call like

```c
agl_TextureData_ref( a1 + 90 );
```

cannot resolve to an address. It is a string name wearing a function's clothes.

## Count

| Measure | Count |
|---|---|
| `*_ref` names called but never declared in any header | 702 |
| Call sites | 1,678 |
| Sites whose enclosing function has a recorded RVA | 1,677 |

They cause almost no clang errors (one: `Effect_ref`), because a call to an undeclared name in a file with an
existing declaration mismatch is not the first thing the compiler stops on. That is exactly why they survived: they
are invisible to an error count while being wrong to a reader.

## One resolved case, and how

`SE_SYS_NICE_S_ref` appeared 42 times, always with zero arguments and often as `return SE_SYS_NICE_S_ref();`, so it
behaves like a statement not a constructor. Disassembling the 38 enclosing functions showed `BL sub_60023B90` in
every one of them, against `_ZN8StateMgr15getCurrentStateEv`, `mapPositionToScreen` and
`BasicSoundActor1_playSound` as the neighbouring calls. `sub_60023B90` is the sound-play helper at those sites.

All 42 occurrences now call `sub_60023B90`.

## Why the rest are not repaired yet

Pairing each `_ref` call to a `BL` target requires knowing which `BL` corresponds to which call, and the counts
only agree for 110 of 1,173 enclosing functions. A `BL` may be any ordinary call, so pairing by order would produce
wrong names with the same false confidence the original pass had. The remaining 1,636 sites stay as they are, listed
by `scripts/report_fabricated_ref_calls.py`, rather than being given names that cannot be defended.

## Scope note

Not every `_ref` spelling is fabricated. Several are legitimate data-symbol references in other translation units,
which is why repair is per-name and evidenced, not a corpus-wide rename.

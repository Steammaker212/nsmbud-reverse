# Verification: what was actually checked, and how

Every number here was produced by a script in the parent repo's `scripts/`, run against
retail `main` and the reference build. Nothing is quoted from memory.

## The build under test

| artefact | path | size |
|---|---|---|
| `subsdk0` | `output/atmosphere/contents/0100EA80032EA000/exefs/subsdk0` | 577 bytes |
| IPS patch | `output/atmosphere/exefs_patches/0100EA80032EA000/AEE6DCCC06D9C05B42061E2019123A61.ips` | 428 bytes |

IPS: 36 records, 240 patched bytes.

Built with SweetDX v0.0.3 / Deno 2.8.3 against retail `main`, SHA-256
`03E4FDE420F3FD5FECB73CECF4AE94FF033F5F9197139A3401A4E3C35DAF7512`
(8,001,591 bytes).

## IPS contents, re-read out of the patch

`verify_new_ips.py` parses the IPS back into an offset→byte map and checks each site
against the reference build (not against my own constants, so a transcription error in
the hook file cannot hide).

### Mode-table reader literals

These six words are **PC-relative offsets**, not addresses. They must be identical to the
reference build's.

| site | bytes | decodes to |
|---|---|---|
| `0x0078C58C` | `98 CE 3B 00` | `0x00B493D8` (body, reader a) |
| `0x0078E604` | `18 AE 3B 00` | `0x00B493D8` (body, reader b) |
| `0x0078E7E8` | `A8 AD 3B 00` | `0x00B493D8` (body, reader c) |
| `0x00795FF0` | `64 36 3B 00` | `0x00B493A8` (height, reader a) |
| `0x007960F8` | `90 33 3B 00` | `0x00B493A8` (height, reader b) |
| `0x007982D8` | `E0 11 3B 00` | `0x00B49404` (balloon) |

All six verified: `stored + pc == table`.

### Relocated tables, 11 entries each

| table | at | mode 10 slot |
|---|---|---|
| height | `0x00B493A8` | 31.0 |
| body | `0x00B493D8` | 0 (body type 0 = Normal) |
| balloon | `0x00B49404` | −4.0 |
| tall actor | `0x00B0C328` (in place) | 2 |

Each table matches the reference build byte for byte over its full 44-byte span
(`verify_restored_hooks2.py`, `verify_tables_vs_reference.py`).

The 11-entry length matters: retail's tables have exactly 10 entries, so mode 10 in
unpatched retail reads the word *after* the table — `body[10] = 165`, which is not a
valid body type. The relocation is what gives mode 10 a real slot.

### Hammer byte-sites

All verified present, at IPS offset = RVA + 0x100:

| site | bytes | meaning |
|---|---|---|
| `0x00465F40` | `FB 13 00 E3` | `movw r1,#0x3FB` — item gate bit 9 |
| `0x0046600C` | `FB 13 00 E3` | second gate copy |
| `0x0078E6A8` | `0A 00 50 E3` | `cmp r0,#0xa` |
| `0x0013FB38` | `50 12 E0 E7` | hammer direction bit |
| `0x0013FB68` | `0A 00 A0 E3` | hammer scale denominator |
| `0x00140744` | `14 60 94 E5` | ctor reads settings |
| `0x00140748` | `0F 60 06 E2` | ctor mask |
| `0x0014074C` | `13 64 86 E3` | ctor or-mode |
| `0x00140770` | `FF 6C 86 E3` | ctor or-player |
| `0x00140778` | `54 60 84 E5` | ctor store |
| `0x007A2708` | `01 30 A0 83` | can change to hammer |
| `0x007AA9BC` | `0A 00 51 E3` | check/set fireball mode |
| `0x007AAA88` | `0A 00 50 E3` | set fireball action mode |
| `0x007AABB8` | `0A 00 50 E3` | create fireball a |
| `0x007AAC94` | `0A 00 50 E3` | create fireball b |
| `0x007AAFF4` | `0A 00 51 E3` | execute mode guard |
| `0x007AB000` | `64 34 00 E3` | execute mode mask |
| `0x007AB0E4` | `0A 00 50 E3` | execute mode guard 2 |

### Quarantined words are absent

The IPS must **not** contain these; `verify_new_ips.py` asserts it:

| site | hook | why quarantined |
|---|---|---|
| `0x0045DDCC` | `grant_hammer_mode` | verified correct, but enables mode 10 |
| `0x00AF6620` | `actor_info_flags` | writes a shared global ActorInfo record |
| `0x00BD3208` | `actor_info_subtype` | magic subtype 19, uncorroborated |
| `0x00BD3210` | `actor_info_dist` | packed field, semantics undecoded |
| `0x00C61BE4` | `profile_cell` | substitutes the Fire Flower identity |

## Project-level validation

`validate_sweetdx_project.py` — 11/11:

```
[PASS] project has code/hooks/symbols/include
[PASS] sym parses, unique, all in-image  -- 3172 symbols
[PASS] all symbol names are linker-legal
[PASS] all .hks parse under SweetDX rules  -- 4 files, 36 hooks
[PASS] hook names unique
[PASS] hook addresses unique
[PASS] every instr hook assembles
[PASS] hooks cover every changed word  -- 59 words, 5 deliberately excluded
[PASS] no hook targets an unchanged word
[PASS] hook bytes equal patched bytes  -- 0 mismatches
[PASS] all 1 C++ sources compile
```

Two of those checks needed fixing to be meaningful:

* **Coverage was word-granular.** A `data` hook is a multi-byte write, but coverage was
  counted from each hook's start address only, so the rest of a span showed up as
  unexplained. Now built by span.
* **"Unchanged word" was too strict.** The relocated tables copy retail's mode 0–9 values
  into the same bytes, so e.g. `0xB49404` is `0.0` in both images even though the hook
  span around it is real. A hook now counts as extra only if *none* of its words changed.

## What is NOT verified

* **Nothing has been tested in-game since these fixes.** The previous test failed.
* Mode 10's visual result is unknown. There is no Hammer suit model: mode 10 is body type
  0 with colour type 2, i.e. it renders as a Fire-coloured Normal body, and the icon is
  the Fire Flower's.
* The three `ActorInfo` writes and `grant_hammer_mode` are unproven. They are quarantined,
  not endorsed.
* `ActiveCollider` size is unsettled (`0xB8` vs `0x130`); see README.
* The contents→item mapping in the editor data is a best fit (3/16), not confirmed.

## Standing warning

The previous build passed every check above except that it was never run. It then broke
the game. Byte fidelity to a reference image is not evidence of correctness — the
reference image is a *replacement build*, and we are patching a retail one. Those are not
the same problem.

# Naming, round 15: what was named and why

Coverage moved from **32.6% → 35.0%** by count and, more tellingly, **19.6% → 24.5%** by bytes. The
byte figure moved four times further than the count, which is the point: the functions worth naming
are the large ones.

| | before | after |
|---|---|---|
| named functions | 16,127 | **17,291** |
| named bytes | 19.6% | **24.5%** |
| `.sym` symbols | 19,593 | **21,588** |

## A scanner bug that reported zero, and why the positive control caught it

The first attempt to find nameable functions in the player/powerup regions reported:

```
unnamed functions >= 0x100 bytes in player/powerup/player_states: 649
  with >=1 string reference : 0
```

Zero out of 649 is not a plausible result. `sub_604F9090` lives at `0x4F9090`, inside that range, and
provably references 20 animation names (`P_Kinoko_00`, `P_FireFlower_00`, …). So the scanner was
wrong, not the data.

The control run showed why:

```
xrefs to "P_FireFlower_00" (0xACDE20) come from 0x4F90E8 and 0x4F90F0, type=1 (DATA)
instructions whose operand1 is an in-image pointer: 0
```

String references live in **literal-pool slots holding a DATA xref**, not in instruction operands —
and the `LDR` that reads the pool uses a PC-relative *delta* (`=unk_60CA6C58 - 0x604F90A8`), so the
pool word is a difference, not an address. Scanning `operand1 → dword` can never find these.

The corrected route — enumerate strings, take `XrefsTo(string)`, attribute each xref to its containing
function — returns **20** for the control. Every naming decision below used that route, and the check
`assert len(control) == 20` now runs before any batch is applied.

This is the third time in this project that a confident negative was an artefact of a broken scan.
The positive control is not optional.

## Names justified individually

These 15 rest on one specific checkable fact each, and the fact is stored as a comment at the address:

| RVA | name | evidence |
|---|---|---|
| `0x7915D4` | `Player_registerRideAnimations` | registers 12 `P_R*` names (`P_RSeat`, `P_RSeat_out`, `P_RSeat_success`, `P_Rsjump`, …) — the riding animation set |
| `0x7A0E98` | `Player_poisonDownUpdate` | contains its own debug string `"[PoisonDown] type=%d,mode=%d,IsPassingDown=%s"` |
| `0x79F548` | `Player_setupModelNodes_79F548` | references `face_1`, `skl_root`; reads mode |
| `0x78E270` | `Player_setupModelNodes_78E270` | references `face_1` |
| `0x7B7140` | `Player_setupWristNodes_7B7140` | references `wrist_l1`, `wrist_r1`; reads mode |
| `0x79D5A0` | `Player_setupWristNodes_79D5A0` | references `wrist_l1`, `wrist_r1` |
| `0x7B6D90` | `Player_setupRingNode_7B6D90` | references `ring_add` |
| `0x7A72DC` `0x7A6B18` `0x7A75EC` | `Player_playDownSound_*` | each references `SE_PLY_DOWN` |
| `0x461C50` | `Item_playAppearSound_461C50` | references `SE_OBJ_ITEM_APPEAR` |
| `0x470B10` | `Item_loadMusasabi_470B10` | references `I_musasabi` |
| `0x45C720` | `Item_loadSwitchAssets_45C720` | references `I_kinoko_switch`, `I_yoshichibi_egg`, `wait2` |
| `0x46DD80` `0x4714E4` | `Item_loadKinokoSwitch_*` | reference `I_kinoko` / `I_kinoko_switch` |

Where two functions share evidence I did **not** invent a `_a`/`_b` distinction — both carry the RVA,
so they stay unique without asserting a difference I cannot prove. Where a string only identifies an
asset, the name says `load`/`setup` rather than a gameplay behaviour.

`0x452EDC` and `0x4531F8` read the mode field but stay **unnamed on purpose**: an earlier round
proposed "power-up transition" for them and that claim was retired as unproven. Both now carry a
comment recording that.

## `_ref` names: the contract, stated precisely

1,144 further names came from the string route, taking the family from 1,428 to 2,577.

The claim a `_ref` name makes is deliberately narrow:

> `<token>_ref` means the function references at least one string that **starts with** `<token>`.

An earlier verifier asserted exact equality and reported 7 failures. That assertion was too strong —
`SE_BOSS_LEMMY_ref` is honest for a function referencing `SE_BOSS_LEMMY_RUSH_FOOT_F_L` and
`SE_BOSS_LEMMY_B_BALL_RUSH`. Re-checking all 2,215 `_ref` names against the *prefix* contract:
**2,204 pass, 11 fail**, and all 11 are pre-existing `j_*` thunk aliases or names from earlier rounds,
not this batch.

Three defects did surface and were fixed:

**Truncated tokens (133 found, 118 repaired).** Names like `SE_EMY_KAME_HIT_ref` for a function
referencing `SE_EMY_KAME_HIT_1` / `_2` are truncations — the same `SE_SYS_THREE` ← `SE_SYS_THREE_UP`
defect already in `NAMING_LESSONS.md`. Repaired to the true common prefix. One (`SE_MG`, 5 chars) was
**left alone** rather than renamed to something uninformative.

**Double underscores (my own bug).** The first repair stripped a trailing `_` from `SE_EMY_KAME_HIT_`
only part of the way, producing `SE_EMY_KAME_HIT__ref`. Re-run with `.rstrip("_")` corrected all of
them.

**Variant digits.** `SpeedUp_Text_0_ref` and `Pa_Item_0_ref` had a digit that belonged to the variant
number, not the family. Trimmed to `SpeedUp_Text_ref` / `Pa_Item_ref`.

## The `.sym` regression, caught before publishing

Regenerating the symbol file dropped it from 19,593 to **7,997**. The cause was not lost names: my
export used `idautils.Functions()`, which never sees the `<Class>_vtable` (220) and `<Class>_vf<slot>`
(747) families, because those are **vtable words in `.data`**, not function starts — yet they are
exactly what a linker script needs.

Fixed by exporting `idautils.Names()` — all 31,675 named addresses, 17,291 of them function starts.
The exporter now asserts those two families are present, so a function-only export fails loudly
instead of silently shrinking the output. Result: **21,588 symbols**, above the previous 19,593.

## Verification

```
__asm blocks in code (comments stripped): 0
sweet-dx build: subsdk0 577 b, .ips 293 b
corpus: 475 .c files, 48.8 MB, 39,447 functions
```

Name presence confirmed in the rebuilt corpus, e.g. `Player_registerRideAnimations` ×4,
`Player_setupWristNodes_7B7140` ×2.

## Still open

33,179 functions remain unnamed. The honest split, from measuring rather than guessing:

| region | unnamed |
|---|---|
| libs | 7,498 (95.6%) |
| systems | 8,545 (91.0%) |
| states | 6,325 (85.3%) |
| player | 869 (92.3%) |
| powerup | 936 (93.9%) |

657 unnamed functions in the focus subsystems are ≥512 bytes and carry no string at all, so naming
them needs call-graph and vtable reasoning rather than strings — a different, slower kind of evidence.

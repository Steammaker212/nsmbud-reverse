# nsmbud-reverse

Reverse-engineering notes, decompiled functions, and patch tooling for
***New Super Mario Bros. U Deluxe*** (Nintendo Switch).

Everything in this repository was produced from the **Deluxe (Switch)** retail
`main` module. The Wii U original (*New Super Mario Bros. U*, `red-pro2` /
`NSMBU-Headers`) is **reference material only** and lives on the separate
[`wiiu-reference`](../../tree/wiiu-reference) branch — it is not part of this
branch's findings.

> **Scope:** no game executables, `.pack` archives, ROMFS assets, or IDA
> databases are distributed here. See [NOTICE.md](NOTICE.md).

---

## Analysis baseline

| Property | Value |
|---|---|
| Target | *New Super Mario Bros. U Deluxe* (Switch), v1.0.0 US |
| File | `convertedmain.rebased.elf` (NSO → ELF32 repack) |
| Architecture | ARM32 (AArch32), ARMv8-A |
| Image base | `0x60000000` |
| MD5 | `f8a2e4c3616b8a99632b8ffe68938c34` |
| IDA DB | `convertedmain.rebased.elf.i64` (not distributed) |

**Address convention.** All addresses are IDA virtual addresses
(`0x60000000 + RVA`). The ELF stores unrebased RVAs in pointer cells and relies
on `R_ARM_RELATIVE`, so a *static ELF patch* writes the RVA while a *runtime
memory patch* writes the rebased VA.

**File offset formula** for `.text`:

```
file_off = VA - 0x60000288 + 0x6e4
```

---

## Layout

| Path | Contents |
|---|---|
| `docs/HAMMER_POWERUP_REPORT.md` | **Main writeup.** Custom Hammer power-up: hook point, actor, collision, and the full Approach A / Approach B patch plans. |
| `docs/NOTES.md` | Broad Deluxe binary survey — why the module is ARM32, the actor system, the player state machine, and the model pipeline. |
| `docs/CORPUS_STATUS.md` | **Measured decompilation status** — how many functions exist, how many are named, how many compile, and what the rest are blocked on. |
| `docs/section7_new.md` | Source text for report §7 (Approach B). |
| `docs/PState_*.txt` | Raw player-state / vtable dumps. |
| `decompiled/src/` | **The decompiled corpus**: 44,049 C translation units, one per function, grouped by subsystem. 83.4% compile clean under `clang -std=gnu89`. |
| `decompiled/src/include/` | The generated headers the corpus shares: prototypes for every function, data symbols, recovered struct layouts, and the `FIELD_U*` access macros. |
| `decompiled/` (loose files) | 369 hand-picked IDA decompiled functions from earlier passes. Filenames carry the address, e.g. `FB_607AABA0.c` = `createFireBall`. |
| `scripts/pipeline/` | The offline pipeline that produces `decompiled/src/` from the IDA database. See its `README.md`. |
| `scripts/` | Python tooling: ELF mapping, rebasing, byte-diff patch application, and verification. |
| `data/` | Exported JSON/CSV: function inventory, actor catalog, profile registry, xref sets. |
| `data/recovered/` | Measured struct-member evidence for the functions not yet in the corpus. |
| `logs/` | Raw IDA plugin output. |

### Naming convention in the generated corpus

| Form | Meaning |
|---|---|
| `Class__method` | Member of `Class`, name from the database |
| `Class__ctor` / `Class__dtor` | Constructor / destructor |
| `Class__method_const` | Const member function |
| `Class__method_XXXX` | Member whose only distinguishing feature is its address suffix |
| `sub_XXXXXXXX` | No evidence for a better name yet; the address is the identity |

A function keeps its `sub_` name until there is evidence for something better.
See `decompiled/NAMING.md`.

### Naming convention in the loose `decompiled/` files

| Prefix | Meaning |
|---|---|
| `F_` / `sub_` / `func_` | Generic function at that address |
| `FC_` / `FD_` / `FF_` | Function-family buckets by analyzed role |
| `FA_`, `FA2_`, `FB_`, `FI_`, `FI2_`, `FM_`, `FM2_`, `FP_`, `FQ_`, `FS_`, `FV_`, `FW_`, `FX_`, `FY_`, `FZ_` | Related-cluster groups |
| `Player*`, `Enemy*`, `Hammer*`, `Fire*`, `StateMgr*`, `CollisionMgr*` | Named after identification |

Every file carries its address, so any line maps back to an exact VA.

---

## Quick reference — key addresses

### Player state machine

| Symbol | VA | Notes |
|---|---|---|
| `Player::createFireBall` | `0x607AABA0` | Fire branch is the projectile hook |
| `Player::checkSetFireBall` | `0x607AA954` | |
| `Player::setFireBallAction` | `0x607AAA00` | |
| Fire state enter / execute / exit | `0x607AAF18` / `0x607AAF80` / `0x607AAF68` | |
| `canChangeTo` | `0x607A26F8` | Jump table at `0x607A2724`, 9 entries |
| `setPlayerModeImpl` (vf+0x94) | `0x60795CDC` | |
| `getTallType` (vf+0x9C) | `0x60796A60` | |

Player object fields: `mMode` `+0x528`, `mModePrev` `+0x2C78`,
`mModeNext` `+0x2C7C`, model manager ptr `+0x2C68`.
Player vtable: `0x60C24C74`.

### Hammer actor (profile 759)

| Symbol | VA |
|---|---|
| Factory | `0x6013F02C` |
| Constructor | `0x6014065C` |
| Init | `0x6013FB0C` |
| vtable | `0x60BD32B4` |
| Allocation size | `11912` |

Fire profile pointer cell `0x60C61BE4` holds `0x00AF3498` (FireBall 476);
redirect to `0x00AF3904` (Hammer 759).

### Sections

| Section | VA | File offset | Size |
|---|---|---|---|
| `.text` | `0x60000288` | `0x6e4` | `0x9ad134` |
| `.rodata` | `0x60ab906a` | `0xab8e56` | `0x1068ae` |
| `.data` | `0x60bc0000` | `0xbbf83f` | `0xa11ac` |
| `.bss` | `0x60c7b274` | — | `0x55d8c` |
| `.got` | `0x60c619d0` | — | `0x17ab0` |

---

## Approach B — power-up value 10 in one paragraph

Fire Flower grants mode `10` instead of `2`; every mode-`2` fire gate is patched
to compare against `10` rather than adding dual-mode code, which leaves Fire
mode `2` intentionally unreachable.

The grant site is `sub_6045DDC0`; the decisive instruction at VA `0x6045DDCC`
changes `mov r2,#2` (`02 20 A0 E3`) → `mov r2,#10` (`0A 20 A0 E3`).

`canChangeTo(10)` is fixed with a single instruction at `0x607A2708`:
`bxhi lr` (`1E FF 2F 81`) → `movhi r3,#1` (`01 30 A0 83`), routing mode 10 to
the generic handler at `0x607A2748`.

Two tables cannot be patched in place — the index-10 cells overlap the base of
neighbouring tables. Both are relocated into an unused `0xA0` zero-padding block
in `.rodata` at `0x60B493A8`–`0x60B49448`:

| Table | New VA | File offset |
|---|---|---|
| Height | `0x60B493A8` | `0x00B49194` |
| Body | `0x60B493D8` | `0x00B491C4` |

Tall type index 10 is safe to patch in place (`getTallType(10)` reads
`0x60B0C328`, patched to `2` = Normal).

See report §7 for the complete 11 mode-10 instruction patches, 2 relocated
tables, and 5 literal redirects.

---

## Reproducing the patch

```bash
# 1. apply Approach A (11 validated Hammer actor/projectile patches)
python scripts/apply_approach_b.py     # writes convertedmain.hammer_b.elf
python scripts/verify_approach_b.py    # assert all original bytes match

# 2. validate new instruction words with Capstone
python scripts/check_new_words.py
```

Both scripts expect the source ELF and the patched output side by side; edit the
path constants at the top of each file for your layout. Nothing is written to
the original ELF — patches always land on a copy.

**Runtime verification is still outstanding.** The patch is byte-verified
against the ELF but has not been executed in an emulator or on hardware. See
report §8 for the open risks.

---

## Reference material (separate branch)

The Wii U original is vendored on the `wiiu-reference` branch only:

* [`aboood40091/red-pro2`](https://github.com/aboood40091/red-pro2) — NSMBU decompilation
* [`aboood40091/NSMBU-Headers`](https://github.com/aboood40091/NSMBU-Headers) — matching headers

Useful for class layout and semantics. **Do not** assume an address, offset, or
build flag carries over — the Switch build is a different binary.

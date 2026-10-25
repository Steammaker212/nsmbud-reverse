# Reverse-engineering plan: NSMBU Deluxe → readable C → modding framework

**Target:** *New Super Mario Bros. U Deluxe* v1.0.0 (Switch), `main` NSO
(MD5 `36c6bf3e2ca07d327373509b313e3e72`), 32-bit ARM, base `0x60000000` in IDA.
**End product:** readable C/C++ that matches the game, plus a sweet-dx modding framework
built on it. Every fact either has evidence behind it or is marked as unverified.

---

## 1. Where facts come from, and how far to trust them

| Tier | Source | Use it for | Trust |
|---|---|---|---|
| **T1** | The binary itself (`main`, disassembly) and **runtime observation** (Ryujinx log + our diagnostic hooks) | Settling any disagreement | Final word |
| **T2** | **RicBent:** `main.i64` (47,148 functions, 5,032 named, 124 structs), `codedx-master/include` (class layouts), `main.sym` (530 addresses), `doc/profiles.csv` (all profiles + factories), `doc/spriteToProfileId.txt` | Names, layouts, profile identities | High; re-check anything a mod depends on |
| **T3** | **Wii U:** `red-pro2` decomp, `NSMBU-Headers` (on the repo's `wiiu-reference` branch) | Meaning: enums, control flow, class design | Meaning only. **Every offset and address is re-verified on Switch** |
| **T4** | Earlier `nsmbud-reverse` findings (docs, corpus names, reports) | Leads to investigate | **Quarantined.** Nothing is used until it is re-derived from T1/T2 |

Why T4 is quarantined: today's checks found errors in it.

- `Enemy::collisionHammer` actually handles attack 19, which is `cAttack_YoshiBullet`.
  The name is carried over from NSMBW.
- Profile 476 is the *player fireball* (RicBent CSV), not the "Fire Flower identity"
  the incident report said.
- Approach A patched collision data shared by every hammer, so it would have
  broken Hammer Bros.
- The generated symbol list assigned `_init`/`_fini`, which caused the black models.
- Many corpus names are string-reference guesses (`*_ref`, e.g.
  `SE_PLY_THROW_ICEBALL_ref` is really `createFireBall`).

## 2. The verify loop (how one finding is made)

Every finding goes through these steps, in order. It goes into the ledger
(`data/findings/ledger.csv`) only with the grade it actually reached.

1. **Claim.** State one thing: "`0x7AABA0` creates the player's projectile".
2. **Static evidence (T1/T2).** Disassembly plus RicBent's database: callers,
   callees, constants, strings, vtable slots. Cite addresses.
3. **Cross-reference (T3).** Find the matching Wii U code. Matching *structure*
   (case for case, mask for mask) upgrades a meaning; a matching name alone does not.
4. **Runtime probe (T1).** A diagnostic hook writes `[nsmbudx] ...` with
   `svcOutputDebugString`; Ryujinx logs it. Read it back with `scripts/sdk/read_log.py`
   (step 0.3).
5. **Grade:**
   - **seen-runtime**: observed while the game ran
   - **seen-static**: read in code or data
   - **inferred**: follows from seen facts but wasn't observed
   - **unknown**: not established; never written as fact

A mod may rely only on **seen** facts. An **inferred** fact used by a mod becomes
a numbered test in that mod's README.

## 3. Phases

Ordered by modding value. Each phase lists what it delivers and the check that
closes it.

### Phase 0: infrastructure

| # | Task | Done when |
|---|---|---|
| 0.1 | **Working database copy.** Save RicBent's `main` as `main_readable.i64` in IDA; all writes go there (`scripts/ida/ida_rpc.py` refuses `main`) | `get_metadata` shows the copy |
| 0.2 | **Fresh export from RicBent's database**, not from the old corpus: decompile every function through the MCP server into `data/export/ricbent_v1.jsonl` | 47,148 functions exported; differences from the old corpus measured and listed |
| 0.3 | **Runtime toolkit:** archive guard (done); a generic **probe generator** that logs a hookable function's arguments and return value; `read_log.py` that pulls `[nsmbudx]` lines and crash traces from the newest Ryujinx log | A probe on `createFireBall` shows up in the log when you throw |
| 0.4 | **Content validator:** sprites → profiles exist; tilesets exist; background name has no `dv_` prefix or extension; custom sprites are paired with template code. Today's 1-1 crash was content, not code | `scripts/sdk/check_romfs.py` flags the current 1-1 and 5-3 |
| 0.5 | **Findings ledger** with the columns in §5, seeded with today's verified facts | Ledger exists; every mod cites ledger ids |

### Phase 1: engine core

`Actor` / `StageActor` / `ActorMgr` (`create`, `createLater`, id cache), `Profile`
(and `profiles.csv`), `StateMgr` / `StateBase` (state tables like
`registerProfile_Hammer`), `ActiveCollider` / `CollisionMgr` (the `CollisionData`
layout and the pair rule), the archive manager (`getFile`), and the `sead`
basics (`SafeString`, `TreeMap`, `Heap`).

- **Deliverable:** `framework/include/` headers, one class per file. Each member
  is verified against RicBent's header or the database, with ledger ids in comments.
- **Closed when:** every member a framework header exposes is graded **seen**, and
  a probe mod reads `StageActor::position` / `playerId` / `type` live and logs
  sensible values.

### Phase 2: player and power-ups (unblocks the Hammer Suit)

`PlayerBase` / `Player` layout and inheritance (`Player 0x3AF8 : PlayerBase :
StageActor`), the player state machine, the **mode enum checked at runtime** (log
`+0x528` whenever it changes), item → mode grant (Fire Flower 592 → mode 2), the
throw path (`createFireBall`, fireball limits), and the damage and power-down path.

- **Deliverables:** `framework/include/player/*.h`. Hammer Suit v1 working in-game
  (README tests 1–8 pass). Then v2: a dedicated item, with the grant gate reverse
  engineered first.
- **Closed when:** the Hammer Suit passes its test table on Ryujinx, and every mode
  value is observed at runtime.

### Phase 3: enemies, and a new sprite built on Cheep Cheep mechanics

`Enemy` base (damage dispatch = Wii U `etcDamageCheck`, death states, freeze),
then the **Cheep Cheep family** (profiles 530–547, RicBent CSV). There are six
factories:

| Factory | Profiles |
|---|---|
| `0x370B50` | Pukupuku family, 530–538 |
| `0x375824` | Spiny Cheep, 539 |
| `0x3B3FBC` | jumping, 540/541 |
| `0x3D129C` / `0x3D263C` | spawners |
| `0x374B38` | formation |

Match each against red-pro2's `Pukupuku` / `PukupukuBase`: class layout,
settings-bit meanings, swim AI states.

- **Deliverable:** `framework/include/enemy/pukupuku.h`, and a sample custom sprite
  (new profile id, new sprite id) subclassing the verified Cheep Cheep class,
  registered through codedx's profile system.
- **Closed when:** the custom sprite spawns from a level and swims with Cheep
  Cheep behaviour.

### Phase 4: courses and content

Course file blocks (sprites, tilesets, background block 4), sprite → profile,
?/brick block contents → items, area and zone loading, and how resource archives
are found.

- **Deliverable:** `docs/COURSE_FORMAT.md` (Switch layout, verified), and a full
  content validator.
- **Closed when:** the validator explains every content crash we hit.

### Phase 5: readable C, regenerated from the typed database

The structs from Phases 1–4 go into `main_readable.i64` (`scripts/ida/plan_types.py`
→ `apply_types.py`), with `this` typed on methods. Then re-decompile all functions,
and emit C that keeps `->member` access and ships real struct headers, instead of
`FIELD_U32(a1, 0x…)`.

- **Deliverable:** `decompiled/readable/`, one unit per function, with headers
  generated from the database.
- **Closed when:**
  - compile-clean ≥ the old corpus (86.2%);
  - call-graph fidelity ≥ 99% (every call in the C is a `BL` in the binary);
  - sample units read naturally (the Player family first).

### Phase 6: naming coverage

Every naming method below grades its result:

- vtable ownership through typed constructors
- singleton detection (`createInstance` / disposer pattern → `X::sInstance`)
- string references, kept only when strongly corroborated
- structural matching against red-pro2: same callees, same constants, same branch
  shape

- **Closed when:** the share of called functions that are still `sub_` falls, with
  zero names lacking evidence (an audit samples 50 per batch).

## 4. Rules (each one learned the hard way)

1. **Never assign a module-owned symbol** (`_init`, `_fini`, `_DYNAMIC`, …) from a
   `.sym`. Enforced by `make_mod_project.py` plus `inspect_subsdk.py` after every build.
2. **Check content before blaming code.** A missing tileset, background or profile
   resource crashes on the Prepare Thread with a null dereference that looks
   exactly like a code bug.
3. **Edit instances, not shared data.** Collision data, ActorInfo and state tables
   are shared by every actor of a type.
4. **A database name is a claim.** Some come from NSMBW or from string guesses.
   Verify by structure before relying on one.
5. **One module loads.** If the levels use codedx custom sprites (724–733), every
   build must include the template code (`--with-template-code`).
6. **The Ryujinx log is the crash report.** Its location comes from MuiCache:
   `…\ryujinx-canary-1.3.272-win_x64\publish\Logs\`. Diagnostics print there.

## 5. Ledger format (`data/findings/ledger.csv`)

`id, area, claim, address, evidence, tier, grade, verified, used_by`

- `evidence` cites addresses and files: `disasm 0x6013F3D8`, `red-pro2
  Enemy.cpp:408`, `ryujinx log 03-25 line 96967`.
- `used_by` lists the mods and headers that depend on the claim. If a claim is
  downgraded, those must be re-tested.

## 6. Immediate next steps

1. **You:** fix 1-1's background name (block 4: `dv_autumn.Nin_NX` → a bare name
   such as `MyBG`), and 5-3's six missing tilesets. Then run the Hammer Suit tests
   1–8.
2. **You:** save RicBent's database as `main_readable.i64` in IDA (step 0.1).
3. **Me:** step 0.3, the probe generator and `read_log.py`, then a probe on
   `+0x528` and `createFireBall` to observe the mode values at runtime (Phase 2).
4. **Me:** step 0.2, the fresh export from RicBent's database. Then diff it
   against the old corpus to measure how much of T4 survives.
5. **Me:** Phase 3, the Cheep Cheep class from the 530–547 factories against
   red-pro2's `Pukupuku`.

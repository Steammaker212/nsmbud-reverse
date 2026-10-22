# Hammer Power-Up — Final Build Record

Status: **Approach B implemented and byte-verified.** Only a runtime test remains.

---

## Build

| | |
|---|---|
| Source | `convertedmain.rebased.elf` |
| Source MD5 | `f8a2e4c3616b8a99632b8ffe68938c34` |
| Source size | 13,085,363 bytes |
| Output | `convertedmain.hammer_b.elf` |
| Output MD5 | `e8dbb86b7a96d3077dad8d4aeec95a7a` |
| Output SHA-256 | `a8e72cbe4fc84ea82961c1aa08dba0180d71e242fcc39966b2589b44ea20d920` |
| Output size | 13,085,363 bytes (unchanged — no section grew) |
| Differing bytes | **91**, every one accounted for |

The output is a copy. The source ELF is never modified.

---

## What the patch set does

**Approach A — 11 mode-independent actor patches.** Makes a player-spawned
Hammer behave like a projectile: correct owner attribution, correct collision
dispatch, no player self-hit, correct size and facing. These do not depend on
the power-up value.

**Approach B — new power-up value 10.** The Fire Flower grants 10 instead of 2,
and every mode-2 gate is rewritten to test 10. Two mode-indexed tables are
relocated because their index-10 slots are owned by adjacent tables.

---

## Independent re-verification

A separate verifier (`scripts/verify_patched_elf.py` and
`scripts/verify_approach_a.py`) re-read **both** files and re-derived every
claim from bytes rather than trusting the patch script or the report.

```
size equal:                 True
program headers identical:  True

Approach A:   11/11 patches — src and out bytes both correct
Approach B:    9/9  instruction patches correct
Literals:      5/5  redirects correct in the output file
Profile cell:  0x00AF3498 -> 0x00AF3904
Tall type[10]: 2
Neighbours:    0x60B0C2E4 still 0.0, 0x60B0C258 still 0xA5
Height table:  [16, 31, 31, 6, 31, 31, 31, 31, 31, 31, 31]
Body table:    [1, 0, 0, 1, 2, 3, 0, 4, 4, 5, 0]
Padding tail:  bytes 88..160 still zero
Total diffs:   91
FAILS:         0
```

---

## Why the tables live in `.rodata`

The three player tables have **ten entries (0–9)**. Index 10 is not spare in two
of them:

| table | base | index-10 slot | adjacent owner |
|---|---|---|---|
| height, `flt_60B0C2BC` | `0x60B0C2BC` | `0x60B0C2E4` = 0.0 | `dword_60B0C2E4[]` used by `sub_60797598` |
| body ID, `cPlayerModelData` | `0x60B0C230` | `0x60B0C258` = 0xA5 | `dword_60B0C258[]` used by `sub_60792394` |
| tall type, `cTallType` | `0x60B0C300` | `0x60B0C328` = 0 | padding; next table at `0x60B0C330` |

Writing 31.0 at `0x60B0C2E4` would overwrite the first entry of the integer
table used by `sub_60797598`; writing 0 at `0x60B0C258` would overwrite the
animation/ID table used by `sub_60792394`. Both are unsafe. The tall-type slot
is genuine padding and is written directly.

**Resolution:** new 11-entry tables in a `0xA0`-byte zero-padding block inside
`.rodata` at `0x60B493A8..0x60B49448`. The block sits between two pitch/sound
tables, is covered by no symbol, has no IDA xrefs, no pointer hits, and no
`.rel.dyn` entries. 88 of the 160 bytes are used; the remaining 72 stay zero.

```
height @ 0x60B493A8 (file 0x00B49194): 16.0, 31.0, 31.0, 6.0, 31.0, 31.0, 31.0, 31.0, 31.0, 31.0, 31.0
body   @ 0x60B493D8 (file 0x00B491C4): 1, 0, 0, 1, 2, 3, 0, 4, 4, 5, 0
```

Because the block is *inside* a real section, this survives NSP/NSO repacking.
An earlier attempt placed the tables past the end of the last loaded section
("orphan tail"), which works in a raw ELF but does not survive repacking.

---

## Literal redirects

Each literal is a plain relative constant consumed by `add pc, rX`; it is not
relocated, so `new_literal = new_base - (address_of_add + 8)`.

| VA | file offset | original | new | effective base |
|---|---|---|---|---|
| `0x60795FF0` | `0x0079644C` | `78 65 37 00` | `64 36 3B 00` | height, `sub_60795CDC` |
| `0x607960F8` | `0x00796554` | `A4 62 37 00` | `90 33 3B 00` | height, `sub_60796004` |
| `0x6078C58C` | `0x0078C9E8` | `F0 FC 37 00` | `98 CE 3B 00` | body, `sub_6078C444` |
| `0x6078E604` | `0x0078EA60` | `70 DC 37 00` | `18 AE 3B 00` | body, `sub_6078E5A8` |
| `0x6078E7E8` | `0x0078EC44` | `00 DC 37 00` | `A8 AD 3B 00` | body, `sub_6078E608` |

---

## Approach A patch table

File offsets are for `convertedmain.rebased.elf`. For runtime memory patches,
write the rebased VA instead of the RVA.

| VA | file offset | original | new | purpose |
|---|---|---|---|---|
| `0x60C61BE4` | `0x00C61423` | `98 34 af 00` | `04 39 af 00` | Fire runtime profile pointer: 476 → 759 |
| `0x60BD3208` | `0x00BD2A47` | `00 00 00 00` | `13 00 00 00` | Hammer Info #1 subtype = **19** |
| `0x60BD3210` | `0x00BD2A4F` | `00 82 08 00` | `01 00 08 00` | Hammer Info #1 mask = **0x00080001** |
| `0x60AF6620` | `0x00AF640C` | `00 08 00 00` | `00 00 00 00` | Hammer Info #2 mask = **0** |
| `0x6013FB38` | `0x0013FF94` | `01 10 00 e2` | `50 12 e0 e7` | direction = `(param >> 4) & 1` |
| `0x6013FB68` | `0x0013FFC4` | `50 08 e7 e7` | `0a 00 a0 e3` | scale denominator = 10 |
| `0x60140744` | `0x00140BA0` | `00 50 86 e5` | `14 60 94 e5` | ctor: `LDR R6,[R4,#0x14]` |
| `0x60140748` | `0x00140BA4` | `00 50 87 e5` | `0f 60 06 e2` | ctor: `AND R6,R6,#0xF` |
| `0x6014074C` | `0x00140BA8` | `00 50 8a e5` | `13 64 86 e3` | ctor: `ORR R6,R6,#0x13000000` |
| `0x60140770` | `0x00140BCC` | `00 50 84 e7` | `ff 6c 86 e3` | ctor: `ORR R6,R6,#0xFF00` |
| `0x60140778` | `0x00140BD4` | `00 50 84 e7` | `54 60 84 e5` | ctor: `STR R6,[R4,#0x54]` |

### What the ctor patch builds

The five ctor instructions assemble one 32-bit word and store it at Hammer+0x54:

```
+0x54 = player index (0..3)
+0x55 = 0xFF          (preserved)
+0x56 = 0x00          (collision layer)
+0x57 = 0x13 = 19     (hammer attack type)
```

The stores these replace were redundant: `+6112/+6116/+6120` were already
zeroed earlier, `+11824` is written by `HammerActor_setupModel`, and `+11840` is
set to 10 by the hammer init. `R6` is callee-saved and survives the
`sub_601531B4` call, so carrying the packed word across it is safe.

---

## Approach B patch table

| VA | original | new | instruction |
|---|---|---|---|
| `0x6045DDCC` | `E3A02002` | `E3A0200A` | `mov r2,#2` → `mov r2,#10` (Fire Flower grant) |
| `0x607A2708` | `812FFF1E` | `83A03001` | `bxhi lr` → `movhi r3,#1` (`canChangeTo`) |
| `0x607AAA88` | `E3500002` | `E350000A` | `cmp r0,#2` → `#10` (`setFireBallAction`) |
| `0x607AA9BC` | `E3510002` | `E351000A` | `cmp r1,#2` → `#10` (`checkSetFireBall`) |
| `0x607AABB8` | `E3500002` | `E350000A` | `cmp r0,#2` → `#10` (`createFireBall`) |
| `0x607AAC94` | `E3500002` | `E350000A` | `cmp r0,#2` → `#10` (`createFireBall`) |
| `0x607AAFF4` | `E3510006` | `E351000A` | `cmp r1,#6` → `#10` (execute bound) |
| `0x607AB000` | `E3A03064` | `E3003464` | `mov r3,#0x64` → `movw r3,#0x464` (mask) |
| `0x607AB0E4` | `E3500002` | `E350000A` | `cmp r0,#2` → `#10` (execute gate) |
| `0x60B0C328` | `00000000` | `00000002` | tall type[10] = 2 (Normal) |

The `0x64` → `0x464` mask change is deliberate: `0x64` = bits 2, 5, 6 (fire,
ice, penguin). `0x464` adds bit 10 while **preserving** those three, so ice and
penguin keep working. A naive widening of bit 2 would have broken them.

---

## Side effects and residual risks

- **Fire (mode 2) is deliberately retired.** The action gates now test 10, so a
  legacy Fire save or a level starting the player in Fire shows Normal colour
  and cannot throw. Fire is otherwise unreachable once the Fire Flower grants 10.
  If legacy compatibility matters, add a `mode 2 → 10` remap in `sub_607A2F40`
  before the `vf+0x90` call.
- **No Hammer suit model exists.** Mode 10 uses body type 0 (Normal) with colour
  type 2 (Fire) — a Fire-coloured Normal body. The power-up model table at
  `0x60CA6BB8` has 20 entries and none is a Hammer suit. A true Hammer suit
  needs new model resources, which is an asset job, not a patch.
- **Balloon offset, not applied.** `c_balloon_offset_y[10]` at `0x60B0C374` is
  `0.0`. The table actually has 11 slots — `[0, -4, -4, 4, -5, -2, -4, -4, -4,
  0, 0]` — and index 10 is a spare zero. If Hammer can be held while riding
  Balloon Yoshi, optionally patch the word to `-4.0` (`00 00 80 C0`). This is
  cosmetic (balloon draw offset), not a crash.

---

## Runtime-unproven

These require an actual patched run in an emulator or on hardware:

- Direction bit 4 sourced from `player+0x2F10`.
- Double-hit risk between the body CollisionMgr and Info #1 ActiveCollider.
- Hammer spawn velocity/position inherited from the fireball path.
- Model/animation stability while switching to mode 10.

---

## Reproducing

```
python .rea/apply_approach_b.py      # writes the patched ELF and prints the diff
python .rea/verify_approach_b.py     # original-byte check against the source
python .rea/check_new_words.py       # Capstone validation of new instruction words
python .rea/verify_patched_elf.py    # independent end-to-end re-verification
python .rea/verify_approach_a.py     # independent check of the 11 actor patches
```

## 7. Approach B — new power-up value 10 (implemented)

Approach A reuses Fire (mode 2). Approach B adds a real mode **10**: the Fire Flower now
grants 10, the fire-action path accepts 10, and all mode-indexed tables are made safe for the
new index. The patch is applied to a copy (`convertedmain.hammer_b.elf`); the original ELF is
untouched.

### 7.1 Grant chain (verified)

```
FireFlower collision handler        sub_6045DDC0
  mov r2, #2  (mode argument)       0x6045DDCC   <-- patched to #10
  mov r3, #1                        0x6045DDD0
  bl  sub_60463998                  0x6045DDD8
sub_60463998(player, &consumed, mode, 1)
  sub_607A2820(player, mode)        dust/transform effect
  (*(vf+0x560))(player, mode)       canChangeTo            0x607A26F8
  sub_607A27A8(player, mode)        writes mModeNext (+0x2C7C),
                                    sets flag bit 2 via vf+0x270 (0x60766698)
mode application task               0x603E56C0
  sub_607A2F40                      reads mModeNext
  vf+0x90 = 0x60760754              tail-call
  vf+0x94 = 0x60795CDC              setPlayerModeImpl (mMode, mHeight, speed)
```

The Fire Flower's handler has **no direct xrefs** because it is reached through the item
profile's collision callback. The exact grant instruction is one word:

| VA | file offset | original | new | purpose |
|---|---|---|---|---|
| `0x6045DDCC` | `0x0045E228` | `02 20 A0 E3` | `0A 20 A0 E3` | `mov r2,#2` → `mov r2,#10` |

### 7.2 `canChangeTo(10)`

`canChangeTo` computes `r3 = mode - 1`, rejects `r3 > 8`, then indexes a 9-entry jump table.
Mode 10 gives `r3 = 9`, so it is rejected by `bxhi lr`. Route it to the generic handler
(table index 1, `0x607A2748`) by replacing the conditional return with a conditional select:

| VA | file offset | original | new | purpose |
|---|---|---|---|---|
| `0x607A2708` | `0x007A2B64` | `1E FF 2F 81` | `01 30 A0 83` | `bxhi lr` → `movhi r3,#1` |

The generic handler compares `mModeNext` with the requested mode and returns 1 when a change is
needed, exactly like modes 2–8.

### 7.3 Mode-indexed tables — overlap hazard and relocation

The three player tables have **ten entries (0–9)**. Index 10 is not spare in two of them:

| table | base | index-10 slot | adjacent owner |
|---|---|---|---|
| height, `flt_60B0C2BC` | `0x60B0C2BC` | `0x60B0C2E4` = 0.0 | `dword_60B0C2E4[]` used by `sub_60797598` |
| body ID, `cPlayerModelData` | `0x60B0C230` | `0x60B0C258` = 0xA5 | `dword_60B0C258[]` used by `sub_60792394` |
| tall type, `cTallType` | `0x60B0C300` | `0x60B0C328` = 0 | padding; next table at `0x60B0C330` |

Writing 31.0 at `0x60B0C2E4` would overwrite the first entry of the integer table used by
`sub_60797598`; writing 0 at `0x60B0C258` would overwrite the animation/ID table used by
`sub_60792394`. Both are unsafe. The tall-type slot is genuine padding and can be written
directly.

**Resolution:** build new 11-entry tables in the read-only tail of PT_LOAD #2
(`0x60BBF938..0x60BBF994`). This region is outside every section (it is the orphan SDK version
string block after `.note`), has no xrefs and no `.rel.dyn` entries. Redirect the five
`add pc, rX` literal-pool constants to the new bases. Modes 0–9 keep their original values.

New tables:

```
height @ 0x60BBF938: 16.0, 31.0, 31.0, 6.0, 31.0, 31.0, 31.0, 31.0, 31.0, 31.0, 31.0
body   @ 0x60BBF968: 1, 0, 0, 1, 2, 3, 0, 4, 4, 5, 0
```

Redirect patches:

| VA | file offset | original | new | effective base |
|---|---|---|---|---|
| `0x60BBF938` | `0x00BBF724` | orphan string | 11-float height table | `0x60BBF938` |
| `0x60BBF968` | `0x00BBF754` | orphan string | 11-dword body table | `0x60BBF968` |
| `0x60795FF0` | `0x0079644C` | `78 65 37 00` | `F4 9B 42 00` | height, `sub_60795CDC` |
| `0x607960F8` | `0x00796554` | `A4 62 37 00` | `20 99 42 00` | height, `sub_60796004` |
| `0x6078C58C` | `0x0078C9E8` | `F0 FC 37 00` | `28 34 43 00` | body, `sub_6078C444` |
| `0x6078E604` | `0x0078EA60` | `70 DC 37 00` | `A8 13 43 00` | body, `sub_6078E5A8` |
| `0x6078E7E8` | `0x0078EC44` | `00 DC 37 00` | `38 13 43 00` | body, `sub_6078E608` |

Each literal is a plain relative constant consumed by `add pc, rX`; it is not relocated, so
`new_literal = new_base - (address_of_add + 8)`. The patched ELF verifies all five effective
addresses (see §7.7). The tall-type slot is patched directly:

| VA | file offset | original | new | purpose |
|---|---|---|---|---|
| `0x60B0C328` | `0x00B0C114` | `00 00 00 00` | `02 00 00 00` | tall type[10] = 2 (Normal) |

> **Repack note.** The new tables overwrite orphan SDK version strings (not a named section).
> If the NSP/loader rebuild trims the segment tail, move the tables to a new `.rodata` block or
> initialise an 11-entry pair in `.bss` at startup and keep the same base literals.

### 7.4 Fire-action chain

The Fire Flower grant is only half of the chain. Mode 10 must also pass the action gates:

| function | role | gate patches |
|---|---|---|
| `sub_607AAA00` | `setFireBallAction`, called unconditionally from `sub_607965CC` at `0x607966BC` | `cmp r0,#2` → `#10` at `0x607AAA88` |
| `sub_607AA954` | `checkSetFireBall` | `cmp r1,#2` → `#10` at `0x607AA9BC` |
| `sub_607AABA0` | `createFireBall` | `cmp r0,#2` → `#10` at `0x607AABB8` and `0x607AAC94` |
| `sub_607AAF80` | fire state execute | bound `cmp r1,#6` → `#10`; mask `0x64` → `0x464`; inner `cmp r0,#2` → `#10` |
| `sub_607AAF18` | fire state enter | no mode gate; sets animation 33 (`fire_at`) |
| `sub_607AAF68` | fire state exit | no mode gate |

The fire state object is at RVA `0xCC4D6C` (the call sites decode to
`Player_changeState(player, 0xCC4D6C, …)`). Patching the mask at `0x607AB000` from `0x64`
(bits 2,5,6) to `0x464` (bits 2,5,6,10) is what lets the state execute for mode 10.

### 7.5 Final patch table

**A. Mode-10 patches (13 words + 2 tables + 5 literals)**

| # | VA | file offset | original | new | purpose |
|---|---|---|---|---|---|
| 1 | `0x6045DDCC` | `0x0045E228` | `02 20 A0 E3` | `0A 20 A0 E3` | grant mode 10 |
| 2 | `0x607A2708` | `0x007A2B64` | `1E FF 2F 81` | `01 30 A0 83` | `canChangeTo(10)` |
| 3 | `0x60B0C328` | `0x00B0C114` | `00 00 00 00` | `02 00 00 00` | tall type[10] = Normal |
| 4 | `0x6078E6A8` | `0x0078EB04` | `02 00 50 E3` | `0A 00 50 E3` | suit colour → Fire |
| 5 | `0x607AAA88` | `0x007AAEE4` | `02 00 50 E3` | `0A 00 50 E3` | setFireBallAction |
| 6 | `0x607AA9BC` | `0x007AAE18` | `02 00 51 E3` | `0A 00 51 E3` | checkSetFireBall |
| 7 | `0x607AABB8` | `0x007AB014` | `02 00 50 E3` | `0A 00 50 E3` | createFireBall A |
| 8 | `0x607AAC94` | `0x007AB0F0` | `02 00 50 E3` | `0A 00 50 E3` | createFireBall C |
| 9 | `0x607AAFF4` | `0x007AB450` | `06 00 51 E3` | `0A 00 51 E3` | fire exec bound |
| 10 | `0x607AB000` | `0x007AB45C` | `64 30 A0 E3` | `64 34 00 E3` | fire exec mask `0x64` → `0x464` |
| 11 | `0x607AB0E4` | `0x007AB540` | `02 00 50 E3` | `0A 00 50 E3` | fire exec inner |
| 12 | `0x60BBF938` | `0x00BBF724` | orphan | height table (11 floats) | height[10] = 31.0 |
| 13 | `0x60BBF968` | `0x00BBF754` | orphan | body table (11 dwords) | body[10] = 0 (Normal) |
| 14 | `0x60795FF0` | `0x0079644C` | `78 65 37 00` | `F4 9B 42 00` | height literal |
| 15 | `0x607960F8` | `0x00796554` | `A4 62 37 00` | `20 99 42 00` | height literal |
| 16 | `0x6078C58C` | `0x0078C9E8` | `F0 FC 37 00` | `28 34 43 00` | body literal |
| 17 | `0x6078E604` | `0x0078EA60` | `70 DC 37 00` | `A8 13 43 00` | body literal |
| 18 | `0x6078E7E8` | `0x0078EC44` | `00 DC 37 00` | `38 13 43 00` | body literal |

**B. Hammer actor/projectile patches (Approach A, unchanged)**

These are the eleven rows from §5.1: the Fire runtime profile pointer
(`0x60C61BE4`), the Hammer Info #1 subtype/mask and Info #2 type mask, the direction/scale
instructions at `0x6013FB38`/`0x6013FB68`, and the five ctor field patches at
`0x60140744`/`48`/`4C`/`70`/`78`. They remain required because mode 10 takes the same
`createFireBall` branch and therefore loads the redirected profile ID **759**.

### 7.6 Side effects and residual risks

- **Fire (mode 2) is deliberately retired.** The action gates now test 10, so a legacy
  Fire save or a level that starts the player in Fire will have the Fire suit colour replaced
  by Normal colour and cannot throw. Fire is otherwise unreachable once the Fire Flower grants
  10. If legacy compatibility matters, add a `mode 2 → 10` remap in the mode-application task
  (`sub_607A2F40`) before `vf+0x90`.
- **No Hammer suit model.** Mode 10 uses body type 0 (Normal) and colour type 2 (Fire), i.e. a
  Fire-coloured Normal body. A true Hammer suit needs new model resources, not just code.
- **Balloon offset.** `c_balloon_offset_y[10]` at `0x60B0C374` is 0.0 (the next table starts at
  `0x60B0C378` = 13.0). If Hammer can be held while riding Balloon Yoshi, optionally patch the
  word to `-4.0` (`00 00 80 C0`). This is cosmetic (balloon draw offset), not a crash.
- **Runtime-unproven items:** direction bit 4 from `player+0x2F10`; double-hit risk between the
  body CollisionMgr and Info #1 ActiveCollider; Hammer spawn velocity/position inherited from
  the fireball path; model/animation stability while switching to mode 10. These require an
  actual patched run.

### 7.7 Build and verification

- Source: `convertedmain.rebased.elf`, MD5 `f8a2e4c3616b8a99632b8ffe68938c34`.
- Patched copy: `convertedmain.hammer_b.elf`, MD5 `2952cf0ef75963c18755592bc6d6ce17`.
- 150 differing bytes; every difference is accounted for by the table above (no unexpected
  diffs).
- All original byte sequences matched before writing; all new instruction words were decoded
  with Capstone (`mov r2,#10`, `movhi r3,#1`, `cmp rX,#10`, `movw r3,#0x464`).
- The five redirected literals were re-read from the patched file and their effective
  `add pc` targets are `0x60BBF938` (height) and `0x60BBF968` (body).
- Reproducible scripts: `.rea/apply_approach_b.py` (write + diff), `.rea/verify_approach_b.py`
  (original-byte check; update its table rows if re-run), `.rea/check_new_words.py` (Capstone).


# NSMBU Deluxe (Switch) — Custom Hammer Power-Up
## Reverse-Engineering Report and Patch Plan

**Target:** *New Super Mario Bros. U Deluxe* (Switch), `convertedmain.rebased.elf`
**IDA database:** `convertedmain.rebased.elf.i64`
**Image base:** `0x60000000`
**MD5:** `f8a2e4c3616b8a99632b8ffe68938c34`
**IDA MCP:** `http://127.0.0.1:13337/mcp`

All addresses below are **IDA virtual addresses** (image base + RVA). File offsets are for
`convertedmain.rebased.elf` and were computed from its program headers. If your copy has a
different segment layout, use the VA and re-derive the file offset.

> **Pointer convention:** this ELF stores unrebased RVAs in pointer cells and relies on
> `R_ARM_RELATIVE`. A **static ELF patch** writes the RVA (e.g. `0x00AF3904`); a **runtime
> memory patch** writes the rebased VA (e.g. `0x60AF3904`).

---

## 1. Executive summary

The cleanest hook is the **fire branch of `PlayerObject::createFireBall`**. The player's
power-up state `+0x528 == 2` means Fire; the function looks up the Fire profile through a
single runtime pointer cell and spawns the projectile. The Fire profile is already
registered as **476**, and a fully implemented **Hammer actor profile 759** already exists.

The minimal mod is therefore:

1. Redirect the **runtime Fire profile pointer** from profile 476 to profile 759.
2. Give the hammer actor the **player index** (`+84`), the **collision layer** (`+86 = 0`),
   and the **hammer attack type** (`+87 = 19`).
3. Fix the hammer's **direction** and **scale** for a player-thrown projectile.
4. Adjust the hammer's collision Infos so it hits enemies but not the throwing player.

No item edits are needed for the first version: the **Fire Flower already grants power-up 2**,
so picking up a Fire Flower and pressing the fire button throws a hammer. The player keeps the
Fire suit/model. This is **Approach A**, the recommended proof.

**Approach B** (a true separate Hammer power-up, value 10) is described in §7; it needs a
speed-table patch, a `createFireBall` branch change, and a change to the Fire Flower grant path.

---

## 2. The projectile hook — `PlayerObject::createFireBall`

**Function:** `0x607AABA0` (`.rea/createFireBall.c`)

```
v4 = *(player + 0x528);            // power-up state
if (v4 == 2) {                     // FIRE
    // sound: SE_PLY_THROW_FIRE
    // runtime profile lookup:
    //   pointer cell 0x60C61BE4 -> 0x00AF3498 -> 476
    //   Profile::get(476)
}
if ((unsigned)(v4 - 5) < 2) {      // ICE (5 or 6)
    // runtime profile lookup: 0x60C61B48 (untouched)
}
```

### 2.1 Fire profile lookup

```
0x607AAD10  LDR R0, =(off_60C61BE4 - 0x607AAD1C)
0x607AAD14  LDR R0, [PC,R0]        ; R0 = *(0x60C61BE4) = 0x00AF3498
0x607AAD18  LDR R0, [R0]           ; R0 = 476
0x607AAD1C  BL  Profile::get
```

`0x60C61BE4` is a **runtime pointer cell** to the Fire profile ID cell. The Fire profile
registration (`sub_6013B948`) reads the ID cell `0x00AF3498` directly and registers **476**
with factory `0x13A7A4`, ActorInfo `0x60AF67B0`, size 130. The Hammer registration
(`sub_6014083C`) reads the ID cell `0x00AF3904` and registers **759** with factory
`0x6013F02C`, ActorInfo `0x60AF68AC`, size 18.

**Redirecting the runtime pointer cell does not disturb either registration.**

### 2.2 Build parameter

The fire branch builds a 48-byte `ActorBuildInfo`:

| bits | source | meaning |
|---|---|---|
| 0–3 | `player+0x54` | player index (0–3) |
| 4–7 | `player+0x2F10` | facing / variant |
| 8–11 | `player+0x56` | player collision layer |
| 12–15 | `player+0x57` | player collision mask/type |
| 16–23 | `a2` | spin flag |
| +12 | Profile* | looked-up profile |
| +16..+24 | wrist position | spawn position |
| +28 | rotation | |
| +32 | 0 (`v32[8]`) | layer copied by `StageActor` to actor `+86` |

The actor manager copies this 44-byte structure (`sub_600080BC`) and later creates the
actor. `StageActor::StageActor` (0x600002A0) initializes:

```
*(u16*)(actor+84) = -1;          // +84 = 0xFF, +85 = 0xFF
*(u8*)(actor+86)  = buildInfo[32];  // layer / broad-phase type
*(u8*)(actor+87)  = 1;              // default attack type (fireball)
*(u8*)(actor+533) = 0;              // actor category (projectile)
```

The hammer's own init does **not** overwrite `+84/+86/+87`, so they would remain `0xFF/0/1`.
The ctor patch in §4 fixes that.

---

## 3. Hammer actor (profile 759)

### 3.1 Registration and construction

| item | address / value |
|---|---|
| registration | `sub_6014083C` |
| profile ID cell | `0x00AF3904` = **759** |
| profile object | `0x60C87CAC` (first arg 13139116) |
| factory | `0x6013F02C` |
| ActorInfo | `0x60AF68AC` |
| allocation | `operator new(11912)` |
| ctor | `0x6014065C` |
| vtable | `0x60BD32B4` |
| init / onCreate | `0x6013FB0C` |

Factory (`0x6013F02C`):

```c
v2 = operator new(11912);
return sub_6014065C(v2, buildInfo);
```

### 3.2 Hammer init `0x6013FB0C`

Key stores (ARM32, 4-byte instructions):

```
0x6013FB30  LDR R0, [R9,#0x14]        ; R0 = build param
0x6013FB38  AND R1, R0, #1            ; direction = param & 1
0x6013FB3C  STR R1, [R9,#0x50]        ; +80 = direction
0x6013FB40  LDR R1, [R2,R1,LSL#2]     ; R2 = flt_60AF1EC0
0x6013FB48  STR R1, [R9,#0xA0]        ; +160 = +/-2.0
0x6013FB64  STR R1, [R9,#0x90]
0x6013FB68  UBFX R0, R0, #0x10, #8    ; scale denominator = bits 16..23
0x6013FB70  VMOV S0, R0
0x6013FB74  VCVT.F32.S32 S0, S0
0x6013FB80  STR R0, [R9,R2]           ; +11840 = denominator
0x6013FB90  VDIV.F32 S0, S2, S0       ; scale = 0.7 / denominator
```

Direction speed table `flt_60AF1EC0` = `[+2.0, -2.0]` (`0x40000000`, `0xC0000000`).

The function then copies **Info #1** `0x60BD31F0` to `actor+11852` and calls
`ActiveCollider::init(actor+188, actor, actor+11852, 0)`, and initializes the body
`CollisionMgr` at `actor+6472` with box vectors `0x60AF68D0/0x60AF68DC/0x60AF68E8`.

### 3.3 Defaults relevant to a player-thrown hammer

```
+84 = 0xFF      player index unknown
+86 = 0         collision layer (from buildInfo+32)
+87 = 1         attack type = fireball
+533 = 0        projectile category
+80 = param&1   direction (wrong source for a fire param)
+11840 = bits16..23 (0 or 1 for a fire param -> scale 0.7 or infinity)
```

---

## 4. Collision model

### 4.1 ActiveCollider Info layout

11 dwords at collider `+116..+156`:

| index | offset | field |
|---|---|---|
| 0–3 | +0x00..+0x0C | box floats |
| 4 | +0x10 | group |
| 5 | +0x14 | **type** |
| 6 | +0x18 | **subtype** |
| 7 | +0x1C | **type mask** |
| 8 | +0x20 | **subtype mask** |
| 9 | +0x24 | flags |
| 10 | +0x28 | callback |

`ActiveCollider::init` also copies the owner's `+87` to collider `+108` and the owner's `+86`
to collider `+109`.

### 4.2 Hammer Infos

**Info #1 — `0x60BD31F0`** (hammer head / attack collider):

```
+0x14 type          = 3
+0x18 subtype       = 0          (original)
+0x1C mask          = 0x824F
+0x20 subtype mask  = 0x00088200 (bits 11 and 19)
+0x24 flags         = 0
+0x28 callback      = 0x601349FC
```

**Info #2 — `0x60AF6604`** (projectile body / player-hit collider):

```
+0x14 type          = 12
+0x18 subtype       = 0
+0x1C mask          = 0x800
+0x20 subtype mask  = 0
+0x24 flags         = 2
+0x28 callback      = 0
```

### 4.3 Enemy body

Enemy ActorInfo `0x60BC2CF0`:

```
+0x20 type          = 3
+0x24 subtype       = 0
+0x28 mask          = 0x80CF          (bit 3 set)
+0x2C subtype mask  = 0xFFFAFFFF      (bit 19 set)
+0x34 callback      = 0x2A21B0
```

An ActiveCollider pair passes when **both** type masks and **both** subtype masks overlap.
The original hammer Info #1 mask `0x88200` contains the **player body subtype 11** and the
**hammer subtype 19**, but **not the enemy subtype 0**, so Info #1 alone does not hit enemies.
Enemy damage normally comes through the **body CollisionMgr**, whose owner fields `+86/+87`
are used for the broad phase and for the collision type.

### 4.4 CollisionMgr

`CollisionMgr_init` (0x6014B9E8) maps:

```
manager+2212 -> owner+86
manager+2216 -> owner+87
manager+2220 -> owner+84
```

Broad phase (`CollisionMgr_vf28`, 0x60152C18):

```
owner+86 == other+86
owner+87 & other+87 != 0
```

The manager builds a collision info from the owner's `+86/+87`; `Enemy::vf100` reads the
attack type at `+140` and gates type 19 on `*(a2+150) & 8` (bit 19 of the attacker's subtype
mask). `Enemy::collisionHammer` (0x602A6DF4) then reads the **attacker actor +84** as the
player index for the hit effect.

### 4.5 Enemy dispatch

`Enemy::vf100` (0x602A2B8C):

| type | function |
|---|---|
| 19 | `Enemy::collisionHammer` (0x602A6DF4) |
| 1, 14 | `Enemy::collisionFireball` (0x602A6AB8) |
| 2, 21 | iceball collision |

`Enemy::collisionHammer`:

```
v4 = *(a2+84); v5 = *(a2+88);        // hit position/normal
sub_602A38A4(enemy, &v23);           // knockback
v7 = *(a3+64);                       // attacker actor
v9 = *(v7+84);                       // player index
sub_602A852C(enemy+1526, &v23);      // hit effect
```

This is why `+84 = player index` must be set on the hammer.

---

## 5. Patch plan — Approach A (Fire Flower throws a hammer)

### 5.1 Patch table

File offsets are for `convertedmain.rebased.elf`.

| VA | file offset | original bytes | new bytes | purpose |
|---|---|---|---|---|
| `0x60C61BE4` | `0x00C61423` | `98 34 af 00` | `04 39 af 00` | Fire runtime profile pointer: `0x00AF3498` (476) → `0x00AF3904` (759) |
| `0x60BD3208` | `0x00BD2A47` | `00 00 00 00` | `13 00 00 00` | Hammer Info #1 subtype = **19** |
| `0x60BD3210` | `0x00BD2A4F` | `00 82 08 00` | `01 00 08 00` | Hammer Info #1 subtype mask = **0x00080001** (enemy subtype 0 + hammer 19; excludes player 11) |
| `0x60AF6620` | `0x00AF640C` | `00 08 00 00` | `00 00 00 00` | Hammer Info #2 type mask = **0** (disable player-hit projectile body) |
| `0x6013FB38` | `0x0013FF94` | `01 10 00 e2` | `50 12 e0 e7` | direction = `(param >> 4) & 1` — `UBFX R1,R0,#4,#1` |
| `0x6013FB68` | `0x0013FFC4` | `50 08 e7 e7` | `0a 00 a0 e3` | scale denominator = **10** — `MOV R0,#10` |
| `0x60140744` | `0x00140BA0` | `00 50 86 e5` | `14 60 94 e5` | ctor: `LDR R6,[R4,#0x14]` (param) |
| `0x60140748` | `0x00140BA4` | `00 50 87 e5` | `0f 60 06 e2` | ctor: `AND R6,R6,#0xF` (player index) |
| `0x6014074C` | `0x00140BA8` | `00 50 8a e5` | `13 64 86 e3` | ctor: `ORR R6,R6,#0x13000000` (+87=19, +86=0) |
| `0x60140770` | `0x00140BCC` | `00 50 84 e7` | `ff 6c 86 e3` | ctor: `ORR R6,R6,#0xFF00` (+85=0xFF) |
| `0x60140778` | `0x00140BD4` | `00 50 84 e7` | `54 60 84 e5` | ctor: `STR R6,[R4,#0x54]` writes +84..+87 |

### 5.2 Why each patch

**1. Profile pointer (`0x60C61BE4`).** The fire branch calls `Profile::get(*(0x60C61BE4))`.
Changing the pointer cell from the Fire ID cell to the Hammer ID cell makes it call
`Profile::get(759)`. The Fire registration still registers 476 (unused), and the Hammer
registration still registers 759. No profile conflict. For a runtime memory patch write
`0x60AF3904` instead of `0x00AF3904`.

**2. Hammer Info #1 subtype (`0x60BD3208`).** The hammer's own ActiveCollider subtype becomes
19. This is both the hammer attack type and the bit the `vf100` gate checks.

**3. Hammer Info #1 subtype mask (`0x60BD3210`).** `0x00080001` = bits 0 and 19.
- bit 0 matches the **enemy body subtype 0**;
- bit 19 is the hammer subtype and satisfies `*(a2+150) & 8`;
- **bit 11 is deliberately absent**, so the hammer's ActiveCollider does not hit the player
  body (subtype 11).
The type/mask fields (`type 3`, `mask 0x824F`) already match the enemy body type 3.

**4. Hammer Info #2 mask (`0x60AF6620`).** The second collider is the projectile body vs
player (type 12, mask 0x800). Setting its type mask to 0 disables it, preventing the hammer's
body from colliding with the player. Enemy damage comes from Info #1 and the body
CollisionMgr, not Info #2.

**5. Direction (`0x6013FB38`).** The original `AND R1,R0,#1` uses bit 0 of the build param,
which for a fire param is the **player index low bit**, not the facing. Replacing it with
`UBFX R1,R0,#4,#1` uses the fire param's facing bit (`player+0x2F10` bit 0), matching the
fireball's direction logic (`(param & 0xF0) != 0`). The existing `STR +80` and
`LDR flt_60AF1EC0[dir]` then store the correct direction and ±2.0 speed.

**6. Scale (`0x6013FB68`).** The original `UBFX` extracts param bits 16–23, which for the fire
param is the spin flag (0 or 1). That would divide 0.7 by 0 (infinity) or 1 (0.7). Replacing
it with `MOV R0,#10` makes `+11840 = 10` and the model scale `0.7/10 = 0.07`, matching the
Hammer Bros hammer size. Adjust the 10 if the hammer looks too small/large (e.g. 8 or 12).

**7. Ctor `+84..+87` word (`0x60140744/48/4C/70/78`).**
The hammer ctor runs after `StageActor_ctor`; its `+84` word is `0xFFFF` and `+87` is 1. The
five-instruction sequence builds a 32-bit word and stores it at `+84`:

```
+84 = player index (0..3)     (param & 0xF)
+85 = 0xFF                    (preserved original padding)
+86 = 0x00                    (collision layer; matches fire/enemy layer)
+87 = 0x13 (19)               (hammer attack type)
```

The replaced instructions are **duplicate zero-stores**: `+6112/+6116/+6120` were already
zeroed at `0x601406bc/c4/cc`, and the `+11824` / `+11840` stores are redundant:
- `+11824` is set later by `HammerActor_setupModel` (0x6013FCD4);
- `+11840` is set to 10 by the hammer init (`STR R0,[R9,#0x2E40]` at 0x6013FB80).

`R6` is callee-saved; the `BL sub_601531B4` at `0x60140764` (CollisionMgr ctor) preserves it,
so the value survives to the store at `0x60140778`.

**8. Optional sound.** The fire branch plays `SE_PLY_THROW_FIRE` (VA `0x60ADBBF9`). A suitable
hammer throw sound is `SE_EMY_HAMMER_BROS_HAMMER` (VA `0x60ABED00`). To swap it, patch the
PC-relative literal used by the `LDR R0, =(aSePlyThrowFire - ...)` at `0x607AACF8` so it
resolves to `0x60ABED00` instead of `0x60ADBBF9`. This is cosmetic; the fire sound is fine for
the first test.

### 5.3 Resulting behavior

1. Pick up a **Fire Flower** → power-up state 2 (unchanged).
2. Press the fire button → `createFireBall` enters the fire branch, looks up profile **759**,
   and spawns the **hammer actor** at the player's wrist.
3. Hammer actor fields:
   - `+84 = player index` → `Enemy::collisionHammer` attributes the hit to the correct player;
     the player's own collision callback ignores the owner's projectile (same rule as the
     fireball).
   - `+86 = 0` → same broad-phase layer as the fireball.
   - `+87 = 19` → the body CollisionMgr dispatches `collisionHammer`, not `collisionFireball`.
4. Hammer collision:
   - **Body CollisionMgr**: type 19 → hammer knockback/hit effect.
   - **Info #1 ActiveCollider**: subtype 19, subtype mask `0x80001` → can hit enemy subtype 0
     and satisfies the `vf100` gate; excludes player subtype 11.
   - **Info #2**: disabled (mask 0) → no player body hit.
5. Direction from the player's facing; scale 0.07; speed ±2.0; fire sound (or swapped).
6. The player keeps the **Fire suit** model and fire physics. A custom Hammer suit is a
   separate cosmetic/resource task.

---

## 6. Test matrix

| # | Test | Expected | If it fails |
|---|---|---|---|
| 1 | Fire Flower → fire button | Hammer spawns at the hand | Check profile pointer patch and Hammer registration 759 |
| 2 | Hammer flies forward | Flies in the facing direction | Flip bit 4 (use bit 5 or invert); inspect `player+0x2F10` values |
| 3 | Hammer size | ≈0.07, comparable to Hammer Bros | Change scale denominator 10 to 8/12 |
| 4 | Ground enemy hit | Enemy takes hammer knockback/dies | See §6.1 |
| 5 | Both facings | Works left and right | Direction patch |
| 6 | Self-damage | None | Verify `+84` player index; Info #2 mask 0; player callback owner check |
| 7 | Co-op other player | Can be hit or ignored | Add bit 11 to Info #1 subtype mask if friendly fire is wanted |
| 8 | Double-hit | Single knockback | Set `+87=1` (body path fireball) or Info #1 mask `0x80000` to isolate paths |
| 9 | Sound | Fire sound or hammer sound | Optional literal swap |
| 10 | Hammer count | ≤6 (fireball limit) | Check `MEMORY[0xC7B420]` count array; hammers may not register there |

### 6.1 If enemies are not damaged

The two candidate dispatch paths are covered intentionally, but verify in this order:

1. **Body CollisionMgr path**: confirm `+87 = 19` was written by the ctor patch. Set a
   breakpoint at `Enemy::vf100` (0x602A2B8C) and inspect the attack type argument and
   `*(a2+150) & 8`. If the type is 1, the `+87` store did not reach the manager; check that
   `sub_601531B4` (ctor) did not copy the value instead of the pointer, and move the `+87`
   store to after the CollisionMgr init in `0x6013FB0C`.
2. **ActiveCollider path**: confirm Info #1 subtype 19 and subtype mask `0x80001`. If the
   enemy still is not hit, temporarily use `0xFFFFFFFF` (diagnostic; this will also hit the
   player) to see whether the ActiveCollider path works.
3. **Layer mismatch**: the hammer's `+86 = 0`. The fireball's `+86` is `player+0x56`. If the
   player's `+0x56` is nonzero, the broad-phase equality fails. Change the ctor word to copy
   `(param >> 8) & 0xF` into `+86` instead of 0. (This costs one extra instruction; use a
   code cave or repurpose another redundant store.)
4. **Double-hit**: if the enemy reacts twice, isolate one path:
   - body-only: set `+87 = 19`, Info #1 subtype mask `0x80000` (no enemy subtype 0);
   - ActiveCollider-only: set `+87 = 1` (fireball body path), keep Info #1 mask `0x80001`.

---

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

**Resolution:** build new 11-entry tables in an unreferenced `0xA0`-byte zero-padding block
inside `.rodata`, at `0x60B493A8..0x60B49448`. The block sits between two pitch/sound tables, is
not covered by any symbol, has no IDA xrefs, no pointer hits, and no `.rel.dyn` entries.
Redirect the five `add pc, rX` literal-pool constants to the new bases. Modes 0–9 keep their
original values.

New tables:

```
height @ 0x60B493A8: 16.0, 31.0, 31.0, 6.0, 31.0, 31.0, 31.0, 31.0, 31.0, 31.0, 31.0
body   @ 0x60B493D8: 1, 0, 0, 1, 2, 3, 0, 4, 4, 5, 0
```

Redirect patches:

| VA | file offset | original | new | effective base |
|---|---|---|---|---|
| `0x60B493A8` | `0x00B49194` | zero padding | 11-float height table | `0x60B493A8` |
| `0x60B493D8` | `0x00B491C4` | zero padding | 11-dword body table | `0x60B493D8` |
| `0x60795FF0` | `0x0079644C` | `78 65 37 00` | `64 36 3B 00` | height, `sub_60795CDC` |
| `0x607960F8` | `0x00796554` | `A4 62 37 00` | `90 33 3B 00` | height, `sub_60796004` |
| `0x6078C58C` | `0x0078C9E8` | `F0 FC 37 00` | `98 CE 3B 00` | body, `sub_6078C444` |
| `0x6078E604` | `0x0078EA60` | `70 DC 37 00` | `18 AE 3B 00` | body, `sub_6078E5A8` |
| `0x6078E7E8` | `0x0078EC44` | `00 DC 37 00` | `A8 AD 3B 00` | body, `sub_6078E608` |

Each literal is a plain relative constant consumed by `add pc, rX`; it is not relocated, so
`new_literal = new_base - (address_of_add + 8)`. The patched ELF verifies all five effective
addresses (see §7.7). The tall-type slot is patched directly:

| VA | file offset | original | new | purpose |
|---|---|---|---|---|
| `0x60B0C328` | `0x00B0C114` | `00 00 00 00` | `02 00 00 00` | tall type[10] = 2 (Normal) |

> **Why not the old index-10 slots?** `0x60B0C2E4` is the first dword of the integer table used by
> `sub_60797598` and `0x60B0C258` is the first dword of the animation/ID table used by
> `sub_60792394`. Moving the whole height/body tables into the zero-padding block keeps both
> adjacent tables intact. The region is inside the `.rodata` section, so it survives NSP/NSO
> repacking.

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

**A. Mode-10 patches (11 words + 3 tables + 6 literals)**

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
| 12 | `0x60B493A8` | `0x00B49194` | zero padding | height table (11 floats) | height[10] = 31.0 |
| 13 | `0x60B493D8` | `0x00B491C4` | zero padding | body table (11 dwords) | body[10] = 0 (Normal) |
| 14 | `0x60795FF0` | `0x0079644C` | `78 65 37 00` | `64 36 3B 00` | height literal |
| 15 | `0x607960F8` | `0x00796554` | `A4 62 37 00` | `90 33 3B 00` | height literal |
| 16 | `0x6078C58C` | `0x0078C9E8` | `F0 FC 37 00` | `98 CE 3B 00` | body literal |
| 17 | `0x6078E604` | `0x0078EA60` | `70 DC 37 00` | `18 AE 3B 00` | body literal |
| 18 | `0x6078E7E8` | `0x0078EC44` | `00 DC 37 00` | `A8 AD 3B 00` | body literal |
| 19 | `0x60B49404` | `0x00B491F0` | zero padding | ride/balloon offset-y table (11 floats) | ride[10] = -4.0 |
| 20 | `0x607982D8` | `0x00798734` | `28 41 37 00` | `E0 11 3B 00` | ride/balloon offset-y literal, `sub_60798204` |

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
- **Balloon/ride offset — applied via relocation.** Two tables are involved: `flt_60B0C34C`
  (`sub_60798204`, 4-byte stride, indexed by `mMode`: `*(a2+4) += flt[mMode]` when riding) and a
  `{dx,dy}` Vec2 table **baseed at `0x60B0C374`** (`sub_6079A890`, 8-byte stride, indexed by
  `getTallType`: Mini `{0.0,13.0}`, Small `{2.0,17.0}`, Normal `{2.0,30.0}`). The planned in-place
  write of `-4.0` at `0x60B0C374` would have silently changed the **Mini dx (0.0 → -4.0)** because
  that word is the first picture-aligned dword of the Vec2 table. The applied fix is a relocated
  11-entry ride table at `0x60B49404` (values `0.0,-4.0,-4.0,4.0,-5.0,-2.0,-4.0,-4.0,-4.0,0.0`
  copied verbatim + index 10 = `-4.0`, matching Normal's `flt[1]`) with the single literal at
  `0x607982D8` redirected. Mode 10 otherwise reads index 10 = 0.0 safely (no OOB), so this is
  cosmetic only.
- **Runtime-unproven items:** direction bit 4 from `player+0x2F10`; double-hit risk between the
  body CollisionMgr and Info #1 ActiveCollider; Hammer spawn velocity/position inherited from
  the fireball path; model/animation stability while switching to mode 10. These require an
  actual patched run.

### 7.7 Build and verification

- Source: `convertedmain.rebased.elf`, MD5 `f8a2e4c3616b8a99632b8ffe68938c34`.
- Patched copy: `convertedmain.hammer_b.elf`, MD5 `36d93427d294d5274224921c4f759ea1`,
  SHA-256 `dac971d71536c5395c1f0d60393e632b8d8b14d6389f05017dbbcff7a2653858`.
- 111 differing bytes; every difference is accounted for by the table above (no unexpected
  diffs).
- All original byte sequences matched before writing; all new instruction words were decoded
  with Capstone (`mov r2,#10`, `movhi r3,#1`, `cmp rX,#10`, `movw r3,#0x464`).
- The six redirected literals were re-read from the patched file; their effective
  `add pc` targets are `0x60B493A8` (height), `0x60B493D8` (body), `0x60B49404` (ride offset-y).
- Reproducible scripts: `.rea/apply_approach_b.py` (write + diff), `.rea/verify_approach_b.py`
  (original-byte check; update its table rows if re-run), `.rea/check_new_words.py` (Capstone).

## 8. Remaining unknowns and risk notes

- **`vf100` type source.** It is not fully proven whether the type comes from the attacker's
  `+87` (CollisionMgr path) or the ActiveCollider Info[6] (ActiveCollider path). The plan sets
  both to 19. This is intentional; isolate one path if double hits occur.
- **Layer `+86`.** The plan uses 0. The fire build info's byte 32 is 0, and the fireball's
  `+86` is `player+0x56`. If the player's `+0x56` is nonzero, copy it instead.
- **Direction bit.** Bit 4 of the fire param is the low bit of `player+0x2F10`. The fireball
  treats any nonzero nibble as one direction. If `player+0x2F10` can be 2/3, bit 4 alone is
  not a boolean; patch the param construction or use a 3-instruction boolean in a cave.
- **Double hits.** The body CollisionMgr and Info #1 ActiveCollider can both dispatch a hit.
  Test and isolate if the enemy reacts twice.
- **Collision box vs model scale.** `+11840` scales the model; the collision box comes from
  the hammer's fixed box vectors (`0x60AF68D0/DC/E8`) and may not scale with it.
- **Projectile count.** The fire branch's count check uses the player's fireball array
  (`MEMORY[0xC7B420]`); hammers may not be tracked there, so the 6-projectile limit may not
  apply.
- **No in-file code cave.** The text segment has no 64+ byte zero/FF runs; the patch plan
  avoids a cave by repurposing redundant ctor stores. If a future change needs a cave, use a
  mod-loader trampoline or a new executable segment.

---

## 9. Quick reference

### 9.1 Functions

| address | name |
|---|---|
| `0x607AABA0` | `PlayerObject::createFireBall` |
| `0x6013B948` | Fire profile registration (ID 476) |
| `0x6014083C` | Hammer profile registration (ID 759) |
| `0x6013F02C` | Hammer factory |
| `0x6014065C` | Hammer ctor |
| `0x6013FB0C` | Hammer init / onCreate |
| `0x6013FCD4` | `HammerActor_setupModel` |
| `0x601349FC` | Hammer collision callback |
| `0x602A2B8C` | `Enemy::vf100` |
| `0x602A6DF4` | `Enemy::collisionHammer` |
| `0x602A6AB8` | `Enemy::collisionFireball` |
| `0x6014B9E8` | `CollisionMgr_init` |
| `0x60152C18` | `CollisionMgr_vf28` (broad phase) |
| `0x60795CDC` | power-up setter |
| `0x600002A0` | `StageActor::StageActor` |

### 9.2 Data

| address | value / meaning |
|---|---|
| `0x60C61BE4` | Fire runtime profile pointer cell → `0x00AF3498` |
| `0x00AF3498` | Fire profile ID cell = 476 |
| `0x00AF3904` | Hammer profile ID cell = 759 |
| `0x60AF1EC0` | hammer direction speed table `[+2.0, -2.0]` |
| `0x60BD31F0` | Hammer ActiveCollider Info #1 |
| `0x60AF6604` | Hammer ActiveCollider Info #2 |
| `0x60AF68D0` | hammer body box vectors |
| `0x60B0C2BC` | power-up height table (10 floats; index 10 overlaps `dword_60B0C2E4[]`) |
| `0x60B0C230` | body-ID table (10 dwords; index 10 overlaps `dword_60B0C258[]`) |
| `0x60B0C300` | tall-type table (10 dwords; index 10 is padding) |
| `0x60B493A8` | new 11-entry height table (Approach B; `.rodata` zero-padding block) |
| `0x60B493D8` | new 11-entry body-ID table (Approach B; same block) |
| `0x60B49404` | new 11-entry ride/balloon offset-y table (Approach B; same block) |
| `0x60B0C34C` | ride/balloon offset-y table, 4-stride, indexed by `mMode` (`sub_60798204`) |
| `0x60B0C374` | `{dx,dy}` Vec2 table, 8-stride, indexed by `getTallType` (`sub_6079A890`) — shares its first dword with the old ride[10] slot |
| `0x60CA6BB8` | power-up model table (20 entries) |
| `0x60C24D08` | player vtable entry containing `0x60795CDC` |

### 9.3 Constants

```
Fire profile ID     = 476
Ice profile ID      = 474
Hammer profile ID   = 759
Fire power-up value = 2
Ice power-up values  = 5, 6
Player+w528          = power-up state
Player+54            = player index
Player+56            = collision layer
Player+57            = collision mask/type
Player+w2F10         = facing/variant
Hammer+50            = direction
Hammer+54            = player index (byte)
Hammer+56            = collision layer
Hammer+57            = attack type
Hammer+A0            = X speed (+/-2.0)
Hammer+2E40          = model scale denominator
Hammer+533           = actor category (0 = projectile)
```

---

*Report generated from the live IDA database; decompiled artifacts are in `.rea/`.*

## 10. Block family deep dive: ?/brick contents-to-item pipeline (new)

This section documents the complete chain from a block's stored contents to the
power-up item granted to the player, as reverse engineered at instruction level
from `convertedmain.rebased.elf`. Curated annotated source:
`.rea/decomp/QB_pipeline_summary.c`; raw decompiles of every referenced function
are alongside it (`ITEM_gate_60465E4C.c`, `ITEM_give_helper_60463998.c`,
`BLOCK_init_605635AC.c`, `BLOCK_populate_604663F4.c`, `BLOCK_gate_wrap_60466328.c`, ...).

### 10.1 The lookup chain

```
tile contents (actor+24, 5 bits)
  -> action code   = dword_60B04164[contents]          (.rodata, codes 0..25)
  -> itemId        = dword_60B0267C[code]              (11 entries, ids 0..10; ids >10 clamp to 0)
  -> Profile cell  = dword_60C9D3F4[4*(itemId+1)]      (one-time fill in sub_604663F4)
  -> Profile::get  -> item class factory (see 10.3)
```

Only the code-7 spawner (`sub_605B5BDC` case 0 -> `sub_605B5A3C`) reaches the
`dword_60B0267C` lookup. A side code-7 branch in `sub_605B6238` (player present,
block-type 0) calls `sub_605B5FA8` directly, bypassing the class gate.

### 10.2 Item-id to power-up-mode map (behaviorally verified)

Every item class grants its power-up through the shared helper
`sub_60463998(itemActor, &out, mode, contact)`; the mode is the player
power-up value. The 14 grant handlers were located by scanning all `bl 60463998`
sites, and each item's grant handler was pinned to its class by the
`.data/.relro` cell that references it (always **vtable cell 56**, i.e.
vtableVA+0xE0):

| itemId | profile | factory | grant fn | mode | r3 | identity (icon-table evidence) |
|-------:|--------:|---------|----------|-----:|---:|--------------------------------|
| 0 | 591 | 0x60467808 | 0x60467F48 | 1 | 1 | Mushroom (I_kinoko) |
| 1 | 592 | 0x6045D76C | 0x6045DDC0 | 2 | 1 | Fire Flower (I_fireflower) |
| 2 | 854 | 0x6046EDA0 | 0x6046F8FC | 1 | 0 | LightMask glow class, silent grant |
| 3 | 593 | 0x60468284 | 0x60468AD8 | 3 | 1 | Propeller suit (I_propeller) |
| 4 | 594 | 0x6045E2E0 | 0x6045E938 | 6 | 1 | Star (I_star) |
| 5 | 595 | 0x6046BA10 | 0x6046C364 | 4 | 1 | Penguin suit (I_penguin) |
| 6 | 596 | 0x6046AEF0 | 0x6046B6BC | 5 | 1 | Mini mushroom (kinoko icon slot 5) |
| 7 | 597 | 0x604698EC | 0x6046A078 | 1 | 0 | Silent no-suit (1UP-ish) |
| 8 | 598 | 0x60468EBC | 0x604695B0 | 7 | 1 | Ice Flower (I_iceflower) |
| 9 | 599 | 0x6046FEC8 | 0x60470430 | 1 | 0 | Silent no-suit (1UP-ish) |
| 10 | 601 | 0x6046A538 | 0x6046AB90 | 9 | 1 | Yoshi egg (I_yoshichibi_egg) |

Supporting evidence: the icon-name mapper `sub_6045CC68` fills two identical
12-slot tables at `0x60C9D040` / `0x60C9D0A0` in the order
`I_kinoko, I_fireflower, I_propeller, I_penguin, I_kinoko, I_star,
I_iceflower, I_yoshichibi_egg, I_yoshichibi_egg, I_musasabi, I_kinoko,
I_crown`, consistent with `index = player mMode - 1`. **No base-game item grants
mode 10** (musasabi / flying-squirrel row) - that row exists but is only reached
through Approach B, where our patched fire flower grants mode 10.

Helper semantics (`sub_60463998`): target player resolved from the item's
+6208 player-index field; the same player RTTI check as the block gate;
`contact==1` -> `sub_607A2820(player, mode)==1` rejects (item remains),
otherwise the player virtual at +1376 (`canChangeTo`) decides:
grant (`out=1`, `sub_607A27A8` applies the change) or already-have feedback
(`out=2`, `SE_PLY_GET_ITEM_AGAIN` + score popup). `contact==0` is the silent
path used by ids 2/7/9.

### 10.3 The item-eligibility gate and the Approach B hazard (`sub_60465E4C`)

Action codes in mask `0x24004E0` = {5, 6, 7, 10, 22, 25} require a target
player whose `mMode-1` passes a bit-mask test:

```
ldr  r0,[r6,#0x528]   ; player mMode
sub  r0,r0,#1
cmp  r0,#8            ; <= 8 allowed
bhi  reject
movw r1,#0x1FB        ; mode-bit mask {1,2,4,5,6,7,8,9}  (mMode 3 excluded!)
tst  r2,r1,lsr r0
beq  reject
```

Two copies of this sequence exist in the function (two call paths):

| site | instruction | VA | current | required for hammer (mMode 10) |
|------|-------------|----|---------|-------------------------------|
| A | `cmp r0,#8` | `0x60465F34` | `#8` | `#9` |
| A | `movw r1,#0x1FB` | `0x60465F40` | `0x1FB` | `0x3FB` |
| B | `cmp r0,#8` | `0x60466000` | `#8` | `#9` |
| B | `movw r1,#0x1FB` | `0x6046600C` | `0x1FB` | `0x3FB` |

With sense-code 7 the mask bit for our hammer mode (`mMode-1 == 9`) bit 9 of
`0x1FB` is **clear**, so a mode-10 player currently receives nothing from an
item block - this is a regression of Approach B that must be fixed before
runtime testing. **APPLIED 2026-10-21** to the patched copy only
(`convertedmain.hammer_b.elf`, new MD5 `1134cf5f37d16a55f150fadebc3dfb87`;
original `convertedmain.rebased.elf` untouched). Note: the mask addend is
bit 9 = 0x200 (0x1FB -> 0x3FB); an earlier 0x5FB proposal was wrong (it sets
bit 10) and was caught before shipping.

After the gate passes, `sub_60466328` calls `sub_604663F4` which spawns the item
(`Profile::get(dword_60C9D3F4[4*(itemId+1)])`).

### 10.4 Block-class field map and identity status

Instance offsets (decimal): contents `+24` (5-bit), code `+6856`, param
`+6860`, empty-flag `+6876`, **gate-bypass `+6877`**, bumpable `+7376`,
block-type `+7368`, shape id `+7296`, contents-LUT `+7300`, build param
`+7304`, tile-height `+7400`. Uses `sub_605635AC(a1, a2, a3)` = shared init
reloading `+6856 = dword_60B04164[getContents()]`.

All 29 block-family vtables keep the base break functions (cells 94/95,
`0x60563ED8`/`0x60563FC0`) except **t3 = BrickBlockHuge**, which overrides them
(`0x60566100`/`0x60566228`) - breaking is otherwise driven by the generic
block-type path, not per-class overrides.

Evidence-graded identities:

| class | evidence | tentative identity |
|-------|----------|--------------------|
| t3 | huge collider types 10/11, overrides break cells | BrickBlockHuge (confident) |
| t17 | block-type 1, collider 8 at +6120, code-21 empty handling (+6876), code-13 flag (+6896), contents LUT +7300, param +6852, single/tall profile split (`MEMORY[0xAF31BC]`) | item tile block cluster (?/brick/coin) - candidate question block |
| t18-t21 | same family markers (6856/6876/7368), variant param handling | tile block variants (brick/coin siblings) |
| t10/t11 | `+7296=49`, collider 7, tile-contents parse helpers `sub_6056EAA4` / `sub_605736E0` | contents-parser subclasses |
| t13 | multi-tile (`+7400`), `sub_605635AC(a1,0,0)` | multi-tile coin block |
| t23/t24 | block-type 0, `+6872 = 1/2`, collider 7, t24 calls `checkLiquidCollisions` | liquid/ambient variants |
| t27 | **only** class setting `+6877 = 1` (item-gate bypass); uses own contents loader `sub_60563BB8(a1,0)` | special spawn-always block (question-block candidate B) |

Definitive tile-to-class naming would require decoding
`sInit_SpriteToProfileTable` (0x60014724, 13 KB relocated-pointer fill); the
profile-id cells the registrations read (`0x60AF2E..-0x60AF3xxx` `.rodata`
region) are elements of one contiguous id array (228..., 591-601, 854), which
matches the id-cell reading convention `Profile::Profile(..., idCell, ...)`.

### 10.5 Remaining open items

- Verify the applied 4-instruction mode-10 gate patch at runtime (emulator).
- Disambiguation of t17-cluster class names (question vs brick vs coin brick) via
  `sInit_SpriteToProfileTable` decode, or behavioral runtime observation.
- item2 (profile 854, LightMask 6992-byte class): grant is `mode 1, r3=0`; full
  role (likely star variant orbubble-ambient item) not conclusively named.
- The three mode-4 grant handlers (`0x6046C364` vtable cell 56 of item5,
  plus `0x6046BB70` countdown variant and `0x6046CE38` floating variant) suggest
  penguin suit has state-dependent grant paths; the far reference of
  `0x6046BB70` at `0x60C6C794` (outside the item vtable block) is unexplained.


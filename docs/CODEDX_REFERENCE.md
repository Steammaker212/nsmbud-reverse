# codedx — Cross-Validation Reference

Source: [RicBent/codedx](https://github.com/RicBent/codedx) (GPL-3.0)

**This is the single most valuable reference found so far.** `codedx` is a code
injection framework built *specifically for NSMBU Deluxe on Switch* — the same
target as this repo, not the Wii U original. It ships a 414-symbol map, real
class headers with field names and offsets, and a 911-entry profile table with
the game's own actor names.

---

## 1. Proof that it targets the same binary

`codedx/main.sym` lists RVAs. Adding image base `0x60000000` gives IDA VAs.
Ten spot checks against this repo's IDB:

| RVA + base | codedx symbol | our IDB | match |
|---|---|---|---|
| `0x602A6DF4` | `Enemy::collisionHammer` | `_ZN5Enemy15collisionHammerEP14ActiveColliderS1_` | yes |
| `0x6014B9E8` | `CollisionMgr::init` | `CollisionMgr_init` | yes |
| `0x602A1A8C` | `Enemy::Enemy` | `_ZN5EnemyC2EPK14ActorBuildInfo` | yes |
| `0x60158DE8` | `ActiveCollider::init` | `_ZN14ActiveCollider4initEP10StageActorPKNS_4InfoEj` | yes |
| `0x60430090` | `ResArchive::getModel` | `Resource_getModel2` | yes |
| `0x604488DC` | `SkeletalAnimation::play` | `SkeletalAnim_play` | yes |
| `0x6043B548` | `ResArchiveMgr::get` | `LoadResource` | yes |
| `0x60002C54` | `Actor::Actor` | `_ZN5ActorC1EPK14ActorBuildInfo` | yes |
| `0x60008138` | `ActorMgr::create` | `_ZN8ActorMgr6createEP14ActorBuildInfoj` | yes |
| `0x60818198` | `StateMgr::getCurrentState` | `_ZN8StateMgr15getCurrentStateEv` | yes |

Full sweep of all 414 symbols:

```
MATCH (name already agrees):  282
ALIAS (same function, minor   4
       spelling diff)
MISSING (IDB has sub_):       26
CONFLICT (different name):    102   -- see §5, most are abbreviations
no function at that VA:         0   <-- every symbol resolves
```

**Zero symbols failed to resolve.** This is the same game build.

---

## 2. Authoritative class layouts

These are the real field names, replacing the offsets we had been inferring.
Reproduced here for reference; full text in `codedx/src/include/`.

### Actor (base)

```
+04  sead::Heap* heap
+08  u32 id
+0C  Profile* profile
+13  bool isDeleted
+14  u32 settings1        <- the spawn parameter word
+18  u32 settings2
+1C  u8 movementId
+1D  u8 linkId
+1E  u8 initStateFlag
+20  sead::ListNode _20
+28  u32 childCount
+38  Actor* parent
```

### StageActor : Actor

```
+50  u32 direction              Inited to 0
+54  s8  playerId               Inited to -1
+55  s8  _55                    Inited to -1
+56  u8  _56                    Inited to buildInfo->_20
+57  u8  _57                    Inited to 1
+6C  Vec3 position
+78  Vec3 speed
+84  Vec3 maxSpeed
+90  Vec3 scale
+9C  Vec3i rotation
+BC  ActiveCollider aCollider
+214 u8 zoneId
+215 u8 type        0=StageActor 1=Player 2=Yoshi 3=Enemy 4=Unknown
+21B u8 eventId1
+21C u8 eventId2
+23C Vec3 effectOffset
+248 Vec3 _248     Inited to position
```

### CollisionActor : StageActor

```
+284 u32 _284
+288 ActorCollisionMgr collisionMgr
+1778 Vec3* _1778    Inited to &position
+1784 f32 _1784      Inited to 1.0
+1798 f32 _1798      Inited to 1.5
+179C f32 _179C      Inited to -1.5
+17A0 f32 _17A0      Inited to -0.0625
```

### MultiStateActor : CollisionActor

```
+17B0 StateWrapper<MultiStateActor> states
+17D4 u32 _17D4
```

### Enemy : MultiStateActor

```
+17D8 f32 _17D8    Inited to 1.5
+17DC f32 _17DC    Inited to 3.9
+17E0 f32 _17E0    Inited to -4.0
+1808 EnemyFreezeMgr freezeMgr
+1878 Enemy* _1878         Inited to this
+1894 u32 _1894
+189A u8 _189A             Inited to 8     <-- class ends here
```

**`sizeof(Enemy) == 0x189A` (6298).** Consistent with the Hammer actor's
11,912-byte allocation and the Pukupuku family's 11,968-byte allocation.

### ActiveCollider

```
+10  List::Node activeNode
+1C  List::Node createNode
+28  List::Node list3Node
+34  List::Node list4Node
+40  StageActor* owner
+74  Info info
+A0  f32 trapezoidTopLeft/Right/BottomLeft/BottomRight
```

`Info` layout:

```
+00 Vec2 distToCenter
+08 Vec2 distToEdge
+10 u32 shape      0=Rectangle 1=Circle 2=TrapezoidVert 3=TrapezoidHoriz
+28 Callback callback
```

### CollisionMgr

```
+894  StageActor* owner
+89C  Vec3* position
+8B0  u32 output
+934  Sensor rightSensor
+940  Sensor leftSensor
+94C  Sensor aboveSensor
+958  Sensor belowSensor
```

Flags: `OnGround 1<<0`, `OnSlope 1<<1`, `OnSemiSolid 1<<4`,
`CollidedRight 1<<18`, `CollidedLeft 1<<19`.

### Profile

```
+04  Actor* (*buildFunc)(const ActorBuildInfo*)
+08  u32 id
+0C  const ActorInfo* actorInfo
+10  u8 hasResourcesLoaded
+14  u32 flags
```

---

## 3. Profile IDs — authoritative names

`codedx/doc/profiles.csv` has **911 rows (IDs 0-910)** with the game's own
Japanese names plus an English column. This replaces every profile-name guess
made earlier.

### The Cheep Cheep family — confirmed

| ID | Japanese | English |
|---|---|---|
| 530 | プクプク | Pukpuk |
| 531 | グループプクプク | Group puk puk |
| 532 | プクプク（中） | Pukpuk (middle) |
| 533 | グループプクプク（中） | Group (middle) |
| 534 | サーチプクプク | Search puk puk |
| 535 | サーチプクプク（中） | Search (middle) |
| 536 | にげプクプク | Nige-puk-puk (fleeing) |
| 537 | にげプクプク（中） | Nige (middle) |
| 538 | メカプクプク | Mekakupupuk (mecha) |
| 539 | トゲプク | Togepuku (spiny) |
| 540 | 飛びプク | Jumping |
| 541 | 飛びメカプク | Flying mechanism |
| 542 | プクプク(湧き出し) | Pukpuk (spawning) |
| 543 | サーチプクプク(湧き出し) | Search (spawning) |
| 544 | にげプクプク(湧き出し) | Nige (spawning) |
| 545 | 飛びプク(湧き出し) | Jump (spawning) |
| 546 | 飛びメカプク(湧き出し) | Jump Mecha (spawning) |
| 547 | プクプク(フォーメーション) | Pukpuk (formation) |

**Correction to earlier work:** ID 887 is **説明キノピオ / "Explanation
Kinopio"** (a Toad explainer NPC), *not* part of the Cheep Cheep family. The
earlier Wii U-profile-alignment doc listed 887 alongside 530-547; that was
wrong.

### Profile constructors for the family

| IDs | ctor RVA | ctor VA | note |
|---|---|---|---|
| 530, 532, 534, 538 | `0x00370B50` | `0x60370B50` | shared 0x1C stub |
| 539 | `0x00375824` | `0x60375824` | allocates 11,968 then `sub_603728E8` |
| 540 | `0x003B3FBC` | `0x603B3FBC` | 0x1D0 |

The 539 factory confirms the allocation size:

```c
int sub_60375824(int buildInfo) {
    void* p = operator new(11968);
    int r = sub_603728E8(p, buildInfo);   // real ctor
    *(u32*)r          = 12521452;         // 0x00BF0BEC  vtable
    *(u32*)(r+11956)  = 0;
    *(u32*)(r+11960)  = 0;
    *(u8* )(r+11964)  = 0;
    return r;
}
```

So any derived class with its own fields has room up to ~11,960 bytes.

### Other IDs relevant to the Hammer work

| ID | Name |
|---|---|
| 474 | Ice ball |
| 476 | Player fireball |
| 759 | Hammer |

`Profile::NUM_PROFILES_ORIGINAL = 914`, so the original table covers 0-913.

---

## 4. Custom profile system (directly relevant to a custom actor)

`codedx` reimplements the profile system to allow *arbitrary* new actors. The
mechanism, from `include/profile.h` and `hooks/profiles.hks`:

```c
// parallel arrays sized NUM_PROFILES_ORIGINAL (914) + NUM_PROFILES_CUSTOM
static Profile* profilesCustom[];
static s16      prioritiesCustom[];
static u8       hasResourcesCustom[];
static u8       resourceCountCustom[];
static const sead::SafeString* resourceListsCustom[];
```

Six `Profile` methods are hooked with a type-`b` (branch) patch:

| RVA | function |
|---|---|
| `0x00017F6C` | `Profile::Profile(...)` |
| `0x000182A0` | `Profile::get` |
| `0x0001839C` | `Profile::getPriority` |
| `0x000183C8` | `Profile::getHasResources` |
| `0x000183F0` | `Profile::getResourceCount` |
| `0x00020FF0` | `Profile::getResourceList` |

Plus six sprite-count guards patched from `cmp r1, #0x10000`
(RVAs `0x46A0`, `0x6250`, `0x642C`, `0x65A4`, `0x66FC`, `0x6C34`), and the
original sprite-to-profile initialiser disabled by writing `bx lr` at
`0x00014724`.

Resource declaration is a macro:

```c
PROFILE_RESOURCES(ProfileId::MyActor, "Model/my_actor", "Effect/my_fx");
```

**This is the sanctioned route for adding a genuinely new profile** — far
cleaner than the Approach B constant-grafting used for the Hammer power-up.
Approach B stays valid because it reuses an existing power-up slot; a new
*actor* should use this.

---

## 5. Symbol conflicts — almost all are abbreviations

Of 102 "conflicts", the overwhelming majority are the IDB using a short name
and codedx using the full C++ signature, or vice versa. Examples that agree in
meaning:

| VA | codedx | our IDB |
|---|---|---|
| `0x6043B548` | `ResArchiveMgr::get` | `LoadResource` |
| `0x60430090` | `ResArchive::getModel` | `Resource_getModel2` |
| `0x604488DC` | `SkeletalAnimation::play` | `SkeletalAnim_play` |
| `0x604510E4` | `TextureAnimation::play` | `TexAnim_play` |
| `0x60445F80` | `ShaderAnimation::play` | `ShuAnim_play` |
| `0x60236DA0` | `Effect::spawn` | `EffectData_create` |
| `0x602A7164` | `Enemy::killPlayerJump` | `Enemy_killWithState` |
| `0x602A5AE8` | `Enemy::killPlayerSpin` | `Enemy_killSpin` |
| `0x602A66F8` | `Enemy::killYoshiStomp` | `Enemy_killYoshi` |
| `0x6071B2D4` | `TilesetMgr::getTileLayer` | `TilesetManager_getTileLayer` |

Two real corrections, where our IDB name is misleading:

1. **`0x60000BEC` / `0x60000C88`** — our IDB calls these
   `StageActor::directionToPlayerX` / `...Y`. codedx says **`H` (horizontal)
   and `V` (vertical)**, and the signatures confirm it:
   `directionToPlayerH(const Vec3&)` returns `u8`,
   `directionToPlayerV(const Vec3&)` returns `u8`. The `X`/`Y` reading is wrong.

2. **Typo in our IDB:** `befreDraw` should be `beforeDraw`
   (`0x60002F4C`, `0x60000850`).

There are also several IDB typos worth fixing: `ActiveColldierMgr_*` (missing
`i`), and `_ZN5Enemy4vfD0Ev` at `0x602A9358` is actually **`Enemy::freeze`**.

---

## 6. Unresolved layout conflict — needs care

`Pukupuku::setupModel` at `0x60203138` writes:

```
0x602031fc  STR R7, [R4,#0x174]     ; ModelWrapper*
0x60203188  STR R5, [R4,#0x178]     ; ResArchive*
```

where `R4 = R0 = this`. **These offsets are inside `aCollider`** if codedx's
`StageActor` layout is correct: `aCollider` starts at `0xBC`, and codedx
declares `ActiveCollider` as `// size: 0x130`, which would span `0xBC..0x1EC`.

That cannot be right for a class that also has `Enemy` fields up to `0x189A`.

Two possible readings:

- **activecollider.h is wrong** — `_unkB0[0x130-0xB0]` is a guess. If the
  collider really ends at `0xB8` (i.e. `0xBC + 0xB8 = 0x174`), then `0x174` is
  exactly where a derived class's first member would land. This is a clean fit,
  but then `MultiStateActor::states` at `0x17B0` would place `Pukupuku`'s own
  members between `0x174` and `0x17B0`, which is plausible.
- **`Pukupuku` does not derive from `Enemy`** — it may derive from
  `MultiStateActor` directly, inheriting `states` at `0x17B0` without `Enemy`'s
  freeze manager. Under this reading `0x174`/`0x178` are `Pukupuku`'s own
  fields and `0x189C` (the toge model slot, confirmed in disassembly at
  `0x60375ed8 MOVW R0,#0x189C`) would be... past `Enemy`'s end. So this
  reading has its own problem.

**Status: unresolved.** Do not treat `+0x174`/`+0x178` in
`decompiled/annotated/pukupuku.cpp` as reconciled with codedx's headers. The
disassembly is ground truth for this binary; codedx's `ActiveCollider` size
comment is the suspect value. Resolving it needs a vtable/RTTI walk rather than
more of this guesswork.

Everything else in `pukupuku.cpp` is *confirmed* by codedx:

| offset | our annotation | codedx |
|---|---|---|
| `+0x50` | direction | `StageActor::direction` |
| `+0x54` | player index | `StageActor::playerId` |
| `+0xBC` | ActiveCollider | `StageActor::aCollider` |
| `+0x1F4..+0x200` | f32 tuning block | `StageActor::_1F4.._200` |
| `+0x1808` | freeze flags | `Enemy::freezeMgr` |
| `+0x189C` | model slot | past `Enemy` end, so a derived member |

---

## 7. What is NOT available from the ELF

`Profile::resourceListsOriginal` at RVA `0x00BC05F0` holds **unrelocated
runtime pointers**: each cell resolves to `0x00C7DCxx`, which is in `.bss` and
absent from the file. The profile→resource-archive map is built at runtime, so
it cannot be extracted statically from the ELF.

The `hasResources` (RVA `0x00AF4288`) and `resourceCount` (RVA `0x00AF461A`)
byte tables *are* present and readable, as are `priorities` (RVA `0x00AF3B64`,
`s16[914]`). For the Cheep Cheep family all 18 entries report
`hasResources=1, resourceCount=1`, with priorities 107-118 for 530-541 and
negative values for the spawning variants 542-547.

---

## 8. Tooling worth reusing

`codedx/tools/`:

| file | purpose |
|---|---|
| `nso.py` | NSO0 parse/build |
| `elf2nso.py` | ELF to NSO repack |
| `arm.py`, `disarm.py` | ARM instruction assemble/disassemble |
| `hooks_to_ips.py` | turn hook definitions into IPS patches |
| `symbols.py`, `symbol_relocate.py` | symbol map handling |
| `make_ida_binary.py` | build an IDA-loadable image from NSO |

`codedx/hooks/*.hks` documents a hook format with `type: b` (branch) and
`type: instr` (instruction replace) — directly comparable to our patch tables.

---

## 9. Licensing

`codedx` is **GPL-3.0**. Do not copy its source into this repo. Everything
above is either factual observation (addresses, offsets, names) or short
quoted reference, which is fine. If any of its code is ever reused, this repo
must become GPL-3.0 too, or that code must be kept as a separate linked
component. Recorded here so the decision is not lost.

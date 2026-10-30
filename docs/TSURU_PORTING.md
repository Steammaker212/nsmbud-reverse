# Porting a Tsuru actor to NSMBU Deluxe

[Tsuru](https://github.com/Zenith-Team/Tsuru) (Zenith Team, MPL-2.0) is a mod
framework for the Wii U NSMBU. Its actors port to Deluxe with three tools from
this repo:

- `source/include/modbase/tsuru.h`: the porting kit, for the calls Deluxe
  makes differently.
- codedx's headers: the same classes as Tsuru's, mostly under other names
  (table below).
- `tools/wiiu2dx`: the actor's Wii U model, converted to Deluxe.

The reference port is [`source/code/sprites/cold_fuzzy.cpp`](../source/code/sprites/cold_fuzzy.cpp).
Put it side by side with Tsuru's `src/actors/coldfuzzy.cpp`: every kind of
change a port makes is in there. Who ports what is in the shared plan doc.

## Recipe

1. **Model.** Convert the actor's archive with the Deluxe actor it resembles
   as the template (same skeleton and animations if possible), and record the
   command in the port's header comment:
   `py -3 scripts/models/wiiu2dx.py --wiiu <Common/actor/x.szs> --template <deluxe actor> --name <x> --romfs <romfs> --out <SD>/atmosphere/contents/0100EA80032EA000/romfs/Model`
   ([docs/WIIU_MODELS.md](WIIU_MODELS.md)). Templates live in `romfs/Model`
   or inside `romfs/Pack/*.pack`; the script searches both. Models are never
   committed.
2. **Files.** `source/code/sprites/<name>.cpp` (code file names must be unique
   across `source/code`), plus `source/hooks/...hks` and `source/symbols/...sym`
   if it patches the game. Add its profile after the last one in
   `source/include/actors/profileid.h` and its sprite at the end of the table in
   `source/code/engine/custom_profiles.cpp`.
3. **Code.** Copy the Tsuru file, put the MPL-2.0 header on top naming the
   Tsuru file it came from, and apply the name map below.
4. **Build** with sweet-dx (`compile.bat` builds and installs to Ryujinx), check
   the link (no zero GOT words besides the `R_ARM_RELATIVE` one, no `bl 0`, no
   `@plt` calls: undefined symbols link silently as 0), test in Ryujinx, and add
   the sprite to `yaz0moto/patches/steam-dx` (spritedata, category, a 128x128
   icon, the README row).

## Name map

| Tsuru (Wii U) | Deluxe (codedx / kit) |
|---|---|
| `REGISTER_PROFILE(Cls, ProfileID::X)` | `const Profile xProfile(&Cls::build, ProfileId::X, "X", nullptr, 0);` + `static Actor* build(const ActorBuildInfo*)` returning `new Cls(buildInfo)`; the profile in `profileid.h` and its sprite in `custom_profiles.cpp` |
| `PROFILE_RESOURCES(id, Profile::LoadResourcesAt::Course, "a", "b")` | `PROFILE_RESOURCES(ProfileId::X, "a", "b")` |
| `SEAD_RTTI_OVERRIDE(...)`, `virtual ~Cls() { }` | leave out |
| `HitboxCollider`, `hcSelf` / `hcOther` | `ActiveCollider`, `acSelf` / `acOther` |
| `HitboxCollider::Info { Vector2f, Vector2f, Shape::Rectangle, a, b, c, d, e, cb }` | `ActiveCollider::Info { {x, y}, {w, h}, 0, a, b, c, d, e, cb }`: same fields; shapes 0 rectangle, 1 circle, 2/3 trapezoid. `a` is the collider **kind**: Tsuru enemies use 5, Deluxe enemies 3 (the Goomba, 0x60BED0A4); the player's hammer (kind 3, vs-kind 0x824F) never meets kind 5, so ported enemies take **3** |
| `this->hitboxCollider.init(this, &info)` | `aCollider.init(this, &info, 0)` |
| `addHitboxColliders()` / `removeHitboxColliders()` | `addActiveColliders()` / `removeActiveColliders()` |
| `eventID1`, `eventID2`, `movementID` | `eventId1`, `eventId2`, `movementId` |
| `sead::Vector3f`, `sead::Vector2f` | `Vec3`, `Vec2` |
| `ModelWrapper::create(arch, mdl, n)` | the same, or `tsuru::createModel(arch, mdl, n)` |
| `model->playSklAnim(name)` + `loopSklAnims(b)` | `tsuru::playSklAnim(model, name, b)` |
| `mtx.makeRTIdx(rotation, position)`; `setMtx`; `setScale`; `updateAnimations`; `updateModel` | `tsuru::placeModel(model, this)` |
| `model->draw()` | `tsuru::drawModel(model)` |
| `player->trySpecialDamage(src, DamageType::Ice)` | `tsuru::damagePlayer(player, src, tsuru::DamageType::Ice)` |
| `player->doDamage(src, type)` | `tsuru::damagePlayer2(player, src, type)` |
| `Effect::spawn(RP_x, &pos, nullptr, &scale)` | the same; the `effectid.h` number works as is (ledger F0254) |
| `MovementHandler` (`getMaskForMovementType`, `link`, `execute`, `position`) | the same (codedx `movementhandler.h`) |
| `Enemy::collisionCallback`, `collisionPlayer/Star/Fireball/...` | the same names and order in codedx `actor/enemy.h` |
| `Mathf::chase`, `Mathf::deg2idx` | `tsuru::chase`, `tsuru::deg2idx` |
| `this->damagePlayer(hcSelf, hcOther)` (an Enemy hurting the player it touches) | `tsuru::enemyDamagePlayer(this, acSelf, acOther)` (Enemy vtable `+0xC8`, codedx `vfC8`) |
| `processCollision(...)` == `HitType::Collide / NormalJump / MiniJump / SpinJump` | the same call; compare with `tsuru::HitType::Collide` ... (0, 1, 2, 3) |
| `killPlayerJump(player, sead::Vector3f(...), &StateID_X)` | `killPlayerJump(player, Vec2(x, y), &StateID_X)` |
| `ModelWrapper::create(arch, mdl, skl, texPattern, texSrt)` | the same order: codedx calls them `sklAnims`, `texAnims`, `shuAnims` |
| `model->playTexPatternAnim(name)`; `texPatternAnims[0]->frameCtrl.startFrame / speed` | `tsuru::playTexPatternAnim(model, name)`; `model->texAnims[0]->startFrame / speed` |
| `model->playTexSrtAnim(name)` + `texSrtAnims[0]->frameCtrl.shouldLoop(b)` | `tsuru::playTexSrtAnim(model, name, b)` |
| `model->playColorAnim(name)` | `tsuru::playColorAnim(model, name, b)` |
| `DECLARE_STATE` / `CREATE_STATE` / `doStateChange(&Cls::StateID_X)` / `states.execute()` | the same (codedx `actors/states.h`) |
| `states.currentState()->ID == Cls::StateID_X.ID` | `states.currentState() == &StateID_X` |
| `physicsMgr.init(this, &below, &above, &sides)`; `processCollisions()`; `isOnGround()`; `isCollided(dir)` | `collisionMgr.init(...)` (null sensors are fine, 0x6014B9E8); `process()`; the rest the same |
| `this->gravity` | `tsuru::gravity(this)` (StageActor +0x64). Deluxe starts it at 0, where Tsuru's PhysicsActor falls, so walkers set -0.1875 themselves |
| `handlePhysics()` | `handleGravity(); handleSpeed();` |
| `sead::Vector2f d = distanceToPlayer()`; `.length()` | `tsuru::distanceToPlayer(this)`; `.mag()`. The `distanceToPlayer(out)` overload is the same |
| `Direction::directionToRotationList[d]`, `Direction::opposite` | `tsuru::Direction::toRotation[d]`, `tsuru::Direction::opposite` (90-degree turns; walking enemies' 3/4 view is +-45) |
| `sead::Mathu::chase(&u32, ...)`, `moveValueWithOverflowTo`, `Mathf::rad2idx` | `tsuru::chase(&u32, ...)`, `tsuru::moveValueWithOverflowTo`, `tsuru::rad2idx` |
| `offscreenDelete(mask)` | `tsuru::offscreenDelete(this, mask)`: Deluxe's `StageActor::cullCheck` (0x60000CD0) is the same routine |
| `sklAnims[0]->frameCtrl.isDone()` / `.currentFrame` / `.endFrame` | `tsuru::sklAnimDone(model)` / `sklAnimFrame` / `sklAnimEnd` |
| `BlendingModel::create(...)`; `setSklAnim(name, blend)` | `tsuru::createModel(...)`; `tsuru::setSklAnim(model, name, blend, loop)`. It doesn't blend: the anim switches at once |
| `GameAudio::startSoundEmy / startSoundMap(SE_X, pos)` | `tsuru::playSound("SE_X", pos)` |
| `PlatformModel` (`create(type, tiles)`, `update(left, width)`, `draw()`) | `tsuru::PlatformModel`: the kit draws the retail `lift_han_*` `_L/_M/_R` segments itself |
| `QuadraticBezier`, `Easing` (`tsuru/bezier.h`, `tsuru/easing.h`) | `tsuru::QuadraticBezier`, `tsuru::Easing` |
| `ActorBuildInfo b = { 0 }; b.profile = Profile::get(id); ... ActorMgr::instance()->create(b)` | `tsuru::spawnActor(id, position, settings1, eventId1)` |
| `HitboxColliderMgr::instance()->safeAddToCreateList(&c)` / `removeFromActiveList(&c)` | `ActiveColliderMgr::instance->isInActiveList / isInCreateList / addToCreateList / removeFromCreateList / removeFromActiveList` |
| `hitboxCollider.colliderInfo.offset` / `.radius` / `.shape` | `aCollider.info.distToCenter` / `.distToEdge` / `.shape` (the collider keeps its own copy) |
| `PolylineCollider` (+ `PolylineCollider::Info`) | codedx `SolidOnTopCollider`: the same Info and init. Keep the points array in the actor, not on the stack |
| `ZoneRumbleMgr::instance()->rumble(n)` | `AreaRumbleMgr::instance->rumble(n, 1, 0, 0)` (the game's own calls pass 1, 0) |
| `sead::GlobalRandom::instance()->getU32(n)` / `getBool()` | `randU32() % n` / `randU32() & 1` (`nintendo/sead/random.h`) |
| `Profile::Flags::DontRenderOffScreen`, `ActorInfo{ Vector2i x3, ... }` | `1 << 1`; `ActorInfo{ x, y, x, y, x, y, 0, 0, 0, 0, 0 }` (same layout) |
| `ProfileID::DryBones` (648) | 649 on Deluxe (sprite 137 in `spriteToProfileList`). Check other retail IDs the same way |

**Event IDs.** Tsuru's comments call `eventID1 >> 4` "nybble 1". On Deluxe,
`eventId1` is nybbles **3-4** and `eventId2` is nybbles 1-2. The code is the
same; only the spritedata nybbles change.

**Two link pitfalls.** sweet-dx links a shared object, so neither fails the build:

- A cast from float to 64 bits (`(long long)f`) calls libgcc's `__aeabi_f2lz`,
  which isn't linked. The call lands in an empty `.plt` slot and jumps to 0.
  Stay in 32-bit conversions; `tsuru::deg2idx` is written that way.
- A game class whose complete destructor has no address (EffectWrapper: only
  its deleting destructor is known) must not be a by-value member. Hold it as a
  `new`'d pointer instead.

The ported enemies are listed in [TSURU_ENEMIES.md](TSURU_ENEMIES.md), the
blocks and objects in [TSURU_OBJECTS.md](TSURU_OBJECTS.md).

### Stage kit (`modbase/stage_kit.h`)

The helpers the block and object ports share:

| Helper | What it does |
|---|---|
| `ModBase::ActorList<T, N>` | A class's live instances (`add`/`remove` in ctor/dtor, `forEach`, `find`, `first`; skips deleted actors). Replaces Tsuru's ActorMgr walks. |
| `ModBase::parkCollider(c, park, home)` | Moves a collider 100000 units below the level, or back to `home`: "off" without `ColliderMgr::remove`, which isn't mapped. |
| `ModBase::BumpSensor` | A hitbox under a block that fires when a player or Yoshi touches it moving up (12-frame cooldown, `hitPlayer`), plus a 10-frame bump offset for the model. |
| `ModBase::spawnBlockCoin(pos, dir, player)` | The block coin, profile 399, as the game's block dispatcher spawns it. |
| `ModBase::playSoundAt(label, n, pos)` | Plays the sound `n` entries after `label` (Tsuru's numbered note / red-coin sounds). |
| `ModBase::levelPath(id, &count)` | A path's nodes from the area's blocks 12 and 13 (Tsuru's `getPath`/`getPathNodes`); world y = `-node.y`. |
| `ModBase::gSwitchBlockBlue` | The Red-Blue state (not saved). |
| `ModBase::blockItems::spawnContents(block, contents, pos, down, player)` | Spawns a ?-block's contents (custom power-ups included) from any actor; see [TSURU_OBJECTS.md](TSURU_OBJECTS.md#triple-block-contents). |

[`source/code/sprites/biddybud.cpp`](../source/code/sprites/biddybud.cpp)
(sprite 742) is the reference port for states, stomp kills and texture animations.

When something has no row here, look for it in codedx's `include/` first, then
`include/game` (`game/*.h`), then the ledger (`reverse-engineering/FindingsB/ledger.csv`).
Anything engine-side (a class layout, a hook, a new address) goes to us as an
issue, and you move on to the next actor.

## What was checked, and how

| Fact | Evidence |
|---|---|
| Player damage is player vtable `+0x490` (setDamage) and `+0x49C` (setDamage2); damage types keep the Wii U numbers | Deluxe `setBgDamage` 0x6076357C passes 1, 10, 14, 15 exactly like the Wii U function (ledger F0253) |
| Effect IDs are the Wii U ones | Deluxe Lakitu passes 353/354/355 to `EffectData_create` in its water/poison/lava splash handlers, the Wii U `RP_Cmn_WaterSplash_06` / `PoisonSplash_06` / `LavaSplash_06` (F0254) |
| `ActiveCollider::Info` layout equals Tsuru's `HitboxCollider::Info` | field for field, codedx `activecollider.h` vs Tsuru `hitboxcollider.h` |
| Enemy vtable `+0xC8` is Tsuru's `damagePlayer(hcSelf, hcOther)` | Enemy vtable 0x60BE2808 (from `Enemy::Enemy` 0x602A1A8C); slot `+0xC8` = 0x602A20E0 casts `acOther->owner` to a player and calls player `+0x48C(player, acSelf, acOther)`; the default `Enemy::collisionPlayer` (0x602A2D54) is just this call, as on the Wii U |
| `processCollision` returns Tsuru's `HitType` numbers | `BrosBase::collisionPlayer` (0x60264458): 3 calls `killPlayerSpin`, 1 calls `killPlayerJump`, 0 calls `Enemy::collisionPlayer` (damage) |
| `ShaderAnimation::play` (0x445F80) is the Wii U `playColorAnim`; 0x446088 is `playTexSrtAnim`; `TextureAnimation::play` (0x4510E4) is `playTexPatternAnim` | Mario's `MLH_PtoNml` colour anims (Wii U `playColorAnim`) go through 0x445F80 (0x6075B25C). 0x446088 has the same body but reads the archive's anim table 2 instead of 1; the texture-pattern player reads table 3 |
| `startFrame = n; speed = 0` holds a texture-pattern frame (Tsuru's colour trick) | `Animation::update` → 0x604183EC clamps `frame` into [`startFrame`, `endFrame`] before stepping by `speed` |

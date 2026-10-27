# Porting a Tsuru actor to NSMBU Deluxe

[Tsuru](https://github.com/Zenith-Team/Tsuru) (Zenith Team, MPL-2.0) is a mod
framework for the Wii U NSMBU. Its actors port to Deluxe with three tools from
this repo:

- `framework/tsuru` (`nsmbudx/tsuru.h`): the porting kit, for the calls Deluxe
  makes differently.
- codedx's headers: the same classes as Tsuru's, mostly under other names
  (table below).
- `tools/wiiu2dx`: the actor's Wii U model, converted to Deluxe.

The reference port is [`mods/cold_fuzzy`](../mods/cold_fuzzy/code/cold_fuzzy.cpp).
Put it side by side with Tsuru's `src/actors/coldfuzzy.cpp`: every kind of
change a port makes is in there. Who ports what is in the shared plan doc.

## Recipe

1. **Model.** Convert the actor's archive with the Deluxe actor it resembles
   as the template (same skeleton and animations if possible), and record the
   command in your mod README:
   `py -3 scripts/models/wiiu2dx.py --wiiu <Common/actor/x.szs> --template <deluxe actor> --name <x> --romfs <romfs> --out mods/<mod>/romfs/Model`
   ([docs/WIIU_MODELS.md](WIIU_MODELS.md)). Templates live in `romfs/Model`
   or inside `romfs/Pack/*.pack`; the script searches both.
2. **Folder.** `mods/<name>/`: `code/<name>.cpp`, `profiles.txt` (`<ProfileId> <sprite>`,
   from your sprite range), `requires.txt` (`core` and `tsuru`, plus what you
   use), `README.md`. Models in `romfs/Model/` are never committed.
3. **Code.** Copy the Tsuru file, put the MPL-2.0 header on top naming the
   Tsuru file it came from, and apply the name map below.
4. **Build** with `scripts/sdk/make_mod_project.py ... --mod mods/<name>` (both
   the normal and the `--placeholder-models` build must print `PASS`), test in
   Ryujinx, add the sprite to `yaz0moto/steam-dx`, and run
   `scripts/validate_steam_dx_patch.py`.

## Name map

| Tsuru (Wii U) | Deluxe (codedx / kit) |
|---|---|
| `REGISTER_PROFILE(Cls, ProfileID::X)` | `const Profile xProfile(&Cls::build, ProfileId::X, "X", nullptr, 0);` + `static Actor* build(const ActorBuildInfo*)` returning `new Cls(buildInfo)`; `X <sprite>` in `profiles.txt` |
| `PROFILE_RESOURCES(id, Profile::LoadResourcesAt::Course, "a", "b")` | `PROFILE_RESOURCES(ProfileId::X, "a", "b")` |
| `SEAD_RTTI_OVERRIDE(...)`, `virtual ~Cls() { }` | leave out |
| `HitboxCollider`, `hcSelf` / `hcOther` | `ActiveCollider`, `acSelf` / `acOther` |
| `HitboxCollider::Info { Vector2f, Vector2f, Shape::Rectangle, a, b, c, d, e, cb }` | `ActiveCollider::Info { {x, y}, {w, h}, 0, a, b, c, d, e, cb }`: same fields; shapes 0 rectangle, 1 circle, 2/3 trapezoid |
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

When something has no row here, look for it in codedx's `include/` first, then
`framework/game` (`game/*.h`), then the ledger (`data/findings/ledger.csv`).
Anything engine-side (a class layout, a hook, a new address) goes to us as an
issue, and you move on to the next actor.

## What was checked, and how

| Fact | Evidence |
|---|---|
| Player damage is player vtable `+0x490` (setDamage) and `+0x49C` (setDamage2); damage types keep the Wii U numbers | Deluxe `setBgDamage` 0x6076357C passes 1, 10, 14, 15 exactly like the Wii U function (ledger F0253) |
| Effect IDs are the Wii U ones | Deluxe Lakitu passes 353/354/355 to `EffectData_create` in its water/poison/lava splash handlers, the Wii U `RP_Cmn_WaterSplash_06` / `PoisonSplash_06` / `LavaSplash_06` (F0254) |
| `ActiveCollider::Info` layout equals Tsuru's `HitboxCollider::Info` | field for field, codedx `activecollider.h` vs Tsuru `hitboxcollider.h` |

# Modding guide

This guide covers working on the mod in `source/` for *NSMBU Deluxe* v1.0.0 with
sweet-dx: build and install it, write hooks, add sprites, and debug crashes.
Every step here has been run for real.

## 1. Setup (once)

You need:

| What | Notes |
|---|---|
| The game's `main` NSO | Dumped from your own copy, v1.0.0, build id `AEE6DCCC06D9C05B42061E2019123A61`. Put it at `source/nso/main` (no extension; never committed) |
| [sweet-dx](https://github.com/jabonchan/sweet-dx) | `sweetdx.exe` |
| LLVM 16+ (`clang`, `clang++`) | On `PATH` |
| `arm-none-eabi-ld`, `objdump`, `readelf`, `c++filt` | The Arm GNU toolchain / devkitPro binutils, for the link checks |
| Python 3 | For the scripts; no packages needed (the model scripts want `libyaz0`) |

## 2. Build and install

```bat
sweetdx.exe --source=../source/ --output=./output --log-file=./debug.log
```

`compile.bat` (kept next to `sweetdx.exe` in the git-ignored `.projectignore/`) runs
exactly that, copies `source/npdm/main.npdm` in, and installs `subsdk0`,
`main.npdm` and the IPS patch into Ryujinx:

```
%APPDATA%\Ryujinx\sdcard\atmosphere\contents\0100EA80032EA000\exefs\subsdk0 (+ main.npdm)
%APPDATA%\Ryujinx\sdcard\atmosphere\exefs_patches\0100EA80032EA000\AEE6DCCC06D9C05B42061E2019123A61.ips
```

Restart the game after installing. Two rules:

- **Only one `subsdk0` loads.** Everything the mod does is in this one build.
- **Delete old patches** from `atmosphere/exefs_patches/` when you switch builds.

### Check the link

**sweet-dx links undefined symbols silently as 0**: a misspelt `.sym` name or a
signature that mangles differently builds fine and branches to address 0 in game.
After every build, on the ELF sweet-dx leaves in `%TEMP%\SweetDX-Temp-*\subsdk0.elf`:

1. `.got` has exactly one zero word, and its relocation is `R_ARM_RELATIVE`
   (`readelf -r`);
2. no `bl 0` / branches to 0 in `objdump -d`;
3. no calls into `@plt` (a destructor's D0 PLT call is harmless).

## 3. The layout

```
source/
  code/      .cpp: sweet-dx compiles every file, recursively. File stems must be
             unique across the tree (sprites/, powerups/, tweaks/, framework/, engine/, debug/)
  hooks/     .hks: where to patch the game (the same folders)
  include/   headers: game classes (actors/, collision/, game/, ...) and modbase/ (the kit)
  symbols/   .sym: game addresses, as RVAs (IDA address - 0x60000000)
  npdm/      main.npdm
  nso/       main (you supply it)
```

## 4. Call game code

Declare the function with its real C++ signature and give its address in a `.sym`
file. The `.sym` line must spell the signature exactly as the declaration mangles:

```
# source/symbols/actors/controllers.sym
ModBase::controllers::givePowerup(void*, unsigned int) = 0x007A27A8;
ModBase::levelTimer::instance = 0x00C99DE4;      # data: declare it extern
```

The class headers in `source/include` (codedx style: `actors/stageactor.h`,
`actors/actormgr.h`, `graphics/model.h`, ...) give typed access to the core
classes; `StageActor::position` is at `+0x6C`. For a list of 7,079 named game
functions with their addresses, see `reverse-engineering/FindingsF/`.

## 5. Hook a function

Hooking an entry needs a first instruction the trampoline can replay: a `push` or
another register-only instruction, never a PC-relative one. Check it in IDA, or
look it up:

```sh
grep ",Player_stun," reverse-engineering/FindingsF/data/hookable.csv
# 0x007A1F5C,Player_stun,152,e92d4070,"push {r4, r5, r6, lr}",yes,
```

```
@ source/hooks/tweaks/no_stun.hks
NoStun:
    type:       hook
    address:    0x007A1F5C
    symbol:     ModBase::noStun(void*, int)
    trampoline: ModBase::noStun_orig(void*, int)
```

```cpp
namespace ModBase { int noStun(void* player, int type); int noStun_orig(void* player, int type); }
int ModBase::noStun(void* player, int type)
{
    return 0;                       // or: return noStun_orig(player, type);
}
```

What each hook type does:

- `type: hook` replaces the function; the trampoline calls the original.
- `type: call` writes a `BL symbol` at one instruction (a call site).
- `type: instr` assembles one ARM instruction; `type: data` writes raw bytes.

sweet-dx cannot write a pointer to mod code into the game's data (vtables are
relocated at load): to replace one class's virtual, hook the shared function and
check the vtable (`source/code/tweaks/yoshi_urchin.cpp`). Before a `call` patch,
check what the code after it needs in registers (`BL` clobbers r0-r3, r12, lr).

## 6. Use your own model

The game names archives and models as string literals. `ModBase::ScopedNameRemap`
(`modbase/name_remap.h`) swaps them for the duration of a call:

```cpp
#include "modbase/name_remap.h"

static const ModBase::NameRemap kRemap = {
    "I_fireflower", "my_item",      // archive: romfs/Model/my_item.Nin_NX_NVN.szs
    "I_fireflower", "MyItem",       // model inside it
};

int MyItem_createModel(StageActor* item)
{
    ModBase::ScopedNameRemap remap(kRemap);
    return MyItem_createModel_orig(item);   // the game's own code, your model
}
```

The archive must be **mounted**, so list it in your profile's resources -- and
pick *when* it loads. `Profile::getHasResources` is a load class, not a flag
(ledger F0202):

| Class | When | Vanilla users |
|---|---|---|
| `ResourceLoad::AtBoot` (0) | once, at game start | every power-up item, Yoshi, the Yoshi egg |
| `ResourceLoad::PerLevel` (1) | with levels whose area sprite lists contain the sprite | enemies, objects |
| `ResourceLoad::WorldMap` (2) | on the world map | world-map actors |

```cpp
#include "modbase/profile_resources.h"
static sead::SafeString sMyItemResources[] = { "my_item" };
ModBase::setProfileResources(ProfileId::MyItem, sMyItemResources, 1,
                             ModBase::ResourceLoad::AtBoot);   // it comes out of blocks
```

An item that comes out of ?-blocks must be `AtBoot`: as `PerLevel` it loads
only where its sprite is placed, which is how the first custom Hammer Flower
model crashed. Actor variants pick the base profile's class by themselves.
Listing an archive another profile already loaded is harmless.

If your archive is missing, the remap logs a warning and uses the game's
archive **and** the game's model name. If the archive is there but the model
name inside it is wrong, the game still gets null and crashes, so check names
with `scripts/bfres.py`. Missing *animations* are skipped: the item simply does
not animate (F0217). `tsuru::createModel` returns null (and logs) for an archive
that is not loaded.

Install models into `<SD>/atmosphere/contents/0100EA80032EA000/romfs/Model/`
(never committed). `MODBASE_CUSTOM_MODELS 0` in `modbase/build_config.h` switches
every feature to the game's own placeholder models.

## 7. Add a sprite

1. Add its profile after the last one in `source/include/actors/profileid.h`.
2. Append its sprite to the table at the end of
   `source/code/engine/custom_profiles.cpp` (sprite ids follow on from the last
   one, 779 the Wave Platform), and raise `MODBASE_SPRITE_TABLE_SIZE` in
   `modbase/build_config.h` so the Actor Spawners accept it.
3. Register it in your code:

```cpp
#include "actors/profile.h"
#include "actors/profileid.h"
const Profile myProfile(&MyActor::build, ProfileId::MyActor, "MyActor", nullptr, 0);
PROFILE_RESOURCES(ProfileId::MyActor, "my_archive");
```

4. Add it to the Yaz0moto patch in `yaz0moto/patches/steam-dx/`: the
   `spritedata.xml` entry, `spritecategories.xml`, the description range in
   `main.xml`, the `README.md` row, and a 128x128 icon `icons/<sprite>.png`.

To reuse an existing actor's behaviour, pass the game's own factory as the build
function. The Hammer Flower does this with the Fire Flower's.

## 7b. Put a new power-up in ?-blocks and bricks

Blocks store a 5-bit contents value. The game defines 0–20 and leaves
**21–31 free** (21 Hammer Flower, 22 P-Acorn, 23 Blue Shell and 24 Poison
Mushroom are taken). `code/framework/block_items.cpp`:

```cpp
#include "modbase/block_items.h"

struct InBlocks
{
    InBlocks() { ModBase::blockItems::registerContents(25, ProfileId::MyPowerup); }
};
static InBlocks inBlocks;
```

In the level editor, set the block's contents to **25**: settings2 low nybble
`9`, plus bit 28 set. The block behaves like a power-up block: it bounces, and a
small player gets a Mushroom first, as with every flower block. Pass `false` as
the third argument to skip that rule. The full pipeline, with the vanilla
contents table, is in
[FindingsA/map_obj/BlockBase.cpp](../reverse-engineering/FindingsA/map_obj/BlockBase.cpp)
and [FindingsA/item/ItemMgr.cpp](../reverse-engineering/FindingsA/item/ItemMgr.cpp).

## 7c. A new sprite from any vanilla actor, with your model

`code/framework/actor_variant.cpp` turns a vanilla actor into a new sprite that
uses your archive and model. It keeps the same code, the same settings nybbles,
and the same states:

```cpp
#include "modbase/actor_variant.h"

MODBASE_ACTOR_VARIANT(beeVariant,
    ProfileId::Bee,            // the new profile (profileid.h)
    530,                       // base: Cheep Cheep
    "Bee",
    ModBase::cVariant_AirSwim, // optional: a water actor moves through air
    { { "pukupuku", "bee", "pukupuku", "bee" } },   // archive, then model, from -> to
    { },                       // hit rules (7e)
    0, 0);                     // damage-mask bits to set / clear
```

What you need to know for a given base actor:

- **Its archive and model names.** Run `python scripts/sdk/profile_resources.py`
  with the profile id, or check its `reverse-engineering/FindingsA/` file.
- **The animation names it plays.** Your archive needs them; the names are listed
  in its FindingsA file. For the Cheep Cheep they are `swim` (skeletal) and
  `pukupuku` (texture).

How it works:

1. The base actor is built with its own factory, as its own profile, so all of
   its settings logic still applies.
2. It gets a private copy of its vtable, in which the 13 lifecycle virtuals run
   with your names swapped.
3. Your archives load with any level that contains the sprite.

See [bee.cpp](../source/code/sprites/bee.cpp) for a complete example. To tell your
variant apart in a hook (its runtime profile is the vanilla one), use
`ModBase::variantProfileOf(actor)`;
[p_acorn.cpp](../source/code/powerups/p_acorn.cpp) does that to make the Acorn
grant mode 8.

## 7d. Give a power-up its own suit colours

A suit's colours are one frame of the player model's colour-switch animations
(`PB_switch` body, `PH_switch` head, `PC_switch` Mario's cap). Each model class
has its own routine (virtual slot 44) that picks the frame:

| Class | Routine | Frames |
|---|---|---|
| MarioModel (Mario, Luigi) | `0x6075A6E4` | 0 Normal, 1 Fire, 2 Ice |
| KinopioModel (Toads) | `0x60757B58` | 3×(type−2) + 0 Normal, 1 Fire, 2 Ice |
| vtable `0x60C240DC` (unidentified) | `0x6075D3AC` | 3×variant + 0/1/2 |

`code/framework/suits.cpp` changes the look two ways:

```cpp
#include "modbase/suits.h"
using namespace ModBase::suits;

// Borrow another colour type's look, on every character, no assets needed:
showColorAs(playerNo, cColor_Fire, cColor_Ice);

// Or your own frame on Mario and Luigi (add frame 3 to their switch
// animations), with a fallback look for everyone else:
overrideColor(playerNo, cColor_Fire, 3.0f, cColor_Ice);

refresh(playerNo);   // apply now if the mode doesn't change
```

The model still records the colour type the game asked for, so taking damage
brings the vanilla look back by itself; `clear(playerNo)` removes the override.
The Hammer Suit does exactly this (`HAMMER_SUIT_COLORS`, `HAMMER_SUIT_FRAME`).

Never call one class's routine on another's model: past `+0x1E0` the layouts
differ (MarioModel's `+0x224` is the bonus cap, a Toad's is not), and that is
how the first Hammer Flower build crashed when a Toad collected it (ledger
F0061). `refresh` goes through the model's own vtable.

The full mechanism and the per-mode tables (body, size, height) are in
[FindingsA/player/PlayerModel.cpp](../reverse-engineering/FindingsA/player/PlayerModel.cpp)
and `source/include/game/player.h`.

## 7e. Change how an enemy reacts to attacks

Every enemy decides what a hit does in seven dispatchers (player, Yoshi, baby
Yoshi, enemy, projectiles, …). Each one checks the enemy's **damage mask**
(collider `+0x94`: bit N = attack N can hurt it), then calls one of **17
reactions**. These are vtable slots `+0x114` (Star) to `+0x154`; all are listed
with their attacks in `source/include/game/enemy.h`. An actor variant can
override them:

```cpp
#include "game/enemy.h"
MODBASE_ACTOR_VARIANT(armoredBee, ProfileId::ArmoredBee, 530, "ArmoredBee",
    ModBase::cVariant_AirSwim,
    { { "pukupuku", "bee", "pukupuku", "bee" } },
    { { EnemyVt::hitFire, ModBase::HitReaction::Immune, 0 },                 // fireballs do nothing
      { EnemyVt::hitIce,  ModBase::HitReaction::SameAs, EnemyVt::hitStar } }, // ice kills like a Star
    0,                         // damage-mask bits to set (let an attack through)
    1u << 9);                  // ...and to clear (here: shells, attack 9)
```

- `Immune` makes the reaction report "not consumed".
- `SameAs` runs another reaction instead.
- The mask edits apply right after the enemy's own `onCreate`.

An attack whose mask bit is clear never reaches its reaction, so set the bit if
you want a rule for an attack the base enemy ignores. The Bee has a one-line
example: `BEE_FIREPROOF`. The dispatchers are reconstructed in
[FindingsA/enemy/EnemyDamage.cpp](../reverse-engineering/FindingsA/enemy/EnemyDamage.cpp).

## 7f. Change what Yoshi does

Yoshi (profile 442) is a PlayerBase with a second state machine for his mouth.
What happens to anything he eats is decided by the eaten actor's **EatData**
(`actor+0x26C`; type at `+0x10`): when the tongue comes back, type 5
(YoshiFire) or 6 (YoshiFireIce) is swapped for a YoshiFlame (profile 478) he
spits. Enemy fireballs are type 5, which is why eating one gives fire breath.

`code/framework/yoshi.cpp`:

```cpp
#include "modbase/yoshi.h"
ModBase::yoshi::setBreathFromEnemies(yoshi::EatType::YoshiFire);   // every enemy -> fire
ModBase::yoshi::setEatType(actor, yoshi::EatType::YoshiFireIce);   // this one -> ice
```

[yoshi_fire.cpp](../source/code/tweaks/yoshi_fire.cpp) is the first line, and it is
in the build: every enemy Yoshi eats becomes fire breath.

His numbers need no code. These constants are loaded at run time and read
only by Yoshi, so a sweet-dx `data` hook changes them
([yoshi_tuning.hks](../source/hooks/tweaks/yoshi_tuning.hks)):

| What | Address (RVA) | Vanilla |
|---|---|---|
| fruits per egg | `0x00B0C0C8` | `5` (u32) |
| flutter-jump length | `0x00B0C0CC` | `30` frames (u32) |
| flutter lift while falling fast | `0x007D3F94` | `0.2` (f32) |
| flutter lift after that | `0x007D3F98` | `0.07` (f32) |

The class layout, all 16 overridden/own states, the mouth states and the
eggs are in `source/include/game/yoshi.h` and
[FindingsA/player/Yoshi.cpp](../reverse-engineering/FindingsA/player/Yoshi.cpp).

## 8. Log and debug

```cpp
#include "modbase/log.h"
ModBase::log("hammer spawned for player ", (u32)playerNo);
```

On Ryujinx this appears in the log as `[ModBase] …`. The log file is the newest
`<Ryujinx folder>\Logs\Ryujinx_*.log`; guest logging is on by default.

When the game crashes:

1. **Find the crash in the Ryujinx log.** Look for `Invalid memory access`,
   `PrintGuestStackTrace` and the `PC:` line: `RedPro-S.nss:0x<RVA>` is the game,
   `(unknown2):0x<offset>` is the mod. The `[ModBase]` lines just above often
   name the cause (a missing archive, a shape that cannot be drawn).
   `python scripts/sdk/symbolize_crash.py <log>` turns the addresses into names.
2. **If it crashes on entering a level, check the level first.** Content crashes
   look exactly like code crashes:
   ```sh
   python scripts/sdk/course_tilesets.py --romfs <romfs> --base-tree <NSP base-game file tree> <romfs>/Course/*.sarc
   python scripts/sdk/course_sprites.py <romfs>/Course/*.sarc
   ```
   A background name must be bare: `Toride`, not `dv_Toride.Nin_NX`.
3. **The guards are always in the build** (`source/code/debug/`): the archive guard
   logs the name of any archive the game wants but never loaded, right before it
   crashes (that is how the 1-1 crash was found), and the draw guard names and
   skips a model shape the renderer cannot draw.
4. **Live data:** the emulator's GDB stub reads memory while you play
   ([GDB_SETUP.md](GDB_SETUP.md)).

## 9. Before you rely on an address

Check `reverse-engineering/FindingsB/ledger.csv`. Depend only on findings graded
`seen-static` or `seen-runtime`; anything `inferred` needs an in-game test. Add
what you verify, with its evidence.

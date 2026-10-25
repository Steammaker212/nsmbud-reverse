# Modding guide

This guide covers building a code mod for *NSMBU Deluxe* v1.0.0 with this
repository and sweet-dx: install it, write hooks, add sprites, and debug crashes.
Every step here has been run for real. The Hammer Suit in `mods/hammer_suit/`
went through all of them.

## 1. Setup (once)

You need:

| What | Notes |
|---|---|
| The game's `main` NSO | Dumped from your own copy, v1.0.0. Build id `AEE6DCCC06D9C05B42061E2019123A61` |
| [sweet-dx](https://github.com/jabonchan/sweet-dx) v0.0.3 | Its `build/sweetdx-windows.exe` and `build/source/` template |
| LLVM 16+ (`clang`, `clang++`) | On `PATH` |
| `arm-none-eabi-ld`, `c++filt` | The Arm GNU toolchain, plus binutils from devkitPro's MSYS2 |
| Python 3 | No packages needed |

## 2. Build and install a mod

```sh
python scripts/sdk/make_mod_project.py --mod mods/hammer_suit \
    --sweetdx "<sweet-dx dir>" --nso <path to main> \
    --out mods/hammer_suit/build --build --with-template-code
```

Copy `mods/<mod>/build/output/atmosphere/` to the root of your SD card. On
Ryujinx, the SD card is `%APPDATA%\Ryujinx\sdcard\`. Restart the game.

The script does the following, so you don't have to:

- Assembles a sweet-dx project from the template headers, `sdk/` and the
  `framework/` parts your mod lists in `requires.txt`.
- Adds the sprites in `profiles.txt` to codedx's tables.
- **Refuses** to build if any `.sym` assigns a name the module itself defines.
  Assigning `_init` once made every model render black.
- Checks the finished `subsdk0` with `inspect_subsdk.py`, and fails the build if
  its init pointers leave the module.

Two rules:

- **Only one `subsdk0` loads.** If your levels use codedx's custom sprites
  (724–733: Mr. Sun, MagicLift, …), always pass `--with-template-code`, or those
  levels crash on entry.
- **Delete old patches** from `atmosphere/exefs_patches/` when you switch builds.

## 3. A mod's folder

```
mods/my_mod/
  code/my_mod.cpp       your C++ (sweet-dx compiles every file here)
  hooks/my_mod.hks      where to patch the game
  symbols/my_mod.sym    game addresses the SDK doesn't already name (optional)
  requires.txt          framework parts, one per line: core, resources, diagnostics
  profiles.txt          new sprites: "<ProfileName> <sprite id>" (optional)
  README.md             what it does, what it relies on, how to test it
```

## 4. Call game code

`#include "nsmbudx/game.h"` declares 7,079 game functions by name, and
`sdk/symbols/nsmbudx_game.sym` resolves them. Pointers are `void *`; the comment
on each line names its decompiled source file:

```cpp
#include "nsmbudx/game.h"
void* fireFlower = Profile__get(592);
```

codedx's class headers (`actor/stageactor.h`, `actormgr.h`, `model.h`, …) give you
typed access to the core classes. For example, `StageActor::position` is at `+0x6C`.

## 5. Hook a function

Hooking an entry needs a trampoline-safe first instruction. Look it up first:

```sh
grep ",Player_stun," sdk/data/hookable.csv
# 0x007A1F5C,Player_stun,152,e92d4070,"push {r4, r5, r6, lr}",yes,
```

```
@ hooks/my_mod.hks
NoStun:
    type:       hook
    address:    0x007A1F5C
    symbol:     NoStun
    trampoline: NoStun_orig
```

```cpp
extern "C" int NoStun_orig(void* player, int type);
extern "C" int NoStun(void* player, int type)
{
    return 0;                       // or: return NoStun_orig(player, type);
}
```

What each hook type does:

- `type: hook` replaces the function and calls the original through the trampoline.
- `type: call` replaces one call site.
- `type: instr` / `type: data` patch raw bytes.

Hook entries marked `no` in `hookable.csv` start with a PC-relative instruction.
Hook a caller instead.

## 6. Use your own model

The game names archives and models as string literals. With `framework/resources`,
you swap them for the duration of a call:

```cpp
#include "nsmbudx/name_remap.h"

static const nsmbudx::NameRemap kRemap = {
    "I_fireflower", "my_item",      // archive: romfs/Model/my_item.Nin_NX_NVN.szs
    "I_fireflower", "MyItem",       // model inside it
};

extern "C" int MyItem_createModel(StageActor* item)
{
    nsmbudx::ScopedNameRemap remap(kRemap);
    return MyItem_createModel_orig(item);   // the game's own code, your model
}
```

The archive must be **loaded**, so list it in your profile's resources. If a name
is missing, the remap falls back to the original and logs a warning.

## 7. Add a sprite

1. Add a line to `profiles.txt`, e.g. `MyActor 735`. Sprite ids must follow on
   from the last one: 734 is the Hammer Flower.
2. Register it in your code with codedx's profile system:

```cpp
#include "profile.h"
#include "profileid.h"
const Profile myProfile(&MyActor::build, ProfileId::MyActor, "MyActor", nullptr, 0);
PROFILE_RESOURCES(ProfileId::MyActor, "my_archive");
```

Place sprite 735 in your level editor. To reuse an existing actor's behaviour,
pass the game's own factory as the build function. The Hammer Flower does this
with `Actor_faiyafurawa_build`.

## 7b. Put a new power-up in ?-blocks and bricks

Blocks store a 5-bit contents value. The game defines 0–20 and leaves
**21–31 free**. With `framework/items` (add `items` and `game` to `requires.txt`):

```cpp
#include "nsmbudx/block_items.h"

struct InBlocks
{
    InBlocks() { nsmbudx::blockItems::registerContents(21, ProfileId::MyPowerup); }
};
static InBlocks inBlocks;
```

In the level editor, set the block's contents to **21**: settings2 low nybble
`5`, plus bit 28 set. The block behaves like a power-up block: it bounces, and a
small player gets a Mushroom first, as with every flower block. Pass `false` as
the third argument to skip that rule. The full pipeline, with the vanilla
contents table, is in [readable/map_obj/BlockBase.cpp](../readable/map_obj/BlockBase.cpp)
and [readable/item/ItemMgr.cpp](../readable/item/ItemMgr.cpp).

## 7c. A new sprite from any vanilla actor, with your model

`framework/actors` turns a vanilla actor into a new sprite that uses your
archive and model. It keeps the same code, the same settings nybbles, and the
same states:

```cpp
#include "nsmbudx/actor_variant.h"

NSMBUDX_ACTOR_VARIANT(beeVariant,
    ProfileId::Bee,            // add "Bee 735" to profiles.txt
    530,                       // base: Cheep Cheep (profile ids: codedx doc/profiles.csv)
    "Bee",
    nsmbudx::cVariant_AirSwim, // optional: a water actor moves through air
    { { "pukupuku", "bee", "pukupuku", "bee" } });   // archive, then model, from -> to
```

What you need to know for a given base actor:

- **Its archive and model names.** Run `python scripts/sdk/profile_resources.py`
  with the profile id, or check its `readable/` file.
- **The animation names it plays.** Your archive needs them; the names are listed
  in its `readable/` file. For the Cheep Cheep they are `swim` (skeletal) and
  `pukupuku` (texture).

How it works:

1. The base actor is built with its own factory, as its own profile, so all of
   its settings logic still applies.
2. It gets a private copy of its vtable, in which the 13 lifecycle virtuals run
   with your names swapped.
3. Your archives load with any level that contains the sprite.

See [mods/bee/](../mods/bee/) for a complete example. To tell your variant apart in a hook (its runtime profile is the vanilla one), use `nsmbudx::variantProfileOf(actor)`; [mods/p_acorn/](../mods/p_acorn/) does that to make the Acorn grant mode 8.

## 7d. Give a power-up its own suit colours

A suit's colours are one frame of the player model's colour-switch animations
(`PB_switch` body, `PH_switch` head, `PC_switch` cap): **0 Normal, 1 Fire,
2 Ice**. `MarioModel::setColorType` (`0x6075A6E4`) picks the frame. A new look
takes two steps:

1. **Assets:** add a frame (e.g. frame 3, your colours) to those texture-pattern
   animations in the Mario and Luigi model archives.
2. **Code** (`framework/player`, add `player` to `requires.txt`):

```cpp
#include "nsmbudx/suits.h"
nsmbudx::suits::overrideColor(playerNo, nsmbudx::suits::cColor_Fire, 3.0f);
nsmbudx::suits::refresh(playerNo);   // apply now if the mode doesn't change
```

While set, a Normal- or Small-body player given the Fire colours gets your
frame instead. Taking damage changes the colour type, so the vanilla look comes
back by itself; `clear(playerNo)` removes it. Before editing assets, use frame
`2.0f` (the Ice colours) to see it working. The Hammer Suit does exactly this
(`HAMMER_SUIT_FRAME`).

The full mechanism and the per-mode tables (body, size, height) are in
[readable/player/PlayerModel.cpp](../readable/player/PlayerModel.cpp) and
`framework/game/include/game/player.h`. Toad, Toadette and Nabbit use other
model classes and are not covered yet.

## 8. Log and debug

```cpp
#include "nsmbudx/log.h"
nsmbudx::log("hammer spawned for player ", (u32)playerNo);
```

On Ryujinx this appears in the log as `KernelSvc OutputDebugString: [nsmbudx] …`.
The log file is `<Ryujinx folder>\Logs\Ryujinx_*.log`, and guest logging is on by
default.

When the game crashes:

1. **Find the crash in the Ryujinx log.** Look for `PrintGuestStackTrace` and
   `InvalidAccessHandler`. Then run
   `python scripts/sdk/symbolize_crash.py <log> --build-log mods/<mod>/build/build.log`,
   which turns the addresses into function names.
2. **If it crashes on entering a level, check the level first.** Content crashes
   look exactly like code crashes:
   ```sh
   python scripts/sdk/course_tilesets.py --romfs <romfs> --base-tree research/reference/NSP_base_game_tree.txt <romfs>/Course/*.sarc
   python scripts/sdk/course_sprites.py <romfs>/Course/*.sarc
   ```
   A background name must be bare: `Toride`, not `dv_Toride.Nin_NX`.
3. **Build with `--with-diagnostics`.** The archive guard then logs the name of
   any archive the game wants but never loaded, right before it crashes. That is
   how the 1-1 crash was found.

## 9. Before you rely on an address

Check `data/findings/ledger.csv`. A mod should depend only on findings graded
`seen-static` or `seen-runtime`. Anything `inferred` goes into your mod's test
table. Add what you verify, with its evidence; [RE_PLAN.md](RE_PLAN.md) §2 shows
how.

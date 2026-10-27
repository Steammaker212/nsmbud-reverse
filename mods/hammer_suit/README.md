# Hammer Suit: the Hammer Flower power-up

A sweet-dx mod for *New Super Mario Bros. U Deluxe* v1.0.0 (Switch) that adds a
new item, the **Hammer Flower** (sprite **734**). Collecting it gives the Fire
suit. Instead of fireballs, that player then throws Hammer Bros hammers, which
arc like SMB3's, defeat nearly every enemy, and never hurt players. Plain Fire
Flowers keep throwing fireballs.

**Status:**

| Version | Behaviour | State |
|---|---|---|
| v1 | every Fire Flower throws hammers | verified in-game (Ryujinx, 2026-10-25) |
| v2 | the Hammer Flower item and configurable models | tested 2026-10-26: model showed but faced the camera, and the item could not be collected |
| v3 | Fire Flower variant, side-on model, shared throw handler | tested 2026-10-26: model correct, still not collectible |
| v4 | items whose archive lacks `out`/`wait` animations are timed like the Fire Flower, so they become collectible | verified in-game 2026-10-26 (collected, throws hammers) |
| v5 | Tsuru's assets: the animated Hammer Flower item (`I_hmrflower`), the helmet and shell drawn on the player (`hmrpy`), hammers from our own archive in every level | crashed on collecting (2026-10-26 19:35): the costume models were made while drawing, where there is no heap (F0251) |
| v6 | costume made with the player's models (PlayerModel ctor hook); idle `wait` replays no longer cut short (F0252) | tested 2026-10-26: works |
| v7 | regular colours instead of Ice; helmet on Mario and Luigi only, Toads keep their normal cap | built and installed 2026-10-26; **awaiting test** |

## Porting the Tsuru assets (v5)

The Wii U [Tsuru](https://github.com/Zenith-Team/Tsuru) framework (Zenith Team,
MPL-2.0) ships a Hammer Suit. Its assets, converted with
[`tools/wiiu2dx`](../../tools/wiiu2dx/) and placed in `romfs/Model/` (models are
not committed):

| Archive | Model(s) | Template | Command |
|---|---|---|---|
| `I_hmrflower` | the Hammer Flower item, with `out`, `out2`, `out3`, `wait`, `wait2` | `I_fireflower` | `wiiu2dx.py --wiiu I_hmrflower.szs --template I_fireflower --name I_hmrflower --map mat_hmrflower=mat_fireflower --map hammer_head=mat_fireflower --tex hammer_head=hmr,lm_01i,lm_02i ...` |
| `hmrpy` | `hmrpy_partsC` helmet, `hmrpy_partsB` shell (D-F unused) | `bros` | `wiiu2dx.py --wiiu hmrpy.szs --template bros --name hmrpy --map mat_hmrpy_body=mat_bros_boomerang ...` |
| `hammer` | the thrown hammer (bone `bros_hammer_model`) | your own | |

Two conversion details:
- `hammer_head` names its textures through `nw4f_map_obj_shader`, which feeds the
  colour texture from sampler variable `_a2`. Read through the Deluxe shader, that
  put a lightmap in the albedo slot. `--tex` gives the order explicitly.
- `mat_bros_all` was compiled only for skinned shapes (skin count 2). The helmet and
  shell are rigid, so they bind to the rigid `mat_bros_boomerang`, which has the
  same texture layout (`bros_all.0`, `lm_01e`, `lm_02e`).

What the code takes from Tsuru, and how it maps to Deluxe:

| Tsuru (Wii U) | Here (Deluxe) |
|---|---|
| `HammerFlower` actor plays `out`/`out2`/`out3`/`wait`/`wait2` | the Fire Flower variant plays the same names; with `I_hmrflower` they bind, so no fallback timing |
| `CustomPowerupModel`: made with the player's resources; helmet on `player_head`, shell on `spin`, drawn in `Player::onDraw` | made in a hook on the PlayerModel constructor 0x6078C444 (the player's heap is current there); drawn from a hook on `PlayerModel::draw` 0x6078E574; bones by name through Model vtable +0x54, world matrix +0x6C; head wrapper model+0x124, body model+0x018 |
| hides `mat_player_hat`, shows `mat_player_hair` | not done (Deluxe's material-visibility call is not found yet); the helmet covers Mario's and Luigi's cap. Toads get the shell only: their head model is the mushroom cap, kept as it is. Model types 5, 6, 8 (other classes from the factory 0x60794BDC, layouts not mapped) get no costume |
| two hammers per player, hammer parented to the player | `HAMMER_MAX_PER_PLAYER`, owner id at hammer +0x2E78 |
| hammer from the level's `bros` | our `hammer` archive, loaded at game start: hammers in every level |

## Changing the models

Everything you would change is at the top of `code/hammer_suit.cpp`:

```c
#define HAMMER_ITEM_ARCHIVE         "I_fireflower"   // romfs/Model/<name>.Nin_NX_NVN.szs
#define HAMMER_ITEM_MODEL           "I_fireflower"   // model name inside that archive
#define HAMMER_PROJECTILE_ARCHIVE   "bros"
#define HAMMER_PROJECTILE_MODEL     "bros_hammer"
#define HAMMER_MAX_PER_PLAYER       2
#define HAMMER_FROM_ANY_FIRE_FLOWER 0   // 1 = v1 behaviour, for quick tests
```

To give the item your own look:

1. Put your archive in `romfs/Model/` as `<name>.Nin_NX_NVN.szs`.
2. Set `HAMMER_ITEM_ARCHIVE` to the archive name and `HAMMER_ITEM_MODEL` to the
   model name inside it.
3. The item code also plays skeletal animations named `out`, `out2`, `out3`,
   `wait` and `wait2` from that archive. Include them to animate the item.
   They also *time* the item: the ?-block appear state makes it collectible
   when `out` passes frame 26 and moves on when it ends (ledger F0230). If
   your archive lacks one, the mod gives it the Fire Flower's length
   (`HAMMER_FRAMES_*`) and logs `hammer flower: item archive has no 'out'
   animation; timing it like the Fire Flower` once -- the item still works,
   it just does not move.
4. Rebuild.

If a name can't be found, the game uses the vanilla model and logs
`[nsmbudx] remap: … not found` instead of crashing. The archives are loaded
automatically in any level that contains a Hammer Flower.

## Placing it

- **In a ?-block or brick (v3):** set the block's contents to **21**
  (`HAMMER_BLOCK_CONTENTS`): settings2 low nybble `5`, plus bit 28 set. Small
  players get a Mushroom first, like any flower block.
- **Directly:** add a sprite with id **734**. No vanilla sprite places a Fire
  Flower directly, so test this one.

## Build

```sh
python scripts/sdk/make_mod_project.py --mod mods/hammer_suit \
    --sweetdx "../sweet-dx-main (1)/sweet-dx-main" --nso ../main.idb/main \
    --out mods/hammer_suit/build_v2 --build --with-template-code [--with-diagnostics]
```

- `--with-template-code` is required. Sprite 734 is registered through codedx's
  profile system, and your levels also use codedx's sprites 724–733.
- `profiles.txt` adds the new profile and sprite to codedx's tables in the
  assembled copy; codedx itself is never vendored.
- `requires.txt` pulls in `framework/core` (logging) and `framework/resources`
  (name remapping).
- `--with-diagnostics` adds the archive guard, which names any missing archive
  before the game crashes on it.

Every build is checked by `inspect_subsdk.py`: the build fails unless DT_INIT and
MOD0 point inside the module.

## How it works

| Piece | Hook | What it does |
|---|---|---|
| Hammer Flower item | none (`framework/actors` variant) | A variant of the Fire Flower (592), like the P-Acorn is of the Acorn: the runtime profile stays 592, so every part of the game that knows the Fire Flower by id treats it as one. As its own profile (916+) it was never collectible (F0227) |
| Item model and animations | six Fire Flower item functions (`0x6045D79C`, `…D980`, `…DA4C`, `…DB18`, `…DBF8`, `…DCC4`) | For a Hammer Flower only, the game's own code runs with your archive/model names swapped in (`nsmbudx::ScopedNameRemap`) |
| Side-on model | same hooks | `HAMMER_ITEM_YAW` (a quarter turn) in `rotation.y` (+0xA0), which the item turns into its model matrix every frame (`0x60462018`). Your hammer's head lies along Z, at the camera; the turn lays it along X |
| Collecting | Fire Flower per-frame collect check (`0x6045DDC0`, vtable +0xE0) | Grants Fire as usual; records whether the collector got a Hammer Flower or a plain Fire Flower. If a player stands inside the item while its collider is registered and the collider has not reported it, the hook reports it and logs `hammer flower: player N touched it but the collider did not report it` |
| Throwing | `framework/player` throw handler (`Player::createFireBall` `0x007AABA0`, hooked once there) | A hammer thrower spawns profile 759 the way Hammer Bros do, then changes that one instance: skip the held state, never pair with players, attack as a Shell |

Nothing shared is patched, so Hammer Bros' own hammers still hurt Mario. If the
level has no `bros` archive loaded, the throw falls back to a fireball.

The evidence for every offset is in
[`data/findings/ledger.csv`](../../data/findings/ledger.csv) (F0009–F0025).

## Test order (v3)

| # | Do | Expect |
|---|---|---|
| 1 | Boot, enter 1-1 | Plays normally |
| 2 | Plain Fire Flower, throw | **Fireballs** |
| 3 | Hit a contents-21 block, or place sprite 734 | Your hammer model, seen **from the side** |
| 4 | Walk into it | Collected: log `hammer flower: collected by player 0`. If the log also says `... the collider did not report it`, the fallback did the collecting -- report that line |
| 5 | Throw | Hammers, as in v1 (in a level that loads `bros`) |
| 5 | Take damage, then a plain Fire Flower | Fireballs again |
| 6 | Set `HAMMER_ITEM_MODEL` to a name that doesn't exist, rebuild | Vanilla model, plus a `remap:` warning in the Ryujinx log, no crash |
| 7 | Hammer Bros level | Their hammers still hurt you |

## Known limits

- The hammer-thrower flag lives in memory. After a reboot, a saved Fire suit
  throws fireballs until a Hammer Flower is collected again.
- **Suit colours:** a hammer thrower wears the `HAMMER_SUIT_COLORS` look
  (default: each character's regular colours, cap included) on every character. For a real
  Hammer Suit add a 4th frame to `PB_switch` / `PH_switch` / `PC_switch` in the
  Mario/Luigi model archives and set `HAMMER_SUIT_FRAME` to `3.0f`; the other
  characters keep `HAMMER_SUIT_COLORS`.

# Tsuru blocks and objects on Deluxe

[Tsuru](https://github.com/Zenith-Team/Tsuru)'s blocks and objects, ported to
the mod in `source/code/sprites/`, with
their Yaz0moto entries in `yaz0moto/patches/steam-dx` (spritedata, a 128x128 icon each,
and the "Blocks and Objects" and "Platforms" categories). The recipe and name
map are in [TSURU_PORTING.md](TSURU_PORTING.md); the enemies are in
[TSURU_ENEMIES.md](TSURU_ENEMIES.md).

Each one builds and links: no unresolved GOT slots, no branches to 0, and no
calls into `.plt` besides the destructors' usual one. None has been tested
in game.

## Sprites

| Sprite | Object | File | Models (`romfs/Model/<archive>.Nin_NX_NVN.szs`) |
|---|---|---|---|
| 758 | Beep Block | `beep_block.cpp` | `block_beep` (tex-pattern `switch`) |
| 759 | Red-Blue Block | `red_blue_block.cpp` | `block_rdbl` (tex-pattern `switch`) |
| 760 | Switch Block | `switch_block.cpp` | `block_stch` (tex-pattern `switch`) |
| 761 | Switch Block Event Activator | `switch_block_event.cpp` | none |
| 762 | Triple Block | `triple_block.cpp` | `blocktripa` (`standard`), `blocktripb` (`chika`), `blocktripc` (`yougan`, `yougan2`) |
| 763 | Music Note | `music_note.cpp` | `note` |
| 764 | Music Note Manager | `music_note.cpp` | `clef` (`rainbow`) |
| 765 | Star Coin Shard | `star_coin_shard.cpp` | `star_shard` |
| 766 | Star Coin Shard Manager | `star_coin_shard.cpp` | none (spawns the retail Star Coin) |
| 767 | Minecart | `minecart.cpp` | `truck` (skl `Wait`) |
| 768 | Helical Bar | `helical_bar.cpp` | retail `firebar_L`, `center_firebar` |
| 769 | One-Way Platform | `one_way_platform.cpp` | retail `lift_han_wood`, `lift_han_stone`, `lift_han_spin` |

The sprite numbers are mapped in `source/code/engine/custom_profiles.cpp`
(profile IDs after `GiantSkewer` in `actors/profileid.h`).

### Settings

| Sprite | Nybbles |
|---|---|
| Beep Block | 3 colour (0 red, 1 blue) |
| Red-Blue Block | 3 colour (0 red, 1 blue) |
| Switch Block | none |
| Switch Block Event Activator | 3-4 event (1-based); 1 colour it waits for |
| Triple Block | 4 look (0-3); 20 contents, 13 "extended contents (+16)", as the ?-block |
| Music Note | 3-4 manager ID; 1 pitch; 19-20 / 21-22 movement |
| Music Note Manager | 3-4 ID; 1-2 notes to collect; 5 reward; 6-7 time limit (s, 0 = 5); 19-22 movement |
| Star Coin Shard | 3 manager ID |
| Star Coin Shard Manager | 3 ID; 4 shards to collect; 5-12 passed on to the Star Coin (9 = which coin) |
| Minecart | 3 path ID |
| Helical Bar | 3 bars (0-2 = 1-3); 4 breathing; 2 spiral strength (+1); 1 does not turn |
| One-Way Platform | 5 width; 6 look (0 wood, 1 stone, 3 bolt, 7 snowy wood); 7 solid side (0 up, 1 down, 2 right, 3 left); 3-4 turn-around event; 19-22 movement |

## Triple Block contents

The Triple Block takes the same contents as the ?-block (sprite 59), custom
power-ups 21-24 included, through `ModBase::blockItems::spawnContents`
(`framework/block_items.cpp`). How it works:

- The contents value goes through the game's own contents → content-code table
  (0x60B04164, `blockItems::contentCodeTable`). Custom contents (21+) become
  code 7, the same placeholder the retail blocks use.
- Coins (codes 12/13) spawn profile 399 the way the block dispatcher
  (0x605B5BDC) does: `settings1 = player | dir << 4`.
- Anything else goes through `ItemMgr::resolveItem` (0x60465E4C) and
  `ItemMgr::spawnItem` (0x604663F4) with the settings word the game's single-item
  spawner (0x605B5A3C → 0x60466328) builds: direction in bits 12-13 and 18-19
  (2 up, 3 down), bit 14 set, player in bits 16-17.
- `blockItems::sSpawningBlock` is set to the Triple Block for the call, so the
  existing `spawnItem` hook swaps code 7 for the custom power-up named by the
  block's own contents, exactly as for a retail ?-block.

Vines (12), springs (13) and Yoshi eggs (9, 20) need the game's block code
(BlockBase) and are not given; `spawnContents` logs and refuses them.

## Where a port differs from Tsuru

- **Switch and Triple Blocks are not BlockBase.** Deluxe's BlockBase (ctor
  0x60563544, about 0x1CEC bytes) wasn't mapped far enough to subclass. Both are
  plain StageActors with a solid RectCollider and the kit's `BumpSensor`: a thin
  hitbox under the block that fires when a player or Yoshi touches it moving up.
  The bump is a 10-frame, 5-unit model offset.
- **Ground pounds and shells (Switch Block).** These come through the block's
  RectCollider callbacks, set the way BlockBase's setup (0x605635AC) sets a
  retail block's: top / side at ColliderBase +0x138 / +0x140, and 0x18 ORed into
  +0x88 (`ModBase::blockHit`). The tests are the retail callbacks' own:
  - top (0x605B348C): a player or Yoshi whose CollisionMgr has 0x120 at +0x9F8;
  - side (0x605B4548): an Enemy (RTTI 0x60C7B42C, flag +0x1804 bit 0) that is a
    ShellEnemy (RTTI 0x60C830F4) whose state's root ID is
    `ShellEnemy::StateID_slide`'s (0x60C97720).
  ColliderBase calls them as (collider, the toucher's CollisionMgr, ...) and
  ignores the result (0x60160A3C, 0x60161634). The Triple Block still takes hits
  from below only.
- **Switch state is not saved.** Tsuru keeps the Red-Blue state in the save
  file. Here it is `ModBase::gSwitchBlockBlue`, which lasts while the game runs
  and starts red at boot.
- **Beep Blocks.** Tsuru swaps them from an assembly hook (`beepblock.S`).
  Here the first Beep Block in the level leads: every 240 frames it flips the
  shared colour, and the colour resets to blue when a level's first Beep Block
  appears.
- **Solid or not.** `ColliderMgr::remove` isn't mapped, so a block that turns
  off parks its collider far below the level (`ModBase::parkCollider`)
  instead of removing it.
- **Finding siblings.** Notes, shards and blocks find each other through
  `ModBase::ActorList` (each registers itself), not by walking ActorMgr.
- **Music Notes.** A note's collider is added on the frame after its manager
  is touched (adding one inside a collision callback isn't safe). The rewards
  are Deluxe profiles 591-599 and the Star Coin (426).
- **Star Coin Shards.** The Star Coin is Deluxe profile 426 (Tsuru's Wii U
  number is different); it gets the manager's own settings, so nybble 9 picks
  the coin.
- **Minecart.** As crude as Tsuru's: it starts moving at once and pins player
  1 on top of it. The path comes from `ModBase::levelPath` (area blocks 12 and
  13).
- **Helical Bar.** One code path for 1-3 bars (Tsuru had three states); the
  fire hitboxes follow their fireballs from the first frame; models update in
  `onExecute`. Its heat effects are `new`'d EffectWrappers.
- **One-Way Platform.** The platform is the kit's `tsuru::PlatformModel`,
  laid out along its rotation; unknown looks draw as wood.

## Not ported

- **Custom Powerup Block, Custom Door.** The mod already has both: the retail
  ?-blocks take custom power-ups through the extended contents, and the retail
  door is used. Skipped on purpose.
- **Wave Platform.** It needs the level camera's left edge, which wasn't
  found in Deluxe. The rest of what it reads is mapped: TileMgr 0x60CBD254 has
  the Wii U layout shifted by 4 (liquid top +0x18 / +0x1C, initialised to
  -8192; wave heights +0x20 and +0x1420; wave type +0x2820; has-waves +0x2821).

## Unverified guesses

- That CollisionMgr +0x9F8 bits 0x120 are the ground pound: they are the retail
  block's condition for a hit from above, which nothing else gives.
- The retail side test's other cases (thrown or sliding objects that aren't
  shells, by CollisionMgr +0x9E0 / +0x9E8 flags) are not copied.
- The bump sensor's size: 2 units under the block, 2 units narrower than it
  on each side.
- A player is moving up when `speed.y > 0`.
- The Triple Block's side coins come out at ±16 from its centre, going up.
- The Beep Block timer (240 frames) and the Music Note flicker (under 3 s)
  copy Tsuru's numbers; Deluxe runs at 60 fps like the Wii U.

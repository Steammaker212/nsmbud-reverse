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
| v2 | the Hammer Flower item and configurable models | built and installed; **not yet tested in-game** |

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
   `wait` and `wait2` from that archive, so include animations with those names.
4. Rebuild.

If a name can't be found, the game uses the vanilla model and logs
`[nsmbudx] remap: … not found` instead of crashing. The archives are loaded
automatically in any level that contains a Hammer Flower.

## Placing it

In your level editor, add a sprite with id **734**. No vanilla sprite places a
Fire Flower directly; they come from blocks. So test it first; this is item 3 in
the test table below. Getting it out of ?-blocks needs a new block-contents value,
which is planned.

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
| Hammer Flower profile | none (codedx profile system) | Built by the game's own Fire Flower factory (`0x6045D76C`) with its `ActorInfo` and flags, so it behaves like a Fire Flower |
| Item model and animations | six Fire Flower item functions (`0x6045D79C`, `…D980`, `…DA4C`, `…DB18`, `…DBF8`, `…DCC4`) | For a Hammer Flower only, the game's own code runs with your archive/model names swapped in (`nsmbudx::ScopedNameRemap`) |
| Collecting | Fire Flower grant (`0x6045DDC0`) | Grants Fire as usual; records whether the collector got a Hammer Flower or a plain Fire Flower |
| Throwing | `Player::createFireBall` (`0x007AABA0`) | A hammer thrower spawns profile 759 the way Hammer Bros do, then changes that one instance: skip the held state, never pair with players, attack as a Shell |

Nothing shared is patched, so Hammer Bros' own hammers still hurt Mario. If the
level has no `bros` archive loaded, the throw falls back to a fireball.

The evidence for every offset is in
[`data/findings/ledger.csv`](../../data/findings/ledger.csv) (F0009–F0025).

## Test order (v2)

| # | Do | Expect |
|---|---|---|
| 1 | Boot, enter 1-1 | Plays normally (after fixing its background name) |
| 2 | Plain Fire Flower, throw | **Fireballs** |
| 3 | Place sprite 734, enter, look at it | A Fire Flower-looking item sits there and can be collected |
| 4 | Collect it, throw | Hammers, as in v1 |
| 5 | Take damage, then a plain Fire Flower | Fireballs again |
| 6 | Set `HAMMER_ITEM_MODEL` to a name that doesn't exist, rebuild | Vanilla model, plus a `remap:` warning in the Ryujinx log, no crash |
| 7 | Hammer Bros level | Their hammers still hurt you |

## Known limits

- The hammer-thrower flag lives in memory. After a reboot, a saved Fire suit
  throws fireballs until a Hammer Flower is collected again.
- The **player's** suit still looks like Fire Mario. Swapping the player model is
  the next research item: the lead is `P_FireFlower_00` (`0x604F9090`), status
  **unknown**.

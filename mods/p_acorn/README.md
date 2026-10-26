# P-Acorn blocks

The P-Acorn (player mode 8) is a complete power-up in Deluxe: it flies like the
Acorn, with unlimited air boosts. But no level can give it; only Toad's Quest
prize item uses its model. This mod lets ?-blocks and bricks hold it, and adds it
as a placeable sprite.

**Status:** built together with the Hammer Suit and the Bee (`mods/build_all`)
and installed in Ryujinx; **not yet tested in-game**.

## Use it

| Where | How |
|---|---|
| ?-block or brick | Tick **Extended contents (+16)**, then pick **22: P-ACORN** (raw: group 4 `1000`, group 5 `0006`) |
| Directly | Sprite **736** (Yaz0moto *Items*) |

As from any Acorn block, a small player gets a Mushroom first.

## Configure (top of `code/p_acorn.cpp`)

| Setting | Default | |
|---|---|---|
| `PACORN_BLOCK_CONTENTS` | 22 | any unused 21–31 (21 is the Hammer Flower) |
| `PACORN_USE_GAME_P_MODEL` | 1 | the game's own P-Acorn model: `I_musasabiP`, a model inside the always-loaded `I_musasabi` archive |
| `PACORN_ARCHIVE` / `PACORN_MODEL` | `I_musasabi` | your own model, when `USE_GAME_P_MODEL` is 0 |

## How it works

| Fact | Ledger |
|---|---|
| No item asks the grant helper for mode 8; the Acorn asks for 7 | F0044 |
| The mode-change routine accepts any mode, 8 included | F0045 |
| Mode 8 is the P-Acorn: Wii U `PSquirrel`; Deluxe checks `== 8` next to the P-Acorn sound | F0046 |
| `I_musasabiP` is used only by the Quest prize; whether it is in a pack is unknown | F0047 |
| **Corrected:** `I_musasabiP` is a *model* in the `I_musasabi` archive (jyotyuActorPack), not an archive. The mod remapped the archive name, which always missed; since commit 7183ef71 a missed archive remap also skips the model, so the item looked like a plain Acorn. It now remaps the model only | F0224 |

So the P-Acorn is a `framework/actors` variant of the Acorn item (598). It pops
out, bounces and is collected exactly like an Acorn. One hook on the Acorn's
grant (`0x604695B0`) asks for mode 8 when the item is the P-Acorn variant.
`framework/items` puts it in blocks.

## Test order

| # | Do | Expect |
|---|---|---|
| 1 | Hit a contents-22 block as big Mario | The **P-Acorn** model (no `remap: archive 'I_musasabiP'` line in the log any more) |
| 2 | Collect it | The P-Acorn suit: unlimited spin boosts in the air |
| 3 | Collect a normal Acorn afterwards | "Already have"-style feedback, or a change back to the normal Acorn |
| 4 | Small Mario hits the block | A Mushroom first |
| 5 | Take damage | Back to big Mario, as with any suit |

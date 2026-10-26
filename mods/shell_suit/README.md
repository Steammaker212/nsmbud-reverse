# shell_suit — the Blue Shell

A Blue Shell power-up in the style of *New Super Mario Bros. DS*: collect it,
crouch while running, and you dash inside the shell at full speed, bouncing off
walls, defeating enemies and bumping blocks.

It replaces `slide_suit`, whose per-frame hook was `BrosBase::onExecute`
(0x60263D10): that function belongs to the Hammer/Fire/Boomerang Bros, not the
player, so the slide never ran (ledger F0205).

## Getting it

| Where | How |
|---|---|
| Sprite | **739** (Blue Shell item) |
| ?-block / brick | contents **23** (the editor patch's "Extended contents") |

## What it does

| Behaviour | How |
|---|---|
| Item | The game's Penguin Suit item (profile 596) as a new profile, so it pops out and is collected like the suit |
| Power | Grants PlayerMode::Penguin (5) and marks the player as a shell player; a plain Penguin Suit clears the mark |
| Shell dash | The Penguin Suit's own belly slide (Player state `0x60CC4F8C`, picked in `0x607B8CB0` when the mode is 5). Enemies react to it exactly as to the suit's slide |
| Full speed | `speedF` held at `SHELL_SPEED` (4.0, the slide's own cap) while the dash lasts |
| Bounces | When full speed moved the player less than 0.25 units, it was a wall: direction flips |
| Spins | `SHELL_SPIN` added to the facing angle each frame of the dash |
| Bumps blocks | Block **actors** it touches get their own bump handler (vtable +0x0A8, checked against its three implementations) |

## Models

`SHELL_CUSTOM_MODELS` at the top of `code/shell_suit.cpp`:

- `0` (default): the Penguin Suit item model, so it works today.
- `NSMBUDX_CUSTOM_MODELS`: your `romfs/Model/I_shell.Nin_NX_NVN.szs` (model
  `I_shell`) in this mod's `romfs/` folder; the build copies it. A build with
  `--placeholder-models` then switches back for every mod at once.

The player model is the Penguin Suit's while the power is active: a shell body
needs a new player model, which is asset work.

## Not done yet

- **Tile blocks.** Blocks drawn as tiles are not actors, so the collider path
  does not see them. Kicked Koopa shells hit tiles through their collision
  sensors; giving the dashing player those sensor flags is the next step.
- **Auto-dash at full run** (DS starts the dash when running at full speed): the
  dash starts on crouch, as for the suit.
- **Nothing here has been run in-game.** Built and checked by disassembly only.
  The ledger rows say exactly what is verified.

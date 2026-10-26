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
| Item | The game's Penguin Suit item (profile 596) as a new profile wearing the **Ice Flower model** (`I_iceflower`), so it pops out and is collected like the suit |
| Power | Grants PlayerMode::Penguin (5) and marks the player as a shell player; a plain Penguin Suit clears the mark. The mark lasts while the current *or queued* mode (`+0x2C7C`) is Penguin -- checking the current mode alone dropped it the frame after the grant, which left a plain Penguin Suit (F0228) |
| Look | The **Fire Flower suit**: the player keeps Penguin mode, but the model draws the Fire body and colours (`suits::showBodyOf` + `showColorAs`, F0226). `SHELL_LOOK_MODE -1` keeps the Penguin look |
| No iceballs | A `framework/player` throw gate: a shell player never starts a throw (`Player::canThrow` 0x607AA954 and `createFireBall` 0x607AABA0, F0225). `SHELL_CAN_THROW 1` brings them back |
| Shell dash | The Penguin Suit's own belly slide (Player state `0x60CC4F8C`, picked in `0x607B8CB0` when the mode is 5). Enemies react to it exactly as to the suit's slide |
| Full speed | `speedF` held at `SHELL_SPEED` (4.0, the slide's own cap) while the dash lasts |
| Bounces | When full speed moved the player less than 0.25 units, it was a wall: direction flips |
| Spins | `SHELL_SPIN` added to the facing angle each frame of the dash |
| Bumps blocks | Block **actors** it touches get their own bump handler (vtable +0x0A8, checked against its three implementations) |

## Models

`SHELL_CUSTOM_MODELS` at the top of `code/shell_suit.cpp`:

- `0` (default): the game's Ice Flower item model (`I_iceflower`, always
  loaded; same five item animations and `eff` joint as the Penguin item).
- `NSMBUDX_CUSTOM_MODELS`: your `romfs/Model/I_shell.Nin_NX_NVN.szs` (model
  `I_shell`) in this mod's `romfs/` folder; the build copies it. A build with
  `--placeholder-models` then switches back for every mod at once.

The player wears the Fire Flower suit while the power is active
(`SHELL_LOOK_MODE` / `SHELL_LOOK_COLORS`). A real shell body needs a new player
model, which is asset work.

## Not done yet

- **Tile blocks.** Blocks drawn as tiles are not actors, so the collider path
  does not see them. Kicked Koopa shells hit tiles through their collision
  sensors; giving the dashing player those sensor flags is the next step.
- **Auto-dash at full run** (DS starts the dash when running at full speed): the
  dash starts on crouch, as for the suit.
- **Not yet re-tested in-game** after the 2026-10-26 fixes (Ice Flower item,
  Fire look, no iceballs, the mode fix). Built and checked by disassembly.

## Test order

| # | Do | Expect |
|---|---|---|
| 1 | Hit a contents-23 block as big Mario | An **Ice Flower**-looking item |
| 2 | Collect it | Log `blue shell: collected by player 0`; Mario looks like **Fire Mario** |
| 3 | Press throw | **Nothing** -- no iceball, no throw animation |
| 4 | Run, crouch | The shell dash (full speed, wall bounces) |
| 5 | Take damage | Big Mario, normal colours |
| 6 | Collect a plain Penguin Suit | The Penguin Suit look, iceballs again |

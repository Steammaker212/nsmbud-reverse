# slide_suit

A copy of the Penguin Suit that is always sliding, faster than the real suit,
bounces off walls, and spins the player model while it goes.

The suit itself is reversed in
[`readable/player/PenguinSuit.cpp`](../../readable/player/PenguinSuit.cpp);
this mod is the thin layer on top.

## What it does

| Behaviour | How |
|---|---|
| Always sliding | Writes `speed.x` to `SLIDE_SPEED` every frame and clears `CollisionActor+0x17AC` so the friction code does not eat it |
| Faster than the suit | `SLIDE_SPEED` = 6.0 against the suit's ~2.7 slide |
| Reverses on impact | Reads `CollisionMgr::output` bits 18/19 (wall right/left) and flips `direction`, with a cooldown |
| Model spins | Adds `SLIDE_SPIN` to `StageActor::rotation.z` each frame |
| Feels like ice | Nothing to do -- see below |

## Why "always sliding" needs no ice physics

This is the part worth understanding, because it is the difference between a mod
that works and one that fights the engine.

In `handleSpeed` (`0x60003624`) the game moves the actor first and applies
friction *after*. Friction lives in `CollisionActor+0x1770` (the residual
velocity), `+0x1774` (the friction amount) and is gated by a flag at `+0x17AC`.
So "feels like ice" is not a special mode or a tile property that a mod has to
find and copy -- it is simply the residual velocity not being consumed.

This mod therefore:

1. sets `speed.x` **after** the game's own state has run (in `onExecute`, which
   the player runs every frame in every state), and
2. clears `+0x17AC` so the next frame's friction pass does not subtract from
   `+0x1770`.

Gravity and collision are untouched: you still fall, land, and get stopped by
walls. Only horizontal intent is overridden.

## The bounce

`CollisionMgr::output` (actor `+0xB38`) sets bit 18 for a right-wall contact and
bit 19 for a left one. That is the whole detection -- there is no raycast and no
extra collider here.

The cooldown (`kBounceCooldown`, 8 frames) is **not cosmetic**. `output` keeps
reporting the same contact for as long as the player overlaps the wall, so
without it the direction would flip every frame and the player would vibrate
inside the wall. The reversal needs a few frames to carry the player clear.

## The model spin

`StageActor::rotation` is a `Vec3i` at `+0x09C`, so `rotation.z` is `+0x0A4` --
an **integer**, not a float. The game's own turn code
(`BrosBase::executeState_Move`) accumulates straight into `rotation.y` and snaps
it to a per-direction integer target, which is why a full turn is `2^32`:

- `0x01000000` = 5.625° per frame
- `0x02000000` = 11.25° per frame (default)

At 60 fps the default is 675°/s -- visibly spinning, not a blur.

## What is **not** done

Two things, stated plainly rather than left to be discovered:

**1. The block trigger is not wired up.** The request was that a collision
"triggers the event of hitting that block". The event exists and is reversed:
`BlockBase::damageFromUnder` (`0x60563A08`, vtable slot `0x60C011B4`) is a
virtual that the base class leaves **empty**, so calling it does nothing on a
block with no reaction and the right thing on one that has. The real bump
handler is `BlockBase::vf16C` (`0x605640BC`), which reads `contentCode`
(`+0x1AC8`).

What is missing is *finding the block you are touching*. That needs
`ColliderMgr`'s overlap query, which this project has not reversed far enough to
call safely, and guessing at it would risk corrupting the stage. So the mod
currently does the reversal only, and the block trigger is left to the game's
own contact handling. **This is the main outstanding piece.**

**2. Ice balls are not inherited.** Firing them is the suit's attack action and
it runs through `BrosBase::createProjectile` / `throwProjectile`, which are
`ret`-only stubs in the base class that each character overrides. A copy of the
suit does not get them for free; that would be a separate hook.

## Configuration

All at the top of `code/slide_suit.cpp`:

- `SLIDE_SPEED` -- units per frame (6.0)
- `SLIDE_SPIN` -- rotation units per frame (`0x02000000`)
- `SLIDE_REQUIRES_MODE` -- which mode counts as wearing the suit
  (`PlayerMode::Penguin`); set it to `PlayerMode::Ice` to make the Ice Flower do
  this instead
- `SLIDE_LOG` -- log the first frames while testing

## Testing

Build:

```
python scripts\sdk\make_mod_project.py --repo . --mod mods/slide_suit \
  --sweetdx "<your sweet-dx>" --nso "<your main.nso>" --out mods\slide_build --build
```

Expect `[nsmbudx] slide: mode=5 dir=... rot.z=... out=...` in the Ryujinx log
while you hold the suit, and `slide: bounced` when you hit a wall. If the mode
never reads 5, the hook fired on something that is not the Penguin player.

Not yet run in-game. The build and the emitted offsets are verified (ledger
F0137); the behaviour is not.

Ledger: F0131-F0137.

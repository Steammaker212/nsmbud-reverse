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
| Triggers the block hit | Hooks `ActiveCollider_doOverlapMaybe`, recognises a player/block pair, and calls the block's own bump handler |
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

## The block trigger

This is the piece that needed the most care, and it went through a correction.

`ActiveCollider_doOverlapMaybe` (`0x601597E8`) is the collider-pair test. Its
important property is that it invokes the callbacks of **both** colliders (`blx
r2` four times, twice per side). That is the only place a player-side hook can
learn *which block it is touching* -- otherwise the player never knows.

When the pair looks like (suited player, block), the mod calls the block's real
bump handler: `BlockBase` vtable **+0x0A8** (`vf16C`, `0x605640BC`), which loads
`contentCode` (`+0x1AC8`), compares it with 13, and calls the spawn path.
`BlockCoinBase` then plays the bump animation.

Two things that are easy to get wrong here:

**It is not `damageFromUnder`.** That virtual lives at vtable `+0x1DC` and is
deliberately empty in `BlockBase` (`bx lr`) -- it is a hook for subclasses, not
the bump. Calling it produces no visible reaction from a ?-block.

**The vtable call is verified, not assumed.** Calling slot `+0x0A8` on a
non-block would jump into an unrelated function with the wrong arguments. So the
mod checks the slot against the only three implementations that exist
(`0x605640BC` shared, `0x60569738` FlyingBlockForAmbush, `0x60576938`
BabyYoshiBlock) and does nothing if it does not match. A block that overrode it
some other way simply would not be bumped -- failing in the safe direction.

A per-block cooldown stops one slide from spawning 30 items, since the pair
overlaps for several frames.

### A safety detail worth reading

The overlap hook runs for **every collider pair in the scene**, so it cannot ask
"is this owner a player?" by reading `player+0x528` the way the `onExecute` hook
does. A plain `StageActor` is only `0x284` bytes, so that read would run off the
end of the allocation on almost every actor in the level.

So the two hooks share identity differently: `onExecute` pushes its `self` into a
small table of known sliding players (it is *guaranteed* to be a BrosBase, since
the game called that class's own `onExecute`), and the overlap hook only ever
**compares pointers** against that table. Comparing a pointer does not touch the
pointee, so a stale entry cannot fault. The entry is removed again as soon as the
player loses the suit.

## What is **not** done

**Ice balls are not inherited.** Firing them is the suit's attack action and it
runs through `BrosBase::createProjectile` / `throwProjectile`, which are
`ret`-only stubs in the base class that each character overrides. A copy of the
suit does not get them for free; that would be a separate hook.

**The slide attack type is not set either.** The mod moves fast and bounces, but
it does not publish `Attack::PenguinSlip` (10) on the player's collider at
`+0x8C`, so enemies do not yet react to the slide as an attack. The mechanism is
reversed and documented in `readable/player/PenguinSuit.cpp`; wiring it up needs
the per-frame value the game already writes to be restored afterwards, which
deserves its own test pass rather than being guessed at here.

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

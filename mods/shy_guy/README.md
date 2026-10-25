# Shy Guy

A new sprite, **737**, with the **Goombrat's mechanics**: it turns around at the
edge of a platform instead of walking off it.

It is the game's own Goomba class (profile 468, Goombrat/Kakibo) made into a new
actor by [`framework/actors`](../../framework/actors), with your model in place
of the vanilla one. No Goomba code is rewritten.

**Status:** built into `mods/build_all` alongside the Hammer Suit, Bee and
P-Acorn; `subsdk0` links and passes the init check. **Not yet tested in-game** --
the model does not exist yet (see below).

## Why Goombrat and not Goomba

Goomba (467) and Goombrat (468) are **one C++ class**: one build function, one
state table, one copy of every virtual. The only difference is a single
comparison in `Goomba::onCreate` (`0x603393F0`):

```c
isGoombrat = Actor::getProfileId(this) == 468;
```

and from that one flag the game derives the archive (`kakibo` vs `kuribo`), the
starting walk state, the animation set, the tuning numbers and which enemy
counter to bump. That is why this mod is three lines of configuration: build
with profile **468** and the game produces a Goombrat. The evidence is
`ledger.csv` F0091-F0101 and the readable source is
[`readable/enemy/Goomba.cpp`](../../readable/enemy/Goomba.cpp).

The turn itself is `0x6033AA2C`: every frame, if the actor is touching ground,
it probes for floor one and a half units ahead (`x+1.5`, `y+4.0` down to
`y-6.0`, tile size 8) and reports "turn" when there is none. A Goomba has the
same probe available but its walk state only consults it when the forward probe
comes back unresolved -- so it steps off ledges, and a Goombrat does not.

## Configure (top of `code/shy_guy.cpp`)

```c
#define SHYGUY_ARCHIVE        "shyguy"   // romfs/Model/shyguy.Nin_NX_NVN.szs
#define SHYGUY_MODEL          "shyguy"   // model name inside it
#define SHYGUY_BEHAVES_LIKE   GoombaProfile::Goombrat   // 468; use Goomba (467) to walk off ledges
#define SHYGUY_VANILLA_ARCHIVE "kakibo"  // what the remap replaces; match the line above
#define SHYGUY_VANILLA_MODEL   "kakibo"
```

Your archive needs the animations the Goomba class plays, under the vanilla
names (a missing one is logged and falls back, it does not crash):

- a model named `SHYGUY_MODEL`;
- skeletal animations **`walk`** (played at creation), **`walk0`** (walking) and
  **`walk1`** (the Goombrat's walk);
- the same three names as **texture** animations, if your model uses them.

Until the archive exists the Shy Guy shows the Goombrat's model and the log says
`remap: archive 'kakibo' is not loaded` -- useful for testing the mechanics
before any art exists.

## Place it

Sprite **737** in Yaz0moto (the `steam-dx-test` patch lists it under *Enemies*).
Its settings are the Goomba's:

- nybble 1 (type): 0 default, 1 alternate collision, 2 no player collision,
  3/6 ceiling, 4/5 parent-follow, 7 spawn far back, 8 as 1
- nybble 2 bits: type-2 vertical offset, in 16-unit steps
- nybble 13: start facing / parent flags

## Test table

| Check | Expected | Result |
|---|---|---|
| `subsdk0` builds and links | PASS | **PASS** (`mods/build_all`, 53,821 bytes) |
| Profile 737 registered, resource list built | no "cannot register" in the log | built; not yet read back on hardware |
| Sprite 737 appears in a level | Shy Guy visible, walks | not tested |
| Walks to a ledge | turns around, does not fall | not tested |
| Walks to a wall | keeps walking into it (Goombrat does not jump) | not tested |
| Stomped / fireball / shell | same reactions as a Goomba | not tested |

## What is deliberately *not* here

The Shy Guy does not throw, fly or carry anything: the Goomba class has no such
code. A Shy Guy that behaves like the *Shy Guy enemy* from other games (walk,
turn at walls, sometimes ride a stilt) would need a different base actor per
ability -- the framework supports several variants per build, so a second
profile based on, say, a Koopa Troopa (512) could add the shell behaviour
alongside this one.

# readable

The game's source, reconstructed by hand into readable C++ in the style of the
Wii U decomp (red-pro2) and codedx: real names, real control flow, one file per
class. Each function carries the address it reconstructs, and every fact it uses
is in [`data/findings/ledger.csv`](../data/findings/ledger.csv).

These files **document** the game. They are not compiled into mods. Mods use the
headers in [`framework/game/`](../framework/game/), which share these names.

| File | Covers |
|---|---|
| [engine/Actor.cpp](engine/Actor.cpp) | the actor tower and the state machine: `Actor` (0x50) → `StageActor` (0x284) → `CollisionActor` → `StateActor`/`MultiStateActor` → `Enemy`; `ActorMgr::create`'s three-way verdict, how an actor's id and heap are chosen (by profile id), why collision size comes from `ActorInfo` and not the model, and `StateMgr` |
| [engine/ArchiveMgr.cpp](engine/ArchiveMgr.cpp) | how a profile's archives are loaded: the per-id resource tables, `"Model/%s.Nin_NX_NVN.szs"` built at load time, the `hasResourceLoaded` guard, and the `block_ice` special case |
| [engine/CollisionActor.cpp](engine/CollisionActor.cpp) | the physics: the one `CollisionMgr::output` word and its flags, slopes as sine-table lookups rather than angles, how velocity is rotated on a slope, the friction order, and the four sensor slots |
| [map_obj/BlockBase.cpp](map_obj/BlockBase.cpp) | ?-blocks and bricks: contents → content code, what each code does when hit, spawning a power-up |
| [item/ItemMgr.cpp](item/ItemMgr.cpp) | content code → item → profile, the player-mode gate, the single spawn funnel |
| [player/PlayerModel.cpp](player/PlayerModel.cpp) | power-up mode → body model, and how suit colours are chosen (`setColorType`) |
| [player/PenguinSuit.cpp](player/PenguinSuit.cpp) | the Penguin Suit: it is a mode (5), not an actor; the slide is attack type 10 with a per-enemy dispatch; the block bump is a virtual whose base is empty; rotation is an integer `Vec3i` the turn code accumulates into directly |
| [boss/Lemmy.cpp](boss/Lemmy.cpp) | World 1's boss and every Koopaling: stamina is two constant virtuals (24 HP, 6 per phase = 4 phases); being hit funnels through `vf15C`; winning opens a Kupper door by *link id*, not a goal pole — the actual level requirement |
| [enemy/EnemyDamage.cpp](enemy/EnemyDamage.cpp) | how every enemy decides what a hit does: the player, Yoshi, baby Yoshi and projectile dispatchers, their damage-mask gates and the 17 reactions |
| [enemy/Goomba.cpp](enemy/Goomba.cpp) | the Goomba family (467-473, 892-893): profile 467/468 from one registration, why a Goombrat turns at ledges, the walk decision, the type nybbles, the class layout |
| [enemy/Pukupuku.cpp](enemy/Pukupuku.cpp) | the Cheep Cheep family (530–538): profile → mode, facing, model and animation names, states, the water-surface clamp, formations |

Coverage grows one verified subsystem at a time; [docs/RE_PLAN.md](../docs/RE_PLAN.md)
gives the order. Where a detail isn't established, the code says so in a comment
(`unknown` / `inferred`) instead of guessing.

The machine-generated C for **every** function is in
[`decompiled/src/`](../decompiled/src/). It's complete but hard to read; this
folder is the readable layer on top.

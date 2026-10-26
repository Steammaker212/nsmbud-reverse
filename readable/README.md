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
| [boss/Koopalings.cpp](boss/Koopalings.cpp) | all seven siblings as one table: 26 slots are the per-sibling contract, 31 are individual behaviour, and 9 are pure tuning constants — plus why a missed slot gives you 0.0, not a default |
| [enemy/EnemyDamage.cpp](enemy/EnemyDamage.cpp) | how every enemy decides what a hit does: the player, Yoshi, baby Yoshi and projectile dispatchers, their damage-mask gates and the 17 reactions |
| [enemy/Goomba.cpp](enemy/Goomba.cpp) | the Goomba family (467-473, 892-893): profile 467/468 from one registration, why a Goombrat turns at ledges, the walk decision, the type nybbles, the class layout |
| [enemy/Pukupuku.cpp](enemy/Pukupuku.cpp) | the Cheep Cheep family (530–538): profile → mode, facing, model and animation names, states, the water-surface clamp, formations |
| [enemy/Choropoo.cpp](enemy/Choropoo.cpp) | Monty Mole (`choropoo`, profile 611, sprite 51). Written as "the Rocky Wrench"; corrected in its header (F0208) -- the function addresses are Monty Mole's and stand |
| [enemy/RockyWrench.cpp](enemy/RockyWrench.cpp) | The real Rocky Wrench (profile 617, sprite 536): build, onCreate, onExecute, the spanner throw and the manhole defeat; Choropoo.cpp is Monty Mole |
| [actor/ActorSpawner.cpp](actor/ActorSpawner.cpp) | the custom actor spawner (codedx's `ActorSpawner`, re-reversed for Deluxe): what a placement field can carry, `ActorMgr::create`'s verdict arithmetic, and the one codedx offset that must not be copied — the event mask is at `EventMgr+0x10`, not `+0x0` |
| [engine/ActorMgr.cpp](engine/ActorMgr.cpp) | the manager every actor is built through: `create`'s real dispatch order (it calls `beforeCreate` → `onCreate` → `afterCreate` itself; the base `afterCreate` is a bare `bx lr`), the `3 - onCreate()` verdict arithmetic, why `onCreate` must return **1** for a `StageActor` to snapshot its spawn position, the two separate flags at `+0x12`/`+0x13`, and the unloaded-archive sentinel check that makes spawning an unresident profile do nothing instead of crash |
| [resources/ItemModelCrash.cpp](resources/ItemModelCrash.cpp) | why "archive not loaded" is a hard crash and not a fallback: the two lookups an item does (`ResArchiveMgr::get` → `ResArchive::getModel`), the six Fire Flower item functions that do them, how `0x6040F050` stores the model and reloads it as a vtable with no null check (fault at PC `0x6087CEF0`, `ldm r0` with `r0 = 0`), the two independent reasons a custom archive is missing, and the log line that identifies this crash in future |

Coverage grows one verified subsystem at a time; [docs/RE_PLAN.md](../docs/RE_PLAN.md)
gives the order. Where a detail isn't established, the code says so in a comment
(`unknown` / `inferred`) instead of guessing.

The machine-generated C for **every** function is in
[`decompiled/src/`](../decompiled/src/). It's complete but hard to read; this
folder is the readable layer on top.


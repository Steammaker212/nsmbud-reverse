# readable

The game's source, reconstructed by hand into readable C++ in the style of the
Wii U decomp (red-pro2) and codedx: real names, real control flow, one file per
class. Each function carries the address it reconstructs, and every fact it uses
is in [`data/findings/ledger.csv`](../data/findings/ledger.csv).

These files **document** the game. They are not compiled into mods. Mods use the
headers in [`framework/game/`](../framework/game/), which share these names.

| File | Covers |
|---|---|
| [map_obj/BlockBase.cpp](map_obj/BlockBase.cpp) | ?-blocks and bricks: contents → content code, what each code does when hit, spawning a power-up |
| [item/ItemMgr.cpp](item/ItemMgr.cpp) | content code → item → profile, the player-mode gate, the single spawn funnel |
| [enemy/Pukupuku.cpp](enemy/Pukupuku.cpp) | the Cheep Cheep family (530–538): profile → mode, facing, model and animation names, states, the water-surface clamp, formations |

Coverage grows one verified subsystem at a time; [docs/RE_PLAN.md](../docs/RE_PLAN.md)
gives the order. Where a detail isn't established, the code says so in a comment
(`unknown` / `inferred`) instead of guessing.

The machine-generated C for **every** function is in
[`decompiled/src/`](../decompiled/src/). It's complete but hard to read; this
folder is the readable layer on top.

# mods

Each folder is one mod; build it with `scripts/sdk/make_mod_project.py`
([docs/MODDING.md](../docs/MODDING.md) §2).

| Mod | What it does | Status |
|---|---|---|
| [hammer_suit](hammer_suit/) | The Hammer Flower power-up (sprite 734): throws Hammer Bros hammers, with item and projectile model names configurable at the top of `hammer_suit.cpp` | v1 verified in-game; v2 (the item) built, awaiting test |
| [diag_passthrough](diag_passthrough/) | The Hammer Suit's hook with nothing in it, for telling "the mod's logic" apart from "the module or the content" | diagnostic |

Start a new mod by copying `hammer_suit/`'s layout: `code/`, `hooks/`, `symbols/`,
`requires.txt`, `profiles.txt` and a README with a test table.

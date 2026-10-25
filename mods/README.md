# mods

Each folder is one mod. Only one `subsdk0` can load, so a release build lists
every mod you use:

```sh
python scripts/sdk/make_mod_project.py --mod mods/hammer_suit --mod mods/bee \
    --sweetdx "<sweet-dx dir>" --nso <main> --out mods/build_all --build --with-template-code
```

| Mod | What it does | Sprite | Status |
|---|---|---|---|
| [hammer_suit](hammer_suit/) | The Hammer Flower power-up: throws Hammer Bros hammers, comes in ?-blocks/bricks as contents 21, model names configurable | 734 | v1 verified in-game; v2/v3 built, awaiting test |
| [bee](bee/) | A Cheep Cheep that flies, with your bee model (framework/actors) | 735 | built, awaiting test |
| [diag_passthrough](diag_passthrough/) | The Hammer Suit's hook with nothing in it, to tell "the mod's logic" apart from "the module or the content" | — | diagnostic |

Sprite ids are fixed in each mod's `profiles.txt` and never shift. Build a mod on
its own and the ids before it are filled with a placeholder.

Start a new mod by copying a mod's layout: `code/`, `hooks/`, `symbols/`,
`requires.txt`, `profiles.txt`, and a README with a test table.

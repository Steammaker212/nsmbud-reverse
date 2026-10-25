# mods

Each folder is one mod. Only one `subsdk0` can load, so a release build lists
every mod you use:

```sh
python scripts/sdk/make_mod_project.py --mod mods/hammer_suit --mod mods/bee --mod mods/p_acorn \
    --sweetdx "<sweet-dx dir>" --nso <main> --out mods/build_all --build --with-template-code
```

| Mod | What it does | Sprite | Status |
|---|---|---|---|
| [hammer_suit](hammer_suit/) | The Hammer Flower power-up: throws Hammer Bros hammers, comes in ?-blocks/bricks as contents 21, wears the Ice colours on every character, model names configurable | 734 | verified in-game; Toad crash fixed in beta 0.1, awaiting test |
| [bee](bee/) | A Cheep Cheep that flies, with your bee model (framework/actors) | 735 | built, awaiting test |
| [yoshi_fire](yoshi_fire/) | Every enemy Yoshi eats becomes fire (or ice) breath (framework/yoshi) | — | built, awaiting test |
| [yoshi_tuning](yoshi_tuning/) | Yoshi's numbers as data patches: an egg every 3 fruits, a 60-frame flutter jump | — | built, awaiting test |
| [worldmap_log](worldmap_log/) | Logs every parsed world map at boot, to check a custom world (framework/worldmap) | — | built, awaiting test |
| [p_acorn](p_acorn/) | The P-Acorn (mode 8) from ?-blocks/bricks (contents 22) and as a sprite; the game never gives it in levels | 736 | verified in-game |
| [diag_passthrough](diag_passthrough/) | The Hammer Suit's hook with nothing in it, to tell "the mod's logic" apart from "the module or the content" | — | diagnostic |

Sprite ids are fixed in each mod's `profiles.txt` and never shift. Build a mod on
its own and the ids before it are filled with a placeholder.

Start a new mod by copying a mod's layout: `code/`, `hooks/`, `symbols/`,
`requires.txt`, `profiles.txt`, and a README with a test table.

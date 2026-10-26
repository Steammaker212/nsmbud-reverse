# mods

Each folder is one mod. Only one `subsdk0` can load, so a release build lists
every mod you use:

The full release (every gameplay mod; what beta showcase v0.2 ships):

```sh
python scripts/sdk/make_mod_project.py --mod mods/hammer_suit --mod mods/bee --mod mods/p_acorn \
    --mod mods/shy_guy --mod mods/shell_suit --mod mods/yoshi_fire --mod mods/yoshi_tuning \
    --mod mods/worldmap_log --mod mods/custom_spawner --mod mods/custom_boss \
    --sweetdx "<sweet-dx dir>" --nso <main> --out mods/release_all --build --with-template-code
```

**Your models or the game's:** add `--placeholder-models` and every mod uses the
game's own model instead of your archive (`framework/core` `nsmbudx/models.h`).
If the placeholder build works and the normal one does not, the archive is to
blame. Each mod can also pin its choice on one line (`HAMMER_CUSTOM_MODELS` and
so on). A mod's archives go in its own `romfs/Model/` folder; the build copies
them into the output.

| Mod | What it does | Sprite | Status |
|---|---|---|---|
| [hammer_suit](hammer_suit/) | The Hammer Flower power-up: throws Hammer Bros hammers, comes in ?-blocks/bricks as contents 21, wears the Ice colours on every character, model names configurable | 734 | verified in-game; custom item model + block crash fixed in beta 0.2, awaiting test |
| [bee](bee/) | A Cheep Cheep that flies, with your bee model (framework/actors) | 735 | built, awaiting test |
| [yoshi_fire](yoshi_fire/) | Every enemy Yoshi eats becomes fire (or ice) breath (framework/yoshi) | — | built, awaiting test |
| [yoshi_tuning](yoshi_tuning/) | Yoshi's numbers as data patches: an egg every 3 fruits, a 60-frame flutter jump | — | built, awaiting test |
| [worldmap_log](worldmap_log/) | Logs every parsed world map at boot, to check a custom world (framework/worldmap) | — | built, awaiting test |
| [shy_guy](shy_guy/) | A Shy Guy with the Goombrat's mechanics: it turns at ledges (framework/actors) | 737 | built, awaiting test |
| [shell_suit](shell_suit/) | The Blue Shell (NSMB DS): Penguin powers plus a shell dash that holds full speed, bounces off walls and bumps block actors; contents 23 | 739 | built, awaiting test |
| [custom_spawner](custom_spawner/) | An actor spawner with an optional event gate, 1-16 spawns and a spread (codedx's sprite 726 is the plain event-triggered one) | 738 | built, awaiting test |
| [custom_boss](custom_boss/) | World 1 boss (Lemmy) tuning: 12 HP in phases of 3, plus logging of every hit | — | built, awaiting test |
| [p_acorn](p_acorn/) | The P-Acorn (mode 8) from ?-blocks/bricks (contents 22) and as a sprite; the game never gives it in levels | 736 | verified in-game |
| [diag_passthrough](diag_passthrough/) | The Hammer Suit's hook with nothing in it, to tell "the mod's logic" apart from "the module or the content" | — | diagnostic |

Sprite ids are fixed in each mod's `profiles.txt` and never shift. Build a mod on
its own and the ids before it are filled with a placeholder.

Start a new mod by copying a mod's layout: `code/`, `hooks/`, `symbols/`,
`requires.txt`, `profiles.txt`, and a README with a test table.

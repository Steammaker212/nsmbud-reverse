# sdk

The generated game API. Regenerate it with `scripts/sdk/gen_game_api.py` and
`scripts/sdk/classify_entries.py`; don't edit these files by hand.

| File | What it is |
|---|---|
| `include/nsmbudx/game.h` | C declarations for 7,079 named game functions. ABI-exact: pointers are `void *`, scalars keep their width. Each line names its decompiled source file and marks `[hook]` if it is trampoline-safe |
| `symbols/nsmbudx_game.sym` | Their addresses (RVAs) for sweet-dx's linker |
| `data/hookable.csv` | For every named function: its entry instruction, and whether a sweet-dx trampoline can replay it (6,771 can) |

Left out on purpose, so they can never collide with the module:

- names the module itself defines (`_init`, `_fini`, …);
- names codedx's `main.sym` already defines;
- functions whose signature cannot be expressed without guessing.

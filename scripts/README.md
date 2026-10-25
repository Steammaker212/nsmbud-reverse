# scripts

## Use these

| Folder | Script | What it does |
|---|---|---|
| `sdk/` | `make_mod_project.py` | Assemble, build and check a mod |
| | `inspect_subsdk.py` | Fail a `subsdk0` whose DT_INIT or MOD0 points outside the module |
| | `symbolize_crash.py` | Turn an Atmosphère crash report or a Ryujinx log into function names |
| | `course_sprites.py`, `course_tilesets.py` | List a level's sprite ids; check every tileset it names exists |
| | `profile_resources.py` | Which archives a profile loads |
| | `gen_game_api.py`, `classify_entries.py` | Regenerate `sdk/` (game API, hook safety) |
| `ida/` | `ida_rpc.py` | Talk to a live IDA (ida-pro-mcp, JSON-RPC on 127.0.0.1:13337). Writes are refused unless a saved-as copy is open |
| | `export_decompiled.py` | Export every function's Hex-Rays output (read-only) |
| | `plan_types.py`, `apply_types.py` | Plan struct types and `this` prototypes from the corpus; apply them to the copy |
| `pipeline/` | (see its README) | Builds the decompiled corpus in `decompiled/src/` |

## The loose scripts here

The ~440 `.py` files directly in `scripts/` are earlier one-off research
scripts: patch builders, checks for specific hypotheses, table dumps. They are
kept for history. Their conclusions are quarantined like `docs/legacy/`, and
several hard-code paths from an older layout. Don't build on one without
re-checking what it claims.

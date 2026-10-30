# scripts

## Use these

| Folder | Script | What it does |
|---|---|---|
| `sdk/` | `inspect_subsdk.py` | Fail a `subsdk0` whose DT_INIT or MOD0 points outside the module |
| | `symbolize_crash.py` | Turn an Atmosphère crash report or a Ryujinx log into function names |
| | `course_sprites.py`, `course_tilesets.py` | List a level's sprite ids; check every tileset it names exists |
| `ida/` | `ida_rpc.py` | Talk to a live IDA (ida-pro-mcp, JSON-RPC on 127.0.0.1:13337). Writes are refused unless a saved-as copy is open |
| | `export_decompiled.py` | Export every function's Hex-Rays output (read-only) |
| | `plan_types.py`, `apply_types.py` | Plan struct types and `this` prototypes from the corpus; apply them to the copy |
| | `fetch.py` | Hex-Rays text for one address, with address tags kept (`--tags`), a vtable dump (`--vtable A --count N`), and a disassembly fallback when the decompiler refuses |
| | `dump_range.py` | One review file for a whole class: `--out x.c 0xADDR ...` or `--lo/--hi` over a range |
| | `elf.py` | Read the rebased ELF directly, with no IDA session: `sections`, `rd`, `str`, `f32`, `dis` (`--thumb`). Deterministic where the RPC intermittently fails, and it decodes functions IDA left undefined |
| | `sarc.py` | Unpack a `.szs`: Yaz0 inflate + SARC. `list`, `tree`, `cat`, `info`, `hexdump` |
| | `bfres.py` | Read a Switch BFRES model: `info`, `anims` (the skeletal animation names), `strings`, `sections`. Little-endian; the Wii U layout differs |
| `models/` | `wiiu2dx.py`, `convert_wiiu_model.py`, ... | Wii U model conversion ([docs/WIIU_MODELS.md](../docs/WIIU_MODELS.md)) |
| `worldmap/` | `wmtool.py`, `wm_tables.py` | World maps ([docs/WORLDMAP.md](../docs/WORLDMAP.md)) |

`sdk/make_mod_project.py`, `sdk/profile_resources.py`, `sdk/gen_game_api.py`,
`sdk/classify_entries.py`, `pipeline/` and most of `ida/` worked on the removed
`mods/`, `framework/`, `sdk/` and `decompiled/` trees and no longer run as they are.

## The loose scripts here

The ~440 `.py` files directly in `scripts/` are earlier one-off research
scripts: patch builders, checks for specific hypotheses, table dumps. They are
kept for history. Their conclusions are leads, not facts, and
several hard-code paths from an older layout. Don't build on one without
re-checking what it claims.

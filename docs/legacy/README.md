> **Legacy.** These reports predate [the plan](../RE_PLAN.md). Treat every claim as a lead until it is re-verified and recorded in `data/findings/ledger.csv`.

# NSMBUDX (Switch) — `main.nso` analysis kit

Reverse-engineering kit for the Nintendo Switch build of *New Super Mario Bros.
U Deluxe*, built from the game's `main` NSO (the 32-bit ARM executable from the
exefs).

**Read [`NOTES.md`](NOTES.md)** — it is the full writeup: what the binary is,
how the actor system and the player state machine work, where the powerups and
their 3D models live, and what to do about the `.idb` and the emulator question.

## Quick start

```bash
# regenerate the analysis image from the NSO (deterministic, hash-verified)
python3 nso2elf32.py main.nso -o main32e.elf

# import main32e.elf into Ghidra
#   -> language auto-detects as ARM:LE:32:v8, image base 0x0
#   -> Ghidra addresses are the module's runtime RVAs
```

Requirements: Python 3.10+ (standard library only) and Ghidra 12.1.x.

## Contents

| Path | What it is |
|---|---|
| `NOTES.md` | The writeup. Start here. |
| `nso2elf32.py` | NSO0 (ARM32) → ELF32 ARM `ET_EXEC` converter. Verifies every decompressed segment against the SHA-256 in the NSO header before writing anything. |
| `main32e.elf` | The analysis image (13,102,296 bytes). |
| `actor_catalog.csv` | 284 build wrappers + 686 actor-spawn call sites, with actor IDs and RVAs. |
| `actor_id_sites.csv` | Every code site (51,406) that mentions an actor ID. |
| `findings_strings.json` | Item/model/state/SFX names and asset path templates, with RVAs. |
| `scripts/DumpInfo.java` | Ghidra post-script: language, function count, string→function references, largest functions. |
| `scripts/MemMap.java` | Ghidra post-script: memory map (use it to check a load looks right). |
| `scripts/DisasmAt.java` | Ghidra post-script: disassemble + decompile at given addresses, no full analysis needed. |
| `scripts/TraceAt.java` | Ghidra post-script: callers + pseudocode for given addresses. |
| `scripts/FindIdConstant.java` | Ghidra post-script: find every site where an actor ID constant is materialised. |
| `tools/*.py` | The offline scanners used to produce everything above. |
| `tools/*.log` | Raw Ghidra output backing the numbers in `NOTES.md`. |

## The short version

* `main.nso` is **32-bit ARM (AArch32)**, not 64-bit — that is why AArch64
  Switch loaders reject it.
* The NSO is structurally an **ELF32 ARM image** with the header replaced, so
  the conversion is a repackaging.
* Every actor in the game is a **numeric ID compiled into the code**; all
  creation goes through `main+0x8DE044`. Grep the ID to find the actor.
* The player state machine is registered by the static constructor
  `main+0x2830C`; `power_up` is state **#21**, handled by `FUN_00032ECC`.
* The visuals are **3D models** (`.szs` archives in ROMFS), looked up by name
  string — not 2D sprite atlases.

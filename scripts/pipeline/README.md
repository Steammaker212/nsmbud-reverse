# Decompilation pipeline

These scripts turn the retail Deluxe (Switch) `main` module, as it exists in the
IDA database, into the C sources under `decompiled/`. Every step is offline and
reproducible: nothing here depends on a live IDA GUI session, and nothing here
invents a name or a struct layout.

The order matters. Each script consumes the previous one's output.

```
main.i64
   |  export_all.py            Hex-Rays every function -> JSONL
   v
all_functions.jsonl
   |  normalize_c.py           field/global accesses -> macros
   v
norm.jsonl
   |  generate_corpus.py       group by subsystem -> <group>/<group>.c + headers
   v
corpus/
```

`emit_per_function.py` and `measure_per_function.py` are the verification pair
used to reach a corpus that actually parses; `verify_units.py` reports the error
profile per subsystem.

## Scripts

| Script | Purpose |
| --- | --- |
| `export_all.py` | Headless Hex-Rays export of every function to JSONL. |
| `export_data_symbols.py` | Dump named data symbols with their addresses. |
| `build_name_plan.py` | Build the rename plan offline from the export. |
| `apply_name_plan.py` | Apply the plan headlessly and **save** the database. |
| `normalize_c.py` | Layout-independent field access, `MEMORY[]`, scope flattening. |
| `generate_corpus.py` | Emit grouped C and the shared headers. |
| `emit_per_function.py` | Emit one `.c` per function for isolated verification. |
| `measure_per_function.py` | Compile each unit, close undeclared symbols, report. |
| `verify_units.py` | Per-subsystem error profile. |
| `classify_unnamed.py` | Shape classification of still-unnamed functions. |
| `build_structs.py` | Recover struct layouts from measured field offsets. |
| `propose_names.py` | Evidence-based naming proposals for unnamed functions. |

## Why the renames happen headlessly

The IDA MCP plugin exposes no "save database" RPC, so a rename issued over MCP
lives only in the running session and is lost. `apply_name_plan.py` therefore
runs `idat.exe -A -S<script>` against a *copy* of the database and calls
`ida_loader.save_database()`, which is the only way a rename survives.

Never point a headless run at the original `main.i64` while a GUI holds it.

## Naming rules

See `decompiled/NAMING.md`. In short: `Class__method`, `Class__ctor`,
`Class__dtor`, `Class__method_const`, `Class__operator_eq`. A function keeps its
`sub_XXXXXXXX` name until there is evidence for something better — a vtable
slot, a symbol in the shipped binary, a call site, or a matching name in the
engine headers.

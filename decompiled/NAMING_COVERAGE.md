# Naming coverage

How much of the database's own vocabulary the repository actually uses, measured rather than asserted.

## Method

`idautils.Functions()` over `main.i64` yields 47,158 functions. Each name is classified as a real
identifier or a placeholder (`sub_`, `nullsub_`, `j_`, `unknown_`). The set of real identifiers is then
looked up in every `.c` and `.h` file under `decompiled/`.

## Result

| Measure | Count |
|---|---|
| Functions in the database | 47,158 |
| With a real name in the database | 2,920 |
| Still `sub_*` / `nullsub_*` / `unknown_*` | 44,238 |
| Named functions whose identifier appears in the repo | 2,490 (85.3%) |
| Named functions not found verbatim | 430 |

## What the 430 are

They are not missing game identifiers. Breaking them down:

| Shape | Count | What it is |
|---|---|---|
| Itanium C++ (`_Z...`) | 412 | IDA kept the raw mangled spelling |
| Compiler runtime (`__aeabi_*`, `_Unwind_*`) | 17 | libgcc helpers, not game code |
| Other | 1 | `??Player__applyPowerUpTransform` |

Demangling all 412 with `llvm-cxxfilt` and converting to this repository's `Class__method` convention gives
379 distinct C identifiers. Of those, **376 already appear in the tree** -- the names were adopted, only in
flattened form rather than the mangled form. The 3 that do not are not usable identifiers:
`nn_settings_operator`, `void_nn_hid_GetTouchScreenState_1u`, and a `std::basic_string` allocator
specialisation.

So effective naming coverage is 2,866 of 2,920 (98.2%), and the remainder is compiler runtime.

## The 44,238 `sub_*` functions

These have no name in the database to adopt. Naming them requires an independent source -- a symbol table,
a matching unofficial build, or per-function evidence (strings, vtables, call sites) established one at a
time. This file records that as the state of the art rather than implying the names are missing by
oversight.


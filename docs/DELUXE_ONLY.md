# Deluxe-only findings

Every address, layout and name in this repository was recovered from the **retail Deluxe (Switch) v1.0.0** main module:

```
file    main.i64 (IDA Pro 9.3) / convertedmain.rebased.elf
image   0x60000000 base, 13,085,363 bytes
md5     f8a2e4c3616b8a99632b8ffe68938c34
```

None of it is derived from the Wii U original. That distinction matters because the two builds differ in object layout, in function addresses, and in which gameplay systems exist at all -- a hook address from here is meaningless on Wii U.

## What is marked

| Artefact | Count | Field |
| --- | --- | --- |
| `data/loader/main.sym` | 23502 | `# ` header lines |
| `data/loader/symbols.csv` | 23502 | `scope` column, always `deluxe-only` |
| `hooks/hooks.hks` | 1 | `# ` header lines |
| `data/loader/stub_maplist.txt` | 1789 | `# ` header lines |

## What is *not* claimed Deluxe-only, and why

- **Standard library and SDK functions** (`memcpy`, `sinf`, `nn::os::*`) are the same code in both builds. Their presence is not a Deluxe finding, though the addresses are.
- **C++ runtime** (`operator_delete`, `__cxa_guard_acquire`) is toolchain-supplied. The 1,789 veneers are a Deluxe layout detail; the functions they call are not.

## Cross-build comparison

No Wii U reference tree was consulted for this pass, so no cross-build claim is made either way.

## How this is enforced

`scripts/pipeline/mark_deluxe_only.py` writes the markers and is idempotent. `scripts/pipeline/check_loader_consistency.py` refuses a `main.sym` without the marker, so an unmarked artefact cannot be committed by accident.

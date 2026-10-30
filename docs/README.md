# SweetDX project — NSMBU Deluxe reverse-engineering findings

Everything this project learned about *New Super Mario Bros. U Deluxe* (Switch,
v1.0.0), expressed in the format [SweetDX](https://github.com/jabonchan/sweet-dx)
consumes. Drop this folder in as a SweetDX `source/` directory and the findings
become buildable, hackable code instead of prose.

SweetDX is a Deno/TypeScript port of [LibHakkun](https://github.com/fruityloops1/LibHakkun)
and [codedx](https://github.com/RicBent/codedx).

## Layout

```
sweetdx/
  code/         .cpp sources   -- the readable findings (compiled)
  hooks/        .hks files     -- the shipped patches
  experimental/ .hks files     -- NOT loaded; unproven hooks, see below
  findings/     .cpp files     -- readable notes that must NOT be compiled
  symbols/      .sym file      -- 3,172 recovered symbol addresses
  include/      .h headers     -- class layouts recovered from the binary
```

SweetDX requires exactly `code/`, `hooks/`, `symbols/`, `include/` plus `nso/main` (the
game's original NSO, which you supply — it is not distributed here). `experimental/` and
`findings/` are not read by SweetDX; they are kept so the work is not lost.

**`findings/` is not a style choice.** Any `.cpp` in `code/` runs its file-scope
constructors when `subsdk0` loads. `Profile`'s constructor does `Profiles[id] = this`
unconditionally, so declaring a `Profile` at file scope **replaces** whatever the game
already registered under that id. That is exactly what broke the first build. Findings
that merely *describe* an engine object go in `findings/`.

**This project builds.** With SweetDX v0.0.3 it compiles and links cleanly and emits a
`subsdk0` (577 bytes) and an IPS patch (428 bytes, 36 records, 240 patched bytes). Every
critical byte was then re-read out of the IPS and checked against the reference build —
see [VERIFICATION.md](VERIFICATION.md). [BUILD_FIXES.md](BUILD_FIXES.md) covers the five
build faults that had to be fixed first.

**It also broke the game when it was actually run.** The first in-console test showed
severe rendering corruption in the level and a crash on touching the Hammer. One cause is
fixed and one is quarantined; read
[INCIDENT_2026-10-22.md](INCIDENT_2026-10-22.md) before trusting anything here. The
fixes have **not** been tested in-game, so treat this as unverified.

That article is worth reading for a second reason: a clean build and a byte-exact patch
proved nothing about correctness. The real defects passed every check in this repo at the
time, including a validator that compared hook bytes to a reference image — because the
hooks *did* reproduce the reference image faithfully. They were simply hooked to the
wrong things. See IDA_VERIFICATION.md (in the removed `docs/legacy/`).

The article also documents a mistake I made *while writing it*: I removed six hooks
believing they pointed table lookups at executable code, when the words are PC-relative
offsets that decode correctly. They are restored. The correction is in the doc rather than
quietly fixed, because the reasoning error is the useful part.


## What is in here

| Finding | Where |
|---|---|
| Cheep Cheep family (profiles 530–547) | `findings/pukupuku.cpp` (not compiled) |
| Hammer as a new power-up (mode 10) | `code/powerup_modes.cpp` + `hooks/hammer_*.hks` |
| Power-up mode tables + item-grant gate | `hooks/item_grant.hks`, `hooks/mode_tables.hks` |
| Unproven Hammer hooks | `experimental/hammer_profile_experimental.hks` |
| Actor class layouts | `include/actor/*.h` |
| Symbol addresses | `symbols/nsmbudx.sym` |
| Build faults and their evidence | `BUILD_FIXES.md` |
| Retired custom-profile code (see note) | `_retired/profiles.cpp` |

> **Custom profiles** are handled by SweetDX's own `code/profile.cpp`, which ships
> with the tool and is not vendored here. Our earlier `code/profiles.cpp`
> reimplemented it and produced a duplicate-symbol link error, so it is retired to
> `_retired/` with the reasoning preserved rather than deleted.

## What the shipped build does, and does not, enable

`hooks/` contains the gate and the tables but **not** `grant_hammer_mode`, so the default
build widens the mode-10 gate and prepares the per-mode tables without providing a way to
enter mode 10. That is deliberate: it isolates the rendering fix, which is the cause with
the strongest evidence behind it, so the next test measures one thing.

To enable the Hammer, copy `experimental/hammer_profile_experimental.hks` into `hooks/`
and delete the hooks you have not yet justified. The bisection order is in the incident
doc.


## The hook files reproduce the entire patch

`hooks/` was not written by hand. It was generated from the byte diff between the retail
NSO and our patched build, then validated:

```
59 hooks  ==  59 differing word regions
0 missing, 0 extra, 0 byte mismatches
```

That means the `.hks` set is provably complete with respect to that build — if a byte
differs, a hook covers it. **It does not mean the hooks are correct.** This is exactly
the trap the first in-game test exposed: 59/59 coverage, 0 byte mismatches, and the patch
still broke rendering and crashed. Fidelity to a reference image only proves you copied
it accurately; it says nothing about whether the words you copied are instructions, or
whether the pointers point at tables.

The current set is 36 hooks across 4 files (32 `instr` + 13 `data` records, some `data`
hooks spanning multiple words). Five addresses are excluded deliberately and named in
`scripts/validate_sweetdx_project.py`, each with the reason it is quarantined.

## Addresses are in-image addresses

`.hks` `address:` values and `.sym` values are **VA − 0x60000000**, matching
SweetDX. The image is `0x00CD1000` bytes, so every address is below that. Our
generator refuses to emit anything outside it: 524 inventory entries were
rejected for that reason, including one that SweetDX would have linked to a
nonsense location.

Note the two different addressing conventions in the artefacts, which caused real
confusion here:

* `.hks` `address:` = RVA (VA − base).
* IPS record offsets = **RVA + 0x100**, because the NSO has a 0x100-byte header.
* IDA works in **VAs**. Every IDA script in `scripts/` adds `BASE = 0x60000000`
  explicitly; passing an RVA gives zero xrefs.


## Build

SweetDX needs Deno plus a clang/ARM toolchain:

```sh
deno run -A mod.ts --source=./sweetdx --output=./out --log-file=./build.log
```

Produce `atmosphere/` contents and an `.ips` patch in `./out`.

## The one layout we could not settle

`ActiveCollider` is declared at `StageActor +0xBC`. Our Cheep Cheep code writes
`+0x174` and `+0x178` through `this`, which requires `ActiveCollider` to end
before `0x174` (i.e. be ≤ `0xB8`). One independent Switch-side reference gives
`0x130`, which would span `0xBC..0x1EC` and swallow both.

We kept the fields we can actually observe and left the tail as explicit
reserved space, with the conflict written in the header rather than silently
picking a side. The offsets themselves are ground truth from disassembly; only
their interpretation is open.

Likewise `sizeof(Enemy)` is recorded as `0x189A`, which is not 4-byte aligned;
our layout rounds to `0x189C`. Both agree on where a derived class starts, which
is what matters.

## What is *not* here

* No game code, NSO, ELF, ROMFS assets, models, or `.pack`/`.szs` archives.
* No NSO or IDA artifacts.
* No code derived from codedx or LibHakkun. Both are GPL-3.0; the headers here
  were written from offsets recovered from the retail binary, and only short
  factual observations (an offset, a size, a method's role) are shared.

You must supply your own legally obtained `nso/main`.

## Verification

Every claim above is checked by a script in the parent repo's `scripts/`:

| Script | Checks |
|---|---|
| `validate_hks.py` | reimplements SweetDX's `.hks` parser; proves hooks == diff |
| `gen_sweetdx_sym.py` | emits and self-validates the `.sym` file |
| `verify_layouts.py` | 28 `static_assert`s on field offsets |
| `test_clang_asm.py` | round-trips instructions through SweetDX's clang flags |
| `verify_mangled.py` | confirms mangled names by compiling real signatures |

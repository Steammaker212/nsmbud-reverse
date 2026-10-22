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
  code/       .cpp sources   -- the readable findings
  hooks/      .hks files     -- the patches, in SweetDX's hook language
  symbols/    .sym file      -- 3,174 recovered symbol addresses
  include/    .h headers     -- class layouts recovered from the binary
```

SweetDX requires exactly these four folders plus `nso/main` (the game's original
NSO, which you supply — it is not distributed here).

**This project builds.** With SweetDX v0.0.3 it compiles and links cleanly, producing
a `subsdk0` and an IPS patch, and the produced IPS was verified to contain the four
Hammer byte-sites exactly. See [BUILD_FIXES.md](BUILD_FIXES.md) for the five faults
that had to be fixed to get there, and the verification that the Hammer bytes really
landed.

## What is in here

| Finding | Where |
|---|---|
| Cheep Cheep family (profiles 530–547) | `code/pukupuku.cpp` |
| Hammer as a new power-up (mode 10) | `code/powerup_modes.cpp` + `hooks/hammer_*.hks` |
| Power-up mode table + item-grant gate | `hooks/item_grant.hks`, `hooks/mode_tables.hks` |
| Actor class layouts | `include/actor/*.h` |
| Symbol addresses | `symbols/nsmbudx.sym` |
| Build faults and their evidence | `BUILD_FIXES.md` |
| Retired custom-profile code (see note) | `_retired/profiles.cpp` |

> **Custom profiles** are handled by SweetDX's own `code/profile.cpp`, which ships
> with the tool and is not vendored here. Our earlier `code/profiles.cpp`
> reimplemented it and produced a duplicate-symbol link error, so it is retired to
> `_retired/` with the reasoning preserved rather than deleted.

## The hook files reproduce the entire patch

`hooks/` was not written by hand. It was generated from the verified byte diff
between the retail NSO and our patched build, then validated:

```
59 hooks  ==  59 differing word regions
0 missing, 0 extra, 0 byte mismatches
```

That means the `.hks` set is provably complete with respect to that build — if a
byte differs, a hook covers it.

27 of the 59 are `instr` hooks. Each was reassembled with clang and compared
against the patched bytes, so they cannot silently produce something different
from what we tested. The other 32 are `data` hooks (raw words), which are
byte-exact by construction.

## Addresses are in-image addresses

`.hks` `address:` values and `.sym` values are **VA − 0x60000000**, matching
SweetDX. The image is `0x00CD1000` bytes, so every address is below that. Our
generator refuses to emit anything outside it: 524 inventory entries were
rejected for that reason, including one that SweetDX would have linked to a
nonsense location.

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

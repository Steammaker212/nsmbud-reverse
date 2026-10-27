# SweetDX build: what was broken, and how it was fixed

The project in this directory now **compiles and links** with `sweetdx-windows.exe`
v0.0.3, producing a `subsdk0` (29,841 bytes) and an IPS patch (755 bytes, 83
records). Five distinct faults had to be fixed; each is recorded here with the
evidence, because three of them were silent or misleading.

## 1. `size_t`, `uintptr_t`, `va_list` did not exist

```
source/include/string.h:5:1: error: unknown type name 'size_t'; did you mean 'size_t32'?
source/include/nn/util.h:7:23: error: unknown type name 'size_t'
source/include/nn/util.h:8:54: error: unknown type name 'va_list'
source/include/log.h:9:5:  error: unknown type name 'va_list'
source/code/exceptionhandler.cpp:76:5: error: unknown type name 'uintptr_t'
```

sweet-dx compiles with `-nostdlib` but **not** `-nostdinc`, for
`--target=armv7l-none-eabihf`. There is no C library for that target on this host,
so the standard names genuinely do not exist. Our research `types.h` had replaced
upstream's and defined only `size_t32` / `uintptr_t32`, which nothing upstream uses.

**Fix:** `include/types.h` now derives the standard names from the compiler's own
builtins, so the widths are correct rather than hardcoded:

```c
typedef __SIZE_TYPE__       size_t;
typedef __UINTPTR_TYPE__    uintptr_t;
typedef __PTRDIFF_TYPE__    ptrdiff_t;
typedef __builtin_va_list   va_list;
```

plus `va_start` / `va_end` / `va_arg` / `va_copy` mapped to their builtins, and
`NULL` guarded with `#ifndef`. The `size_t32` / `uintptr_t32` aliases were kept.

## 2. `M_PI` family defined twice

`math.h` redefined `M_2PI`, `M_PI`, `M_PI_2`, `M_PI_4` with different precision than
`types.h`, producing four `-Wmacro-redefined` warnings. **Fix:** every definition in
`math.h` is now wrapped in `#ifndef`, so `types.h`'s value wins and the two headers
cannot disagree.

## 3. Duplicate `Profile::getNumProfiles()`

```
profiles.cpp:(.text+0x0): multiple definition of `Profile::getNumProfiles()';
profile.cpp:(.text+0x3e4): first defined here
```

Our `code/profiles.cpp` reimplemented custom-profile support that upstream's own
`code/profile.cpp` (839 lines) already provides in full — the constructor, all six
accessors, and the `profilesCustom` / `prioritiesCustom` arrays. Nothing in our code
referenced our version's own `RegisterCustomProfile` helper.

**Fix:** our `profiles.cpp` is retired to `_retired/profiles.cpp` rather than deleted,
so the reasoning is preserved. Upstream `profile.cpp` is the implementation.

## 4. `SafeString` was the wrong type, so hook symbols would not resolve

```
Could not find symbol
  _ZN7ProfileC1EPFP5ActorPK14ActorBuildInfoEjRKN4sead14SafeStringBaseIcEEPK9ActorInfoj
  Profile::Profile(..., sead::SafeStringBase<char> const&, ...) inside ELF!
```

Two contradictory definitions existed in the include tree:

| file | declared |
|---|---|
| `include/sead/safestring.h` | `template SafeStringBase<T>`, then `using SafeString = SafeStringBase<char>;` — **correct** |
| `include/sead.h` | `class SafeString { const char* mStr; u32 mLength; };` — an **unrelated class** |

`safestring.h` was never included anywhere, and `sead.h` was, so `sead::SafeString`
resolved to the unrelated class. Because mangled names encode the type, every
function taking a `sead::SafeString&` got a name that no game symbol matches.

In the real game `SafeString` is a **typedef** of `SafeStringBase<char>`, not a
distinct type — which is why every genuine symbol says `SafeStringBase`.

**Fix:** `sead.h` now includes `sead/safestring.h` *before* opening
`namespace sead` (an in-namespace include produced a bogus `sead::sead::SafeString`)
and no longer declares its own class.

IDA confirms this is safe: the constructor at `0x60017F6C` **never reads its 4th
argument** — it overwrites R3 immediately at `0x60017F7C` — so the 4th parameter's
static type affects only mangling, never behaviour.

## 5. A symbol our own subsdk defines was listed in the `.sym`

```
Error: Branch from 0x000182A0 to 0x1000182A0 is out of range
       (ARM B/BL can only reach +-32 MiB).
```

This was the subtle one. `modules/wisdom/lib/sym.ts` turns every `.sym` entry into an
absolute linker-script assignment:

```ts
`${name} = ${hexify(address - NSMBUDX_NSO_MEMORY_SIZE)}`   // offset = 0xCD1000
```

For an address below `0xCD1000` that value is **negative**, and `hexify` wraps it to
32 bits: `0x182A0 - 0xCD1000 = -13340000 = 0xFF3472A0`. Harmless while the symbol is
only *referenced*. Fatal when our own subsdk *defines* it, because the linker script's
absolute assignment overrides the definition:

```
destiny = 0xCD1000 + 0xFF3472A0 = 0x1000182A0     <-- outside ±32 MiB
```

The two culprits were `Profile::get` (`0x182A0`) and the `Profile` constructor
(`0x17F6C`) — both implemented by `profile.cpp` in subsdk0. The other accessors were
already absent, which is why only these two tripped.

**Fix:** both entries removed from `symbols/nsmbudx.sym`, with the addresses kept in
`docs/nsmbudx_removed_symbols.txt`. Fixing `Sym.toLinker` itself was rejected because
it is third-party GPL code we do not vendor.

### A trap while fixing it

The first attempt kept the removed entries in `symbols/nsmbudx_removed.sym` for
reference. That **re-broke the build**, because sweet-dx parses *every* `.sym` in
`symbols/`. The reference file is now `docs/nsmbudx_removed_symbols.txt` — outside
the glob and not a `.sym` extension.

## Verification the build is real

A clean exit does not prove the Hammer bytes landed: `instr` and `data` hooks are
applied silently, and only `hook`/`call` types print "Added patch for hook".
The produced IPS was therefore parsed directly (83 records, 332 patched bytes) and
checked against the four Hammer sites found by IDA:

| site | expected | in IPS | result |
|---|---|---|---|
| `0x465F40` | `movw r1,#0x3FB` | `fb 13 00 e3` | match |
| `0x46600C` | `movw r1,#0x3FB` | `fb 13 00 e3` | match |
| `0x45DDCC` | `mov r2,#10` | `0a 20 a0 e3` | match |
| `0x78E6A8` | `cmp r0,#10` | `0a 00 50 e3` | match |

`0x3FB` is the point of the whole exercise: it sets bit 9, i.e. power-up mode 10, which
retail's `0x1FB` does not.

Hook counts parsed from our five `.hks` files: **35 `instr` + 32 `data`**, alongside
upstream's 6 `call` + 10 `hook`.

## Reproducing

```
cd build
.\sweetdx-windows.exe --log-file=debug.log --output=output --source=source
```

Two harmless things in the log that are **not** failures: the two `[ERROR]` lines are
`arm-none-eabi-ld` warnings (`missing .note.GNU-stack`, and a deprecation notice).

## Keep in sync

`sweetdx/` in this repo is the source of truth. Only these files differ from a stock
sweet-dx source tree and are copied into `build/source/`:

```
include/types.h     include/math.h     include/sead.h
symbols/nsmbudx.sym
code/powerup_modes.cpp   code/pukupuku.cpp
hooks/{hammer_actor,hammer_profile,hammer_projectile,item_grant,mode_tables}.hks
```

Note `symbols/nsmbudx.sym` **replaces** rather than augments upstream's `main.sym`;
both are loaded, and ours carries 3,172 of the 3,174 addresses.

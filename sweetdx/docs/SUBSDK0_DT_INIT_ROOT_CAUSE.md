# Why sweet-dx's `subsdk0` broke rendering — root cause and fix

Status: **solved and verified**. `DT_INIT` was `0xff32f024`; it is now `0x24`.

## Symptom

Every build that shipped a `subsdk0` broke model rendering — models rendered as black
figures or shadows, and some did not load. Builds with only the IPS rendered cleanly.
The game never crashed, which is why this looked like a resource/romfs problem for a
long time. It was not: romfs was always fine.

## What was wrong

sweet-dx generates a linker script from each `.sym` file. `modules/wisdom/lib/sym.ts`,
`toLinker()`, subtracts the module load offset from **every** symbol:

```ts
`${symbol.name} = ${hexify(symbol.address - offset)}`
```

with `offset = NSMBUDX_NSO_MEMORY_SIZE = 0xCD1000` (the distance from the main NSO's
base to subsdk0's base). That subtraction is **correct and intentional** — it is how
subsdk0 code references functions and vtables that live in the main NSO. The working
reference module proves it: its `.data` contains 181 pointers of the form `0xff33xxxx`,
each of which resolves to a real main-NSO offset when `0xCD1000` is added back.

The bug was that our symbol file listed the **C runtime entry points themselves**:

```
_init = 0x00000024;
_fini = 0x00000218;
```

Those are addresses *in the main executable*, but `_init` and `_fini` are also labels
`crt0.s` defines for subsdk0's own runtime:

```arm
.global _init
_init:
    bx      lr      @ Return to rltd
```

The generated linker script's absolute assignment **overrode crt0's real label**. So:

```
0x24 - 0xCD1000  =  0xff32f024      (32-bit wrap)
```

and the linker emitted `DT_INIT = 0xff32f024`. At load the dynamic linker reads
`DT_INIT` and branches there. `0xff32f024` is outside the module, so the runtime
initialisation ran off into unmapped memory. The process survived — which is why this
showed as missing/black models rather than a crash — but initialisation was half done
and resource loads silently failed.

## Evidence chain

| check | result |
|---|---|
| bare `crt0.s` + `linker.ld` link, no symbol map | `DT_INIT = 0x24` — correct |
| packaged build, our `nsmbudx.sym` | `DT_INIT = 0xff32f024` — broken |
| working 31,197-byte module from user's hardware | `DT_INIT = 0x24` in `.text` |
| `0x100000000 - 0xCD1000` | `0xff32f000` |
| `0x24 + 0xff32f000` | `0xff32f024` — exact match |
| reference `main.sym` files (working project) | contain **no** `_init`/`_fini` |
| our `nsmbudx.sym` | contained both |

The last two rows are the discriminator. The user's own working sprite project
(MrSun / MrMoon / FakeStarCoin) uses symbol files that never define `_init` or `_fini`,
so crt0's labels always survive there. Ours did define them, so they were clobbered.

## Fix

Remove `_init` and `_fini` from `sweetdx/symbols/nsmbudx.sym`. Nothing else changes.

Verified after the fix:

```
.text   mem 0x00000 size 0x00058
.rodata mem 0x01000 size 0x000d0
.data   mem 0x02000 size 0x00010
.bss    size 0x00060

.dynamic at 0x1000
  INIT       0x00000024  -> .text+0x24     <- was 0xff32f024
  HASH       0x000010c0  -> .rodata+0xc0
  STRTAB     0x000010a0  -> .rodata+0xa0
  SYMTAB     0x00001090  -> .rodata+0x90
  PLTGOT     0x00002000  -> .data+0x0
  JMPREL     0x000010a4  -> .rodata+0xa4

RESULT: OK - all dynamic pointers resolve inside declared segments
```

## Rule for future patches

**Never list a symbol in a `.sym` file if your own code or `crt0.s` defines it.**

In practice that means these names must never appear as game symbols:

```
_init   _fini   _start   _crt0_section   static_init_hook
__mod0_start   __bss_start__   __bss_end__
__eh_frame_hdr_start   __eh_frame_hdr_end
```

A good `.sym` header states this. `sweetdx/symbols/nsmbudx.sym` now does.

## Validation gate for every build

Run `scripts/verify_subsdk0.py` (in `.rea/`) against the emitted module. It must report:

- all three segments inside the file
- MOD0's offsets resolve inside declared segments
- `DT_INIT` / `DT_FINI` inside `.text`

A `DT_INIT` of `0xff32f024` means the symbol-map override has come back.

## Why this matters beyond this project

This was not a project-specific quirk. Any sweet-dx project whose `.sym` file includes a
CRT or module label will hit the same override, and it will present as unexplained
graphics or resource breakage rather than as a load failure. The fix is a property of how
symbol files are authored, so it applies to every patch built from this repo.

## Verification that the toolchain now works with real code

Removing `_init`/`_fini` fixed `DT_INIT`, but our project has no `hook` or `call` hooks, so
the module was still the empty stub. That proves nothing about the toolchain's ability to
build code that actually runs — which is the requirement.

`scripts/subsdk0_smoketest.py` settles it. It builds a throwaway project with one `hook`
whose C++ body returns its argument untouched, hooked onto the semantically inert gate at
`0x465E4C`:

```
subsdk0: 601 bytes
  .text 0x70   .rodata 0xd8   .data 0x10
  DT_INIT 0x24 -> .text+0x24   OK

real function compiled into .text : yes (branch body at module offset 0x58)
hook branch written into the IPS   : yes (BL 0xea21ac81 at IPS offset 0x465F4C)
```

The BL target resolves to `0x58`, exactly where the function body was placed. So with the
symbol file corrected, sweet-dx compiles real code, links it into a valid module, and
patches the hook correctly.

## Postscript: three wrong diagnoses, recorded

Neither of these should be re-derived:

1. *"The stub declares segments past EOF."* False. With correct NSO0 field offsets all
   three segments fit inside the 577-byte file.
2. *"MOD0's `dynamic` pointer lands in a hole."* False. MOD0 offsets are relative to the
   MOD0 struct, not to module base. Adding MOD0's own offset (`0x08`) gives
   `dynamic = 0x1000`, the start of `.rodata`.

3. *"The mode tables are written with holes, so entries 3 and 7 are zeroed."* False. I
   assumed three 12-byte records at a 16-byte stride. The records are actually 16, 16 and
   12 bytes, which is exactly 44 — every entry is written.

All three were arithmetic errors on my side, not properties of the module.

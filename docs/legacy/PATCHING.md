# Making a mod: from a function to a patch

This is the practical guide. It assumes you have read
[`loader/README.md`](../../loader/README.md) for the build mechanics.

The goal of this document is narrower: **given a gameplay behaviour you want to
change, how do you find the code that implements it, and how do you hook it
without guessing?**

## 1. Find the function

Three ways in, in order of reliability.

### By actor or class name

`data/loader/symbols.csv` lists every named function with its address, size, and
the corpus file that decompiles it.

```sh
grep ',Player__,' data/loader/symbols.csv | head
```

Columns are `rva,va,symbol,raw_name,size,kind,section,corpus_file,scope`. The
`corpus_file` value is the prefix of a file under `decompiled/src/`, so you can
go straight from a symbol to the C.

### By actor id

`data/recovered/profiles.json` maps actor class names to profile ids, recovered
from the binary. Use it when you know the actor ("the bob-omb") but not the
class name.

### By what the function touches

If you know a behaviour but not a name, search the corpus for what the code
references:

```sh
grep -rl 'Player__setPowerUp' decompiled/src | head
```

Callers are the interesting direction: the function that calls
`StateMgr__changeState` is usually a state transition you can reason about.

## 2. Check the C is real

Before hooking, read the decompiled body. It is a faithful rendering of the
machine code — control flow is exact — but it is not source you can recompile to
identical bytes. Two things to watch:

- **Types are inferred.** Hex-Rays regenerates parameter types from usage. A
  parameter typed `int` may really be a pointer; read how it is used.
- **Struct layouts come from `type_layouts.json`.** Named field access in the
  corpus was rewritten to `FIELD_U32(ptr, 0xNN)` using measured offsets. If a
  field offset looks wrong, check `data/recovered/type_layouts.json` rather than
  editing the C.

## 3. Pick a hook site

`hooks/candidate_hooks.hks` lists 80 sites where a real `BL` or `B` targets a
named function, each with the number of callers. A site with many callers is a
function that matters; a site with one caller is a specific code path.

To verify a site yourself:

```sh
python scripts/pipeline/verify_hooks.py \
    --elf convertedmain.rebased.elf \
    --hks hooks/candidate_hooks.hks \
    --sym data/loader/main.sym
```

Every listed site passes: the instruction at `addr` decodes as the claimed branch
kind, and its displacement lands on the symbol named in the comment.

## 4. Write the hook

Hooks live in `loader/hooks/`. Copy the pattern in `example_hook.c`: declare the
original's true prototype, forward to it, and add your behaviour around the call.

**Wrap, don't replace.** A replacement must reimplement the whole function, and
these functions are hundreds of bytes of state machine. A wrapper changes one
behaviour and leaves the rest intact, so a bug in your hook does not corrupt game
state.

```c
#include "hook_api.h"

typedef void *(*ActorMgr_create_fn)(void *this, void *buildInfo, u32 unk);
extern ActorMgr_create_fn HOOK_ORIG(ActorMgr__create);

void MyHook(void *this, void *buildInfo, u32 unk)
{
    /* your behaviour here */
    (void)HOOK_ORIG(ActorMgr__create)(this, buildInfo, unk);
}
```

### Getting the signature right

Take the prototype from the corpus file, not from memory. The definition line at
the top of `decompiled/src/<group>/<addr>_<name>.c` is what the analysis
recovered:

```c
_BYTE *__fastcall ActorMgr__create(void *this, ActorBuildInfo *buildInfo, int unk)
```

`this` is the first parameter in these decompilations, not an implicit one.

## 5. Register the hook

Add an entry to `hooks/hooks.hks` naming your C function and the site:

```
MyHook:
    type:   blal
    func:   MyHook
    addr:   0x00005664
```

Then re-run `select_hooks.py` so the active list only contains hooks that exist:

```sh
python scripts/pipeline/select_hooks.py --repo .
python scripts/pipeline/verify_hooks.py --elf convertedmain.rebased.elf \
    --hks hooks/hooks.hks --sym data/loader/main.sym
python scripts/pipeline/test_loader.py --repo . --elf convertedmain.rebased.elf
```

The last command is the one that catches a mismatched signature: it compiles your
hook against `hook_api.h` and checks that the target has readable C.

## 6. Build and patch

```sh
make -C loader
python loader/scripts/hooks_to_ips.py hooks/hooks.hks loader/out/mod.elf
```

## What is verified, and what is not

| Claim | Status |
| --- | --- |
| Every hook site is a real B/BL with the stated target | **verified**, `verify_hooks.py` |
| Every symbol's address falls inside a loaded section | **verified**, `emit_symbol_map.py` |
| The named function's C compiles | **verified** for 80%+ of the corpus, see `CORPUS_STATUS.md` |
| The C is byte-identical to the original after recompiling | **not claimed** — see below |
| A built module runs correctly on hardware | **not tested here**; needs a console |

That last row is the honest limit. The toolchain path is the same one codedx
uses and is believed correct, but this repository has not booted a module on a
Switch. Treat the first build as an experiment, not a release.

## Deluxe-only

Every address here is from the Switch build. None apply to Wii U. See
[`DELUXE_ONLY.md`](DELUXE_ONLY.md).

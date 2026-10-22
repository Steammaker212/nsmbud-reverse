# What is verified, and what is not

This file exists because a claim in a header is worth something only if you can
re-run the check. Every statement below names the script that proves it.

Scripts live in `scripts/`. They need Python 3 plus `capstone` for the
disassembly ones.

## Provable, and proved

| Claim | Script | Result |
|---|---|---|
| 59 `.hks` hooks reproduce the entire patch | `validate_sweetdx_project.py` | 59/59 words, 0 missing, 0 extra, 0 mismatches |
| Every `instr` hook assembles to the patched bytes | same | 27/27 |
| `.sym` is well-formed, unique, and entirely in-image | same | 3,174 symbols |
| `ActiveCollider`/`StageActor`/`Enemy` field offsets | `verify_layouts.py` | 30/30 `static_assert`s |
| Our headers are not derived from codedx | `audit_similarity.py` | max 0.70, all "independent" |
| codedx and our build are the same binary | `verify_sym_mapping.py` | 414 symbols resolve |

**Why the hook check is strong.** The hook set was not written by hand. It was
generated from the byte diff between the retail NSO and our patched ELF, then
parsed back with a reimplementation of SweetDX's own `.hks` grammar and compared
against the file. If a byte differs and no hook covers it, the check fails. If a
hook covers a byte that did *not* change, it fails. So "the hooks are complete"
is a measured fact about that build, not an impression.

## Verified by disassembly, not by inference

Three layouts were initially guessed and turned out wrong. Each was corrected by
reading the constructor, and the script is kept so the correction is auditable.

**`ActorBuildInfo`** (`verify_buildinfo.py`, `disasm_actor_ctor.py`).
`StageActor::StageActor` at `0x600002A0` does `add r2, r5, #0x10` / `ldm r2,
{r0,r1,r2}` / `stm r3, {r0,r1,r2,r6}`, so position is at `+0x10`, not `+0x2C` as
we first wrote. The `Actor::Actor` body then shows the byte copies exactly:

```
ldrb r1, [r5, #0x24] ; strb r1, [r4, #0x1c]    -> movementId
ldrb r1, [r5, #0x25] ; strb r1, [r4, #0x1d]    -> linkId
ldrb r1, [r5, #0x26] ; strb r1, [r4, #0x1e]    -> initStateFlag
```

That settles `movementId` at `Actor+0x1C`. Our header had said `+0x44`, which
shifted `StageActor::direction` out of `+0x50` and broke four assertions.

**`Actor::parent`** at `+0x38`, from `str r6, [r4, #0x38]`.

**`EnemyFreezeMgr`** is embedded at `+0x1808`, not a pointer. A pointer there
would leave `0x92 - 4` bytes unexplained before `sizeof(Enemy)`; the manager is
`0x50`, which fits.

## Checked by compiling real code

The strongest test is that unrelated, already-working mod sources compile
against these headers unchanged.

`mock_compat` — the actor sources from codedx that are known to work in-game:

```
actorspawner  bobomb  effectspawner  fakeStarCoin  koopatroopa
lightactor    magiclift  profile  sumobroslightning  mrsun
```

10 of 13 compile. The 3 that do not (`exceptionhandler`, `fs2sd`, `socketlog`)
fail on `#include "nn.h"` — Nintendo's own SDK header. That is not something this
project can or should supply, so those files are out of scope rather than broken.

Getting there caught six real bugs in our headers that no amount of reading would
have found: a duplicate `_1C`, `freezeMgr` as a pointer, `ProfileId` not being
reachable from `actor.h`, `Vec2` with no `Vec3` conversion, `EventMgr::isActive`
deleted during a rewrite, and `movementId` at the wrong offset.

## Facts checked against an independent source

`check_profileids.py` cross-references `profileid.h` against codedx's
`doc/profiles.csv` (389 data rows). Confirmed by row:

```
1DA Ice ball          1DB Ice ice ball for packon   1DC Player fireball
1DD Fireball Packon   1DE Yoshi's flame
```

So 474/476 are right, and our enum was missing `PlantIceBall` at 475 — which is
why `PlayerFireBall` would have numbered 475 instead of 476. An enum without an
explicit value is a silent off-by-one waiting to happen; the ids are now written
next to the names.

## Not verified

**`ActiveCollider` size.** Declared at `StageActor+0xBC`. One reference gives
`0x130`; our Cheep Cheep code writes `+0x174`/`+0x178` through `this`, which needs
the object to end by `0xB8`. Both cannot be true. We kept `0xB8` because it is
what our own disassembly implies, and said so in the header. Treat any field past
`0xB8` as unconfirmed.

**`StageActor::movementHandler` at `+0x26C`** is inferred from call patterns, not
observed construction. Marked `[I]` in the header.

**Nothing here has been run.** Deno is not installed in this environment, so
SweetDX was never invoked; the hooks were validated against a reimplementation of
its parser, not the parser itself. The Hammer power-up has never been booted in
the game. What is proven is that the patch bytes are what we think they are and
that the format is accepted — not that the resulting game behaves correctly.

**The 115-byte diff is a claim about one build.** It says our patched ELF differs
from the retail NSO in exactly those places. It says nothing about whether those
changes produce a working Hammer.

## How to re-run everything

```
python scripts/validate_sweetdx_project.py     # 11 checks
python scripts/verify_layouts.py               # 30 asserts
python scripts/audit_similarity.py             # licence hygiene
python scripts/check_profileids.py             # ids vs profiles.csv
```

The first two are the ones that gate a release.

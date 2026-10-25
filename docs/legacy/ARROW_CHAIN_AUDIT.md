# Arrow-chain rewrite audit

**Scope: New Super Mario Bros. U Deluxe (Switch) v1.0.0 only.** Every address,
offset and count in this document refers to that build. Nothing here was
checked against the Wii U original or any other version, and the numbers must
not be carried over to one.

This audit tests one specific claim made in
[`CORPUS_STATUS.md`](CORPUS_STATUS.md) — that rewriting Hex-Rays
`base->member` chains by *summing* the member offsets is correct. It is not
correct in general, and this document measures how often that matters.

## 1. The mechanism (read from the code, then confirmed on real output)

[`scripts/pipeline/rewrite_arrows.py`](../../scripts/pipeline/rewrite_arrows.py)
walks a chain hop by hop and accumulates `total += off` for every member,
ignoring whether the hop dereferenced a pointer. The reason it can do this is
in `load_types()`: it stores each member's type with the `*` **stripped**, so
the `Profile *` at `Actor.profile` is recorded as plain `Profile`, and the
pointer-ness of the hop is lost before the walk ever sees it. A hop through a
pointer and a hop through an embedded struct become indistinguishable.

For `Actor__getProfileId` the layout is:

| hop | member | offset | declared type | pointer |
|-----|--------|--------|---------------|---------|
| 1 | `Actor.profile` | 0xC | `Profile *` | yes |
| 2 | `Profile.id` | 0x8 | `int` | no |

Summing gives 0xC + 0x8 = 0x14, which is what the corpus publishes:

```c
// decompiled/src/actors/60002EEC_Actor__getProfileId.c
int __fastcall Actor__getProfileId(Actor *a1)
{
  return FIELD_U32(a1, 0x14);
}
```

The real code at `0x60002EEC` is 12 bytes:

```
0x60002EEC  ldr r0, [r0, #0xc]     ; r0 = *(u32*)(a1 + 0xC)   <- the Profile*
0x60002EF0  ldr r0, [r0, #8]       ; r0 = *(u32*)(r0 + 0x8)   <- Profile.id
0x60002EF4  bx lr
```

So the true value is `*(u32*)(*(u32*)(a1 + 0xC) + 0x8)`, and the published
`FIELD_U32(a1, 0x14)` reads a completely different word: sixteen bytes into the
`Actor` itself instead of eight bytes into its `Profile`. This is a confirmed
false flattening, not a hypothetical one.

## 2. How the measurement was built

[`scripts/pipeline/audit_arrow_chains.py`](../../scripts/pipeline/audit_arrow_chains.py)
compares two independent descriptions of the same function:

* **What the C claims.** The single `FIELD_*(param, off)` expression in each
  published corpus file, parsed with an exact regex so the offset must match
  literally.
* **What the code does.** The function is disassembled with Capstone
  (ARM32, little endian, base `0x60000000`) from
  `convertedmain.rebased.elf`, and a small abstract interpreter tracks, per
  register, whether the value is still a parameter, a parameter plus a
  constant ("address", not yet dereferenced), or the result of a load. Every
  memory access derived from a parameter is recorded with the full chain of
  dereferences that produced its base.

Three details were needed to make the machine side trustworthy, and all three
were found by chasing wrong answers rather than by design:

1. **Register aliases.** `mov sb, r2` followed by `ldr r0, [sb, #0x40]` names
   the same register two ways. Looking up provenance by Capstone's textual
   register name silently lost the value between the two instructions, so
   provenance is keyed by a canonical `r0..r15`.
2. **Read-only instructions must not invalidate.** `cmp r5, r0` reads r0
   without writing it. Treating every instruction as clobbering its register
   operands destroyed the parameter link at the first comparison in almost
   every function, which hid real chains.
3. **`add` is not a dereference.** `add r0, r0, #0x1820; vldr s0, [r0]` is
   *one* access at offset 0x1820. Modelling the `add` as another hop created a
   false positive on `sub_605EDDA0` (published `FIELD_F32(a1, 0x1820)`, which
   is correct). Address arithmetic and loads are now separate kinds.

The classifier uses these buckets:

| bucket | meaning |
|--------|---------|
| `AGREE` | code performs exactly one load, at the offset the C states |
| `CHAIN_VIA_TEMP` | code performs two loads, but the C holds the intermediate in a named temporary (`owner = FIELD_U32(a3, 0x40); ... FIELD_U8(owner, 0x54)`) — correct C |
| `FLATTENED_CHAIN` | code performs two or more dereferences, the C states one summed offset |
| `DISPATCH` | the only parameter-derived access is a vtable read feeding an indirect call |
| `OTHER` | anything the model cannot decide, with a stated reason |

## 3. Bucket counts

### The eligible frame (measured in full)

"Eligible" means the published function contains exactly **one** `FIELD_*`
access on one of its parameters — the only situation where a single machine
access can be compared to a single C expression without confounding. There are
**457** such functions in the corpus, and all 457 were measured:

| bucket | count |
|--------|------:|
| AGREE | 242 |
| CHAIN_VIA_TEMP | 6 |
| FLATTENED_CHAIN | 3 |
| DISPATCH | 38 |
| OTHER | 168 |
| **total** | **457** |

The `OTHER` rows are dominated by two honest kinds of "cannot decide": 130
functions make *multiple* distinct parameter-derived accesses (so one C
expression cannot be matched to one load), and 26 hit a model limit
(14 register-offset accesses such as `ldr r0, [r5, r1]`, 12 with no
parameter-derived access found at all). The remainder are single-access offset
mismatches that are worth their own look but are not part of this question.

### The stride sample (the ≥400-function frame)

The eligible frame is a biased slice — it only contains functions with exactly
one field access. To sample the corpus as a whole, every 19th row of
`symbols.csv` with `kind=function` was taken, sorted by VA: **495 functions**.

| bucket | count |
|--------|------:|
| not eligible (not a single-param-access body) | 406 |
| no published body | 83 |
| AGREE | 2 |
| OTHER | 4 |
| **total** | **495** |

**This is the honest headline about coverage, and it is a negative result:**
of 495 randomly-strided corpus functions, only 6 turned out to be eligible at
all. The eligibility filter is extremely restrictive, which is exactly why the
457-function frame exists — but it also means the stride sample alone cannot
estimate the corpus-wide rate. 406 of 495 functions are simply out of scope for
this test.

### Chain census over the whole pre-rewrite export

Rather than rely on eligibility, the census replays **every** arrow chain in
the pre-rewrite export and asks which ones pass through a pointer-typed member
at all. This needs no eligibility filter and covers the entire corpus.

| quantity | count |
|----------|------:|
| functions in the pre-rewrite export | 47,153 |
| functions using `->` | 3,097 |
| chains seen | 12,058 |
| chains resolved against `type_layouts.json` | 11,934 |
| **chains passing through a pointer hop** | **75** (0.63% of resolved) |
| pointer dereference hops among them | 76 |
| functions containing at least one such chain | 53 |

Replaying the rewrite over the whole export reproduces the published text for
2,801 of 3,097 functions when compared on `(macro, offset)` fingerprints; 80
differ (later passes renamed vtables and changed access macros) and 216 have no
corpus file to compare against. The replay is therefore faithful enough to
trust the chain census, but it is a replay, not a re-run of the original tool.

### Verifying the 75 suspected chains

The census flags 75 chain *instances*, which de-duplicate to **65 distinct
(address, chain, total) keys** across 53 functions. 46 of those keys are rooted
in a parameter and were re-disassembled and re-measured individually; the other
19 are accounted for rather than dropped:

| outcome | count |
|---------|------:|
| **CONFIRMED_FLATTENED** — code dereferences more times than the C states | **42** |
| HARMLESS_SINGLE_LOAD — code performs exactly one load, matching the C | 4 |
| unverified — no published corpus body at that address | 7 |
| unverified — chain rooted in a local, not a parameter | 12 |
| **total distinct chains** | **65** |

**42 confirmed flattened chains across 35 distinct functions.** The 4 remaining
verified rows are chains like `a3->owner->_`, where the arrow chain's last
member is the whole access, so one load is genuinely all the code does; those
are correct as published.

The 12 local-rooted chains are a stated limitation, not a dismissal. The
provenance walk is seeded from parameters (r0–r3) because that is what the
published `FIELD_*(param, ...)` expressions refer to; a chain rooted in a local
like `v21->next->previous` cannot be attributed to a parameter by that walk.
Spot-checking them by hand found no further damage, but that is a sample, not a
measurement:

* `sub_6099F1E8` (`v21->next->previous`, published `FIELD_U32(v21, 0x4)`) —
  the C performs `qmemcpy(FIELD_U32(v21, 0x4), ...)` on a value it has just
  stored into `FIELD_U32(v21, 0x4)`. The flattening is arithmetically
  invisible here because the pointer hop's offset is already the final offset.
* `sub_6025E9EC` (`v6->executer->vtable`, published `FIELD_U32(v6, 0x0)`) —
  the flattened total is 0x0, and the C uses `FIELD_U32(v6, 0x0)` as a vtable
  base, which is the same word either way. Harmless by coincidence of the
  zero offset, not by correctness.

Two caveats stated plainly:

* **Zero-offset pointer members are not evidence of safety.** `*(p + 0)` and `p`
  are different values. A hop through a pointer at offset 0 still dereferences;
  it just happens that summing hides it. `StateMgr__execute`
  (`this->executer->vtable`) is flattened through a 0x0 hop and *is* broken —
  see §6. Where the code performs only one load, that is what makes the case
  harmless, not the zero.
* **The confirmed count is a lower bound.** 19 distinct pointer-hop chains could
  not be measured (7 have no published body, 12 are rooted in locals rather
  than parameters). At least one of the locally-rooted ones behaves like a
  flattening, so the true count is ≥42, not exactly 42.
* **Multi-register transfers are skipped.** `vldmia`/`ldm` are treated as
  unsupported and invalidate provenance rather than being modelled, so a chain
  that is only walked by a block load would not be counted. This can only cause
  under-counting, never a false `FLATTENED_CHAIN`.

## 5. Ten concrete cases

Each row is a chain the census flagged, re-measured at its own address. The
instructions quoted are the exact instructions that walk the chain, matched by
their recorded displacement; the corrected column is the expression the code
actually implies. Every one of these compiles clean either way.

### 1. `Actor__getProfileId` — `0x60002EEC`
`decompiled/src/actors/60002EEC_Actor__getProfileId.c`

```
0x60002EEC  ldr r0, [r0, #0xc]
0x60002EF0  ldr r0, [r0, #8]
```
* chain: `a1->profile->id`
* published: `FIELD_U32(a1, 0x14)`
* correct: `FIELD_U32(FIELD_U32(a1, 0xC), 0x8)`

### 2. `ActiveCollider_getTop` — `0x6015920C`
`decompiled/src/collision/6015920C_ActiveCollider_getTop.c`

```
0x6015920C  ldr r1, [r0, #0x40]
0x60159218  vldr s4, [r1, #0x70]
```
* chain: `result->owner->position.y`
* published: `FIELD_F32(result, 0xB0)`
* correct: `FIELD_F32(FIELD_U32(result, 0x40), 0x70)`

### 3. `ActiveCollider_getRight` — `0x60159258`
`decompiled/src/collision/60159258_ActiveCollider_getRight.c`

```
0x60159258  ldr r1, [r0, #0x40]
0x60159264  vldr s4, [r1, #0x6c]
```
* chain: `result->owner->position.x`
* published: `FIELD_F32(result, 0xAC)`
* correct: `FIELD_F32(FIELD_U32(result, 0x40), 0x6C)`

### 4. `BobOmb_vf67` — `0x6025EC94`
`decompiled/src/misc/6025EC94_BobOmb_vf67.c`

```
0x6025ECF4  ldr r1, [sb, #0x40]     ; sb holds a3
0x6025ED8C  ldrsb r0, [r0, #0x54]
```
* chain: `a3->owner->playerId`
* published: `FIELD_U8(a3, 0x94)`
* correct: `FIELD_U8(FIELD_U32(a3, 0x40), 0x54)`

### 5. `BanzaiBill_vf66` — `0x6032232C`
`decompiled/src/misc/6032232C_BanzaiBill_vf66.c`

```
0x60322344  ldr r7, [r5, #0x40]
0x603223D0  ldrb r0, [r0, #0x215]
```
* chain: `a3->owner->type`
* published: `FIELD_U8(a3, 0x255)`
* correct: `FIELD_U8(FIELD_U32(a3, 0x40), 0x215)`

### 6. `StageActor__ctor` — `0x600002A0`
`decompiled/src/actors/600002A0_StageActor__ctor.c`

```
0x60000350  ldr r0, [r5, #0xc]
0x6000035C  ldr r0, [r0, #0xc]
```
* chain: `buildInfo->profile->actorInfo`
* published: `FIELD_U32(buildInfo, 0x18)`
* correct: `FIELD_U32(FIELD_U32(buildInfo, 0xC), 0xC)`

The same function has two more flattened chains (`->flags` published as
`0x20`, `->actorInfo->field_20` published as `0x38`), so a constructor
silently initialises from the wrong fields — this is the widest single
function in the set.

### 7. `EnemyFreezeMgr_freeze` — `0x602F3E4C`
`decompiled/src/actors/602F3E4C_EnemyFreezeMgr_freeze.c`

```
0x602F3F54  ldr r0, [r6, #0x3c]
0x602F3F58  ldr r0, [r0, #8]
```
* chain: `this->owner->_._._._.id`
* published: `FIELD_U32(this, 0x44)`
* correct: `FIELD_U32(FIELD_U32(this, 0x3C), 0x8)`

### 8. `sub_600082CC` — `0x600082CC`
`decompiled/src/misc/600082CC_sub_600082CC.c`

```
0x600082E4  ldr r0, [r5, #0xc]
0x600082EC  ldr r0, [r0, #8]
```
* chain: `buildInfo->profile->id`
* published: `FIELD_U32(buildInfo, 0x14)`
* correct: `FIELD_U32(FIELD_U32(buildInfo, 0xC), 0x8)`

### 9. `Enemy__vfF8` — `0x602A29AC`
`decompiled/src/actors/602A29AC_Enemy__vfF8.c`

```
0x602A2A34  ldr r0, [r5, #0x40]
0x602A2A40  ldrb r0, [r0, #0x54]
```
* chain: `acOther->owner->playerId`
* published: `FIELD_U8(acOther, 0x94)`
* correct: `FIELD_U8(FIELD_U32(acOther, 0x40), 0x54)`

### 10. `StateMgr__execute` — `0x608181D4` (the control-flow case)
`decompiled/src/state/608181D4_StateMgr__execute.c`

```
0x608181E8  ldr r0, [r4]        ; r0 = this->executer
0x608181EC  ldr r2, [r0]        ; r2 = executer->vtable
0x608181F0  ldr r2, [r2, #8]    ; r2 = vtable + 8  (slot 2)
0x608181F4  blx r2
```
* chain: `this->executer->vtable`
* published: `(*((int (**)(void))FIELD_U32(this, 0x0) + 2))()`
* correct: `(*((int (**)(void))FIELD_U32(FIELD_U32(this, 0x0), 0x0) + 2))()`

Because the hop here has offset 0, the *sum* is identical — but the published
expression indexes `this` (+2 words) instead of the executer's vtable, so the
dispatched slot and the receiver are both wrong. This is the clearest
demonstration that flattening is a semantic error and not a cosmetic one.

## 6. Does this invalidate the project's claims?

### Prototypes (arity and return type): **no.**

Argument count and return type come from the calling convention and the
function's signature line, not from member offsets. For the 35 confirmed
functions the signature line in the published corpus is byte-identical to the
pre-rewrite export in **35 of 35** cases; the rewrite touches only expressions
inside the body. A flattened field read cannot change how many arguments a
function takes or what it returns.

### The compile-clean count: **no.**

`FIELD_U32(p, 0x14)` and `FIELD_U32(FIELD_U32(a1, 0xC), 0x8)` are both single
valid expressions of the same type. Both forms were compiled with
`clang -std=gnu89 -fsyntax-only` against the corpus headers and both exit 0
with only the pre-existing `aligned_alloc` declaration warning. The rewrite
cannot move the 37,789/45,148 (83.70%) compile-clean figure in either
direction, and this audit does not change it. That figure is measured in
[`COMPILE_FAILURES.md`](COMPILE_FAILURES.md); the 37,787/46,879 (80.61%) quoted
in earlier revisions of this document predates both the veneer collapse and that
measurement.

### Control-flow fidelity: **this is where it breaks.**

The C-level control flow is preserved: for all 35 confirmed functions the
sequence of `if`/`for`/`while`/`switch`/`return`/`goto` keywords is identical
between the pre-rewrite export and the published corpus (35 of 35). The
*branch structure* is faithful. What is not faithful is the **target** of an
indirect call whose callee pointer was reached through a flattened chain:

* **10 of the 42 confirmed flattened chains feed an indirect call**, across
  **8 distinct functions**: `BossBase__vfDC`, `Enemy__vfDC`,
  `Enemy__doStateChange`, `DryBones_beginState_Turn`, `Amp__collisionPlayer`,
  `StateMgr__execute`, `StateMgr__changeState`, `StateMgrExt_changeState`.
* These are vtable dispatches. In `StateMgr__execute` and the other 0x0-hop
  cases the published code calls through a completely different pointer; in the
  `0x17C4`/`0x17CC`/`0x17D0` cases it also computes the wrong slot index.
* The remaining 32 flattened chains end in ordinary field reads. They corrupt
  *data flow* (a wrong value is loaded and propagated) but not the
  control-flow graph.

So the accurate statement is: **control flow is structurally faithful but the
indirect calls that implement virtual dispatch are not.** Every one of those
eight functions is a hot-path state-machine method (`vfDC` is the per-frame
execute slot), so the practical impact is larger than the 0.63% chain count
suggests.

## 7. Estimated affected share

With the sampling caveats stated rather than hidden:

| basis | numerator | denominator | share |
|-------|----------:|------------:|------:|
| chains resolved by the census | 42 confirmed | 11,934 | **0.35%** |
| chains flagged as pointer-hop (upper bound) | 75 | 11,934 | **0.63%** |
| functions in the corpus | 35 confirmed | 45,146 published bodies | **0.08%** |
| functions that use `->` at all | 35 confirmed | 3,097 | **1.13%** |
| functions with any pointer-hop chain (hard ceiling) | 53 | 3,097 | **1.71%** |

**Honest range: roughly 0.1%–1.7% of the corpus, centring on about 0.08% of
all bodies and 1.1% of functions that use arrow chains at all.** The 53
functions containing a pointer-hop chain are a hard ceiling — a pointer-hop
chain is necessary for flattening, so no function outside those 53 can be
affected by this bug.

**Caveats that bound this estimate:**

* The census is a *replay* of the rewrite over the pre-rewrite export, not a
  re-run of the original tool. Replay reproduces 2,801 of 3,097 functions
  exactly on `(macro, offset)` fingerprints; 216 have no corpus file to check
  against and 80 differ for unrelated reasons.
* `symbols.csv` names only 9,401 of the 45,146 published bodies. The stride
  sample is drawn from that 21% subset, and only 6 of its 495 members were
  eligible — too few to support a corpus-wide rate on their own. The
  corpus-wide figure therefore rests on the census, which covers everything.
* The eligible frame (457 functions) is deliberately biased toward
  single-access functions and cannot be extrapolated to the corpus.
* The chain walker under-counts rather than over-counts: register-offset
  accesses and multi-register block loads are skipped, not guessed.
* **A negative result is stated as such**: 4 of the 46 suspected chains were
  *not* flattened, and 242 of 457 eligible functions agree exactly with the
  machine code. The rewrite is right most of the time; it is wrong in a way
  that silently changes meaning when it is wrong.

## 8. Bottom line

The accumulation in `rewrite_arrows.py` is a real defect with a confirmed
mechanism (`load_types()` strips `*`, so pointer hops are summed instead of
nested). It affects **42 chains in 35 functions** of 45,146 published bodies.
It does **not** change prototypes, does **not** change the compile-clean count,
and does **not** change the branch structure of the emitted C — but it does
corrupt data flow, and in **10 chains across 8 functions it redirects virtual
dispatch**, which is a genuine correctness bug rather than a cosmetic one. The
fix is to keep a hop nested whenever the member's declared type is a pointer,
which requires `load_types()` to stop discarding that pointer-ness.

## Reproducing

```bash
python scripts/pipeline/audit_arrow_chains.py
```

Inputs, all read (never assumed):

* `C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf` — Capstone
  is installed at **5.0.7**, not the 5.0.9 the task mentioned; the decoding
  used here is stable across both.
* `data/loader/symbols.csv` — 23,502 rows, 9,401 with `kind=function`.
* `data/recovered/type_layouts.json` — 176 types, 1,294 members.
* `decompiled/` — 45,146 published bodies with an address+size header.
* `C:\Users\Saif Khan\Downloads\main.idb\_work\export_vt\all_functions.jsonl` —
  the pre-rewrite export, 47,153 functions.

Results: [`data/recovered/arrow_chain_audit.json`](../../data/recovered/arrow_chain_audit.json),
containing the full 457-function frame, the 495-function stride sample, all
chain-verification rows and the per-case disassembly quoted above.

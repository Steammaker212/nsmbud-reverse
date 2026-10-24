# Two buckets, two root causes

Deluxe (Switch) v1.0.0 only. Every address and offset is from the retail Switch
main module, image base `0x60000000`.

## Result

| | units |
| --- | ---: |
| before | 7,359 failing (83.70% clean) |
| after | 6,232 failing (86.20% clean) |
| **net** | **−1,127 failing** |

| | units |
| --- | ---: |
| **fixed** (failing → clean) | 1,127 |
| **regressed** (clean → failing) | 0 |
| still failing | 6,232 |

The two "cheap wins" that `COMPILE_FAILURES.md` identified by bucket count each
turned out to have **one** cause, and neither cause was in the bucket's own units.

## Bucket 1: `member not found` (469 single-error units)

448 of 469 (96%) were the same bug: the arrow rewriter could not see `a1[8].id`,
because its chain pattern required `->`. See `INDEXED_ACCESS_FIX.md`.

```c
CollisionMgr_dtor(&a1[8].id);                      // published, does not compile
CollisionMgr_dtor(&FIELD_U32(a1 + (8) * 80, 0x8)); // fixed; code says #648 == 0x288
```

Corroborated against the disassembly, not assumed: 977 units / 3,712 expressions
rewritten, 400 units went fail → pass, 0 regressed.

## Bucket 2: `conflicting types` (907 single-error units)

906 of 907 were one line style in `nsmbudx_prototypes.h`: every function was
declared `()`. A definition with real parameters may not contradict that. See
`PROTOTYPE_CONFLICT_FIX.md`.

The first attempt filled all 33,564 prototypes and made things **worse**: 8,278
failing, up 919. Real prototypes enforce arity, and the decompiled call sites do
not always agree — 1,850 `too few arguments` and 635 `too many arguments` appeared.

The corrected approach fills a prototype only when it is safe to do so:

| gate | prototypes |
| --- | ---: |
| filled — every call site passes the right number of arguments | 32,019 |
| held — call sites disagree on arity | 1,544 |
| held — definitions disagree with each other | 16 |
| held — multi-line definition | 109 |
| held — no definition / unparsable | 222 |

Then a second pass compiled every unit that regressed and reverted **only** the
prototype responsible — 6 prototypes, fixing all 23 regressions. The decision is
made by the compiler, not by a type-compatibility heuristic, because deciding
whether `unsigned char[1]` converts to `float` from source text is exactly the
kind of guess this corpus avoids.

## Why the accounting is trustworthy

The delta is measured by comparing the per-unit failure set before and after, not
by subtracting bucket totals:

```
previously failing : 7359
currently failing  : 6232
  FIXED : 1127
  BROKE : 0
  still : 6232
```

`compare_failure_sets.py` does that comparison and prints any regressed unit with
its diagnostic. The intermediate bad state is recorded here rather than quietly
discarded: the ungated prototype fill really did regress the corpus by 919 units,
and the only reason it is not in the tree is that it was measured and reverted.

## Deluxe-only note

`Actor` is 80 bytes with `id` at 0x8 in this build, and the `str r1,[r0],#648`
that proves the indexed offset is a Switch instruction. The Wii U original has
different struct sizes and different method signatures, so neither the constants
nor the prototypes transfer.

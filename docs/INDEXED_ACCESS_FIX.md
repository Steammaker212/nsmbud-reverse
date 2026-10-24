# The indexed-access gap: 448 units, one cause

Deluxe (Switch) v1.0.0 only. All addresses and offsets below are from the retail
Switch main module, image base `0x60000000`.

## Summary

The 469-unit `member not found` bucket that `COMPILE_FAILURES.md` called a "cheap
win" was not 469 problems. **448 of those units (96%) had one cause:** the arrow
rewriter could not see `a1[8].id`.

```c
// published, fails to compile
CollisionMgr_dtor(&a1[8].id);

// after the fix
CollisionMgr_dtor(&FIELD_U32(a1 + (8) * 80, 0x8));
```

`Actor` is 80 bytes and `id` sits at 0x8, so `a1[8].id` is `8*80 + 0x8 = 0x288`.
The machine code for that function says exactly that:

```
60003fac:  e4801288   str  r1, [r0], #648    @ 0x288
```

`648 == 0x288`. The arithmetic is not inferred from a header — it is read back
out of the instruction that performs it.

## Why it was invisible

`rewrite_arrows.py`'s `CHAIN` pattern required an arrow:

```python
r"\b([A-Za-z_]\w*)((?:\s*\[\s*[^\]]+\s*\])?)(\s*->\s*[A-Za-z_]\w*...)"
```

C pointer arithmetic in decompiled output appears in two forms, and only one has
an arrow:

| source | form | matched before |
| --- | --- | --- |
| `a1->id` | field of a pointer | yes |
| `a1[8].id` | field of an element of an array of structs | **no** |

Because it never matched, the compiler saw a member that `struct Actor` does not
declare — `id` belongs to `Actor`, but `a1[8]` was typed as `Actor` and then `.id`
was applied to an *array index expression* the header cannot model. The error
message ("no member named 'id' in 'struct Actor'") is misleading: the member
exists, the *base* is wrong.

## The fix

Two changes, both narrow:

1. `CHAIN` also accepts `.` as the first connector, so `a1[8].id` matches.
2. The walker multiplies the index by `sizeof(base type)` and adds the member
   offset, but **only when the size is known**. With an unknown size it leaves the
   expression verbatim — guessing a stride would silently read the wrong element,
   which is worse than a compile error.

## Evidence gate

The same gate discipline as the pointer-hop fix: an expression is rewritten only
if the disassembly corroborates it.

For an indexed access the claim is a single total byte offset, so the test is
whether that constant appears anywhere in the function — via an addressing-mode
immediate, an `add`, a `movw`/`movt` pair, or a literal-pool word. Offsets ≥ 4096
never appear as an inline immediate on ARM32, which is why the literal-pool and
`movw` paths had to be added before the check was meaningful.

| | units | expressions |
| --- | ---: | ---: |
| corroborated and rewritten | 977 | 3,712 |
| held back (offset not found in code) | 645 | 3,568 |
| expression absent / no published file | 26 | — |

The 3,361 un-corroborated expressions are not "wrong". They are unproven: the
stride comes from the declared type, and where the function's code does not show
that constant the declaration may be the thing that is wrong. Those stay as
source text.

## Measured result

| | units |
| --- | ---: |
| rewritten | 977 |
| already compiled clean | 4 |
| **fail → pass** | **400** |
| still failing (unrelated second cause) | 573 |
| **regressed** | **0** |

The delta is measured per file against `HEAD`, compiling both versions, not by
subtracting bucket counts. 400 units is the honest gain; the other 573 need a
different fix and are unaffected either way.

## Deluxe-only note

Every offset here (`Actor` = 80 bytes, `id` at 0x8, `str #648`) is from the Switch
binary. The Wii U original has different struct sizes and a different
`Actor` layout, so neither the constant nor the stride transfers.

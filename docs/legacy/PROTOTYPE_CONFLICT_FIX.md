# 906 units, one header line

Deluxe (Switch) v1.0.0 only.

## Summary

The 907-unit `conflicting types` bucket was 906 units with a single cause, and
the cause was not in any of those units. It was in `nsmbudx_prototypes.h`.

The generator declared every function with an empty parameter list:

```c
StageActor *__fastcall StageActor__setPlayerId(); /* 0x60002780 */
```

Each unit then defines the same function with the signature the decompiler
measured:

```c
StageActor *__fastcall StageActor__setPlayerId(StageActor *this, char playerId)
```

clang rejects that pair. Reproduced in six lines:

```c
typedef struct StageActor { unsigned char _unknown[]; } StageActor;
StageActor *StageActor__setPlayerId();
StageActor *StageActor__setPlayerId(StageActor *this, char playerId) { return this; }
```

```
error: conflicting types for 'StageActor__setPlayerId'
note: previous declaration is here
```

The error is reported at the *definition*, which is why it looked like 906
separate unit-level problems. It is one declaration style applied 44,953 times.

## The fix

`fill_prototypes.py` reads each function's parameter list out of the unit that
defines it and writes it into the header. The unit definition **is** the measured
signature — it is what the decompiler derived from the argument registers — so the
header is made to agree with the evidence rather than being given an invented
prototype.

## The first attempt made it worse

Filling all 33,564 prototypes unconditionally fixed the conflict family and then
created a bigger one. A real prototype enforces arity at every call site, and the
decompiled call sites do not always pass the right number of arguments:

| bucket | after ungated fill |
| --- | ---: |
| `too few arguments` | 1,850 |
| `too many arguments` | 635 |
| `conflicting types` | 70 |

The corpus went from 7,359 failing to **8,278** — a regression of 919 units. This
is recorded rather than quietly reverted, because it is the exact failure mode a
large mechanical edit has: it fixes the thing being measured and breaks something
that was not being looked at.

## The gated fix

A prototype is now filled only when doing so cannot contradict the code:

| gate | prototypes |
| --- | ---: |
| **filled** — every call site passes the right number of arguments | 32,019 |
| held — call sites disagree on arity | 1,544 |
| held — definitions disagree with each other | 16 |
| held — multi-line definition | 109 |
| held — no definition / unparsable | 222 |
| zero-argument definition (nothing to add) | 11,036 |

That removed the arity families entirely (12 and 1 units remain, both pre-existing)
and still fixed the conflict family.

## The 23 units that still regressed, and how they were handled

With arity gated, 23 units still broke, all on one shape:

```
error: passing 'unsigned char[1]' to parameter of incompatible type 'float'
```

The cause is a wrong type in the *definition*: `sub_60002B90(unsigned int a1,
float a2)` is called with a `char[1]` data symbol. Deciding type compatibility from
source text is unreliable here (typedefs, casts, array decay, implicit
conversions), so the decision is left to the compiler:

`revert_breaking_prototypes.py` compiles each regressed unit, tries reverting the
prototype named in the diagnostic, and keeps the revert only if the unit actually
compiles. **6 prototypes** were reverted this way and all 23 units compile again.

Final state: **1,127 units fixed, 0 regressed.**

## What is still held, and why

**16 functions** are defined with different parameter lists in different units.
That disagreement is real evidence of a decompilation problem, not a formatting
inconsistency, so picking one would be inventing a fact:

| function | variants |
| --- | --- |
| `Actor__beforeCreate` | 1× `int ()` vs 9× `Actor *(Actor *this)` |
| `BowserJrBase__vf448` | 1× `int ()` vs 2× `bool (int *a1)` |
| `Actor__onDelete` | 1× `int ()` vs 1× `int (Actor *this)` |

The 9-vs-1 count suggests the majority form is right, but "probably right" is not
the standard used everywhere else here, so these stay as `()` and still fail.

**109 functions** have definitions whose parameter list spans lines. Writing those
into a single header line would corrupt the file; collapsing them is a formatting
decision, so they are left alone and counted.

## A bug this introduced and then fixed

The first run embedded multi-line parameter lists into single header lines,
producing entries like

```c
int __fastcall CircularCollider_initImpl(CircularCollider *this,
        ColliderOwnerInfo *ownerInfo,
        ...
```

which introduced a new family of `unknown type name` errors from the truncated
entries. The guard that rejects any captured parameter list containing a newline
was added and the header regenerated from `HEAD`, so the published header contains
no such lines (verified: zero leaked multi-line fragments).

This is recorded because the failure mode — a "fix" that trades one error family
for a larger one — is exactly what the before/after measurement exists to catch,
and it did. The count of errors that transient state produced was not captured
before it was reverted, so no figure is claimed for it.

## Deluxe-only note

The signatures come from the Switch binary's argument usage. The Wii U original
has different method signatures in several classes, so these prototypes do not
transfer.

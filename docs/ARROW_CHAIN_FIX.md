# Arrow-chain dispatch bug: fixed

**Scope: New Super Mario Bros. U Deluxe (Switch) v1.0.0 only.** Every address,
offset and count below refers to that build; nothing was checked against the Wii U
original, and none of it may be carried over to one.

[`ARROW_CHAIN_AUDIT.md`](ARROW_CHAIN_AUDIT.md) measured the damage. This records
the repair, and it is deliberately narrower than the audit's 42 confirmed cases:
only expressions whose two-load shape the disassembly actually shows were
rewritten. The rest are held and listed.

## The bug

[`scripts/pipeline/rewrite_arrows.py`](../scripts/pipeline/rewrite_arrows.py)
renders Hex-Rays `a->b->c` as one `FIELD_*(a, offset)`. It did that by *summing*
member offsets, which is only valid when every hop is an embedded member (offset
added to the same object). A hop through a pointer dereferences:

| form | meaning |
| --- | --- |
| `a->embed.c` | `*(a + off_embed + off_c)` — sum is correct |
| `a->ptr.c` | `*(*(a + off_ptr) + off_c)` — sum is **wrong** |

The cause was one line in `load_types()`: `mt = mt.replace("*", "")`. The
pointer-ness of each member was erased before the walker ever saw it, so a
pointer hop and an embedded hop became indistinguishable. This is why
`Actor__getProfileId` published `FIELD_U32(a1, 0x14)` when the code is
`ldr r0,[r0,#0xC]; ldr r0,[r0,#8]`.

## The fix

`load_types()` now records `is_pointer` per member instead of discarding it, and
`rewrite_body()` keeps two pieces of state:

* `expr` — the expression for the object currently referenced;
* `pending` — the sum of embedded offsets accumulated since the last
  dereference.

A pointer hop flushes `pending` through a `FIELD_U32` read and resets it; an
embedded hop only adds to it. The final member is emitted the same way, so the
zero-offset case falls out rather than needing a special case. Chains that cannot
be fully resolved (unknown member, unknown type, non-byte-aligned bitfield,
indexed access) are left byte-for-byte as they were.

## What was applied, and what was not

| | units | expressions |
| --- | ---: | ---: |
| chain shapes the old code got wrong | 53 | 64 |
| **applied — disassembly shows the two-load shape** | **16** | **19** |
| held — disassembly does not corroborate | 37 | 46 |

Applying only the corroborated subset is the point. The rewrite is now gated on
`--require-confirmed`, which disassembles the function, resolves the chain's root
through the signature to its argument register (`a3` → r3, not "any of r0..r3"),
tracks `mov` copies, and requires:

1. a load of `[base + first]`, where `base` is the register that actually carries
   the chain's root;
2. a later load of `[that_result + second]`;
3. **no** load of `[base + first + second]`.

Check 3 is the discriminating one: if a single load at the summed offset exists,
the flattened form might have been describing that instead, so the case is
reported ambiguous rather than "fixed".

## The dispatch bug specifically

`StateMgr__execute` is the case where flattening changes *which function is
called*, not merely which value is loaded:

```
0x608181E8  ldr r0, [r4]       ; this->executer
0x608181EC  ldr r2, [r0]       ; executer->vtable
0x608181F0  ldr r2, [r2, #8]   ; vtable + 8
0x608181F4  blx r2
```

Published before: `(*((int (**)(void))FIELD_U32(this, 0x0) + 2))()` — indexes
`this` and calls through its first word. Correct:
`(*((int (**)(void))FIELD_U32(FIELD_U32(this, 0x0), 0x0) + 2))()`.

The hop here has offset 0, so the summed *number* was coincidentally right while
the expression was wrong.

## Verification

* `test_arrow_fix.py` — 4/4 documented cases produce the correct expression,
  including `StateMgr__execute`.
* `measure_arrow_blast.py` — of 47,151 functions, 53 change and **resolution is
  lost in 0**.
* `verify_arrow_fix.py` — per-expression, against the disassembly, as above.
* Compile check on all 16 changed files: **error counts identical before and
  after** (8 of the 16 already failed to compile for unrelated reasons; none of
  those failures changed, and no new ones appeared).

The 19 applied expressions leave the compile-clean count exactly where it was,
because both the flat and nested forms are valid C of the same type. This repair
is about what the C *means*, not about whether it parses.

## Still open

The 46 held expressions are not certified either way. Each is a chain where the
disassembly does not show an unambiguous two-load sequence, usually because the
offset is large (≥4096) and arrived via a literal pool, or because the chain root
is a local rather than a parameter. They are listed by
`apply_arrow_fix.py --require-confirmed` and are left as published rather than
changed on suspicion.

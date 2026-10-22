# Truncation status: 48 of 56 recovered, 8 open

The merged corpus had **56 functions whose text was cut short**. 48 now have complete authoritative bodies.
8 remain, and this file records exactly why rather than implying they are done.

Verified with two independent detectors that agree:

```powershell
python scripts/find_truncated_functions.py decompiled     # 8
python scripts/crosscheck_labels.py decompiled            # 17 dangling of 13,132 gotos
```

(Sanity check that the detectors work: injecting a file with a deliberately dangling `goto` makes them report
it. A detector that silently stopped matching would report 0 and look identical to a clean corpus.)

## The 8 that remain

| Function | RVA | Corpus body |
|---|---|---|
| `sub_6011941C` | 0x11941C | missing `__LABEL_60` |
| `ShapedCollider_vf24_helper_helper_1638EC` | 0x1638EC | missing `__LABEL_87` |
| `sub_601CA03C` | 0x1CA03C | missing `__LABEL_97` |
| `sub_60280788` | 0x280788 | missing `__LABEL_205` |
| `sub_608044F0` | 0x8044F0 | missing `__LABEL_87` |
| `sub_60787B8C` | 0x787B8C | missing `__LABEL_134` |
| `sub_60799BA0` | 0x799BA0 | missing `__LABEL_134` |
| `sub_605C4308` | 0x5C4308 | missing `__LABEL_213` |

## What is actually wrong

These are real A32 functions. Disassembly of `0x6011941C` shows a textbook prologue and a jump table:

```
0x6011941C  PUSH {R4-R9,R11,LR}
0x60119420  VPUSH {D8-D12}
0x60119428  MOV  R4, R0
0x60119438  SUB  R0, R0, #1     ; switch 6 cases
0x60119450  ADD  PC, R0, R1     ; switch jump
```

But `main.i64` has **no function boundary** at them: `get_func` returns None, and the bytes carry a `loc_` name.
The code is present; the boundary is not.

## Approaches that failed, and why

**Bound the function as `[address .. next function start]`.** This produced bodies that decompiled cleanly and
had zero dangling gotos — and were still wrong. Their signatures gave them away:

```
sub_605C4308   63 parameters
sub_60787B8C   46 parameters        (called with 3 arguments; body references a46)
sub_601638EC   39 parameters
sub_608044F0   33 parameters
```

The range ran past the real end and swallowed neighbouring functions. Arity is the measurement that catches
this; gotos and label checks do not. clang caught it too, as `conflicting types for 'sub_60787B8C'` at the
call site. Those 8 files were reverted.

**Stop at the first epilogue.** Scanning for `POP {..,PC}` / `BX LR` found **no return instruction at all** in 7
of the 8 regions, over spans of 0x858 to 0x2CD8 bytes. That is not a real result — it means the scan never
reached the epilogue, so the extent derived from it would be wrong too.

**Let IDA decide the extent.** `ida_funcs.add_func(ea)` with no explicit end returns False for all of them: IDA
will not create a function without being told where it ends.

## What would work

The boundary has to come from the binary's own metadata rather than from a scan or a neighbour:

* the function's unwind info / `.ARM.exidx` entry, which states start and length directly; or
* the `loc_` references in `main.i64` — a `loc_` is created by a branch target, so the set of `BL` targets
  into this region tells where sibling blocks begin and hence where this one ends.

Both are concrete and checkable. Neither has been attempted, so nothing here is claimed fixed.

## Why not just place the missing label

`sub_60787B8C` is the clearest case: 409 lines, 8 gotos, 8 labels defined, and exactly one target with no
landing site. Dropping `__LABEL_134:` somewhere plausible would compile and would almost certainly be wrong —
the label is the destination of a shared cleanup path, and putting it at the wrong offset silently changes what
the function does. A compile error is the better outcome.

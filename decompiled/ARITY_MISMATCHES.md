# Arity mismatches that the database itself contains

Two error classes account for 547 of the corpus's remaining errors:

| Error | Sites |
|---|---|
| too many arguments | 243 |
| too few arguments  | 274 |

The "too many" class is fixed -- see scripts/drop_unread_call_args.py and the commit that added it. The "too few"
class is not, and this file records why.

## What the evidence shows

Take sub_60808F58, 0x20 bytes in the database:

```
60808F58 PUSH {R4,LR}
60808F5C MOV  R4, R1          <-- reads the second argument
60808F60 BL   sub_60805BA8
...
```

Its body reads R1. Its in-file definition says `sub_60808F58(int a1, int a2)`. But the corpus calls it with one
argument at every site, and re-decompiling the enclosing functions inside IDA against the same database produces
the same one-argument call:

```
v6 = sub_60808F58(SoundSystem_instance);
```

So the body, the definition and the call sites disagree inside the database, and IDA's own decompiler emits the
call that this repository already contains. There is no edit to the corpus that would make it match all three, and
choosing one would mean inventing an argument that has no recorded source.

Of the 274 "too few" sites, 254 involve a callee that has an in-file definition (so both halves are visible in one
unit) and 20 involve a header-only declaration.

## What was tried and rejected

Relaxing the 148 involved in-file prototypes to `()` in one pass takes the corpus from 1119 to 2605. Those
prototypes are load-bearing for other call sites in the same file, so the change is a large regression and was
reverted immediately. Whether each of the 148 can be relaxed has to be decided per function by comparing every call
site against the body's register usage, which is a slower job than the batch above and has not been done.

## Consequence

These 274 sites stay as errors. That is an honest state: the decompiled call matches what IDA produces for this
database, and the disagreement is upstream of the C text.

# The image is ARM (A32), not Thumb — and how that was proven

This is the most consequential correction in the project so far, because it explains several
failed analyses and it changes what a call graph means here.

## How the mistake happened

The NSO is a 32-bit ARM image. I assumed Thumb (`AArch32` implies neither), and wrote Thumb-2
`BL` decoders to scan `.text` for calls. Those decoders produced nonsense: **295 "BL" instructions
in a 10 MB `.text`**, and zero hits for `Player_ctor`, which IDA reports as called.

The failure was caught only because I ran the decoder against a **positive control**. The first
attempt found 0 calls to 40 sampled functions and it would have been easy to conclude "these
functions are genuinely uncalled" — a wrong conclusion stated with confidence.

## The proof

A known call exists at RVA `0x7CB7D8`: `Yoshi_ctor` calls `PlayerBase_ctor` (`0x75DEFC`). The bytes
there are

```
c7 49 fe eb      ->  little-endian word 0xEBFE49C7
```

A32 `BL` is `cond=1110 1011 imm24`:

```
w        = 0xEBFE49C7
imm24    = 0xFE49C7  ->  sign-extend (bit23 set)  ->  -0x1B639
target   = (addr + 8) + (imm24 << 2)
         = 0x7CB7E0 + (-0x6D8E4)
         = 0x75DEFC   =  PlayerBase_ctor   ✓
```

Note the ARM pipeline offset: **`addr + 8`**, not `+4`. That is the detail that makes an A32
decoder work and a Thumb decoder silent.

## Calibration

Rather than trust one control, the decoder was tested against **20,000 of IDA's own recorded
xrefs**:

```
xrefs examined : 20,000
decoded match  : 18,208
no match       :  1,792
agreement      :  91.0%
```

The 9% misses are all plain `B` branches (tail jumps), which the decoder deliberately does not
claim to decode — the sample mismatches printed by the calibration script are every one an
instruction IDA shows as `B sub_60000288`. So agreement on *calls* is effectively complete.

With the decoder validated, the whole image yields:

```
BL/BLX instructions decoded : 127,465
distinct callees            : 13,386
```

against **295** from the Thumb decoder. That is the size of the error.

## What this changes

1. **"66.5% of functions have zero xrefs" is about IDA's database, not about the program.** The
   corrected scan still finds ~23,000 unnamed functions with no direct `BL` caller, but those are
   reached by virtual dispatch (see [CALL_GRAPH_METHOD.md](CALL_GRAPH_METHOD.md)), by `B` tail
   branches, or registered at runtime. The number is real; its interpretation is not
   "unreachable".

2. **`B` branches matter.** Many functions are entered by a plain `B` (a tail call or a jump
   stub). A `BL`-only scan misses those, which is why one helper name had to be reverted — see
   below.

3. **A positive control is mandatory.** Three scans in this project have now produced confident
   negatives that were artifacts of a broken method (absolute-address scan, Thumb scan, and the
   xref-count reasoning). All three would have been caught immediately by testing the method on a
   case with a known answer.

## The `_helper_` naming rule, and its audit

With a working call graph, unnamed functions whose only direct caller is a **strongly named**
function were named:

```
<StrongCaller>_helper_<RVA>
```

"Strong" excludes `*_ref` names, because a helper of `SE_PLY_THROW_ref` would inherit a name that
says nothing. Applied to **156** functions; 6,619 were skipped for having only a weak-caller name
and 4,866 for having more than one caller.

Then the rule was **re-derived from scratch** as an audit: every helper must have exactly one
direct ARM caller.

```
helpers failing the 1-caller check: 1 of 157
  0x0035B204  j_KoopaTroopa_onCreate_helper_35A5CC  has 0 caller(s)
```

That one is reached by a `B` stub rather than a `BL`, so the claim was unverified and the name was
reverted to `sub_35B204`. **156 of 157 survived.** The audit is why the batch is trustworthy; the
same discipline is what caught the 2,450 bad `SE_*` names in an earlier round.

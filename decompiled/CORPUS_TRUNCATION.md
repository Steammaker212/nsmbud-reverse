# Corpus truncation: functions are incomplete, not merely unformatted

A `goto` in hand-written C always has a matching label. Three `goto` targets in `player.c` had **no label
anywhere in the file**, which is impossible for valid source and pointed at data loss rather than a
formatting problem. Re-decompiling the owning function from `main.i64` confirmed it.

## Evidence

`Player_animSetCarry_load` (RVA 0x78F32C):

| | corpus `player.c` | fresh Hex-Rays from `main.i64` |
|---|---|---|
| `switch (a5)` cases | **12** (max case 41) | **42** (max case 165) |
| `LABEL_484` definition | missing | present at `LABEL_484:` |
| `LABEL_485` definition | missing | present at `LABEL_485:` |
| file length | ends mid-`case 41`, `"M_swim_standing"` | complete, ends at `default: return v9;` |

The corpus body stops in the middle of `case 41` and the next function header begins. 30 of 42 cases are
absent: all the `M_carryP_wait*`, `M_carry_wait*` animation entries. This is not a rendering artefact; the
source text genuinely ends.

Fresh decompilation of that function is committed at
`decompiled/authoritative/Player_animSetCarry_load.sub_6078F32C.c` as the authority for this function.

## Why this matters more than the parse count

`parse: 459 / 475` measures whether a translation unit is *syntactically* valid. A function that loses 30
of its 42 cases still parses. So the parse count cannot detect this class of loss, and an improving parse
count does not mean the decompilation is getting more complete.

`scripts/close_unterminated_functions.py` closed the 528 unbalanced braces. That made the files parse, but
in a truncated function it closes the body at the truncation point, which is why `LABEL_484` and
`LABEL_485` became unreachable rather than merely undeclared. The brace repair is still correct for
genuinely unterminated bodies; the point is that it cannot restore content that was never there.

## The general check

For any function, compare:

```python
# labels used vs defined -- a mismatch means the body was cut
used    = set(re.findall(r'goto\s+(LABEL_\w+)', body))
defined = set(re.findall(r'^\s*(LABEL_\w+)\s*:', body, re.M))
assert used <= defined
```

`player.c` fails this for `LABEL_134`, `LABEL_484`, `LABEL_485`. The same test applied corpus-wide will find
every other truncated function, and each one should be re-decompiled from `main.i64` with
`scripts/redecompile_rvas.py` rather than patched by hand.

## Still unresolved

`LABEL_134` is used at lines 3593 and 16488, in **two different functions** (`sub_60787B8C` and
`sub_60799BA0`). Per-function label names are reused across functions and collide when files are merged, so
a merged file cannot represent both unambiguously. Fixing that needs label names qualified by function
(e.g. `sub_60787B8C_LABEL_134`), which is a change to the merge step, not a patch to these two call sites.

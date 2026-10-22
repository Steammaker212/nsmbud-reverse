# Authoritative re-decompilations

Fresh Hex-Rays output for functions whose text in the merged corpus is **truncated**. These files are the
authority for those functions: they come straight from `main.i64` and are complete.

Generated with:

```powershell
$env:NSMBUDX_RVAS = "0x11941C,0x11CB70,..."      # from scripts/find_truncated_functions.py
$env:NSMBUDX_OUTDIR = "<out>"
idat.exe -A -L<log> -S"scripts/redecompile_rvas.py" main.i64
```

## Why these exist

`scripts/find_truncated_functions.py` reports **56 functions** whose `goto` targets have no matching label.
A `goto` without a label cannot occur in valid C, so each of those bodies was cut short somewhere upstream.
Re-decompiling the owners gives the missing text.

Verification: **every file here has zero missing labels**, while the corresponding corpus function loses at
least one. Where a `switch` is involved the gap is large — `Player_animSetCarry_load` has 12 cases in the
corpus and 42 here.

| File | Corpus symptom |
|---|---|
| `Player_animSetCarry_load.sub_6078F32C.c` | 12/42 cases; bodies for `M_carryP_wait*`, `M_carry_wait*` absent |
| `sub_60037BB0.c` | 24 cases, `LABEL_63/72/90/91` dangling in corpus |
| `sub_60045DB4.c` | 34 cases, `LABEL_181` dangling in corpus |
| `sub_6027E874.c` | 10 cases, `LABEL_136` dangling in corpus |
| (22 more) | each replaces a body with at least one dangling label |

## 8 functions could not be recovered this way

These RVAs are named in the corpus but `main.i64` has **no function starting there**, so Hex-Rays returns
nothing:

```
0x11941C  0x14DEE4  0x1638EC  0x178CF0  0x280788  0x3B7478  0x5C4308  0x787B8C
```

They are mid-function addresses: the corpus derived them from a different database layout, or they are
sub-blocks that `main.i64` keeps inside a larger function. Recovering those needs the containing function
decompiled and the sub-block located within it, not a direct RVA lookup. Not attempted here rather than
guessed at.

## Not yet merged back

These files sit in `authoritative/` rather than replacing text in the merged corpus. Wiring them in means
deciding how a merged file should express two functions that both use `LABEL_134` — see
`CORPUS_TRUNCATION.md`. Replacing the body without solving that would reintroduce the ambiguity.

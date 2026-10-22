# Assembly-removal status

Verified with:

```powershell
# bare ARM instructions outside comments
Select-String -Path decompiled\*.c,decompiled\*\*.c -Pattern '^\s+(uxtb16|sxtb16|uxtb|sxtb|rev|rbit|clz)\s*\(\s*r\d+\s*\)'
# physical register names used as C variables
Select-String -Path decompiled\*.c,decompiled\*\*.c -Pattern '\b_R([0-9]|1[0-5])\b'
# inline assembly
Select-String -Path decompiled\*.c,decompiled\*\*.c -Pattern '__asm'
```

| Check | Before | Now |
|---|---|---|
| Bare ARM instructions (`uxtb16(rN)` etc.) | 18 | **0** |
| ARM register names used as C variables (`_R0/_R1/_R2`) | 39 | **0** |
| `__asm` statements | 0 | 0 (7 matches are comments) |
| Files with unbalanced braces | 9 | **0** |

## What was in the way

**528 missing closing braces across 9 files.** A function body would run its `MEMORY[]` stores and then
simply stop -- no closing brace, no `return` -- and the next function's header comment followed. clang
reports this far from the cause:

```
error: function definition is not allowed here
```

`player.c` needed 16 closes, `libs.c` 211. This was present at HEAD and not introduced by later edits.
`scripts/close_unterminated_functions.py` inserts the missing braces immediately before the next function
header, which is where the previous body provably ended. It only adds braces; it invents no statements.

**18 bare ARM instructions.** The idiom was always the same:

```c
regTmp1 = a5 << 16;
uxtb16(r1);                        /* bare instruction, not C */
v17[0] = ... | regTmp1 | ...;
```

The first version of `scripts/fix_bare_instructions.py` **deleted** these, on the assumption that the next
line already expanded the mask. Reading one site disproved it: `regTmp1` is used in the following
expression, so the mask is load-bearing. The script now **translates** to `regTmp1 = uxtb16(regTmp1)`, and
the `uxtb16` helper that `scripts/fix_asm_escapes.py` already emits (`x & 0x00FF00FF`) does the work.

**39 ARM register names.** `_R0/_R1/_R2` were physical registers kept as pseudo-variables. Renamed to
declared locals so the code reads as C.

**457 `__operator_new[]` sites.** IDA prints the C++ array form with a literal `[]`, which is not a legal C
identifier. Mapped to the project's existing `__operator_new_array_al` overloads.

## Still open

Three `goto` targets have no label anywhere in the file, and this is also a HEAD-age defect:

```
player.c: goto LABEL_134  (lines 3593, 16488)  -- no LABEL_134: anywhere
player.c: goto LABEL_484  (many)              -- no LABEL_484: anywhere
player.c: goto LABEL_485  (many)              -- no LABEL_485: anywhere
```

I have not invented label positions. Placing one at a guess would silently change control flow, which is
worse than the compile error. `LABEL_485`/`LABEL_484` look like the shared exit of the `switch (a5)`
animation-name table, and `LABEL_134` like a common return point, but "looks like" is not evidence.

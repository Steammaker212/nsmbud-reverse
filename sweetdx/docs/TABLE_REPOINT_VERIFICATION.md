# Mode-table repoints verified against retail memory

The `mode_tables.hks` relocation is the highest-risk change in the build. This document
records that it is correct, so it can stop being a suspect.

## The mechanism

Each of the six readers uses the standard ARM literal-pool idiom:

```
LDR Rn, =(table - pc)      ; compiled to a DCD in the literal pool
LDR Rn, [PC, Rn]           ; Rn = stored + pc = table
```

So the relation the engine relies on is `stored + pc == table`. Verifying a repoint
means checking both halves of that equation.

## All six resolve exactly

| reader | site | pc | retail stored | retail + pc | ours stored | ours + pc |
|---|---|---|---|---|---|---|
| `body_reader_a` | `0x78C58C` | `0x78C540` | `0x0037FCF0` | `0x00B0C230` | `0x003BCE98` | `0x00B493D8` |
| `body_reader_b` | `0x78E604` | `0x78E5C0` | `0x0037DC70` | `0x00B0C230` | `0x003BAE18` | `0x00B493D8` |
| `body_reader_c` | `0x78E7E8` | `0x78E630` | `0x0037DC00` | `0x00B0C230` | `0x003BADA8` | `0x00B493D8` |
| `height_reader_a` | `0x795FF0` | `0x795D44` | `0x00376578` | `0x00B0C2BC` | `0x003B3664` | `0x00B493A8` |
| `height_reader_b` | `0x7960F8` | `0x796018` | `0x003762A4` | `0x00B0C2BC` | `0x003B3390` | `0x00B493A8` |
| `balloon_reader` | `0x7982D8` | `0x798224` | `0x00374128` | `0x00B0C34C` | `0x003B11E0` | `0x00B49404` |

Every retail literal resolves to the real table, and every new literal equals
`relocated_target - pc`. Each new value in the file was checked against that
computation; all six match.

## The relocation targets are genuinely free

| target | holds | section |
|---|---|---|
| `0xB493A8` (height copy) | 0 non-zero bytes in 44 | `.rodata` |
| `0xB493D8` (body copy) | 0 non-zero bytes in 44 | `.rodata` |
| `0xB49404` (balloon copy) | 0 non-zero bytes in 44 | `.rodata` |

Zero-filled padding inside `.rodata`, so writing the copies cannot clobber anything live.

## The retail tables read as documented

```
height  0xB0C2BC  [16.0, 31.0, 31.0, 6.0, 31.0, 31.0, 31.0, 31.0, 31.0, 31.0]   then 0.0
body    0xB0C230  [1, 0, 0, 1, 2, 3, 0, 4, 4, 5]                                then 0xA5
balloon 0xB0C34C  [0.0, -4.0, -4.0, 4.0, -5.0, -2.0, -4.0, -4.0, -4.0, 0.0]      then 0,0
```

Ten live entries each, and the words after them belong to something else — `0xA5` is
not a valid body type, and `height[10]` would read `0.0`. That is precisely why an
in-place extension is impossible and copies were relocated.

## What this rules out

The repoints are not the reason mode 10 misbehaves. Combined with
`HAMMER_ACTOR_HOOKS_REMOVED.md`, that accounts for every difference between the
known-good step7 build and the failing step11 build *except* the item-grant records,
which were checked separately: retail is `CMP R0,#8` at `0x465F34` and `0x466000`,
`MOVW R1,#0x1FB` at `0x465F40` and `0x46600C`, and the hooks change those to
`cmp r0,#9` and `movw r1,#0x3fb`. Both are strict widenings of the accepted set:
modes 0..9 still pass, and mode 10 (index 9) now also passes. Additive, not
destructive.

## One caution about the tail words

`0xB0C328` is element 10 of a table starting at `0xB0C300`, reached through a
variable-index getter at `0x60796A60` with no bounds check. Retail holds `0` there and
the hook writes `2`. It is the spare word right after the ten entries, so this one *is*
a valid in-place extension — unlike the three above, whose tails are occupied.

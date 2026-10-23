# Remaining compile failures — measured state

Nine of 475 translation units do not parse. This note records what is known about them after several rounds of
measurement, including three hypotheses that turned out to be wrong.

## Current numbers

| file | errors | of which "function definition is not allowed here" |
|---|---:|---:|
| `actors/actor_construction.c` | 872 | 376 |
| `actors/actors_a.c` | 389 | 0 |
| `actors/actors_b.c` | 731 | 321 |
| `libs/libs.c` | 609 | 0 |
| `player/player.c` | 47 | 0 |
| `powerup/powerup.c` | 136 | 71 |
| `systems/core.c` | 532 | 0 |
| `systems/states.c` | 640 | 0 |
| `systems/systems.c` | 372 | 0 |

Total 4,328, down from 5,502 after the seven brace repairs described below.

## The cascade errors, and what actually caused them

`function definition is not allowed here` means the compiler was already inside a function body when it reached
the next definition. It is emitted once per following function, so the 2,099 originally present were a small number
of real defects.

Seven bodies genuinely ended with blocks still open. Walking each file in order and measuring depth at every
function banner finds them exactly:

| file | banner line | braces missing |
|---|---:|---:|
| `actor_construction.c` | 23,377 (`sub_6011941C`) | 2 |
| `actor_construction.c` | 87,887 | 6 |
| `actor_construction.c` | 89,949 | 1 |
| `actor_construction.c` | 110,429 | 7 |
| `actors_b.c` | 150,634 | 2 |
| `actors_b.c` | 199,207 | 1 |
| `powerup.c` | 26,149 | 5 |

`sub_6011941C` confirms it by inspection: the body ends

    23374 |  }          <- closes the switch
    23375 |}            <- closes the function

with two blocks still open, because Hex-Rays emitted the last arms of a nested if/switch chain without their
closing braces.

Inserting those 24 braces took the nine files from 5,502 errors to **4,328**, and `actor_construction.c` from 2,036
to 872. No file got worse. That change is committed.

## Why no further braces are inserted

After a body has lost its closing braces, EVERY later banner reports depth > 0 — 2,770 of them in
`actor_construction.c` alone. Those are consequences, not independent defects. Repairing them all inserted 1,131
braces and took the aggregate from 4,328 back **up** to 5,192.

Repairing them one at a time and keeping a step only if the error count fell gives the same answer:

| file | first remaining leak | effect |
|---|---|---|
| `powerup.c` | line 26,155 (+5 braces) | 136 → 141 errors, no gain |
| `actor_construction.c` | line 23,380 (+2 braces) | 872 → 874 errors, no gain |

So the seven sites above are the complete set that brace insertion can honestly fix. What remains in these three
files needs the owning functions re-decompiled and their bodies replaced.

## Hypotheses that were tested and rejected

1. **The 15 functions with non-zero per-function brace counts are the cause.** Re-decompiling all 15 from
   `main.i64` produced 11 brace-balanced bodies; splicing them in left the same unbalanced-function count per file
   and raised the aggregate from 5,420 to 5,601. Reverted.

2. **The leak starts at `sub_6011941C`'s definition line.** Depth there is 0; it leaks at its END. A first-pass scan
   said otherwise because its "definition" regex also matched forward declarations.

3. **Brace padding can close these bodies completely.** It cannot: 16 braces inserted in
   `actor_construction.c` still leave the file short. The body text is missing structure that padding does not
   restore.

## Two functions that cannot be recovered from the database

`sub_6082AC1C` and `sub_6082B1CC` have no function at their address in `main.i64` — `add_func` fails on both, so
their bodies cannot be re-decompiled at all. They are in `libs/libs.c`.

## Scripts, and which of them to trust

    report_brace_leaks.py          which banners report depth > 0 (accurate)
    repair_leaks_verified.py       repair one leak, recompile, keep only if errors fall (accurate, and the reason
                                   no further brace repair is done)
    balance_function_braces.py     inserts braces at all positive banners -- CORRECT ONLY as a single pass after
                                   reverting to the committed state; running it again is harmful
    splice_recovered.py            replace a function with a fresh decompilation from main.i64
    locate_bad_funcs.py            per-function brace balance
    find_unbalanced_braces.py      per-file net depth; its literal stripping is wrong (reported core.c as +1 when a
                                   careful in-place scan gives 0) -- do not trust its output

Every claim above is from a command run against this repository. The negative results are recorded because they
were plausible and cost real time to disprove.

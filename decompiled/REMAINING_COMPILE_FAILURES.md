# Remaining compile failures — measured state

Nine of 475 translation units do not parse. This note records what is actually known about them, after several
rounds of measurement, including two hypotheses that turned out to be wrong.

## Current numbers

| file | errors | of which "function definition is not allowed here" |
|---|---:|---:|
| `actors/actor_construction.c` | 2 036 | 1 687 |
| `actors/actors_a.c` | 389 | 0 |
| `actors/actors_b.c` | 746 | 341 |
| `libs/libs.c` | 609 | 0 |
| `player/player.c` | 47 | 0 |
| `powerup/powerup.c` | 130 | 71 |
| `systems/core.c` | 532 | 0 |
| `systems/states.c` | 640 | 0 |
| `systems/systems.c` | 372 | 0 |

Total 5 502. The 2 099 cascade errors live in three files only.

## What the cascade errors are, and are not

`function definition is not allowed here` means the compiler was already inside a function body when it reached
the next function's definition. It is emitted once per following function, so 2 099 of these are a small number of
real defects, not 2 099 bugs.

They are **not** caused by the 15 functions whose per-function brace count is non-zero. I tested that directly:
re-decompiling all 15 from `main.i.db` produced 11 brace-balanced bodies, and splicing them in left the same
number of unbalanced functions per file and *raised* the aggregate error count from 5 420 to 5 601. That change was
reverted.

They are **not** caused by `sub_6011941C` or `sub_603F8408` either, which is what a first-pass depth scan
suggested. A per-line depth trace shows depth is exactly 0 at line 22930 where `sub_6011941C` begins, so the
cascade does not start there. The scan that pointed at it measured depth at definition boundaries using a regex
that matched forward declarations as well as definitions, so its "first broken definition" result was not
trustworthy.

The one solid measurement: `actor_construction.c` ends with a net depth of **+12**, meaning twelve `{` are never
closed somewhere in 170 596 lines. The last line at which depth returns to 0 is 22930, so the imbalance
accumulates after that point. Whether that is one truncated body or several is not yet established.

## Why this is not being force-fixed

Inserting the missing `}` mechanically is easy and I tried it: `close_truncated_bodies.py` repairs the first
boundary per file (9 braces across 3 files) and reduced the cascade count in `actors_b.c` from 341 to 321 and
`powerup.c` from 71 to 71. It is not a fix, it is a guess about where a body was supposed to end, and it is not
idempotent — a second run inserted 8 more braces. Making the compiler accept a body that is still semantically
wrong would hide the defect instead of repairing it.

The correct repair is to re-decompile the owning function from `main.i64` and replace the body wholesale, which is
what `splice_recovered.py` does. That needs the replacement to be strictly better per file, and so far it has not
been.

## Two functions that cannot be recovered from the database

`sub_6082AC1C` and `sub_6082B1CC` have no function at their address in `main.i64` — `add_func` fails on both, so
their bodies cannot be re-decompiled at all. They are in `libs/libs.c`.

## Method note

Every claim above is from a command run against this repository, and the two negative results (the 15-function
splice and the `sub_6011941C` attribution) are recorded because they were plausible and turned out to be wrong.
The scripts that produced them are kept in `scripts/` so the measurements can be repeated:

    find_unbalanced_braces.py      per-file net brace depth (its literal stripping skips comments incorrectly;
                                   it reported core.c as +1 when a careful in-place scan gives 0 -- do not trust
                                   this one's output, keep it only as a starting point)
    locate_bad_funcs.py            per-function brace balance
    splice_recovered.py            replace a function with a fresh decompilation
    close_truncated_bodies.py      insert the first boundary's missing braces (a guess; measured, not a fix)

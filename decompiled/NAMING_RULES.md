# Why most names end in `_ref`

Around 1,370 functions are named `<STRING>_ref`. That suffix is deliberate and it is the
honest claim: **this function references that string**. It is not a claim about what the
function does, because a string inside a function does not prove what the function is.

## The batch that had to be thrown away

A first attempt named 2,453 functions after their "best-scoring" string. Coverage jumped to
16.3% and the names looked convincing:

```
0x00000a44  SE_EMY_KAME
0x00007b5c  ActorUnitHeap
0x00021b50  SE_SYS_THREE
0x00033d4c  SE_OBJ_BOSS
```

Auditing the actual pseudocode showed every one of those is wrong:

| name | what the function actually does |
|---|---|
| `SE_EMY_KAME` | not a sound player — it initialises a 9-entry table of `SE_EMY_KAME_HIT_1..7` |
| `ActorUnitHeap` | creates a heap whose name string is **`"PlayerUnitHeap"`** |
| `SE_SYS_THREE` | truncated from `SE_SYS_THREE_UP`, so it names a string that does not exist |
| `SE_OBJ_BOSS` | truncated from `SE_OBJ_BOSS_KK_THUNDER_R` |

Two distinct failure modes:

1. **Wrong kind.** Sound-table initialisers reference dozens of `SE_` literals. Picking the
   highest-scoring one is arbitrary, and the function is a *table builder*, not the sound.
2. **Truncation invents strings.** `SE_SYS_THREE` is not a string in the binary. Naming after
   it is naming after something that does not exist.

Both were reverted — all 2,450 matched and restored to `sub_XXXXXXXX`.

## The rule that replaced it

Take the **longest common underscore-token prefix of all usable strings the function
references**, and append `_ref`. This is true by construction:

```
function references:  SE_EMY_KAME_HIT_1 ... SE_EMY_KAME_HIT_7
common prefix:        SE_EMY_KAME_HIT
name:                 SE_EMY_KAME_HIT_ref
```

```
function references:  SE_SYS_THREE_UP, SE_SYS_THREE_UP_S
common prefix:        SE_SYS_THREE_UP
name:                 SE_SYS_THREE_UP_ref      (full string preserved, no truncation)
```

No substring of a string is ever used as a name. Where a function has no usable common
prefix, it keeps its `sub_XXXXXXXX` name — 1,083 functions were skipped for exactly that
reason rather than given a guess.

## What the coverage number means now

Coverage is **14.0%**, lower than the 16.3% the bad batch reported, and that is the point: the
earlier figure counted names that were not true.

| region | named | total | % |
|---|---|---|---|
| core | 1,441 | 5,001 | 28.8% |
| actor_construction | 620 | 4,574 | 13.6% |
| actors_a | 820 | 4,442 | 18.5% |
| actors_b | 954 | 6,131 | 15.6% |
| powerup | 58 | 997 | 5.8% |
| systems | 1,312 | 9,386 | 14.0% |
| states | 937 | 7,419 | 12.6% |
| player | 65 | 941 | 6.9% |
| player_states | 141 | 1,596 | 8.8% |
| libs | 439 | 7,844 | 5.6% |

## Which names are strong, and which are weak

Strong — the name states identity, backed by data the game itself supplies:

* `_ZN...` mangled C++ symbols (the compiler's own names)
* `Actor_<name>_build` — 694 actor constructors, named from the developers' Japanese debug
  tags (see [ACTOR_NAMES.md](ACTOR_NAMES.md))
* `ItemNameTable_build`, `CourseNameTable_init`, `sInit_SpriteToProfileTable`
* `Player_animSet_load`, `Player_playDoubleJumpSound`, `Player_ctor`, `PlayerBase_ctor`

Weak but true, and labelled as such:

* `<STRING>_ref` — references the string. Nothing more.

Read a `_ref` name as "this is where that string lives", not as "this is the function that
does that thing". For the specific functions the project cares about — modes, question
blocks, fireballs — the strong names are the ones to follow.

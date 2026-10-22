# Where the rendering fault is, and where it is not

Status: three claims retracted, one confirmed by byte-exact comparison.
Date: 2026-10-22

## The measurement that settles the most

Applying our shipped IPS to the retail ELF and diffing the result against the reference
build:

| build | bytes differing from reference |
|---|---|
| `output_step2_hammer_enabled` | **6** |
| `output_step3b_ctor_kept` | 14 |
| `output_step4_gate_only` | 110 |

The six in step 2 are exactly the hooks we had already quarantined:

```
0x00AF6621   0x00BD3208   0x00BD3210   0x00BD3211   0x00C61BE4   0x00C61BE5
```

So **the build reproduces the reference build almost byte-for-byte.** Whatever is wrong is
not a transcription error on our side — we are faithfully implementing something that does
not work on retail Deluxe. That reframes the problem entirely: the search is no longer "find
our typo", it is "the reference approach is incomplete".

## Retracted: "the six readers were collapsed into three tables"

Wrong, and the cause was an off-by-8 in `pc`. The correct relation is

    table = stored_word + pc        where pc = DCD_address + 0x14   (LDR + 0x10)

With that, all six readers resolve exactly as `mode_tables.hks` documents:

| reader | retail table | ours | reference |
|---|---|---|---|
| body_a/b/c | `0xB0C230` | `0xB493D8` | `0xB493D8` |
| height_a/b | `0xB0C2BC` | `0xB493A8` | `0xB493A8` |
| balloon | `0xB0C34C` | `0xB49404` | `0xB49404` |

Groups match retail, groups match the reference, and the first ten entries of every relocated
table are identical to retail (verified). The relocation is structurally sound. This was the
third time a `pc` off-by-8 produced a confident wrong answer in this project; the hook file's
own comments were right and the analysis scripts were wrong.

## Retracted: "the two 0x13FBxx scale hooks rescale every actor"

`sub_6013FB0C` has zero references — no xrefs, no data pointer, no `ADR`/`ADD PC`. It is dead
in retail. The hooks are inert.

## Retracted: "can_change_to_hammer branches out of bounds"

The jump table starts one word after `ADD PC`, so `MOVHI R3,#1` is a correctly formed
redirect of out-of-range modes to case 1.

## Confirmed: what the reference build actually does

Every "mode" hook substitutes, it does not extend:

```
grant_hammer_mode        0x45DDCC   mov r2,#2 -> #0xa
mode_six_or_ten          0x78E6A8   cmp r0,#2 -> #0xa
check_set_fireball_mode  0x7AA9BC   cmp r1,#2 -> #0xa
set_fireball_action_mode 0x7AAA88   cmp r0,#2 -> #0xa
create_fireball_a_mode   0x7AABB8   cmp r0,#2 -> #0xa
create_fireball_b_mode   0x7AAC94   cmp r0,#2 -> #0xa
execute_mode_guard       0x7AAFF4   cmp r1,#6 -> #0xa
execute_mode_guard2      0x7AB0E4   cmp r0,#2 -> #0xa
```

`sub_6078E608` (11 callers) uses that test to choose a body-variant selector handed to a
vtable call: `1` normal, `2` fire, `3` mode 6. Rewriting `#2` to `#0xa` makes Fire Mario
select variant `1` at all eleven sites.

## The two reported symptoms, explained

**"Consumed like a Mushroom, stays big."** The reference build's quirk, faithfully
reproduced. Mode 10 maps to body type 0 via the relocated body table, and body type 0 is the
normal big body. The item is consumed; the visible form is the same big Mario. There is no
hammer model anywhere in the image — the only hammer-named resources are
`EF_MortonHammerBlur*` (Morton's boss effect) and `SE_OBJ_HAMMER_HIT_BOTH` (audio). A mode-10
player cannot look like a Hammer because no such model exists.

**"Some models do not load, black figure or shadow."** Not yet attributed. It survives
builds that contain none of the actor or projectile hooks, so it lives in `item_grant.hks`,
`mode_tables.hks`, or `grant_hammer_mode` — or it is not caused by our patch at all and is
sitting in the user's mod stack (a Yaz0moto question block patch is loaded alongside).

## The builds that will decide it

Each is a single concern, so a clean or dirty result is unambiguous.

| build | contents | IPS | question it answers |
|---|---|---|---|
| `output_step5_grant_only` | 1 record: `0x45DDCC` | 17 b | does the grant hook alone break models? |
| `output_step6_gate_only_no_grant` | 4 records: item gate | 44 b | does the gate alone break models? |
| `output_step4_gate_only` | 5 records: gate + grant | 53 b | do both together break models? |

Run order: **step 5**, then **step 6**, then step 4.

- Step 5 clean → the grant hook is innocent; mode 10 is never applied anyway.
- Step 6 clean → the gate is innocent.
- Step 4 clean → the fault needs `mode_tables.hks` or later hooks.
- Any of them dirty → that build's records are the cause, and there are at most five of them.

If **all three are clean**, the corruption comes from `mode_tables.hks` (the relocated tables
or `mode_six_or_ten`) and the next test is that file alone.

If **step 5 alone is dirty**, stop and suspect the mod stack rather than the patch, because
one instruction writing `mov r2,#0xa` into a function with no references cannot plausibly
delete models — that result would mean something else is in play.

## What is still genuinely unknown

1. Whether the six tables are *read* with a mode index or something else. The
   `1 << table[a2]` form in `sub_6078C444` treats the value as a **bit position**, which is a
   different contract from "body type". Not yet resolved, and it matters for whether
   `body[10] = 0` is even the right value to use.
2. Whether a Hammer projectile exists to be thrown. The diff contains no new code, so the
   reference build cannot have added one; mode 10 reuses the fireball path.
3. Which of the ~20 `+0x2C7C` mode-field sites still lack a slot for mode 10.

# Ready-to-test builds (read the top one first)

Two builds are staged. They are the first two steps of the bisection described in
[`docs/INCIDENT_2026-10-22.md`](docs/INCIDENT_2026-10-22.md). Install one at a time into
`atmosphere/`, and completely remove the previous one between tests — leaving a stale
`exefs/subsdk0` behind would silently mix the two.

## Step 1 — `output/` (test this first)

| file | size |
|---|---|
| `atmosphere/contents/0100EA80032EA000/exefs/subsdk0` | 577 bytes |
| `atmosphere/exefs_patches/0100EA80032EA000/AEE6DCCC06D9C05B42061E2019123A61.ips` | 428 bytes |

**What it changes:** the level's per-mode geometry tables, and the item-grant gate that
allows mode 10.

**What it does NOT do:** it does not enable the Hammer. There is no way to enter mode 10
with this build: `grant_hammer_mode` (`0x45DDCC`) is deliberately excluded. Nothing is
added to a question block either.

**Why test it at all:** because the reported rendering corruption happened **at level
load, before any Hammer was touched**. The leading explanation is the `pukupuku.cpp`
`Profile` substitution, which is fixed in this build. If the level renders correctly
here, that diagnosis is confirmed and the geometry tables are exonerated.

**What to look for:** load a level, look for the corruption you saw before. Then touch a
Fire Flower and confirm Fire Mario still works normally — the fire path is untouched in
this build, so any change there would be a new problem.

## Step 2 — `output_step2_hammer_enabled/` (test only after step 1 is clean)

| file | size |
|---|---|
| `atmosphere/contents/0100EA80032EA000/exefs/subsdk0` | 577 bytes |
| `atmosphere/exefs_patches/0100EA80032EA000/AEE6DCCC06D9C05B42061E2019123A61.ips` | 437 bytes |

Identical to step 1 plus exactly one hook:

```
0x0045DDCC:  02 20 A0 E3  (mov r2,#2)   ->   0A 20 A0 E3  (mov r2,#0xa)
```

**What to look for:** the Hammer becomes obtainable. Then:

- **renders cleanly, Hammer works** → mode 10 is sound. The earlier crash was the
  `pukupuku.cpp` substitution, or the profile-cell hook, or the `ActorInfo` writes. Ship
  this.
- **renders cleanly, crashes on touching the Hammer** → the fault is in mode 10 itself,
  and it is not the geometry tables (those are now 11 entries with a real mode-10 slot).
  Next suspect is a mode-indexed structure we have not found yet.
- **rendering corruption returns** → the geometry tables *are* involved after all, which
  would contradict the byte-level evidence and needs re-investigation from scratch.

## What is in neither build

These four are quarantined in [`experimental/hammer_profile_experimental.hks`](experimental/hammer_profile_experimental.hks)
and the reasons are in that file and in the incident doc:

| site | hook | concern |
|---|---|---|
| `0x00C61BE4` | `hammer_profile_cell` | replaces the Fire Flower identity (476 → 759) rather than adding a Hammer slot |
| `0x00AF6620` | `actor_info_flags` | writes a shared global ActorInfo record |
| `0x00BD3208` | `actor_info_subtype` | magic subtype 19, nothing corroborates it |
| `0x00BD3210` | `actor_info_dist` | packed field, halves undecoded |

Expect Fire Mario to regress if `hammer_profile_cell` is ever enabled. It does not help
mode 10 be reachable, so enabling it buys nothing.

## Rebuilding

```sh
deno run -A mod.ts --source=./sweetdx --output=./out --log-file=./build.log
```

SweetDX bakes its own `code/` in as well, so use the project's copy of
`build/source/` or reproduce it: `code/` and `hooks/` are the only inputs it reads.
Step 2 is step 1 plus the one-line `hammer_grant.hks`.

Both builds were verified byte-by-byte against the reference image by
[`scripts/verify_new_ips.py`](../scripts/verify_new_ips.py) and
[`scripts/verify_variant_b.py`](../scripts/verify_variant_b.py). See
[`VERIFICATION.md`](VERIFICATION.md) for the full list.

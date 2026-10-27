# The rendering fault is not in our IPS patch — evidence and the decisive test

Status: the four-record build that provably changes nothing still shows the fault.
Date: 2026-10-22

## The proof that matters

`output_step6_gate_only_no_grant` contains exactly four records:

```
0x465F34   e3500008 -> e3500009   cmp r0,#8  -> cmp r0,#9
0x465F40   e30011fb -> e30013fb   movw r1,#0x1fb -> movw r1,#0x3fb
0x466000   e3500008 -> e3500009
0x46600C   e30011fb -> e30013fb
```

The gate logic is `index = mode - 1; if (index > bound) reject; if (!(mask >> index & 1)) reject`.
Enumerating every mode value:

| mode | retail accepts | patched accepts |
|---|---|---|
| 1..9 | unchanged | unchanged |
| 10 | no | **yes** |
| 11+ | no | no |

Only mode 10 changes. `0x1FB` and `0x3FB` agree in every bit 0..8, so for all reachable
modes the patched code takes byte-identical branches. **These four instructions cannot alter
any model lookup.** Yet the fault appears with them installed. Therefore the fault does not
come from them.

This is the strongest evidence in the whole investigation, because it does not depend on any
disassembly being read correctly — it is a truth table over the changed bits.

## What the IPS does *not* explain

Our build writes exactly two things outside romfs:

| file | size | purpose |
|---|---|---|
| `exefs/subsdk0` | 577 b | sweet-dx code module (additive; base game has no `subsdk0`) |
| `exefs_patches/…ips` | 17 b | the four records above |

The base game's `exefs` contains only `main`, `main.npdm`, `rtld`, `sdk` — there is no
`subsdk0` to replace, so the 577-byte module is additive, not destructive. Our 577-byte
module is a stub (module segment `0x159`, data `0x10`, bss `0x60`): it cannot register actors
or resources, so it cannot delete models either.

## What was checked and cleared

- **Modded `exefs/main` in `mods/contents/oild…`** — a full 8,001,627-byte executable,
  different from the base game's 8,001,591. **Not enabled**: Ryujinx's `mods.json` lists only
  the sdcard mod. Ruled out, but worth deleting so it cannot be enabled by accident.
- **romfs overrides** — 32 files, 25 differ from the base game. Six are much smaller
  (down to −60%), but every one decompresses cleanly from Yaz0 and its SARC file table
  contains the **same entries** as the base game's copy. They are repacks, not truncations.
  Ruled out as a cause of missing models.
- **The relocated mode tables** — all six readers resolve to the addresses
  `mode_tables.hks` documents, grouping matches both retail and the reference build, and the
  first ten entries are byte-identical to retail. Not the cause.

## The test that settles it

Remove **both** our artefacts from the mod, leaving the romfs overrides untouched, and run:

```
sdcard\atmosphere\contents\0100EA80032EA000\exefs\subsdk0          <- delete
sdcard\atmosphere\exefs_patches\0100EA80032EA000\*.ips             <- delete
```

Result interpretation:

| outcome | conclusion |
|---|---|
| models **load correctly** | a fault is in `subsdk0` or the IPS after all, despite the truth-table proof. Bisect the two: restore only the IPS first. |
| models **still broken** | the fault is in the romfs overrides, the emulator build, or the update layer — none of which our patch touches. Our executable work is not implicated. |

That second outcome is the one the evidence predicts, and it is important: continuing to hunt
this inside the exefs would be wasted effort.

## Note on the reported good news

With `output_step6_gate_only_no_grant` installed, the new power-up value "gives the player
fire power and a fireball fires". That is consistent and expected: the gate now accepts mode
10, and mode 10 maps to body type 0 with the fire projectile path (the reference build
redirects the Fire Flower path onto mode 10). It is a fireball, not a hammer.

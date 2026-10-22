# Where things stand

Status: **the rendering fault is solved.** `subsdk0` was malformed; the cause is found,
fixed, and verified with real code in the module.

Last updated: 2026-10-22

---

## 1. The rendering fault — SOLVED

Every build that shipped a `subsdk0` broke model rendering (black figures, missing
models). Builds with only the IPS rendered cleanly. The game never crashed.

**Cause.** `sweetdx/symbols/nsmbudx.sym` listed the C runtime entry points:

```
_init = 0x00000024;
_fini = 0x00000218;
```

sweet-dx turns each `.sym` entry into an *absolute* linker-script assignment of
`address - 0xCD1000`. Because `crt0.s` also defines `_init`, the generated script
overrode it, and `0x24 - 0xCD1000` wrapped to `0xff32f024`. The module therefore shipped
`DT_INIT = 0xff32f024` — an entry point outside the module. The dynamic loader branched
there at startup, resource loading half-failed, and models rendered as black figures while
the game kept running.

**Fix.** Remove `_init` and `_fini` from the symbol file. Nothing else.

**Verified.**

| | before | after |
|---|---|---|
| `DT_INIT` | `0xff32f024` (outside) | `0x24` in `.text+0x24` |
| module size | 577 b | 569 b |
| `.dynamic` pointers | one invalid | all inside segments |

Full write-up: `SUBSDK0_DT_INIT_ROOT_CAUSE.md`.

**Proof the toolchain works with real code.** `scripts/subsdk0_smoketest.py` builds a
throwaway project containing one `hook` whose C++ body returns its argument untouched,
hooked onto the semantically inert gate at `0x465E4C`. Result:

```
subsdk0: 601 bytes, .text 0x70
DT_INIT 0x24 -> .text+0x24   OK
real function compiled into .text : yes  (at module offset 0x58)
hook branch written into the IPS   : yes  (BL 0xea21ac81 at IPS 0x465F4C)
```

So the compile path is sound. That was the requirement: the source and the reverse
engineering must work for other patches too.

### Two wrong diagnoses, retracted

Recorded because they were mine, not properties of the module:

1. *"The stub declares segments past EOF."* False — with correct NSO0 offsets all three
   segments fit inside 577 bytes.
2. *"MOD0's `dynamic` pointer lands in a hole."* False — MOD0 offsets are relative to the
   MOD0 struct, not module base. `dynamic = 0x1000` is the start of `.rodata`.

A third, earlier: *"the mode tables are written with holes"* — also false. The records are
16/16/12 bytes, which is exactly 44, so no entry is skipped.

---

## 2. "Nothing fires" — cause found, fixed

With the full 36-record set, receiving a Fire Flower produced no fireballs. With only the
gate records it threw normally.

**Cause.** Five hooks *replaced* the Fire-mode test instead of adding mode 10:

```
check_set_fireball_mode   0x7AA9BC   CMP R1,#2 -> #0xa
set_fireball_action_mode  0x7AAA88   CMP R0,#2 -> #0xa
create_fireball_a_mode    0x7AABB8   CMP R0,#2 -> #0xa
create_fireball_b_mode    0x7AAC94   CMP R0,#2 -> #0xa
execute_mode_guard2       0x7AB0E4   CMP R0,#2 -> #0xa
mode_six_or_ten           0x78E6A8   CMP R0,#2 -> #0xa
```

Each site is followed by a conditional branch, so changing the constant changed the
meaning from "is this Fire?" to "is this Hammer?". Fire Flower stopped being able to
throw. `mode_six_or_ten` did the same to the body selector.

A single ARM `cmp` cannot express "mode == 2 or mode == 10", so these sites are no longer
patched. Mode 2 keeps its retail behaviour exactly.

**Only additive patches remain.** `execute_mode_mask` widens the mask from `0x64`
(bits 2,5,6) to `0x464` (bits 2,5,6,10). Since `0x464 & 0x64 == 0x64`, every previously
accepted mode still passes and bit 10 is added. That is the one hook that cannot remove a
behaviour.

IPS: 356 bytes, 28 records, no destructive substitutions, none of the mode-2 comparison
sites patched. `scripts/decode_ips.py` checks this on every build.

---

## 3. What mode 10 still lacks

Removing the bad hooks means Hammer currently gets: the item gate widened, the three mode
tables extended to 11 entries with the six readers repointed, and the tall-actor type set.
It does **not** get a throwing path, because that needs real code — which is now possible.

The correct next step is a `hook` with a trampoline on `sub_607AA954`
(`checkSetFireBall`), whose C++ body returns "may throw" for mode 2 **or** mode 10. That
is additive by construction and cannot repeat the Fire regression.

Also still open:

- no Hammer suit model exists; mode 10 uses body type 0 + colour 2 and looks like big Mario
- body-table semantic: `1 << table[mode]` is a bit position, so `body[10] = 0` means bit 0
- `ActiveCollider` size (`0xB8` vs `0x130`)
- contents→item mapping (best fit 3/16)
- Cheep Cheep bee reskin
- HammerQuestionBlock Yaz0moto patch still 0.9-UNRELEASED
- quarantined hooks: `hammer_profile_cell` `0xC61BE4`, 3 × ActorInfo, `grant_hammer_mode`

---

## 4. Dead hooks to delete

`hammer_actor.hks` patches seven sites in two functions IDA reports as follows:

| function | RVA | xrefs | sites |
|---|---|---|---|
| `sub_6013FB0C` | `0x13FB0C` | **0** — unreachable | `0x13FB38`, `0x13FB68` |
| `sub_6014065C` | `0x14065C` | 1 (from `0x13F044`) | `0x140744`, `0x140748`, `0x14074C`, `0x140770`, `0x140778` |

The retail bytes at those addresses also do not match what the hook file claims:

```
0x13FB38  retail AND  R1, R0, #1        hook claims ubfx r1, r0, #4, #1
0x13FB68  retail UBFX R0, R0, #0x10,#8  hook claims mov r0, #0xa
0x140744  retail STR  R5, [R6]          hook claims ldr r6, [r4, #0x14]
```

These records should be dropped. They are five unexplained stores and two writes into
unreachable code. They were never needed for the gate or the tables, and step 7 proved
the gate works without them.

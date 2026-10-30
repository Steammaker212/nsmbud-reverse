# `hammer_actor.hks` is seven destructive substitutions, and one of them corrupts a constructor

**Status: removed from the build.** This document records why, so it is not
reintroduced without understanding it.

## What the file claimed

Seven `instr` hooks, described as "actor construction and projectile body setup",
"generated from the byte diff between the stock NSO and the Hammer reference build".

## What retail actually executes there

Every address was disassembled in the retail image. Not one of the seven replaces an
instruction the hook describes:

| RVA | retail executes | hook writes | verdict |
|---|---|---|---|
| `0x13FB38` | `AND R1, R0, #1` → `STR R1, [R9,#0x50]` | `ubfx r1, r0, #4, #1` | substitution |
| `0x13FB68` | `UBFX R0, R0, #0x10, #8` → `VMOV S0, R0` | `mov r0, #0xa` | substitution |
| `0x140744` | `STR R5, [R6]` | `ldr r6, [r4, #0x14]` | **destroys a store** |
| `0x140748` | `STR R5, [R7]` | `and r6, r6, #0xf` | **destroys a store** |
| `0x14074C` | `STR R5, [R10]` | `orr r6, r6, #0x13000000` | **destroys a store** |
| `0x140770` | `STR R5, [R4,R0]` (`R0`=`0x2E30`) | `orr r6, r6, #0xff00` | **destroys a store** |
| `0x140778` | `STR R5, [R4,R0]` (`R0`=`0x2E40`) | `str r6, [r4, #0x54]` | **destroys a store** |

## Why the second cluster is the dangerous one

`0x14065C` is a constructor. Its shape, from Hex-Rays:

```
StateActor_ctor();
*(_DWORD *)a1        = 0xBD2120;   // StateActor vtable
*(_BYTE *)(a1+6100)  = 0;
*(_DWORD *)(a1+6108) = 0;          // ...
ActiveCollider_ctor(a1 + 6132);
*(_DWORD *)(a1+6436) = 0xBD20F0;
*(_DWORD *)(a1+6440) = 0xBE2300;
*(_DWORD *)(a1+6444) = 1.0f;  ... *(a1+6468) = a1;
*(_DWORD *)a1        = 0xBD3594;   // most-derived vtable
sub_601531B4(a1 + 6472);
*(_DWORD *)(a1+11824) = 0;  ...
```

The five addresses sit in one run of **zero-initialisation stores**. `R5` is zero
there — the sequence is `STR R5,[R6]`, `STR R5,[R7]`, `STR R5,[R10]`, then
`STR R5,[R4,#0x2E30]`, `STR R5,[R4,#0x2E40]`. It is the compiler clearing member
fields.

The hook replaces all five with a settings-packing sequence that ends by writing a
packed word to `+0x54`. So on **every construction** of this actor:

- five members are no longer zeroed, keeping whatever the allocation contained, and
- an extra word is written to `+0x54`, which retail does not write here.

An object that is 11,908 bytes wide with two 40-byte helper sub-objects and two
vtables is a substantial game actor. Given the symptom — the Fire Flower exists,
renders, and can be collected, but grants nothing — a mis-initialised item or
power-up actor is exactly the expected failure.

## Why "it came from the diff" is not a defence

`hammer_actor.hks` says the bytes came from a byte diff against a Hammer reference
build. The same was true of the six `mode_tables.hks` reader repoints, and those
turned out to be *correct*; it was equally true of the five fireball hooks that were
later removed, and those were *wrong*. Provenance from a diff carries no information
about correctness. Only reading what retail does at those addresses does.

## What was kept

Nothing. All seven records are substitutions, so the file is gone rather than
partially trimmed. The mode-table relocation in `mode_tables.hks` is independent of
it and is verified correct against retail memory (see `TABLE_REPOINT_VERIFICATION.md`),
so no working functionality is lost.

## If a Hammer suit is wanted later

The constraint is unchanged and is not worked around by patching sites like these:

- Mode 10 must survive a **`cmp` that tests membership**. A single ARM `cmp` cannot
  express "2 or 10", so any such site needs a real `hook` with a trampoline in
  `subsdk0`, not a substituted second instruction.
- The body/height/balloon tables already have a mode-10 slot after relocation, so
  the visual side is covered.
- **No Hammer suit model exists in the retail archives.** Mode 10 maps to body type
  0 with colour 2, which is why it looks like big Mario. Only `EF_MortonHammerBlur*`
  (a boss effect) and `SE_OBJ_HAMMER_HIT_BOTH` (audio) mention hammers at all.

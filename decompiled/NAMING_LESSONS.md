# Naming discipline: what has been tried, and what fails

This file exists because four separate bulk-naming attempts in this project produced confidently
wrong names, and the failure mode was the same each time: a *plausible* signal was applied in bulk
without a check that could falsify it.

## Attempts that failed

### 1. String-literal names (2,450 names, reverted)
Deriving a name from a string a function references. Produced:

- `SE_EMY_KAME` on a **9-entry sound-table initialiser** — not the sound at all
- `ActorUnitHeap` on the function that actually creates **"PlayerUnitHeap"**
- `SE_SYS_THREE` truncated from `SE_SYS_THREE_UP`
- `SE_OBJ_BOSS` truncated from `SE_OBJ_BOSS_KK_THUNDER_R`

Two errors compounded: truncating a string to fit a symbol, and assuming a table's *first* entry
names the whole function.

### 2. Animation-string actor names (78 names, reverted)
`Actor_*_build` names derived from animation names. An actor's animation list does not name the
actor.

### 3. Dominant-string with a table guard (14 names, reverted)
An improved rule — require one dominant string, refuse if more than 3 distinct — survived the
obvious checks and still produced:

```
0x00002bc0  ngTimeEv_uses1
0x0002e24c  gl_VertexID_uses1
0x0012a6d8  ail9WaveSoundE_uses1
0x001aa9b8  ayTypeEPvjPNS0_10SubMixTypeENS_8TimeSpanEi_uses1
```

Those are **not strings the game uses as identifiers**. They are literal-pool words in `.rodata`
holding vertex data, mangled C++ type-name fragments, and floats that happen to decode as printable
ASCII. The lesson: in this binary, "printable ASCII at a referenced address" does not mean "string".

**Conclusion: the string-derivation route is exhausted here.** The remaining 1,354 `*_ref` names are
kept precisely because they claim nothing — `SE_PLY_ref_6` says "the 6th function referencing
something beginning SE_PLY" and that is true.

### 4. Vtable-run scanning (1,076 names, reverted)
Scanning `.rodata` for runs of code pointers and calling position-in-run the "slot index". Runs are
not guaranteed to start at a vtable, so "slot 0" was frequently mid-table and the derived class name
was really a method name — `beforeCreate` was reported as a class 605 times, `vf84` 32 times. Names
like `vfB0_vf3` and `CollisionActor4vf84Ev_vf240` came out of it.

**Why the sound approach also fails here:** deriving vtables from constructor stores does not work
either, because this image builds them indirectly:

```asm
LDR   R0, =(dword_60C658A8 - 0x60135AA8)
LDR   R0, [PC,R0]        ; dword_60C658A8   -- a runtime pointer
ADD   R0, R0, #8         ; vtable = *global + 8
STR   R0, [R4]           ; *(this) = vtable
```

The vtable address is `*global + 8`, and the global is populated at runtime. So vtable addresses are
not statically recoverable in general. (`FireballBase`'s `0xBD22A0` *is* visible because a later
round resolved it through `.got`; that is the exception, not the rule.)

## What survives, and why

Each of these asserts exactly one checkable thing:

| Name form | Claim | Verified by |
|---|---|---|
| `registerProfile_<Ctor>_<RVA>` | this initialiser registers that actor's profile | the initialiser's only call is `Profile::Profile(this, ctor, ...)`, ctor is arg 2 — **727 applied** |
| `_ZN...` (mangled) | the compiler's own name | came from the binary |
| `Actors_<romaji>_build` | the developer's own debug tag | read from actor debug strings — **694** |
| `<StrongCaller>_helper_<RVA>` | its only direct ARM caller is that function | re-derived with the calibrated A32 decoder — **156**, 1 of 157 failed and was reverted |
| `*_ref` | it references a string with that prefix | trivially true, deliberately uninformative |

## The rule this produces

A bulk naming rule is only worth applying if there is a **cheap test that can falsify it**, and the
test must be run on the batch before it is trusted. The `_helper_` batch passed because it was
re-derived from scratch (156/157). The string batch failed because "sounds like an identifier" was
never testable.

Also mandatory, from [INSTRUCTION_SET.md](INSTRUCTION_SET.md): a **positive control** on any scanning
method. Three confident negatives in this project were artifacts of a broken scan.

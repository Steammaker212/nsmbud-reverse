# Vtable naming, done soundly

Vtable naming failed twice in this project before it worked. The failures and the fix are worth
recording, because the fix was not a better guess — it was finding that the binary already had the
answer.

## Why the first two attempts failed

**Attempt 1 — scan `.rodata` for runs of code pointers.** Runs are not guaranteed to begin at a
vtable, so "slot 0" was frequently mid-table and the derived class name was really a method name.
`beforeCreate` was reported as a class 605 times. Output: `vfB0_vf3`, `CollisionActor4vf84Ev_vf240`.

**Attempt 2 — derive vtables from constructor stores.** This image builds vtables indirectly:

```asm
LDR   R0, =(dword_60C658A8 - 0x60135AA8)
LDR   R0, [PC,R0]        ; dword_60C658A8 — a runtime pointer
ADD   R0, R0, #8         ; vtable = *global + 8
STR   R0, [R4]           ; *(this) = vtable
```

The vtable address is `*global + 8`, and the global is populated at runtime, so a constructor store
does not reveal it statically.

## The fix: the binary already names its vtables

The database carries **134 `_ZTV<class>` symbols** with exact addresses, plus **86 `<Class>_vtable`
symbols** resolved in earlier rounds. Together that is **220 authoritative vtable starts** — no
guessing required.

```
vtable starts
  from _ZTV symbols      : 134
  from *_vtable symbols  :  86
  distinct starts        : 220
  slots already named    : 6451
  slots unnamed          :  577
  ambiguous (class,slot) :    0
```

`<Class>_vf<slotIndex>` is then true by construction: the demangled class name comes from the
binary, the slot index is the literal position in that vtable, and the walk stops at the first word
that is not an in-image code pointer.

## Accuracy audit

The name was re-verified against the vtable word it came from:

```
names verified against vtable words : 585
mismatches                          : 0
```

## The inheritance subtlety

**481 targets occupy more than one (class, slot).** That is normal: a derived class that does not
override a virtual reuses the base method, so one function sits in slot N of several vtables. The
name is true for whichever class was written last, but *lossy* — it hides the sharing.

Rather than guess a "best" owner, every shared slot gets a comment listing all its owners:

```
vtable slot shared by: BasicSoundActor1[8], BasicSoundActor2[8]
```

43 comments added. No function is renamed on the basis of sharing.

## What this yields

| | |
|---|---|
| vtable symbols | 217 `<Class>_vtable` |
| slot methods named | 564 `<Class>_vf<n>` |
| verified against vtable words | 585, zero mismatches |

These are lower-value names than a real method name, but unlike the failed attempts they are
**true**: a reader can check any one of them by reading the word at `<Class>_vtable + 4*slot`.

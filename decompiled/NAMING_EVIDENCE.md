# Naming by evidence: 17 functions, and why not 32,173

The obvious move at this point is a bulk rule. Four have already been tried and reverted in this
project:

| rule | count | why it failed |
|---|---|---|
| `SE_*` from string prefix | 2,450 | the prefix describes a sound event, not the function |
| `Actor_*_build` | 78 | matched construction helpers that build something else |
| `_uses1` | 14 | named after an incidental constant |
| `_vf<slot>` from vtable position | 1,076 | slot numbers are not stable across classes |

Every one failed the same way: a cheap signal (a string prefix, a table position, a constant) was
treated as if it predicted behaviour, and applied to a batch before anyone checked whether it did.

So this round named **17** functions, chosen because they are the most-called ones in the binary and
each has a body that says what it does.

## The work order came from caller counts

```
callers 0        : 19,741
callers 1        :  6,317
callers 2-4      :  3,893
callers 5-9      :  1,158
callers 10-19    :    563
callers 20-49    :    325
callers 50-99    :    111
callers 100+     :     65
```

65 functions are called from 100+ sites. Those are where a name pays for itself, because a name
propagates to every call site — `EffectData_release` now appears in **633** decompiled files.

## The names, each from its body

| RVA | name | evidence |
|---|---|---|
| `0x000288` | `stub_return0_000288` | returns 0 unconditionally; 1,611 callers |
| `0x237560` | `EffectData_release` | `EffectData_init(this+16)` then erases a `sead::ListNode` at `this+80` |
| `0x47482C` | `ArrayOf20_getEntryPtr` | bounds-checked index, stride 20, count/base at `+3508`/`+3512` |
| `0x421938` | `dispatch_setFlag1` | one-line forwarder adding a trailing `1` |
| `0x41838C` | `Vector2_pickBySignAndTag2` | picks `+0`/`+4` on the sign of the float at `+20`, sets tag bits to 2 |
| `0x8DE61C` | `List_getNthNode` | walks the list at `+4`, count at `+8`, `a2` steps |
| `0x91CD98` | `NameTable_setEntryString` | 12-byte records, count `[152]`, base `[153]`, then `operator=` |
| `0x91CFA0` | `NameTable2_setEntryString` | identical shape with count/base at `[158]`/`[159]` |
| `0x9175E4` | `Object_releaseHandle` | validates handle at `+192`, calls the deleter at `MEMORY[0xCC7568]`, clears bit 0 of `+196` |
| `0x45C0A0` | `thunk_sub_60909E64` | 4-byte thunk, forwards its pointer unchanged |
| `0x2F36E0` | `Array_compactByFlag` | clears the flag at `+68`, compacts to 1 entry via `ActorMgrRelated` |
| `0x178694` | `Table6_getEntry` | clamps index `< 6`, reads `+24`, stride 4 |
| `0x47467C` | `ArrayOf20_insertEntry` | finds a slot with `sub_604746E4`, writes it, returns 0/1 |
| `0x8DE334` | `Heap_allocate` | `malloc`, or `sead::HeapMgr::getCurrentHeap` when `MEMORY[0xCCEE90]` is set |
| `0x941A08` | `Slot_resetAndAttach` | zeroes `+8`, calls `vtable+12`, stores `sub_6090FEB4(a2[1])` at `+4` |
| `0x913FB4` | `Slot_getRelativeOffset` | `this+4` minus the object's `+8`, or 0 |
| `0x26DC8` | `StaticInit_guardRegister` | `__cxa_guard_acquire`/`release` around vtable pointer writes |

Names are deliberately descriptive rather than pretty, and two carry a disambiguating suffix
(`Table6_`, `ArrayOf20_`, `NameTable2_`) because the evidence identifies the shape but not the
class. Guessing a class name would be exactly the mistake the four reverted rules made.

## Result

| | round 19 | now |
|---|---|---|
| named functions | 16,773 | **16,790** |
| still `sub_*` | 32,173 | **32,156** |
| `.c` files parsing | 257 | **257** |
| headers compiling | 10 / 10 | **10 / 10** |
| executable asm lines | 0 | **0** |

The parse count did not move, and that is expected: naming a callee cannot fix a type error in the
caller. What changed is readability — 633 files now call `EffectData_release` instead of
`sub_60237560`.

## Honest arithmetic

17 of 32,173 is 0.05%. At this rate the remaining work does not finish. The usable path is not
"name everything" but "name the 65 functions with 100+ callers, then the 111 with 50-99" — 176
functions that between them account for the overwhelming majority of call sites. That is what the
ranking file exists for; this round did the top 17 of it and established the method.

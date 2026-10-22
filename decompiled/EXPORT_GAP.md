# The export filter that hid two thirds of the binary

Every count of naming progress in this project came from an exporter that contains this line:

```python
named = [r for r in rows if not r["name"].startswith("sub_")]
```

That is a reasonable way to measure *how much naming is left*. It is a terrible way to build an
*inventory*, and the two got conflated. The full census:

| | count | share |
|---|---|---|
| functions in the image | 49,470 | |
| still named `sub_*` | 32,173 | 65.0% |
| have a real name | 17,297 | 35.0% |
| code bytes inside `sub_*` | 6,916,936 / 9,159,312 | **75.5%** |

So three quarters of the code — by bytes — was absent from every export, every `.sym`, and every
header. Three consequences followed, and all three looked like unrelated problems:

1. **Nine functions the corpus calls looked "missing from the database."** They are not. Each is
   defined, sized and called:

   | name | size | callers |
   |---|---|---|
   | `sub_60152FF4` | `0x48` | 0 |
   | `sub_6015DF58` | `0x38` | 17 |
   | `sub_60236E40` | `0x7C` | 20 |
   | `sub_6050A4EC` | `0x160` | 17 |
   | `sub_60583000` | `0x1FC` | **40** |
   | `sub_6058385C` | `0x170` | 1 |
   | `sub_605B6238` | `0x14` | 2 |
   | `sub_6079AE3C` | `0x168` | 3 |
   | `sub_60959BAC` | `0x38` | 43 |

2. **The `.sym` had zero `sub_*` entries,** so a sweet-dx patch could never have referenced them.

3. **The 35% figure quoted in earlier rounds was a naming metric, not coverage.** Naming debt is
   75.5% of code by bytes, not 65% of functions.

## The fix, and the trap in it

`scripts/gen_subfuncs_header.py` emits declarations in two tiers.

**Tier 1** — the nine functions above. Their signatures came from decompiling each one, so they are
exact:

```c
int   __fastcall sub_60583000(int a1, int a2, int a3, int a4, int a5);  /* RVA 0x583000 */
float *__fastcall sub_6058385C(int a1, int a2, int a3);                 /* RVA 0x58385C */
_DWORD *__fastcall sub_60959BAC(_DWORD *a1);                           /* RVA 0x959BAC */
```

**Tier 2** — every other `sub_*`, declared unprototyped as `int __fastcall sub_X();`. The reasoning
was that `guess_tinfo` reports no parameters for most functions in this image (43,499 of 48,946), so
an unprototyped declaration is the only honest form. **It was catastrophic:**

```
before tier 2:  250 / 475 files parse
after  tier 2:    0 / 475  -- "conflicting types for 'sub_6080126C'" on every file
```

The prototype headers *already* declare 26,887 of these names with their real signatures. A
declaration is a contract, so an unprototyped one contradicts a prototyped one. Tier 2 is now off by
default, with the measurement recorded next to it, because the reasoning that produced it is
plausible enough that it would be proposed again.

## Result

| | round 18 | now |
|---|---|---|
| headers compiling | 9 / 9 | **10 / 10** |
| `.c` files parsing | 250 | **257** / 475 |
| executable asm lines | 0 | **0** |

## What this says about the 65% figure

Naming coverage has not improved — it is still 17,297 of 49,470. What changed is that the *inventory*
is now complete and honest, and nine call sites that had no possible resolution now have exact ones.
The 32,173 unnamed functions are the real remaining work, and they are 75.5% of the code.

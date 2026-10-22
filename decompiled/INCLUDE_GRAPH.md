# Include graph: one definition of each type, and a measured optimum

Round 16 got the headers compiling but left them fragile, because two files each defined the same
types under *different* include guards:

| file | guard |
|---|---|
| `nsmbudx_prelude.h` | `NSMBUDX_PRELUDE_H` |
| `<group>.h` | `NSMBUDX_IDA_TYPES` |

Including both produced, on every one of 475 files:

```
error: typedef redefinition with different types ('struct float32x2_t' vs 'struct float32x2_t')
```

The guards did not match because two different scripts wrote those files. A header being self-consistent
is not enough; the two headers have to agree.

## The split

| file | role |
|---|---|
| `nsmbudx_types.h` | IDA aliases, NEON lane types, opaque qualified names — the **only** definition |
| `<group>.h` | `#include "nsmbudx_types.h"`, `"structs.h"`, then prototypes |
| `nsmbudx_prelude.h` | types + structs + the measured extra headers; what a `.c` includes |

No cycle: the prototype headers include `nsmbudx_types.h`, never the prelude.

## The interesting result: including more headers made it worse

I assumed the remaining 256 failures were missing declarations, so including every prototype header
would fix them. Measured, it did the opposite:

| prelude includes | files parsing |
|---|---|
| types only | 219 |
| types + `structs.h` | 233 |
| **types + `structs.h` + `libs.h`** | **235** |
| types + `structs.h` + `player.h` | 218 |
| types + `structs.h` + `powerup.h` | 227 |
| types + `structs.h` + `libs.h` + `player.h` | 218 |
| all five prototype headers | **186** |

`structs.h` gave +14 and `libs.h` +2; every other header *cost* files. The reason is visible by
reading one pair:

```
ActiveCollider_init.c:2   int __fastcall ActiveCollider_init(int a1, int a2, int *a3, int a4)
actors.h                 int __fastcall ActiveCollider_init2(int a1, int a2, int *a3,
                                                            unsigned __int8 *a4, int a5);
```

The header declares a **different function** (`init2`, at `0x158EBC`) — so including it introduces a
colliding declaration rather than resolving a missing one. And `CollisionActor_ctor` has no prototype
in the headers at all, because the header generator keeps one prototype per name.

So the prelude emits the measured-best set and nothing else, and the script records why. Guessing
"include everything" would have shipped a 235 → 186 regression that looks like progress.

## Verified

```
headers: 7 / 7 compile
.c files: 235 / 475 parse      (round 16: 219; original baseline: 17)
asm:     0 executable lines
corpus:  475 .c, 48.8 MB
```

## Still open

240 files fail on references that no header can supply: data labels (`dword_60C92E18`,
`unk_60CABC94D`) that exist only as addresses, and `Class::method` names that are not functions in the
database. A prototype cannot declare an address, so resolving those needs either a generated
`extern` block for every data label the corpus references, or treating each `.c` as a fragment rather
than a translation unit. Both are real options; neither is done.

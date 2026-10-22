/* NSMBU Deluxe (Switch) v1.0.0 -- declarations for auto-named functions
 *
 * The earlier export DROPPED every auto-named function:
 *
 *     named = [r for r in rows if not r["name"].startswith("sub_")]
 *
 * so 32,173 functions -- 65% by count, 75.5% by code bytes -- were absent from every header,
 * and calls to them could not resolve. Nine of them looked like they were missing from the
 * database when they are defined, sized and called (sub_60583000 has 40 callers).
 *
 * TWO TIERS, because the evidence is different:
 *
 *   TIER 1 (below, first block): signatures obtained by decompiling the function in IDA.
 *          Exact. The declaration matches the body the corpus contains.
 *
 *   TIER 2: every other sub_* function, declared `f()`. That form means 'returns int,
 *          arguments unspecified' and accepts any call. It is used deliberately: IDA's
 *          guess_tinfo reports no parameters for most functions in this image, so writing
 *          `f(void)` would DECLARE an arity of zero and break every caller.
 *
 * Do not edit by hand. Regenerate with scripts/gen_subfuncs_header.py.
 */
#ifndef NSMBUDX_SUBFUNCS_H
#define NSMBUDX_SUBFUNCS_H

#include "nsmbudx_types.h"

/* ---- TIER 1: signature taken from the decompiled body ---- */
int __fastcall sub_60152FF4(int a1, int a2);  /* RVA 0x152FF4, size 0x48 */
int __fastcall sub_6015DF58();  /* RVA 0x15DF58, size 0x38 */
int __fastcall sub_60236E40();  /* RVA 0x236E40, size 0x7C */
int __fastcall sub_6050A4EC();  /* RVA 0x50A4EC, size 0x160 */
int __fastcall sub_60583000();  /* RVA 0x583000, size 0x1FC */
float * __fastcall sub_6058385C(int a1, int a2, int a3);  /* RVA 0x58385C, size 0x170 */
int __fastcall sub_605B6238(int result);  /* RVA 0x5B6238, size 0x14 */
int __fastcall sub_6079AE3C();  /* RVA 0x79AE3C, size 0x168 */
_DWORD * __fastcall sub_60959BAC(_DWORD *a1);  /* RVA 0x959BAC, size 0x38 */

#endif /* NSMBUDX_SUBFUNCS_H */

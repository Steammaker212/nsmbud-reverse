/* sub_60976B50
 * address: 0x60976B50   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60976B50(int a1)
{
  _DWORD *v1; // r4
  unsigned int U32; // r0
  int v3; // r1
  int v4; // r2
  unsigned int v5; // s0
  int v7[9]; // [sp+4h] [bp-24h] BYREF

  v1 = *(_DWORD **)(FIELD_U32(a1, 3592)
                  + 4
                  * (int)(float)((float)FIELD_S32(a1, 3584)
                               * (float)(COERCE_FLOAT(
                                           (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) >> 9)
                                         | 0x3F800000)
                                       + -1.0)));
  U32 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
  v3 = v1[2];
  v4 = v1[3];
  v5 = (unsigned int)(float)((float)(v1[6] >> 2) * (float)(COERCE_FLOAT((U32 >> 9) | 0x3F800000) + -1.0));
  v7[0] = v1[1];
  v7[1] = v5 + v3;
  v7[2] = v4;
  *(_DWORD *)(dword_60CC73E8(v7[0]) + v5 + v3) = -286331154;
  return sub_60913B04(v7, 4);
}

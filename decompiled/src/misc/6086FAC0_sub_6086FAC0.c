/* sub_6086FAC0
 * address: 0x6086FAC0   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6086FAC0(float *a1, float *a2)
{
  float v4; // s16
  float v5; // s18
  __int64 v6; // r0
  float v7; // s0
  float v8; // s4
  float v9; // s2
  float result; // s0

  v4 = a2[1];
  v5 = a2[2];
  v6 = (__int64)(float)(a2[3] * (float)((float)nn__util__detail__AngleIndexHalfRound / nn__util__detail__FloatPi));
  HIDWORD(v6) = (char *)&nn__util__detail__SinCosSampleTable + (((unsigned int)v6 >> 20) & 0xFF0);
  v7 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v8 = *(float *)(HIDWORD(v6) + 4) + (float)(*(float *)(HIDWORD(v6) + 12) * v7);
  v9 = *(float *)HIDWORD(v6) + (float)(*(float *)(HIDWORD(v6) + 8) * v7);
  *a1 = v4 * v9;
  a1[1] = v5 * v8;
  a1[2] = -(float)(v4 * v8);
  a1[3] = v5 * v9;
  a1[4] = (float)((float)(v4 * v8) - (float)((float)(v4 * v9) * a2[4])) - (float)((float)(v4 * v8) * a2[5]);
  result = (float)((float)((float)-(float)(v5 * v9) - (float)((float)(v5 * v8) * a2[4]))
                 + (float)((float)(v5 * v9) * a2[5]))
         + 1.0;
  a1[5] = result;
  return result;
}

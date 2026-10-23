/* sub_6086F8A0
 * address: 0x6086F8A0   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6086F8A0(float *a1, float *a2)
{
  float v4; // s16
  __int64 v5; // r0
  float v6; // s0
  float v7; // s2
  float v8; // s4
  float v9; // s0
  float v10; // s2
  float v11; // s6
  float result; // s0

  v4 = a2[1];
  v5 = (__int64)(float)(a2[3] * (float)((float)nn__util__detail__AngleIndexHalfRound / nn__util__detail__FloatPi));
  HIDWORD(v5) = (char *)&nn__util__detail__SinCosSampleTable + (((unsigned int)v5 >> 20) & 0xFF0);
  v6 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v7 = *(float *)HIDWORD(v5) + (float)(*(float *)(HIDWORD(v5) + 8) * v6);
  v8 = *(float *)(HIDWORD(v5) + 4) + (float)(*(float *)(HIDWORD(v5) + 12) * v6);
  *a1 = v4 * v7;
  a1[1] = -(float)(a2[2] * v8);
  a1[2] = a2[1] * v8;
  v9 = v7 * a2[2];
  v10 = v7 * -0.5;
  a1[3] = v9;
  v11 = (float)(v8 * 0.5) + -0.5;
  a1[4] = a2[1] * (float)((float)(v10 - v11) - a2[4]);
  result = a2[2];
  a1[5] = (float)(result * (float)((float)(v10 + v11) + a2[5])) + 1.0;
  return result;
}

/* sub_6086F194
 * address: 0x6086F194   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086F194(int a1, int a2)
{
  float v4; // s16
  __int64 v5; // r0
  float v6; // s10
  float v7; // s2
  float v8; // s4

  v4 = *(float *)a2;
  v5 = (__int64)(float)(FIELD_F32(a2, 8)
                      * (float)((float)nn__util__detail__AngleIndexHalfRound / nn__util__detail__FloatPi));
  HIDWORD(v5) = (char *)&nn__util__detail__SinCosSampleTable + (((unsigned int)v5 >> 20) & 0xFF0);
  v6 = (float)(v5 & 0xFFFFFF);
  v7 = *(float *)HIDWORD(v5) + (float)(*(float *)(HIDWORD(v5) + 8) * (float)(v6 * 0.000000059605));
  v8 = *(float *)(HIDWORD(v5) + 4) + (float)(*(float *)(HIDWORD(v5) + 12) * (float)(v6 * 0.000000059605));
  *(float *)a1 = v4 * v7;
  FIELD_F32(a1, 4) = *(float *)a2 * v8;
  FIELD_F32(a1, 8) = -(float)(FIELD_F32(a2, 4) * v8);
  FIELD_F32(a1, 12) = v7 * FIELD_F32(a2, 4);
  FIELD_U32(a1, 16) = FIELD_U32(a2, 12);
  FIELD_U32(a1, 20) = FIELD_U32(a2, 16);
  return 24;
}

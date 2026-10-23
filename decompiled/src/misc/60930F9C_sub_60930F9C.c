/* sub_60930F9C
 * address: 0x60930F9C   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60930F9C(int a1, _DWORD *a2)
{
  float v3; // s16
  float v4; // s18
  float v5; // s0
  float v6; // s10
  float v7; // s12
  float v8; // s6
  float v9; // s8
  float v10; // s4
  float v11; // s5
  float v12; // s10
  float v13; // s3
  float v14; // s14
  float result; // s0

  FIELD_U32(a1, 396) = *a2;
  FIELD_U32(a1, 400) = a2[1];
  v3 = FIELD_F32(a1, 416);
  v4 = sinf(v3);
  v5 = cosf(v3);
  v6 = FIELD_F32(a1, 396);
  v7 = FIELD_F32(a1, 400);
  v8 = FIELD_F32(a1, 380);
  v9 = FIELD_F32(a1, 376);
  v10 = v5 * 0.0;
  v11 = v5 * v6;
  v12 = v4 * v6;
  v13 = (float)(v4 * 0.0) + (float)(v5 * 0.0);
  FIELD_F32(a1, 756) = v11;
  v14 = (float)((float)(v5 * 0.0) - v4) * v7;
  result = (float)((float)(v4 * 0.0) + v5) * v7;
  FIELD_F32(a1, 760) = v14;
  FIELD_F32(a1, 764) = (float)((float)((float)(v14 * v8) + (float)(v11 * v9)) + (float)((float)(v13 * 0.0) * 0.0))
                       + 0.0;
  FIELD_U32(a1, 768) = 0;
  FIELD_U32(a1, 784) = 0;
  FIELD_F32(a1, 772) = v12;
  FIELD_F32(a1, 776) = result;
  FIELD_F32(a1, 780) = (float)((float)((float)(result * v8) + (float)(v12 * v9))
                               + (float)((float)((float)((float)(v4 * 0.0) - v10) * 0.0) * 0.0))
                       + 0.0;
  return result;
}

/* sub_6090C9B4
 * address: 0x6090C9B4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090C9B4(float *a1, int a2)
{
  float v2; // s4
  float v3; // s6
  float v4; // s10
  float v5; // s0
  float v6; // s4
  float v7; // s6
  float v8; // s4
  float v9; // s0
  float result; // s0

  v2 = a1[41];
  v3 = a1[42];
  v4 = (float)(v3 - v2) * 0.5;
  v5 = (float)(a1[39] + a1[40]) * -0.5;
  *(float *)a2 = 1.0 / v4;
  FIELD_F32(a2, 12) = (float)((float)(v2 + v3) * -0.5) / v4;
  FIELD_U32(a2, 4) = 0;
  FIELD_U32(a2, 8) = 0;
  v6 = a1[39];
  v7 = a1[40];
  FIELD_U32(a2, 16) = 0;
  v8 = (float)(v6 - v7) * 0.5;
  FIELD_F32(a2, 20) = 1.0 / v8;
  FIELD_U32(a2, 24) = 0;
  FIELD_F32(a2, 28) = v5 / v8;
  v9 = 1.0 / (float)(a1[38] - a1[37]);
  FIELD_F32(a2, 40) = v9 * -2.0;
  FIELD_U32(a2, 32) = 0;
  FIELD_U32(a2, 36) = 0;
  result = -(float)(v9 * (float)(a1[37] + a1[38]));
  FIELD_F32(a2, 44) = result;
  FIELD_U32(a2, 48) = 0;
  FIELD_U32(a2, 52) = 0;
  FIELD_U32(a2, 56) = 0;
  FIELD_U32(a2, 60) = 1065353216;
  return result;
}

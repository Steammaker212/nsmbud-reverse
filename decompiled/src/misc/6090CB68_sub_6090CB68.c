/* sub_6090CB68
 * address: 0x6090CB68   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090CB68(float *a1, int a2)
{
  float v2; // s2
  float v3; // s0
  float v4; // s2
  float v5; // s0
  float v6; // s0
  float v7; // s2
  float v8; // s0
  float result; // s0

  v2 = 1.0 / (float)(a1[42] - a1[41]);
  *(float *)a2 = (float)(a1[37] + a1[37]) * v2;
  FIELD_U32(a2, 4) = 0;
  FIELD_F32(a2, 8) = v2 * (float)(a1[41] + a1[42]);
  FIELD_U32(a2, 12) = 0;
  v3 = a1[39];
  v4 = a1[40];
  FIELD_U32(a2, 16) = 0;
  v5 = 1.0 / (float)(v3 - v4);
  FIELD_F32(a2, 20) = v5 * (float)(a1[37] + a1[37]);
  FIELD_F32(a2, 24) = v5 * (float)(a1[39] + a1[40]);
  FIELD_U32(a2, 28) = 0;
  v6 = a1[37];
  v7 = a1[38];
  FIELD_U32(a2, 32) = 0;
  FIELD_U32(a2, 36) = 0;
  v8 = 1.0 / (float)(v7 - v6);
  FIELD_F32(a2, 40) = -(float)(v8 * (float)(a1[38] + a1[37]));
  result = -(float)(v8 * (float)((float)(a1[38] + a1[38]) * a1[37]));
  FIELD_F32(a2, 44) = result;
  FIELD_U32(a2, 48) = 0;
  FIELD_U32(a2, 52) = 0;
  FIELD_U32(a2, 56) = -1082130432;
  FIELD_U32(a2, 60) = 0;
  return result;
}

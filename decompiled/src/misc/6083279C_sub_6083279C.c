/* sub_6083279C
 * address: 0x6083279C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6083279C(int result, unsigned int *a2)
{
  unsigned int v2; // r1
  int v3; // s2
  float *v4; // r1
  float v5; // s2
  float v6; // s4
  float v7; // s8

  v2 = *a2;
  v3 = v2 & 0xFFFFFF;
  v4 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v5 = (float)(unsigned int)v3;
  v6 = *v4 + (float)(v4[1] * (float)(v5 * 0.000000059605));
  v7 = v4[2] + (float)((float)(v5 * 0.000000059605) * v4[3]);
  *(float *)result = v7;
  FIELD_F32(result, 16) = v6;
  FIELD_U32(result, 32) = 0;
  FIELD_F32(result, 4) = -v6;
  FIELD_F32(result, 20) = v7;
  FIELD_U32(result, 36) = 0;
  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 24) = 0;
  FIELD_U32(result, 40) = 1065353216;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 28) = 0;
  FIELD_U32(result, 44) = 0;
  return -v6;
}

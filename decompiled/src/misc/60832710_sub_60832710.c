/* sub_60832710
 * address: 0x60832710   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60832710(int result, unsigned int *a2)
{
  unsigned int v2; // r1
  float *v3; // r2
  float v4; // s0
  float v5; // s2
  float v6; // s4
  float v7; // s6
  float v8; // s8
  float v9; // s4
  float v10; // s0
  float v11; // s0

  v2 = *a2;
  v3 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v4 = *v3;
  v5 = v3[1];
  v6 = v3[2];
  v7 = v3[3];
  *(_DWORD *)result = 1065353216;
  FIELD_U32(result, 16) = 0;
  FIELD_U32(result, 32) = 0;
  FIELD_U32(result, 4) = 0;
  v8 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v9 = v6 + (float)(v8 * v7);
  v10 = v4 + (float)(v5 * v8);
  FIELD_F32(result, 20) = v9;
  FIELD_F32(result, 36) = v10;
  v11 = -v10;
  FIELD_U32(result, 8) = 0;
  FIELD_F32(result, 24) = v11;
  FIELD_F32(result, 40) = v9;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 28) = 0;
  FIELD_U32(result, 44) = 0;
  return v11;
}

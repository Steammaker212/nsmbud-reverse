/* sub_602354FC
 * address: 0x602354FC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602354FC(int a1, int a2)
{
  float *v2; // r2
  float v3; // s0
  float v4; // s2
  float v5; // s4
  float v6; // s6
  float v7; // s8
  float v8; // s10

  v2 = *(float **)(a1 + 360);
  v3 = FIELD_F32(a1, 232);
  v4 = FIELD_F32(a1, 272);
  v5 = FIELD_F32(a1, 312);
  v6 = *v2;
  v7 = v2[1];
  v8 = v2[2];
  *(_DWORD *)a2 = 1065353216;
  FIELD_U32(a2, 4) = 0;
  FIELD_U32(a2, 8) = 0;
  FIELD_U32(a2, 16) = 0;
  FIELD_U32(a2, 20) = 1065353216;
  FIELD_U32(a2, 24) = 0;
  FIELD_U32(a2, 32) = 0;
  FIELD_U32(a2, 36) = 0;
  FIELD_U32(a2, 40) = 1065353216;
  FIELD_F32(a2, 12) = v3 + v6;
  FIELD_F32(a2, 28) = v4 + v7;
  FIELD_F32(a2, 44) = v5 + v8;
  return v5 + v8;
}

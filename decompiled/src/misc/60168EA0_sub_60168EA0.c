/* sub_60168EA0
 * address: 0x60168EA0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60168EA0(int a1)
{
  unsigned int v1; // r1
  float *v2; // r2
  float v3; // s12
  float v4; // s0
  float v5; // s8
  float v6; // s0
  float result; // s0

  v1 = FIELD_U32(a1, 192);
  v2 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v3 = FIELD_F32(a1, 200);
  v4 = (float)(v1 & 0xFFFFFF) * 0.000000059605;
  v5 = v2[2] + (float)(v4 * v2[3]);
  v6 = v3 * (float)(*v2 + (float)(v2[1] * v4));
  FIELD_F32(a1, 116) = v6;
  FIELD_F32(a1, 124) = v3 * v5;
  FIELD_F32(a1, 80) = v6 + FIELD_F32(a1, 80);
  FIELD_F32(a1, 84) = FIELD_F32(a1, 84) + FIELD_F32(a1, 120);
  result = FIELD_F32(a1, 88) + (float)(v3 * v5);
  FIELD_F32(a1, 88) = result;
  return result;
}

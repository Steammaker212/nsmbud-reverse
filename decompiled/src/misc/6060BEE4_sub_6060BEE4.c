/* sub_6060BEE4
 * address: 0x6060BEE4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6060BEE4(int a1)
{
  unsigned int v1; // r2
  float *v2; // r1
  float v3; // s8
  float v4; // s0
  float v5; // s4
  float result; // s0

  v1 = FIELD_U32(a1, 164);
  v2 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v3 = (float)(v1 & 0xFFFFFF);
  v4 = *v2 + (float)((float)(v3 * v2[1]) * 0.000000059605);
  v5 = v2[2] + (float)((float)(v3 * v2[3]) * 0.000000059605);
  FIELD_F32(a1, 120) = v4 * -4.0;
  FIELD_F32(a1, 124) = v5 * 4.0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 140) = 0;
  FIELD_F32(a1, 132) = v4 * -2.0;
  FIELD_F32(a1, 136) = v5 + v5;
  FIELD_F32(a1, 104) = fabsf((float)(*v2 + (float)((float)(v3 * v2[1]) * 0.000000059605)) * 0.125);
  result = fabsf((float)(v2[2] + (float)((float)(v3 * v2[3]) * 0.000000059605)) * 0.125);
  FIELD_F32(a1, 100) = result;
  FIELD_U32(a1, 6608) = 0;
  return result;
}

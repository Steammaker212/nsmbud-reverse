/* sub_6060BCD4
 * address: 0x6060BCD4   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060BCD4(int result)
{
  unsigned int v1; // r2
  float *v2; // r1
  float v3; // s8
  float v4; // s0
  float v5; // s4

  v1 = FIELD_U32(result, 164);
  v2 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v3 = (float)(v1 & 0xFFFFFF);
  v4 = *v2 + (float)((float)(v3 * v2[1]) * 0.000000059605);
  v5 = v2[2] + (float)((float)(v3 * v2[3]) * 0.000000059605);
  FIELD_F32(result, 120) = v4 * -4.0;
  FIELD_F32(result, 124) = v5 * 4.0;
  FIELD_U32(result, 128) = 0;
  FIELD_U32(result, 140) = 0;
  FIELD_F32(result, 132) = v4 * -2.0;
  FIELD_F32(result, 136) = v5 + v5;
  FIELD_F32(result, 104) = fabsf((float)(*v2 + (float)((float)(v3 * v2[1]) * 0.000000059605)) * 0.125);
  FIELD_F32(result, 100) = fabsf((float)(v2[2] + (float)((float)(v3 * v2[3]) * 0.000000059605)) * 0.125);
  FIELD_F32(result, 120) = (float)(v4 * -4.0) * 0.25;
  FIELD_F32(result, 124) = (float)(v5 * 4.0) * 0.25;
  FIELD_U32(result, 6552) = FIELD_U32(result, 108);
  FIELD_U32(result, 6556) = FIELD_U32(result, 112);
  FIELD_U32(result, 6560) = FIELD_U32(result, 116);
  FIELD_U32(result, 6616) = 1;
  return result;
}

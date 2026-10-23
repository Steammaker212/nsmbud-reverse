/* sub_6000E978
 * address: 0x6000E978   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6000E978(int result)
{
  float v1; // s0
  float v2; // s2
  unsigned int v3; // r1
  float *v4; // r2
  __n128 v5; // q0

  v1 = FIELD_F32(result, 116) + 8.0;
  v2 = FIELD_F32(result, 120) + -8.0;
  FIELD_F32(result, 124) = v1;
  FIELD_F32(result, 128) = v2;
  FIELD_F32(result, 100) = v1;
  FIELD_F32(result, 104) = v2;
  v3 = FIELD_U32(result, 132);
  v4 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v5.n128_f32[1] = (float)(v3 & 0xFFFFFF);
  v5.n128_f32[0] = v1 + (float)((float)(v4[2] + (float)((float)(v5.n128_f32[1] * 0.000000059605) * v4[3])) * 8.0);
  v5.n128_f32[2] = v2 + (float)((float)(*v4 + (float)(v4[1] * (float)(v5.n128_f32[1] * 0.000000059605))) * 8.0);
  FIELD_U32(result, 100) = v5.n128_u32[0];
  FIELD_U32(result, 104) = v5.n128_u32[2];
  return v5;
}

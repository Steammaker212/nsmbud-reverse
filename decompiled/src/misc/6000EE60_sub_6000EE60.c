/* sub_6000EE60
 * address: 0x6000EE60   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6000EE60(int result)
{
  unsigned int v1; // r1
  float *v2; // r2
  float v3; // s4
  __n128 v4; // q0

  v4.n128_u32[1] = 1107296256;
  v4.n128_f32[0] = FIELD_F32(result, 116) + 0.0;
  v4.n128_f32[2] = FIELD_F32(result, 120) + -32.0;
  FIELD_U32(result, 124) = v4.n128_u32[0];
  FIELD_U32(result, 128) = v4.n128_u32[2];
  FIELD_U32(result, 100) = v4.n128_u32[0];
  FIELD_U32(result, 104) = v4.n128_u32[2];
  v1 = FIELD_U32(result, 132);
  v2 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v3 = (float)(v1 & 0xFFFFFF) * 0.000000059605;
  v4.n128_f32[0] = v4.n128_f32[0] + (float)((float)(v2[2] + (float)(v3 * v2[3])) * 32.0);
  v4.n128_f32[2] = v4.n128_f32[2] + (float)((float)(*v2 + (float)(v2[1] * v3)) * 32.0);
  FIELD_U32(result, 100) = v4.n128_u32[0];
  FIELD_U32(result, 104) = v4.n128_u32[2];
  return v4;
}

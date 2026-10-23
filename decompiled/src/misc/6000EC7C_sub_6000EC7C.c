/* sub_6000EC7C
 * address: 0x6000EC7C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6000EC7C(int result)
{
  float v1; // s0
  float v2; // s2
  unsigned int v3; // r1
  float *v4; // r2
  float v5; // s4
  __n128 v6; // q0

  v1 = FIELD_F32(result, 116) + 0.0;
  v2 = FIELD_F32(result, 120) + -16.0;
  FIELD_F32(result, 124) = v1;
  FIELD_F32(result, 128) = v2;
  FIELD_F32(result, 100) = v1;
  FIELD_F32(result, 104) = v2;
  v3 = FIELD_U32(result, 132);
  v4 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v5 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v6.n128_f32[0] = v1 + (float)((float)(v4[2] + (float)(v5 * v4[3])) * 16.0);
  v6.n128_f32[2] = v2 + (float)((float)(*v4 + (float)(v4[1] * v5)) * 16.0);
  FIELD_U32(result, 100) = v6.n128_u32[0];
  FIELD_U32(result, 104) = v6.n128_u32[2];
  return v6;
}

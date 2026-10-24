/* sub_60874EB8
 * address: 0x60874EB8   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60874EB8(int a1, float32x4_t *a2)
{
  int v2; // lr
  float32x4_t v3; // q8
  int v4; // r3
  float v5; // s0
  float *v6; // r1
  int result; // r0
  float32x4_t v8; // q9
  float v9; // s4

  v2 = FIELD_U32(a1, 224);
  if ( v2 < 1 )
    return 1;
  v3 = *a2;
  v4 = 0;
  v5 = FIELD_F32(a2 + (1) * 16, 0x0)[0];
  v6 = (float *)(a1 + 48);
  result = 1;
  while ( 1 )
  {
    v8 = vmulq_f32(*(float32x4_t *)(v6 - 4), v3);
    v8.n128_u64[0] = vadd_f32(*(float32x2_t *)&v8.n128_i8[8], (float32x2_t)v8.n128_u64[0]).n64_u64[0];
    v9 = vpadd_f32((float32x2_t)v8.n128_u64[0], (float32x2_t)v8.n128_u64[0]).n64_f32[0] + *v6;
    if ( v9 > v5 )
      break;
    ++v4;
    v6 += 8;
    if ( v9 >= (float)-v5 )
      result = 0;
    if ( v4 >= v2 )
      return result;
  }
  return -1;
}

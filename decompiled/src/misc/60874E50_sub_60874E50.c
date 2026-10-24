/* sub_60874E50
 * address: 0x60874E50   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60874E50(int a1, float32x4_t *a2)
{
  int result; // r0
  int v4; // r12
  float32x4_t v5; // q8
  float *v6; // r2
  float v7; // s0
  int v8; // r1
  float32x4_t v9; // q9

  result = 1;
  v4 = FIELD_U32(a1, 224);
  if ( v4 >= 1 )
  {
    v5 = *a2;
    v6 = (float *)(a1 + 48);
    v7 = FIELD_F32(a2 + (1) * 16, 0x0)[0];
    v8 = 0;
    while ( 1 )
    {
      v9 = vmulq_f32(*(float32x4_t *)(v6 - 4), v5);
      v9.n128_u64[0] = vadd_f32(*(float32x2_t *)&v9.n128_i8[8], (float32x2_t)v9.n128_u64[0]).n64_u64[0];
      if ( (float)(vpadd_f32((float32x2_t)v9.n128_u64[0], (float32x2_t)v9.n128_u64[0]).n64_f32[0] + *v6) > v7 )
        break;
      ++v8;
      v6 += 8;
      if ( v8 >= v4 )
        return result;
    }
    return 0;
  }
  return result;
}

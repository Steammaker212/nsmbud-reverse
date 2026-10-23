/* sub_6087E910
 * address: 0x6087E910   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6087E910(unsigned __int64 *a1, int a2, int a3, int a4)
{
  __n128 result; // q0
  float32x4_t v5; // q8
  float32x4_t v7; // q8
  float32x4_t v8; // q8
  float32x4_t v9; // q9
  unsigned __int64 v15; // d2
  __int64 *v16; // r1
  unsigned __int64 *v17; // r2
  _QWORD *v18; // r0
  __int64 v19; // d4
  __int64 v20; // d5

  result.n128_u64[1] = 0;
  result.n128_u64[0] = FIELD_U64(a4, 16);
  v5 = vmulq_f32((float32x4_t)result.n128_u64[0], (float32x4_t)result.n128_u64[0]);
  v5.n128_u64[0] = vadd_f32(*(float32x2_t *)&v5.n128_i8[8], (float32x2_t)v5.n128_u64[0]).n64_u64[0];
  _Q1.n128_u64[0] = vpadd_f32((float32x2_t)v5.n128_u64[0], (float32x2_t)v5.n128_u64[0]).n64_u64[0];
  if ( _Q1.n128_f32[0] <= 0.0 )
  {
    v15 = 0x3F80000000000000LL;
  }
  else
  {
    _Q1.n128_u64[1] = _Q1.n128_u64[0];
    v7 = vrsqrteq_f32(_Q1);
    v8 = vmulq_f32(v7, vrsqrtsq_f32(v7, vmulq_f32(v7, _Q1)));
    v9 = vmulq_f32(_Q1, v8);
    __asm { VCEQ.F32        Q1, Q1, #0.0 }
    v15 = vbslq_s64(_Q1, (int64x2_t)0, vmulq_f32(result, vmulq_f32(v8, vrsqrtsq_f32(v8, v9)))).n128_u64[0];
  }
  result.n128_f32[1] = -*(float *)&v15;
  v16 = (__int64 *)(a1 + 6);
  v17 = a1;
  v18 = a1 + 4;
  v19 = *v16;
  v20 = v16[1];
  result.n128_u32[0] = HIDWORD(v15);
  result.n128_u32[3] = 0;
  *v17 = result.n128_u64[0];
  v17[1] = 0;
  v17 += 2;
  *v17 = v15;
  v17[1] = 0;
  *v18 = 0;
  v18[1] = 1065353216;
  *v16 = v19;
  v16[1] = (unsigned int)v20;
  return result;
}

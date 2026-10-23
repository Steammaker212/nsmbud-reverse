/* sub_6087E820
 * address: 0x6087E820   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_QWORD *__fastcall sub_6087E820(unsigned __int64 *a1, float32x4_t *a2, float32x2_t *a3)
{
  float32x4_t v3; // q8
  float32x4_t v4; // q9
  float32x4_t v6; // q9
  float32x4_t v7; // q9
  float32x4_t v8; // q10
  unsigned __int64 v14; // d0
  __int64 *v15; // r1
  unsigned __int64 *v16; // r2
  _QWORD *result; // r0
  __int64 v18; // d4
  __int64 v19; // d5
  unsigned __int64 v20; // d2

  v3.n128_u64[0] = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*a2, a3[2].n64_f32[0]), a2[1], a3[2], 1), a2[2], a3[3], 0).n128_u64[0];
  v3.n128_u64[1] = 0;
  v4 = vmulq_f32((float32x4_t)v3.n128_u64[0], (float32x4_t)v3.n128_u64[0]);
  v4.n128_u64[0] = vadd_f32(*(float32x2_t *)&v4.n128_i8[8], (float32x2_t)v4.n128_u64[0]).n64_u64[0];
  _Q0.n128_u64[0] = vpadd_f32((float32x2_t)v4.n128_u64[0], (float32x2_t)v4.n128_u64[0]).n64_u64[0];
  if ( _Q0.n128_f32[0] <= 0.0 )
  {
    v14 = 0x3F80000000000000LL;
  }
  else
  {
    _Q0.n128_u64[1] = _Q0.n128_u64[0];
    v6 = vrsqrteq_f32(_Q0);
    v7 = vmulq_f32(v6, vrsqrtsq_f32(v6, vmulq_f32(v6, _Q0)));
    v8 = vmulq_f32(_Q0, v7);
    __asm { VCEQ.F32        Q0, Q0, #0.0 }
    v14 = vbslq_s64(_Q0, (int64x2_t)0, vmulq_f32(v3, vmulq_f32(v7, vrsqrtsq_f32(v7, v8)))).n128_u64[0];
  }
  v15 = (__int64 *)(a1 + 6);
  v16 = a1;
  result = a1 + 4;
  v18 = *v15;
  v19 = v15[1];
  *((float *)&v20 + 1) = -*(float *)&v14;
  LODWORD(v20) = HIDWORD(v14);
  *v16 = v20;
  v16[1] = 0;
  v16 += 2;
  *v16 = v14;
  v16[1] = 0;
  *result = 0;
  result[1] = 1065353216;
  *v15 = v18;
  v15[1] = (unsigned int)v19;
  return result;
}

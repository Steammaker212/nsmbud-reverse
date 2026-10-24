/* sub_6087EA40
 * address: 0x6087EA40   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int8x8x2_t *__fastcall sub_6087EA40(int8x8x2_t *a1, float32x4_t *a2, float32x2_t *a3)
{
  float32x4_t v3; // q3
  float32x4_t v4; // q8
  float32x4_t v5; // q1
  float32x4_t v7; // q8
  float32x4_t v13; // q8
  int8x8x2_t v14; // q0
  float32x4_t v15; // q8
  float32x4_t v17; // q8
  float32x4_t v18; // q8
  float32x4_t v19; // q9
  int8x8x2_t v21; // q8
  float32x4_t v22; // q11
  float32x4_t v23; // q12
  float32x4_t v24; // q13
  float32x4_t v25; // q10
  float32x2x2_t v26; // q1
  float32x2x2_t *v27; // r1
  int8x8x2_t *result; // r0

  v5.n128_u64[1] = 0;
  v3 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*a2, FIELD_F32(a3 + (2) * 8, 0x0)[0]), a2[1], a3[2], 1), a2[2], a3[3], 0);
  v5.n128_f32[1] = -v3.n128_f32[0];
  v4 = vmulq_f32(v3, v3);
  v5.n128_u32[0] = v3.n128_u32[1];
  v4.n128_u64[0] = vadd_f32(*(float32x2_t *)&v4.n128_i8[8], (float32x2_t)v4.n128_u64[0]).n64_u64[0];
  _Q2.n128_u64[0] = vpadd_f32((float32x2_t)v4.n128_u64[0], (float32x2_t)v4.n128_u64[0]).n64_u64[0];
  if ( _Q2.n128_f32[0] <= 0.0 )
  {
    v14.val[0].n64_u64[0] = 0x3F80000000000000LL;
    v14.val[1].n64_u64[0] = 0;
  }
  else
  {
    _Q2.n128_u64[1] = _Q2.n128_u64[0];
    v7 = vrsqrteq_f32(_Q2);
    __asm { VCEQ.F32        Q0, Q2, #0.0 }
    v13 = vmulq_f32(v7, vrsqrtsq_f32(v7, vmulq_f32(v7, _Q2)));
    v14 = (int8x8x2_t)vbslq_s64(
                        _Q0,
                        (int64x2_t)0,
                        vmulq_f32(v3, vmulq_f32(v13, vrsqrtsq_f32(v13, vmulq_f32(_Q2, v13)))));
  }
  if ( _Q2.n128_f32[0] <= 0.0 )
    v5 = (float32x4_t)0x3F800000uLL;
  v15 = vmulq_f32(v5, v5);
  v15.n128_u64[0] = vadd_f32(*(float32x2_t *)&v15.n128_i8[8], (float32x2_t)v15.n128_u64[0]).n64_u64[0];
  _Q2.n128_u64[0] = vpadd_f32((float32x2_t)v15.n128_u64[0], (float32x2_t)v15.n128_u64[0]).n64_u64[0];
  if ( _Q2.n128_f32[0] <= 0.0 )
  {
    v26 = vld1q_dup_f32(&flt_6087EBD0);
    v21.val[0].n64_u64[0] = 1065353216;
    v21.val[1].n64_u64[0] = 0;
    v26.val[0].n64_f32[1] = -v14.val[1].n64_f32[0];
  }
  else
  {
    _Q2.n128_u64[1] = _Q2.n128_u64[0];
    v17 = vrsqrteq_f32(_Q2);
    v18 = vmulq_f32(v17, vrsqrtsq_f32(v17, vmulq_f32(v17, _Q2)));
    v19 = vmulq_f32(v18, vrsqrtsq_f32(v18, vmulq_f32(_Q2, v18)));
    __asm { VCEQ.F32        Q8, Q2, #0.0 }
    v21 = (int8x8x2_t)vbslq_s64(_Q8, (int64x2_t)0, vmulq_f32(v5, v19));
    *(int8x8_t *)&v22.n128_i8[8] = vtbl2_s8(v14, (int8x8_t)0xF0E0D0C07060504LL);
    v22.n128_u64[0] = vtbl2_s8(v14, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    *(int8x8_t *)&v23.n128_i8[8] = vtbl2_s8(v21, (int8x8_t)0xF0E0D0C03020100LL);
    v23.n128_u64[0] = vtbl2_s8(v21, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    *(int8x8_t *)&v24.n128_i8[8] = vtbl2_s8(v14, (int8x8_t)0xF0E0D0C03020100LL);
    v24.n128_u64[0] = vtbl2_s8(v14, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    *(int8x8_t *)&v25.n128_i8[8] = vtbl2_s8(v21, (int8x8_t)0xF0E0D0C07060504LL);
    v25.n128_u64[0] = vtbl2_s8(v21, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
    v26 = (float32x2x2_t)vmlsq_f32(vmulq_f32(v23, v22), v25, v24);
  }
  v27 = (float32x2x2_t *)&a1[2];
  *a1 = v21;
  result = a1 + 1;
  *result = v14;
  *v27 = v26;
  return result;
}

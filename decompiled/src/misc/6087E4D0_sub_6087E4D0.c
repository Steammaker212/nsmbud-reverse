/* sub_6087E4D0
 * address: 0x6087E4D0   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x2x2_t *__fastcall sub_6087E4D0(int8x8x2_t *a1, float32x4_t *a2, float32x2_t *a3, int a4)
{
  unsigned __int64 v4; // d24
  float32x4_t v5; // q8
  int64x2_t v6; // q12
  float32x4_t v7; // q9
  float32x4_t v9; // q9
  float32x4_t v10; // q9
  float32x4_t v11; // q10
  int8x8x2_t v17; // q0
  float32x4_t v18; // q8
  float32x4_t v19; // q14
  float32x4_t v20; // q11
  float32x4_t v21; // q15
  float32x4_t v22; // q14
  float32x4_t v23; // q13
  float32x4_t v25; // q13
  float32x4_t v26; // q13
  float32x4_t v27; // q15
  int8x8x2_t v29; // q13
  float32x4_t v30; // q1
  float32x4_t v31; // q12
  float32x4_t v33; // q12
  float32x4_t v34; // q12
  float32x4_t v36; // q12
  float32x4_t v37; // q9
  float32x2x2_t v38; // q1
  int8x8x2_t *v39; // r1
  float32x2x2_t *result; // r0
  int8x8x2_t v41; // 0:d26.8,8:d27.8

  v4 = 0xBF800000BF800000LL;
  v6.n128_u64[1] = 3212836864LL;
  v41.val[0].n64_u64[0] = FIELD_U64(a4, 16);
  v5 = vmulq_f32(
         vaddq_f32(
           a2[3],
           vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*a2, FIELD_F32(a3 + (6) * 8, 0x0)[0]), a2[1], a3[6], 1), a2[2], a3[7], 0)),
         v6);
  v6.n128_u64[0] = 0;
  v6.n128_u32[2] = 0;
  v7 = vmulq_f32(v5, v5);
  v7.n128_u64[0] = vadd_f32(*(float32x2_t *)&v7.n128_i8[8], (float32x2_t)v7.n128_u64[0]).n64_u64[0];
  _Q0.n128_u64[0] = vpadd_f32((float32x2_t)v7.n128_u64[0], (float32x2_t)v7.n128_u64[0]).n64_u64[0];
  if ( _Q0.n128_f32[0] <= 0.0 )
  {
    v17.val[0].n64_u64[0] = 0;
    v17.val[1].n64_u64[0] = 1065353216;
  }
  else
  {
    _Q0.n128_u64[1] = _Q0.n128_u64[0];
    v9 = vrsqrteq_f32(_Q0);
    v10 = vmulq_f32(v9, vrsqrtsq_f32(v9, vmulq_f32(v9, _Q0)));
    v11 = vmulq_f32(_Q0, v10);
    __asm { VCEQ.F32        Q0, Q0, #0.0 }
    v17 = (int8x8x2_t)vbslq_s64(_Q0, v6, vmulq_f32(v5, vmulq_f32(v10, vrsqrtsq_f32(v10, v11))));
  }
  v41.val[1].n64_u64[0] = 0;
  *(int8x8_t *)&v18.n128_i8[8] = vtbl2_s8(v17, (int8x8_t)0xF0E0D0C07060504LL);
  v18.n128_u64[0] = vtbl2_s8(v17, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
  *(int8x8_t *)&v19.n128_i8[8] = vtbl2_s8(v41, (int8x8_t)0xF0E0D0C03020100LL);
  v19.n128_u64[0] = vtbl2_s8(v41, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
  *(int8x8_t *)&v20.n128_i8[8] = vtbl2_s8(v17, (int8x8_t)0xF0E0D0C03020100LL);
  v20.n128_u64[0] = vtbl2_s8(v17, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
  *(int8x8_t *)&v21.n128_i8[8] = vtbl2_s8(v41, (int8x8_t)0xF0E0D0C07060504LL);
  v21.n128_u64[0] = vtbl2_s8(v41, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
  v22 = vmlsq_f32(vmulq_f32(v19, v18), v21, v20);
  v23 = vmulq_f32(v22, v22);
  v23.n128_u64[0] = vadd_f32(*(float32x2_t *)&v23.n128_i8[8], (float32x2_t)v23.n128_u64[0]).n64_u64[0];
  _Q1.n128_u64[0] = vpadd_f32((float32x2_t)v23.n128_u64[0], (float32x2_t)v23.n128_u64[0]).n64_u64[0];
  if ( _Q1.n128_f32[0] <= 0.0 )
  {
    v30.n128_f32[2] = -v17.val[0].n64_f32[0];
    v30.n128_u64[0] = v17.val[1].n64_u32[0];
    v30.n128_u32[3] = 0;
    v31 = vmulq_f32(v30, v30);
    v31.n128_u64[0] = vadd_f32(*(float32x2_t *)&v31.n128_i8[8], (float32x2_t)v31.n128_u64[0]).n64_u64[0];
    _Q2.n128_u64[0] = vpadd_f32((float32x2_t)v31.n128_u64[0], (float32x2_t)v31.n128_u64[0]).n64_u64[0];
    if ( _Q2.n128_f32[0] <= 0.0 )
    {
      v38 = vld1q_dup_f32(&flt_6087E6E0);
      v29.val[0].n64_u64[0] = 1065353216;
      v29.val[1].n64_u64[0] = 0;
      v38.val[1].n64_f32[0] = -v17.val[0].n64_f32[1];
      goto LABEL_10;
    }
    _Q2.n128_u64[1] = _Q2.n128_u64[0];
    v33 = vrsqrteq_f32(_Q2);
    v34 = vmulq_f32(v33, vrsqrtsq_f32(v33, vmulq_f32(v33, _Q2)));
    __asm { VCEQ.F32        Q13, Q2, #0.0 }
    v29 = (int8x8x2_t)vbslq_s64(
                        _Q13,
                        (int64x2_t)0,
                        vmulq_f32(v30, vmulq_f32(v34, vrsqrtsq_f32(v34, vmulq_f32(_Q2, v34)))));
  }
  else
  {
    _Q1.n128_u64[1] = _Q1.n128_u64[0];
    v25 = vrsqrteq_f32(_Q1);
    v26 = vmulq_f32(v25, vrsqrtsq_f32(v25, vmulq_f32(v25, _Q1)));
    v27 = vmulq_f32(v26, vrsqrtsq_f32(v26, vmulq_f32(_Q1, v26)));
    __asm { VCEQ.F32        Q13, Q1, #0.0 }
    v29 = (int8x8x2_t)vbslq_s64(_Q13, v6, vmulq_f32(v22, v27));
  }
  *(int8x8_t *)&v36.n128_i8[8] = vtbl2_s8(v29, (int8x8_t)0xF0E0D0C07060504LL);
  v36.n128_u64[0] = vtbl2_s8(v29, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
  *(int8x8_t *)&v37.n128_i8[8] = vtbl2_s8(v29, (int8x8_t)0xF0E0D0C03020100LL);
  v37.n128_u64[0] = vtbl2_s8(v29, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
  v38 = (float32x2x2_t)vmlsq_f32(vmulq_f32(v20, v36), v18, v37);
LABEL_10:
  v39 = a1 + 2;
  *a1 = v29;
  result = (float32x2x2_t *)&a1[1];
  *result = v38;
  *v39 = v17;
  return result;
}

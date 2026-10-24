/* sub_6087E2A0
 * address: 0x6087E2A0   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int8x8x2_t *__fastcall sub_6087E2A0(int8x8x2_t *a1, float32x4_t *a2, float32x2_t *a3)
{
  float32x4_t v3; // q8
  float32x4_t v4; // q11
  float32x4_t v5; // q12
  int8x8x2_t v6; // q11
  float32x4_t v8; // q9
  float32x4_t v9; // q9
  float32x4_t v10; // q10
  int8x8x2_t v16; // q0
  float32x4_t v17; // q13
  float32x4_t v18; // q8
  float32x4_t v19; // q15
  float32x4_t v20; // q11
  float32x4_t v21; // q14
  float32x4_t v22; // q13
  float32x4_t v24; // q13
  float32x4_t v25; // q13
  float32x4_t v26; // q15
  int8x8x2_t v28; // q13
  float32x4_t v29; // q1
  float32x4_t v30; // q12
  float32x4_t v32; // q12
  float32x4_t v33; // q12
  float32x4_t v35; // q12
  float32x4_t v36; // q10
  float32x2x2_t v37; // q1
  float32x2x2_t *v38; // r1
  int8x8x2_t *result; // r0

  v3 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*a2, FIELD_F32(a3 + (2) * 8, 0x0)[0]), a2[1], a3[2], 1), a2[2], a3[3], 0);
  v4.n128_u64[0] = 0xBF800000BF800000LL;
  v4.n128_u64[1] = 3212836864LL;
  v5 = vmulq_f32(v3, v3);
  v6 = (int8x8x2_t)vmulq_f32(
                     vaddq_f32(
                       a2[3],
                       vmlaq_lane_f32(
                         vmlaq_lane_f32(vmulq_n_f32(*a2, FIELD_F32(a3 + (6) * 8, 0x0)[0]), a2[1], a3[6], 1),
                         a2[2],
                         a3[7],
                         0)),
                     v4);
  v5.n128_u64[0] = vadd_f32(*(float32x2_t *)&v5.n128_i8[8], (float32x2_t)v5.n128_u64[0]).n64_u64[0];
  _Q0.n128_u64[0] = vpadd_f32((float32x2_t)v5.n128_u64[0], (float32x2_t)v5.n128_u64[0]).n64_u64[0];
  if ( _Q0.n128_f32[0] <= 0.0 )
  {
    v16.val[0].n64_u64[0] = 0x3F80000000000000LL;
    v16.val[1].n64_u64[0] = 0;
  }
  else
  {
    _Q0.n128_u64[1] = _Q0.n128_u64[0];
    v8 = vrsqrteq_f32(_Q0);
    v9 = vmulq_f32(v8, vrsqrtsq_f32(v8, vmulq_f32(v8, _Q0)));
    v10 = vmulq_f32(_Q0, v9);
    __asm { VCEQ.F32        Q0, Q0, #0.0 }
    v16 = (int8x8x2_t)vbslq_s64(_Q0, (int64x2_t)0LL, vmulq_f32(v3, vmulq_f32(v9, vrsqrtsq_f32(v9, v10))));
  }
  *(int8x8_t *)&v17.n128_i8[8] = vtbl2_s8(v6, (int8x8_t)0xF0E0D0C07060504LL);
  v17.n128_u64[0] = vtbl2_s8(v6, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
  *(int8x8_t *)&v18.n128_i8[8] = vtbl2_s8(v16, (int8x8_t)0xF0E0D0C03020100LL);
  v18.n128_u64[0] = vtbl2_s8(v16, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
  *(int8x8_t *)&v19.n128_i8[8] = vtbl2_s8(v6, (int8x8_t)0xF0E0D0C03020100LL);
  v19.n128_u64[0] = vtbl2_s8(v6, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
  *(int8x8_t *)&v20.n128_i8[8] = vtbl2_s8(v16, (int8x8_t)0xF0E0D0C07060504LL);
  v20.n128_u64[0] = vtbl2_s8(v16, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
  v21 = vmlsq_f32(vmulq_f32(v18, v17), v20, v19);
  v22 = vmulq_f32(v21, v21);
  v22.n128_u64[0] = vadd_f32(*(float32x2_t *)&v22.n128_i8[8], (float32x2_t)v22.n128_u64[0]).n64_u64[0];
  _Q1.n128_u64[0] = vpadd_f32((float32x2_t)v22.n128_u64[0], (float32x2_t)v22.n128_u64[0]).n64_u64[0];
  if ( _Q1.n128_f32[0] <= 0.0 )
  {
    v29.n128_u64[1] = 0;
    v29.n128_f32[1] = -v16.val[0].n64_f32[0];
    v29.n128_u32[0] = v16.val[0].n64_u32[1];
    v30 = vmulq_f32((float32x4_t)v29.n128_u64[0], (float32x4_t)v29.n128_u64[0]);
    v30.n128_u64[0] = vadd_f32(*(float32x2_t *)&v30.n128_i8[8], (float32x2_t)v30.n128_u64[0]).n64_u64[0];
    _Q2.n128_u64[0] = vpadd_f32((float32x2_t)v30.n128_u64[0], (float32x2_t)v30.n128_u64[0]).n64_u64[0];
    if ( _Q2.n128_f32[0] <= 0.0 )
    {
      v37 = vld1q_dup_f32(&flt_6087E4C0);
      v28.val[0].n64_u64[0] = 1065353216;
      v28.val[1].n64_u64[0] = 0;
      v37.val[0].n64_f32[1] = -v16.val[1].n64_f32[0];
      goto LABEL_10;
    }
    _Q2.n128_u64[1] = _Q2.n128_u64[0];
    v32 = vrsqrteq_f32(_Q2);
    v33 = vmulq_f32(v32, vrsqrtsq_f32(v32, vmulq_f32(v32, _Q2)));
    __asm { VCEQ.F32        Q13, Q2, #0.0 }
    v28 = (int8x8x2_t)vbslq_s64(
                        _Q13,
                        (int64x2_t)0,
                        vmulq_f32(v29, vmulq_f32(v33, vrsqrtsq_f32(v33, vmulq_f32(_Q2, v33)))));
  }
  else
  {
    _Q1.n128_u64[1] = _Q1.n128_u64[0];
    v24 = vrsqrteq_f32(_Q1);
    v25 = vmulq_f32(v24, vrsqrtsq_f32(v24, vmulq_f32(v24, _Q1)));
    v26 = vmulq_f32(v25, vrsqrtsq_f32(v25, vmulq_f32(_Q1, v25)));
    __asm { VCEQ.F32        Q13, Q1, #0.0 }
    v28 = (int8x8x2_t)vbslq_s64(_Q13, (int64x2_t)0LL, vmulq_f32(v21, v26));
  }
  *(int8x8_t *)&v35.n128_i8[8] = vtbl2_s8(v28, (int8x8_t)0xF0E0D0C03020100LL);
  v35.n128_u64[0] = vtbl2_s8(v28, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
  *(int8x8_t *)&v36.n128_i8[8] = vtbl2_s8(v28, (int8x8_t)0xF0E0D0C07060504LL);
  v36.n128_u64[0] = vtbl2_s8(v28, (int8x8_t)0x30201000B0A0908LL).n64_u64[0];
  v37 = (float32x2x2_t)vmlsq_f32(vmulq_f32(v20, v35), v18, v36);
LABEL_10:
  v38 = (float32x2x2_t *)&a1[2];
  *a1 = v28;
  result = a1 + 1;
  *result = v16;
  *v38 = v37;
  return result;
}

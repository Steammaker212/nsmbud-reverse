/* sub_6087E6E4
 * address: 0x6087E6E4   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x4_t *__fastcall sub_6087E6E4(int a1, float32x4_t *a2, int a3, int a4, int a5)
{
  float32x4_t v8; // q11
  float32x4_t v10; // q11
  float32x4_t v11; // q13
  float32x4_t v12; // q14
  float32x4_t v19; // q11
  float32x4_t v20; // q12
  float32x4_t v21; // q13
  float32x4_t v24; // q11
  float32x4_t v25; // q9
  float32x4_t v26; // 0:q4.16
  float32x4_t v27; // 0:q5.16
  float32x4_t v28; // 0:q6.16

  v26 = *(float32x4_t *)a4;
  v27 = *(float32x4_t *)(a4 + 32);
  v28 = *(float32x4_t *)(a4 + 16);
  ((void (__fastcall *)(float32x4_t *, int, int, int))*(&off_60C5A95C + ((unsigned int)(a1 - 0x20000) >> 16)))(
    a2,
    a3,
    a4,
    a5);
  _Q8 = vmulq_f32(v26, v26);
  _Q9 = vmulq_f32(v28, v28);
  v8 = vmulq_f32(v27, v27);
  _Q8.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q8.n128_i8[8], (float32x2_t)_Q8.n128_u64[0]).n64_u64[0];
  *(float32x2_t *)&_Q8.n128_i8[8] = vadd_f32(*(float32x2_t *)&v8.n128_i8[8], (float32x2_t)v8.n128_u64[0]);
  _Q10.n128_u64[0] = vpadd_f32((float32x2_t)_Q8.n128_u64[0], (float32x2_t)_Q8.n128_u64[0]).n64_u64[0];
  _Q8.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q9.n128_i8[8], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
  _Q9.n128_u64[0] = vpadd_f32((float32x2_t)_Q8.n128_u64[0], (float32x2_t)_Q8.n128_u64[0]).n64_u64[0];
  _Q8.n128_u64[0] = vpadd_f32(*(float32x2_t *)&_Q8.n128_i8[8], *(float32x2_t *)&_Q8.n128_i8[8]).n64_u64[0];
  _Q10.n128_u64[1] = _Q10.n128_u64[0];
  v10 = vrsqrteq_f32(_Q10);
  _Q9.n128_u64[1] = _Q9.n128_u64[0];
  _Q8.n128_u64[1] = _Q8.n128_u64[0];
  v11 = vrsqrteq_f32(_Q9);
  v12 = vrsqrteq_f32(_Q8);
  __asm
  {
    VCEQ.F32        Q2, Q9, #0.0
    VCEQ.F32        Q3, Q8, #0.0
  }
  v19 = vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v10, _Q10)));
  v20 = vmulq_f32(v11, vrsqrtsq_f32(v11, vmulq_f32(v11, _Q9)));
  v21 = vmulq_f32(v12, vrsqrtsq_f32(v12, vmulq_f32(v12, _Q8)));
  __asm { VCEQ.F32        Q0, Q10, #0.0 }
  _Q0.n128_u32[0] = vbslq_s64(
                      _Q0,
                      (int64x2_t)0,
                      vmulq_f32(_Q10, vmulq_f32(v19, vrsqrtsq_f32(v19, vmulq_f32(_Q10, v19))))).n128_u32[0];
  v24 = a2[1];
  _Q2.n128_u32[0] = vbslq_s64(_Q2, (int64x2_t)0, vmulq_f32(_Q9, vmulq_f32(v20, vrsqrtsq_f32(v20, vmulq_f32(_Q9, v20))))).n128_u32[0];
  v25 = a2[2];
  *a2 = vmulq_n_f32(*a2, _Q0.n128_f32[0]);
  a2[1] = vmulq_n_f32(v24, _Q2.n128_f32[0]);
  a2[2] = vmulq_n_f32(
            v25,
            vbslq_s64(_Q3, (int64x2_t)0, vmulq_f32(_Q8, vmulq_f32(v21, vrsqrtsq_f32(v21, vmulq_f32(_Q8, v21))))).n128_f32[0]);
  return a2 + 1;
}

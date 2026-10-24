/* sub_608A8848
 * address: 0x608A8848   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A8848(
        float a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        int a9,
        int a10,
        int a11,
        float32x4_t *a12,
        float32x2_t *a13,
        float *a14)
{
  float32x4_t v14; // q8
  float32x4_t v16; // q10
  float32x4_t v22; // q10
  int64x2_t v23; // q2
  float32x4_t v25; // [sp+0h] [bp-18h]

  v14 = vaddq_f32(
          a12[3],
          vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*a12, FIELD_F32(a13, 0x0)[0]), a12[1], (float32x2_t)FIELD_U64(a13, 0x0)[0], 1),
            a12[2],
            a13[1],
            0));
  _Q9 = vmulq_f32(v14, v14);
  v25 = v14;
  _Q9.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q9.n128_i8[8], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
  _Q9.n128_u64[0] = vpadd_f32((float32x2_t)_Q9.n128_u64[0], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
  _Q9.n128_u64[1] = _Q9.n128_u64[0];
  v16 = vrsqrteq_f32(_Q9);
  __asm { VCEQ.F32        Q2, Q9, #0.0 }
  v22 = vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v16, _Q9)));
  v23 = vbslq_s64(_Q2, (int64x2_t)0, vmulq_f32(_Q9, vmulq_f32(v22, vrsqrtsq_f32(v22, vmulq_f32(_Q9, v22)))));
  return sub_608A8A9C(
           FIELD_F32(a12 + (6) * 16, 0x0)[0],
           v23.n128_f32[0],
           FIELD_F32(a11, 36),
           a14[1],
           a14[2],
           a14[3],
           a7,
           a8,
           v23.n128_f32[0],
           v23.n128_f32[1],
           v23.n128_f32[2],
           v23.n128_f32[3]);
}

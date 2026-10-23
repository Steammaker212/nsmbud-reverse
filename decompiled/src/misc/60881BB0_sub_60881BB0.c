/* sub_60881BB0
 * address: 0x60881BB0   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x4_t *__fastcall sub_60881BB0(float32x4_t *result, float32x4_t *a2, int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int32 v7; // r4
  unsigned __int32 v8; // r5
  unsigned __int32 v9; // r6
  unsigned __int32 v10; // lr
  unsigned __int32 v11; // r4
  unsigned __int32 v12; // r5
  unsigned __int32 v13; // r6
  unsigned __int32 v14; // lr
  unsigned __int32 v15; // r4
  unsigned __int32 v16; // r5
  unsigned __int32 v17; // r6
  unsigned __int32 v18; // r7
  unsigned __int32 v19; // lr
  float32x4_t v21; // q9
  float32x4_t v22; // q11
  float32x4_t v25; // q11
  float32x4_t v26; // q9
  float32x4_t v32; // q15
  float32x4_t v34; // q11
  float32x4_t v35; // q9
  float32x4_t v36; // q13
  float32x4_t v37; // q15
  float32x4_t v39; // q9
  int32x2_t v40; // d0
  int64x2_t v41; // q2
  int64x2_t v42; // q1
  int8x16_t v43; // q8
  int8x16_t v44; // q8
  int8x16_t v45; // q8
  float32x4_t v46; // q9
  float32x4_t v47; // q9
  float32x4_t *v48; // r1
  unsigned __int64 v49; // d19

  v7 = FIELD_U32(a2, 0x0)[1];
  v8 = FIELD_U32(a2, 0x0)[2];
  v9 = FIELD_U32(a2, 0x0)[3];
  v10 = a2[1].n128_u32[0];
  result[5].n128_u32[0] = FIELD_U32(a2, 0x0)[0];
  result[5].n128_u32[1] = v7;
  result[5].n128_u32[2] = v8;
  result[5].n128_u32[3] = v9;
  result[6].n128_u32[0] = v10;
  v11 = a2[1].n128_u32[2];
  v12 = a2[1].n128_u32[3];
  v13 = a2[2].n128_u32[0];
  v14 = a2[2].n128_u32[1];
  result[6].n128_u32[1] = a2[1].n128_u32[1];
  result[6].n128_u32[2] = v11;
  result[6].n128_u32[3] = v12;
  result[7].n128_u32[0] = v13;
  result[7].n128_u32[1] = v14;
  v15 = a2[2].n128_u32[3];
  v16 = a2[3].n128_u32[0];
  v17 = a2[3].n128_u32[1];
  v18 = a2[3].n128_u32[2];
  v19 = a2[3].n128_u32[3];
  result[7].n128_u32[2] = a2[2].n128_u32[2];
  result[7].n128_u32[3] = v15;
  result[8].n128_u32[0] = v16;
  result[8].n128_u32[1] = v17;
  result[8].n128_u32[2] = v18;
  result[8].n128_u32[3] = v19;
  _Q8 = vmulq_f32(a2[2], a2[2]);
  v21 = vmulq_f32(*a2, *a2);
  v22 = vmulq_f32(a2[1], a2[1]);
  _Q8.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q8.n128_i8[8], (float32x2_t)_Q8.n128_u64[0]).n64_u64[0];
  v21.n128_u64[0] = vadd_f32(*(float32x2_t *)&v21.n128_i8[8], (float32x2_t)v21.n128_u64[0]).n64_u64[0];
  _Q8.n128_u64[0] = vpadd_f32((float32x2_t)_Q8.n128_u64[0], (float32x2_t)_Q8.n128_u64[0]).n64_u64[0];
  _Q10.n128_u64[0] = vpadd_f32((float32x2_t)v21.n128_u64[0], (float32x2_t)v21.n128_u64[0]).n64_u64[0];
  v21.n128_u64[0] = vadd_f32(*(float32x2_t *)&v22.n128_i8[8], (float32x2_t)v22.n128_u64[0]).n64_u64[0];
  _Q12.n128_u64[0] = vpadd_f32((float32x2_t)v21.n128_u64[0], (float32x2_t)v21.n128_u64[0]).n64_u64[0];
  _Q8.n128_u64[1] = _Q8.n128_u64[0];
  _Q10.n128_u64[1] = _Q10.n128_u64[0];
  v25 = vrsqrteq_f32(_Q8);
  v26 = vrsqrteq_f32(_Q10);
  _Q12.n128_u64[1] = _Q12.n128_u64[0];
  __asm { VCEQ.F32        Q2, Q10, #0.0 }
  v32 = vrsqrteq_f32(_Q12);
  __asm { VCEQ.F32        Q1, Q12, #0.0 }
  v34 = vmulq_f32(v25, vrsqrtsq_f32(v25, vmulq_f32(v25, _Q8)));
  v35 = vmulq_f32(v26, vrsqrtsq_f32(v26, vmulq_f32(v26, _Q10)));
  v36 = vmulq_f32(v32, vrsqrtsq_f32(v32, vmulq_f32(v32, _Q12)));
  v37 = vmulq_f32(v35, vrsqrtsq_f32(v35, vmulq_f32(_Q10, v35)));
  __asm { VCEQ.F32        Q0, Q8, #0.0 }
  v39 = 0u;
  v40.n64_u64[0] = vbslq_s64(_Q0, (int64x2_t)0, vmulq_f32(_Q8, vmulq_f32(v34, vrsqrtsq_f32(v34, vmulq_f32(_Q8, v34))))).n128_u64[0];
  v41 = vbslq_s64(_Q2, (int64x2_t)0, vmulq_f32(_Q10, v37));
  v42 = vbslq_s64(_Q1, (int64x2_t)0, vmulq_f32(_Q12, vmulq_f32(v36, vrsqrtsq_f32(v36, vmulq_f32(_Q12, v36)))));
  v43 = vextq_s8(vdupq_lane_s32(v40, 0), (int8x16_t)vtrnq_s32(v41, v42).val, 8u);
  v44 = vextq_s8((int8x16_t)0, vextq_s8(v43, v43, 8u), 0xCu);
  v45 = vextq_s8(v44, v44, 4u);
  result[14] = v45;
  if ( v41.n128_f32[0] > 0.0 )
    v39 = vmulq_n_f32(*a2, 1.0 / v41.n128_f32[0]);
  result[9] = v39;
  if ( v42.n128_f32[0] <= 0.0 )
  {
    v46.n128_u64[0] = 0;
    v46.n128_u64[1] = 0;
  }
  else
  {
    v46 = vmulq_n_f32(a2[1], 1.0 / v42.n128_f32[0]);
  }
  result[10] = v46;
  if ( v40.n64_f32[0] <= 0.0 )
  {
    v47.n128_u64[0] = 0;
    v47.n128_u64[1] = 0;
  }
  else
  {
    v47 = vmulq_n_f32(a2[2], 1.0 / v40.n64_f32[0]);
  }
  v48 = a2 + 3;
  result[11] = v47;
  v49 = FIELD_U64(v48, 0x0)[1];
  result[12].n128_u64[0] = FIELD_U64(v48, 0x0)[0];
  result[12].n128_u64[1] = v49;
  result[19] = vmulq_f32(result[17], v45);
  result[1].n128_u32[1] = 1;
  return result;
}

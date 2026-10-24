/* sub_6084A430
 * address: 0x6084A430   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6084A430(int a1, float32x4_t *a2, int a3, int a4, float result)
{
  int v5; // r12
  float32x4_t v6; // q4
  float32x2_t *v7; // lr
  float32x2_t *v8; // r4
  float32x2_t *v9; // r2
  float32x4_t v10; // q10
  float32x4_t v11; // q0
  float32x4_t v12; // q1
  float32x4_t v13; // q2
  float32x4_t v14; // q3
  float32x4_t v15; // q0
  float32x4_t v16; // q3
  float32x4_t v17; // q1
  float32x4_t v18; // q2
  int v19; // r0
  int v20; // r2
  float32x4_t v21; // q14
  float32x4_t v22; // q8
  float32x4_t v23; // q11
  float32x4_t v24; // q9
  float32x4_t v25; // q10
  unsigned int v26; // r2
  float v27; // s0
  float v28; // s2
  float v29; // s4
  float v30; // s12
  float v31; // s6
  float v32; // s8
  float v33; // s10
  float v34; // s14
  float v35; // s1
  float v36; // s3
  float v37; // s5
  float v38; // s7
  float v39; // s9
  float v40; // s11
  unsigned int v41; // r0
  float32x4_t v42; // 0:q9.16
  float32x4_t v43; // 0:q9.16
  float32x4_t v44; // 0:q12.16
  float32x4_t v45; // 0:q13.16

  if ( FIELD_S32(a1, 112) >= 1 )
  {
    v5 = FIELD_U32(a4, 16);
    v6 = *(float32x4_t *)a3;
    if ( v5 )
    {
      v7 = (float32x2_t *)(a3 + 32);
      v8 = (float32x2_t *)(a3 + 16);
      v9 = (float32x2_t *)(a3 + 48);
      v42 = *(float32x4_t *)(v5 + 16);
      v10.n128_u64[0] = 0;
      v10.n128_u64[1] = 0x3F80000000000000LL;
      v11 = vmulq_lane_f32(v42, (float32x2_t)FIELD_U64(v9, 0x0)[0], 1);
      v12 = vmulq_lane_f32(v42, (float32x2_t)FIELD_U64(v8, 0x0)[0], 1);
      v13 = vmulq_lane_f32(v42, (float32x2_t)v6.n128_u64[0], 1);
      v14 = vmulq_lane_f32(v42, (float32x2_t)FIELD_U64(v7, 0x0)[0], 1);
      v43 = *(float32x4_t *)(v5 + 32);
      v15 = vmlaq_lane_f32(
              vmlaq_lane_f32(vmlaq_lane_f32(v11, *(float32x4_t *)v5, (float32x2_t)FIELD_U64(v9, 0x0)[0], 0), v43, v9[1], 0),
              v10,
              v9[1],
              1);
      v16 = vmlaq_lane_f32(
              vmlaq_lane_f32(vmlaq_lane_f32(v14, *(float32x4_t *)v5, (float32x2_t)FIELD_U64(v7, 0x0)[0], 0), v43, v7[1], 0),
              v10,
              v7[1],
              1);
      v17 = vmlaq_lane_f32(
              vmlaq_lane_f32(vmlaq_lane_f32(v12, *(float32x4_t *)v5, (float32x2_t)FIELD_U64(v8, 0x0)[0], 0), v43, v8[1], 0),
              v10,
              v8[1],
              1);
      v18 = vmlaq_lane_f32(
              vmlaq_lane_f32(
                vmlaq_lane_f32(v13, *(float32x4_t *)v5, (float32x2_t)v6.n128_u64[0], 0),
                v43,
                *(float32x2_t *)&v6.n128_i8[8],
                0),
              v10,
              *(float32x2_t *)&v6.n128_i8[8],
              1);
    }
    else
    {
      v18 = *(float32x4_t *)a3;
      v15 = *(float32x4_t *)(a3 + 48);
      v16 = *(float32x4_t *)(a3 + 32);
      v17 = *(float32x4_t *)(a3 + 16);
    }
    v19 = FIELD_U32(a4, 20);
    if ( v19 )
    {
      v20 = FIELD_U32(a4, 20);
      v44 = *(float32x4_t *)(v20 + 16);
      v45 = *(float32x4_t *)(v19 + 32);
      v21.n128_u64[0] = 0;
      v21.n128_u64[1] = 0x3F80000000000000LL;
      v22 = vmlaq_lane_f32(
              vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)v20, v15.n128_f32[0]), v44, (float32x2_t)v15.n128_u64[0], 1),
                v45,
                *(float32x2_t *)&v15.n128_i8[8],
                0),
              v21,
              *(float32x2_t *)&v15.n128_i8[8],
              1);
      v23 = vmlaq_lane_f32(
              vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)v20, v16.n128_f32[0]), v44, (float32x2_t)v16.n128_u64[0], 1),
                v45,
                *(float32x2_t *)&v16.n128_i8[8],
                0),
              v21,
              *(float32x2_t *)&v16.n128_i8[8],
              1);
      v24 = vmlaq_lane_f32(
              vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)v20, v17.n128_f32[0]), v44, (float32x2_t)v17.n128_u64[0], 1),
                v45,
                *(float32x2_t *)&v17.n128_i8[8],
                0),
              v21,
              *(float32x2_t *)&v17.n128_i8[8],
              1);
      v25 = vmlaq_lane_f32(
              vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)v20, v18.n128_f32[0]), v44, (float32x2_t)v18.n128_u64[0], 1),
                v45,
                *(float32x2_t *)&v18.n128_i8[8],
                0),
              v21,
              *(float32x2_t *)&v18.n128_i8[8],
              1);
    }
    else
    {
      v25 = v18;
      v24 = v17;
      v23 = v16;
      v22 = v15;
    }
    *a2 = v25;
    a2[1] = v24;
    a2[2] = v23;
    a2[3] = v22;
    v26 = FIELD_U8(a4, 56);
    v27 = FIELD_F32(a4, 28);
    v28 = FIELD_F32(a4, 32);
    v29 = FIELD_F32(a4, 24);
    v30 = FIELD_F32(a4, 40);
    v31 = FIELD_F32(a4, 44);
    v32 = FIELD_F32(a4, 48);
    v33 = FIELD_F32(a4, 52);
    v34 = FIELD_F32(a4, 76);
    v35 = FIELD_F32(a4, 80);
    v36 = FIELD_F32(a4, 84);
    v37 = FIELD_F32(a4, 88);
    v38 = FIELD_F32(a4, 60);
    v39 = FIELD_F32(a4, 64);
    v40 = FIELD_F32(a4, 68);
    v41 = FIELD_U8(a4, 92);
    FIELD_F32(a2 + (5) * 16, 0x0)[0] = v29;
    FIELD_F32(a2 + (5) * 16, 0x0)[1] = v27;
    FIELD_F32(a2 + (5) * 16, 0x0)[2] = v28;
    FIELD_U32(a2 + (5) * 16, 0x0)[3] = 0;
    FIELD_F32(a2 + (4) * 16, 0x0)[0] = v30 - v29;
    FIELD_F32(a2 + (4) * 16, 0x0)[1] = v31 - v27;
    FIELD_F32(a2 + (4) * 16, 0x0)[2] = v32 - v28;
    FIELD_F32(a2 + (4) * 16, 0x0)[3] = v33 * (float)((float)v26 * 0.0039216);
    FIELD_F32(a2 + (7) * 16, 0x0)[0] = v38;
    FIELD_F32(a2 + (7) * 16, 0x0)[1] = v39;
    FIELD_F32(a2 + (7) * 16, 0x0)[2] = v40;
    FIELD_U32(a2 + (7) * 16, 0x0)[3] = 0;
    FIELD_F32(a2 + (6) * 16, 0x0)[0] = v34 - v38;
    FIELD_F32(a2 + (6) * 16, 0x0)[1] = v35 - v39;
    FIELD_F32(a2 + (6) * 16, 0x0)[2] = v36 - v40;
    result = v37 * (float)((float)v41 * 0.0039216);
    FIELD_F32(a2 + (6) * 16, 0x0)[3] = result;
  }
  return result;
}

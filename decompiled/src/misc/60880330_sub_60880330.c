/* sub_60880330
 * address: 0x60880330   size: 984   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x4_t *__fastcall sub_60880330(
        float32x4_t *a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        double a14)
{
  __int32 v14; // r2
  int64x2_t v15; // q9
  int64x2_t v16; // q10
  unsigned int v17; // s4
  float v18; // s0
  int v19; // r3
  float v20; // s6
  float v21; // s1
  int v22; // s10
  int v23; // r7
  float32x4_t v24; // q0
  float32x4_t v31; // q1
  int64x2_t v32; // q4
  float32x4_t v33; // q8
  int64x2_t v34; // q8
  int64x2_t v35; // q11
  float32x4_t v36; // q9
  int64x2_t v37; // q9
  float32x4_t v38; // q13
  float32x4_t v39; // q10
  float32x4_t v40; // q11
  float32x4_t v41; // q12
  float32x4_t v42; // q13
  float32x4_t v43; // q14
  float32x4_t v44; // q13
  int64x2_t v45; // q13
  int64x2_t v46; // q12
  float32x4_t v47; // q15
  int v48; // r3
  float32x4_t v49; // q3
  float v50; // s8
  int v51; // r4
  float32x4_t v52; // q14
  float32x4_t v53; // q9
  float32x4_t v54; // q13
  float32x4_t v55; // q4
  float32x4_t v56; // q1
  unsigned __int64 v57; // d14
  float32x4_t v58; // q5
  float32x4_t v59; // q6
  float v60; // s10
  float32x4_t v61; // q8
  float32x4_t v62; // q12
  float32x4_t v63; // q9
  float32x4_t v64; // q10
  float32x4_t *v65; // r1
  float32x4_t *result; // r0
  float32x4_t v67; // 0:d22.8,8:d23.8
  float32x4_t v68; // 0:d26.8,8:d27.8

  v14 = a1[8].n128_i32[2];
  v15.n128_u64[0] = 0xBF000000BF000000LL;
  v15.n128_u64[1] = 0xBF000000BF000000LL;
  v16.n128_u64[0] = 0x3F0000003F000000LL;
  v16.n128_u64[1] = 0x3F0000003F000000LL;
  v17 = FIELD_U32(a1 + (9) * 16, 0x0)[0];
  v18 = FIELD_F32(v14, 1928);
  v19 = 1103515245 * v17 + 12345;
  FIELD_U32(a1 + (9) * 16, 0x0)[0] = v19;
  v20 = FIELD_F32(v14, 1940);
  v21 = FIELD_F32(v14, 1932);
  v22 = 1103515245 * v19 + 12345;
  FIELD_U32(a1 + (9) * 16, 0x0)[0] = v22;
  v23 = 1103515245 * v22 + 12345;
  LODWORD(a14) = FIELD_U32(v14, 1944);
  v24.n128_u32[2] = FIELD_U32(v14, 1936);
  FIELD_U32(a1 + (9) * 16, 0x0)[0] = v23;
  v24.n128_u64[1] = v24.n128_u32[2];
  v24.n128_f32[0] = v18
                  + (float)(v20
                          * (float)((float)((float)((float)v17 * 2.3283e-10) + (float)((float)v17 * 2.3283e-10)) + -1.0));
  v24.n128_f32[1] = v21
                  + (float)((float)((float)((float)((float)(unsigned int)v19 * 2.3283e-10)
                                          + (float)((float)(unsigned int)v19 * 2.3283e-10))
                                  + -1.0)
                          * *(float *)&a14);
  v24.n128_f32[2] = v24.n128_f32[2]
                  + (float)((float)((float)((float)((float)(unsigned int)v22 * 2.3283e-10)
                                          + (float)((float)(unsigned int)v22 * 2.3283e-10))
                                  + -1.0)
                          * FIELD_F32(v14, 1948));
  _Q8 = vmulq_f32(v24, (float32x4_t)vld1q_dup_f32((const float *)&nn__util__detail__Float1Divided2Pi));
  __asm { VCGE.F32        Q11, Q8, #0.0 }
  v31 = vaddq_f32(vbslq_s64(_Q11, v16, v15), _Q8);
  _Q8.n128_u32[0] = (int)v31.n128_f32[2];
  _Q8.n128_u32[2] = (int)v31.n128_f32[0];
  _Q8.n128_u32[1] = (int)v31.n128_f32[3];
  v31.n128_u32[2] = nn__util__detail__FloatPi;
  *(float32x2_t *)&v15.n128_i8[8] = vcvt_f32_s32((int32x2_t)_Q8.n128_u64[0]);
  v31.n128_u32[0] = nn__util__detail__FloatPiDivided2;
  _Q8.n128_u32[3] = (int)v31.n128_f32[1];
  *(float *)&a14 = -nn__util__detail__FloatPi;
  v15.n128_u64[0] = vcvt_f32_s32(*(int32x2_t *)&_Q8.n128_i8[8]).n64_u64[0];
  v32 = vmlsq_f32(v24, (float32x4_t)vld1q_dup_f32((const float *)&nn__util__detail__Float2Pi), v15);
  v33 = vdupq_lane_s32((int32x2_t)v31.n128_u64[0], 0);
  v31.n128_f32[0] = -nn__util__detail__FloatPiDivided2;
  v34 = vcgtq_f32(v32, v33);
  v35 = vbslq_s64(v34, vsubq_f32(vdupq_lane_s32(*(int32x2_t *)&v31.n128_i8[8], 0), v32), v32);
  v36 = vdupq_lane_s32((int32x2_t)v31.n128_u64[0], 0);
  v31.n128_f32[0] = -nn__util__detail__CosCoefficients[0];
  v37 = vcgtq_f32(v36, v35);
  v38 = vdupq_lane_s32((int32x2_t)v31.n128_u64[0], 0);
  v31.n128_f32[0] = -nn__util__detail__CosCoefficients[2];
  v31.n128_f32[2] = -nn__util__detail__SinCoefficients[0];
  v39 = vbslq_s64(v37, vsubq_f32(vdupq_lane_s32(*(int32x2_t *)&a14, 0), v35), v35);
  v40 = vmulq_f32(v39, v39);
  v41 = vmlaq_f32((float32x4_t)vld1q_dup_f32(&nn__util__detail__CosCoefficients[1]), v40, v38);
  v42 = vdupq_lane_s32(*(int32x2_t *)&v31.n128_i8[8], 0);
  v31.n128_f32[2] = -nn__util__detail__SinCoefficients[2];
  v43 = vmlaq_f32((float32x4_t)vld1q_dup_f32(&nn__util__detail__SinCoefficients[1]), v40, v42);
  v44 = vdupq_lane_s32((int32x2_t)v31.n128_u64[0], 0);
  v31.n128_f32[0] = -nn__util__detail__SinCoefficients[4];
  v45 = vmlaq_f32(v44, v40, v41);
  v46 = vdupq_lane_s32(*(int32x2_t *)&v31.n128_i8[8], 0);
  v31.n128_f32[2] = -nn__util__detail__CosCoefficients[4];
  v47 = vmlaq_f32((float32x4_t)vld1q_dup_f32(&nn__util__detail__CosCoefficients[3]), v40, v45);
  v45.n128_u64[0] = 0x3F8000003F800000LL;
  v45.n128_u64[1] = 0x3F8000003F800000LL;
  v24.n128_u32[0] = FIELD_U32(v14, 1904);
  v48 = 1103515245 * v23 + 12345;
  v49 = vmlaq_f32((float32x4_t)vld1q_dup_f32(&nn__util__detail__SinCoefficients[3]), v40, vmlaq_f32(v46, v40, v43));
  v46.n128_u64[0] = 0xBF800000BF800000LL;
  v46.n128_u64[1] = 0xBF800000BF800000LL;
  FIELD_U32(a1 + (9) * 16, 0x0)[0] = v48;
  v24.n128_u32[1] = FIELD_U32(v14, 1908);
  v50 = FIELD_F32(v14, 1916);
  v51 = 1103515245 * v48 + 12345;
  v52 = vmlaq_f32(vdupq_lane_s32(*(int32x2_t *)&v31.n128_i8[8], 0), v40, v47);
  v47.n128_f32[0] = 1.0;
  v47.n128_f32[1] = 1.0;
  v47.n128_f32[2] = 1.0;
  v47.n128_f32[3] = 1.0;
  FIELD_U32(a1 + (9) * 16, 0x0)[0] = v51;
  v53 = vbslq_s64(v37, v46, vbslq_s64(v34, v46, v45));
  v34.n128_f32[0] = 1.0;
  v34.n128_f32[1] = 1.0;
  v34.n128_f32[2] = 1.0;
  v34.n128_f32[3] = 1.0;
  v24.n128_u32[2] = FIELD_U32(v14, 1912);
  v54 = vmlaq_f32(vdupq_lane_s32((int32x2_t)v31.n128_u64[0], 0), v40, v49);
  v49.n128_u64[1] = 3212836864LL;
  v55 = vmulq_f32(v39, vmlaq_f32(v47, v40, v54));
  v56 = vmulq_f32(v53, vmlaq_f32(v34, v40, v52));
  LODWORD(v57) = vdup_lane_s32((int32x2_t)v56.n128_u64[0], 1).n64_u32[0];
  v58.n128_u32[0] = vdup_lane_s32((int32x2_t)v55.n128_u64[0], 1).n64_u32[0];
  v59.n128_u64[0] = vtrn_s32(*(int32x2_t *)&v56.n128_i8[8], *(int32x2_t *)&v55.n128_i8[8]).val[0].n64_u64[0];
  v60 = FIELD_F32(v14, 1920);
  v49.n128_u64[0] = __PAIR64__(v56.n128_u32[1], v57);
  HIDWORD(v57) = v24.n128_u32[3];
  v59.n128_u64[1] = __PAIR64__(v24.n128_u32[3], v58.n128_u32[0]);
  FIELD_U32(a1 + (9) * 16, 0x0)[0] = 1103515245 * v51 + 12345;
  v58.n128_u64[1] = 1065353216;
  v58.n128_u32[1] = v55.n128_u32[1];
  v55.n128_u64[1] = vtrn_s32(*(int32x2_t *)&v55.n128_i8[8], *(int32x2_t *)&v56.n128_i8[8]).val[0].n64_u64[0];
  v67 = (float32x4_t)vld1q_dup_f32((const float *)(v14 + 1960));
  v68 = (float32x4_t)vld1q_dup_f32((const float *)(v14 + 1956));
  v61 = vmulq_f32(v59, v49);
  v49.n128_u32[0] = FIELD_U32(v14, 1924);
  v59.n128_u64[1] = v57;
  v62 = vmulq_f32(v58, v59);
  a1[26] = vmulq_f32((float32x4_t)vld1q_dup_f32((const float *)(v14 + 1952)), v61);
  v63 = vmlaq_lane_f32(
          vmulq_f32(vmulq_n_f32((float32x4_t)v55.n128_u64[1], v56.n128_f32[0]), (float32x4_t)0x3F800000BF800000uLL),
          v62,
          (float32x2_t)v55.n128_u64[0],
          0);
  v64 = vmlaq_lane_f32(
          vmulq_f32(vmulq_n_f32((float32x4_t)v55.n128_u64[1], v55.n128_f32[0]), (float32x4_t)0xBF8000003F800000LL),
          v62,
          (float32x2_t)v56.n128_u64[0],
          0);
  a1[27] = vmulq_f32(v68, v63);
  v24.n128_f32[0] = v24.n128_f32[0]
                  + (float)((float)((float)((float)((float)(unsigned int)v23 * 2.3283e-10)
                                          + (float)((float)(unsigned int)v23 * 2.3283e-10))
                                  + -1.0)
                          * v50);
  a1[28] = vmulq_f32(v67, v64);
  v24.n128_f32[1] = v24.n128_f32[1]
                  + (float)((float)((float)((float)((float)(unsigned int)v48 * 2.3283e-10)
                                          + (float)((float)(unsigned int)v48 * 2.3283e-10))
                                  + -1.0)
                          * v60);
  v24.n128_f32[2] = v24.n128_f32[2]
                  + (float)((float)((float)((float)((float)(unsigned int)v51 * 2.3283e-10)
                                          + (float)((float)(unsigned int)v51 * 2.3283e-10))
                                  + -1.0)
                          * v49.n128_f32[0]);
  a1[29] = v24;
  a1[30] = v61;
  a1[31] = v63;
  v65 = a1 + 32;
  result = a1 + 33;
  *v65 = v64;
  *result = v24;
  return result;
}

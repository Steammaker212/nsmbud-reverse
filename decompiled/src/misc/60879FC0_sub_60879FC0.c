/* sub_60879FC0
 * address: 0x60879FC0   size: 1396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x4_t *__fastcall sub_60879FC0(
        float32x4_t *a1,
        float32x4_t *a2,
        float a3,
        float a4,
        float a5,
        float a6,
        double a7)
{
  float v7; // s2
  float32x4_t *v8; // r1
  float32x4_t v9; // q8
  float32x4_t *result; // r0
  float32x4_t v11; // q8
  float32x4_t v12; // q9
  float32x2_t v13; // d28
  float32x4_t v15; // q8
  float32x4_t v16; // q8
  float32x4_t v17; // q8
  float32x4_t v18; // q10
  float32x4_t v19; // q12
  float32x4_t v25; // q10
  float32x4_t v26; // q12
  float32x4_t v27; // q8
  float32x4_t v28; // q13
  float32x4_t v29; // q14
  float32x4_t v30; // q13
  float32x4_t v31; // q2
  float32x4_t v32; // q1
  float32x4_t v33; // q3
  float32x4_t v34; // q1
  float32x4_t v35; // q4
  float32x4_t v36; // q5
  float32x4_t v37; // q4
  float32x4_t v38; // q6
  float32x4_t v39; // q7
  float32x4_t v40; // q9
  float32x4_t v41; // q6
  int64x2_t v42; // q7
  float32x4_t v43; // q12
  float32x4_t v44; // q6
  float32x4_t v45; // q13
  float32x4_t v46; // q8
  float32x4_t v47; // q8
  float32x4_t v48; // q8
  float32x4_t v49; // q10
  float32x4_t v50; // q14
  float32x4_t v51; // q5
  float32x4_t v52; // q9
  int64x2_t v53; // q8
  int64x2_t v54; // q10
  int64x2_t v55; // q9
  float32x4_t v56; // q15
  int64x2_t v58; // q1
  float32x4_t v60; // q3
  float32x4_t v61; // q14
  int64x2_t v62; // q9
  float32x4_t v63; // q13
  float32x4_t v64; // q3
  int64x2_t v65; // q10
  float32x4_t v66; // q9
  float32x4_t v67; // q4
  int64x2_t v68; // q11
  float32x4_t v69; // q11
  float32x4_t v70; // q8
  float32x4_t v71; // q6
  float32x4_t v72; // q10
  float32x4_t v73; // q10
  float32x4_t v74; // q11
  float32x4_t v75; // q10
  int64x2_t v78; // q7
  float32x4_t v79; // q15
  int64x2_t v80; // q10
  int64x2_t v81; // q12
  float32x4_t v82; // q11
  float32x4_t v83; // q10
  float32x4_t v84; // q10
  float32x4_t v87; // q1
  int64x2_t v88; // q15
  int64x2_t v89; // q12
  int64x2_t v90; // q14
  int64x2_t v91; // q11
  float32x4_t v92; // q2
  float32x4_t v95; // q12
  float32x4_t v96; // q9
  float32x4_t v97; // q12
  float32x4_t v98; // q10
  float32x4_t v99; // q8
  int64x2_t v100; // q9
  int64x2_t v101; // q12
  int64x2_t v102; // q8
  int64x2_t v103; // q10
  float32x4_t v104; // [sp+0h] [bp-100h]
  float32x4_t v105; // [sp+20h] [bp-E0h]
  float32x4_t v106; // [sp+30h] [bp-D0h]
  float32x4_t v107; // [sp+50h] [bp-B0h]
  float32x2x2_t v108; // [sp+60h] [bp-A0h]
  float32x4_t v109; // [sp+70h] [bp-90h]
  float32x4_t v110; // [sp+A0h] [bp-60h]
  float32x4_t v111; // 0:d4.8,8:d5.8
  float32x4_t v112; // 0:d6.8,8:d7.8
  float32x4_t v113; // 0:d10.8,8:d11.8
  float32x4_t v114; // 0:d18.8,8:d19.8
  float32x4_t v115; // 0:d22.8,8:d23.8
  float32x4_t v116; // 0:d22.8,8:d23.8
  float32x4_t v117; // 0:d30.8,8:d31.8

  v7 = FIELD_F32(a1 + (4) * 16, 0x0)[1];
  v8 = a2 + 2;
  v9 = *v8;
  result = a1 + 2;
  if ( v7 != 0.0 )
  {
    v11 = vmulq_f32(v9, *result);
    v12.n128_f32[0] = 1.0;
    v12.n128_f32[1] = 1.0;
    v12.n128_f32[2] = 1.0;
    v12.n128_f32[3] = 1.0;
    v115 = (float32x4_t)vld1q_dup_f32(nn__util__detail__AtanCoefficients);
    v11.n128_u64[0] = vadd_f32(*(float32x2_t *)&v11.n128_i8[8], (float32x2_t)v11.n128_u64[0]).n64_u64[0];
    v117 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__AtanCoefficients[2]);
    v13.n64_u64[0] = vpadd_f32((float32x2_t)v11.n128_u64[0], (float32x2_t)v11.n128_u64[0]).n64_u64[0];
    *(float *)&a7 = -nn__util__detail__AtanCoefficients[4];
    v11.n128_u64[0] = vmul_f32(v13, v13).n64_u64[0];
    v11.n128_u64[1] = v11.n128_u64[0];
    _Q9 = vsubq_f32(v12, v11);
    v15 = vrsqrteq_f32(_Q9);
    v16 = vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v15, _Q9)));
    v17 = vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(_Q9, v16)));
    v18 = vrecpeq_f32(v17);
    v19 = vmulq_f32(v18, vrecpsq_f32(v18, v17));
    __asm { VCEQ.F32        Q10, Q9, #0.0 }
    v25 = vbslq_s64(_Q10, (int64x2_t)0, vmulq_f32(v19, vrecpsq_f32(v19, v17)));
    v17.n128_u64[0] = v13.n64_u64[0];
    v26 = vrecpeq_f32(v25);
    *(float32x2_t *)&v17.n128_i8[8] = v13;
    v110.n128_u64[0] = v13.n64_u64[0];
    *(float32x2_t *)&v110.n128_i8[8] = v13;
    v27 = vabsq_f32(v17);
    v28 = vmulq_f32(v26, vrecpsq_f32(v26, v25));
    v29 = vdupq_lane_s32(*(int32x2_t *)&a7, 0);
    v30 = vmulq_f32(v27, vmulq_f32(v28, vrecpsq_f32(v28, v25)));
    v31 = vmulq_f32(v30, v30);
    v32 = vmlaq_f32(v29, v115, v31);
    v33 = vmlaq_f32(v117, v31, v32);
    v32.n128_f32[0] = -nn__util__detail__AtanCoefficients[3];
    v34 = vdupq_lane_s32((int32x2_t)v32.n128_u64[0], 0);
    v35 = vmlaq_f32(v34, v31, v33);
    v112 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__AtanCoefficients[4]);
    v36 = vmlaq_f32(v112, v31, v35);
    v35.n128_f32[0] = -nn__util__detail__AtanCoefficients[5];
    v37 = vdupq_lane_s32((int32x2_t)v35.n128_u64[0], 0);
    v38 = vmlaq_f32(v37, v31, v36);
    v113 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__AtanCoefficients[6]);
    v39 = vmlaq_f32(v113, v31, v38);
    v38.n128_f32[0] = -nn__util__detail__AtanCoefficients[7];
    v40 = vdupq_lane_s32((int32x2_t)v38.n128_u64[0], 0);
    v41 = vmlaq_f32(v40, v31, v39);
    v39.n128_f32[0] = 1.0;
    v39.n128_f32[1] = 1.0;
    v39.n128_f32[2] = 1.0;
    v39.n128_f32[3] = 1.0;
    v42 = vmlaq_f32(v39, v31, v41);
    v31.n128_u32[0] = nn__util__detail__FloatPiDivided2;
    v43 = vdupq_lane_s32((int32x2_t)v31.n128_u64[0], 0);
    v31.n128_f32[0] = -nn__util__detail__FloatPiDivided2;
    v44 = vmulq_f32(v30, v42);
    v45 = v27;
    v46 = vrecpeq_f32(v27);
    v109 = v45;
    v31.n128_u32[2] = nn__util__detail__FloatPi;
    v47 = vmulq_f32(v46, vrecpsq_f32(v46, v45));
    v106 = vdupq_lane_s32(*(int32x2_t *)&v31.n128_i8[8], 0);
    v48 = vmulq_f32(v25, vmulq_f32(v47, vrecpsq_f32(v47, v45)));
    v49 = vmulq_f32(v48, v48);
    v50 = vmlaq_f32(v29, v49, v115);
    v115.n128_f32[0] = 1.0;
    v115.n128_f32[1] = 1.0;
    v115.n128_f32[2] = 1.0;
    v115.n128_f32[3] = 1.0;
    v51 = vmlaq_f32(
            v113,
            v49,
            vmlaq_f32(v37, v49, vmlaq_f32(v112, v49, vmlaq_f32(v34, v49, vmlaq_f32(v117, v49, v50)))));
    v52 = vmlaq_f32(v40, v49, v51);
    v51.n128_f32[0] = a3 / (float)(v7 + a3);
    v53 = vmulq_f32(v48, vmlaq_f32(v115, v49, v52));
    v54 = vorrq_s64(vcgtq_f32((float32x4_t)0, v110), vcgeq_f32(v110, (float32x4_t)0));
    v55 = vbslq_s64(v54, v53, vsubq_f32(v106, v53));
    v53.n128_u64[0] = 0x3F3504F33F3504F3LL;
    v53.n128_u64[1] = 0x3F3504F33F3504F3LL;
    v116 = (float32x4_t)vld1q_dup_f32((const float *)&nn__util__detail__Float1Divided2Pi);
    v56 = vbslq_s64(vcgtq_f32(v45, v53), v55, vbslq_s64(v54, vsubq_f32(v43, v44), vaddq_f32(v43, v44)));
    v54.n128_u64[0] = 0xBF000000BF000000LL;
    v54.n128_u64[1] = 0xBF000000BF000000LL;
    _Q8 = vmulq_f32(v56, v116);
    v58 = v116;
    v116.n128_u64[0] = 0x3F0000003F000000LL;
    v116.n128_u64[1] = 0x3F0000003F000000LL;
    v104 = v58;
    __asm { VCGE.F32        Q9, Q8, #0.0 }
    v60 = vaddq_f32(vbslq_s64(_Q9, v116, v54), _Q8);
    _Q8.n128_u32[0] = (int)v60.n128_f32[2];
    _Q9.n128_u32[0] = (int)v60.n128_f32[0];
    _Q8.n128_u32[1] = (int)v60.n128_f32[3];
    _Q9.n128_u32[1] = (int)v60.n128_f32[1];
    *(float32x2_t *)&_Q8.n128_i8[8] = vcvt_f32_s32((int32x2_t)_Q8.n128_u64[0]);
    _Q8.n128_u64[0] = vcvt_f32_s32((int32x2_t)_Q9.n128_u64[0]).n64_u64[0];
    v61 = (float32x4_t)vld1q_dup_f32((const float *)&nn__util__detail__Float2Pi);
    v62 = vmlsq_f32(v56, v61, _Q8);
    v63 = v43;
    v60.n128_f32[0] = -nn__util__detail__SinCoefficients[4];
    v64 = vdupq_lane_s32((int32x2_t)v60.n128_u64[0], 0);
    v65 = vbslq_s64(vcgtq_f32(v62, v43), vsubq_f32(v106, v62), v62);
    v66 = vdupq_lane_s32((int32x2_t)v31.n128_u64[0], 0);
    v31.n128_f32[0] = -nn__util__detail__FloatPi;
    v67 = vdupq_lane_s32((int32x2_t)v31.n128_u64[0], 0);
    v105 = v66;
    v68 = vcgtq_f32(v66, v65);
    v114 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__SinCoefficients[1]);
    v31.n128_f32[2] = -nn__util__detail__SinCoefficients[2];
    v31.n128_f32[0] = -nn__util__detail__SinCoefficients[0];
    v69 = vbslq_s64(v68, vsubq_f32(v67, v65), v65);
    v70 = vdupq_lane_s32(*(int32x2_t *)&v31.n128_i8[8], 0);
    v71 = vdupq_lane_s32((int32x2_t)v31.n128_u64[0], 0);
    v111 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__SinCoefficients[3]);
    v72 = vmulq_f32(v69, v69);
    v43.n128_f32[0] = 1.0;
    v43.n128_f32[1] = 1.0;
    v43.n128_f32[2] = 1.0;
    v43.n128_f32[3] = 1.0;
    v42.n128_u64[0] = 0x3F0000003F000000LL;
    v42.n128_u64[1] = 0x3F0000003F000000LL;
    v73 = vmulq_f32(
            v69,
            vmlaq_f32(
              v43,
              v72,
              vmlaq_f32(v64, v72, vmlaq_f32(v111, v72, vmlaq_f32(v70, v72, vmlaq_f32(v114, v72, v71))))));
    v74 = vrecpeq_f32(v73);
    v107 = vmulq_f32(v74, vrecpsq_f32(v74, v73));
    v108 = (float32x2x2_t)vrecpsq_f32(v107, v73);
    v75 = vmulq_n_f32(v56, v51.n128_f32[0]);
    _Q11 = vmulq_f32(v75, v58);
    v58.n128_u64[0] = 0xBF000000BF000000LL;
    v58.n128_u64[1] = 0xBF000000BF000000LL;
    __asm { VCGE.F32        Q12, Q11, #0.0 }
    v78 = vaddq_f32(_Q11, vbslq_s64(_Q12, v42, v58));
    v51.n128_f32[2] = 1.0 - v51.n128_f32[0];
    v58.n128_u64[0] = 0x3F0000003F000000LL;
    v58.n128_u64[1] = 0x3F0000003F000000LL;
    v79 = vmulq_n_f32(v56, 1.0 - v51.n128_f32[0]);
    _Q11.n128_u32[0] = (int)v78.n128_f32[2];
    _Q11.n128_u32[1] = (int)v78.n128_f32[3];
    *(float32x2_t *)&_Q11.n128_i8[8] = vcvt_f32_s32((int32x2_t)_Q11.n128_u64[0]);
    _Q12.n128_u32[0] = (int)v78.n128_f32[0];
    _Q12.n128_u32[1] = (int)v78.n128_f32[1];
    _Q11.n128_u64[0] = vcvt_f32_s32((int32x2_t)_Q12.n128_u64[0]).n64_u64[0];
    v80 = vmlsq_f32(v75, v61, _Q11);
    v81 = vbslq_s64(vcgtq_f32(v80, v63), vsubq_f32(v106, v80), v80);
    v82 = vbslq_s64(vcgtq_f32(v105, v81), vsubq_f32(v67, v81), v81);
    v83 = vmulq_f32(v82, v82);
    v81.n128_f32[0] = 1.0;
    v81.n128_f32[1] = 1.0;
    v81.n128_f32[2] = 1.0;
    v81.n128_f32[3] = 1.0;
    v78.n128_u64[0] = 0xBF000000BF000000LL;
    v78.n128_u64[1] = 0xBF000000BF000000LL;
    v84 = vmulq_f32(
            v82,
            vmlaq_f32(
              v81,
              v83,
              vmlaq_f32(v64, v83, vmlaq_f32(v111, v83, vmlaq_f32(v70, v83, vmlaq_f32(v114, v71, v83))))));
    _Q11 = vmulq_f32(v79, v104);
    __asm { VCGE.F32        Q12, Q11, #0.0 }
    v87 = vaddq_f32(_Q11, vbslq_s64(_Q12, v58, v78));
    _Q11.n128_u32[0] = (int)v87.n128_f32[2];
    _Q12.n128_u32[0] = (int)v87.n128_f32[0];
    _Q11.n128_u32[1] = (int)v87.n128_f32[3];
    _Q12.n128_u32[1] = (int)v87.n128_f32[1];
    *(float32x2_t *)&_Q11.n128_i8[8] = vcvt_f32_s32((int32x2_t)_Q11.n128_u64[0]);
    _Q11.n128_u64[0] = vcvt_f32_s32((int32x2_t)_Q12.n128_u64[0]).n64_u64[0];
    v88 = vmlsq_f32(v79, v61, _Q11);
    v89 = vbslq_s64(vcgtq_f32(v88, v63), vsubq_f32(v106, v88), v88);
    v90 = vbslq_s64(vcgtq_f32(v105, v89), vsubq_f32(v67, v89), v89);
    v89.n128_f32[0] = 1.0;
    v89.n128_f32[1] = 1.0;
    v89.n128_f32[2] = 1.0;
    v89.n128_f32[3] = 1.0;
    v87.n128_f32[0] = 1.0 - nn__util__detail__FloatQuaternionEpsilon;
    v91 = vmulq_f32(v90, v90);
    v92 = vmlaq_f32(v111, v91, vmlaq_f32(v70, v91, vmlaq_f32(v114, v71, v91)));
    _Q8 = v110;
    __asm { VCLT.F32        Q8, Q8, #0.0 }
    v95 = vmlaq_f32(v89, v91, vmlaq_f32(v64, v91, v92));
    v96 = vmulq_f32(v107, (float32x4_t)v108);
    v91.n128_u64[0] = 0x3F8000003F800000LL;
    v91.n128_u64[1] = 0x3F8000003F800000LL;
    v97 = vmulq_f32(v90, v95);
    v90.n128_u64[0] = 0xBF800000BF800000LL;
    v90.n128_u64[1] = 0xBF800000BF800000LL;
    v98 = vmulq_f32(v96, v84);
    v99 = vbslq_s64(_Q8, v90, v91);
    v100 = vmulq_f32(v96, v97);
    v101 = vmulq_n_f32(v99, v51.n128_f32[0]);
    v102 = vmulq_f32(v99, v98);
    v103 = vcgtq_f32(v109, vdupq_lane_s32((int32x2_t)v87.n128_u64[0], 0));
    v9 = vmlaq_f32(
           vmulq_f32(*result, vbslq_s64(v103, vdupq_lane_s32(*(int32x2_t *)&v51.n128_i8[8], 0), v100)),
           *v8,
           vbslq_s64(v103, v101, v102));
  }
  *result = v9;
  return result;
}

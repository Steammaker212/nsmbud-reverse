/* sub_6087A590
 * address: 0x6087A590   size: 2812   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x4_t *__fastcall sub_6087A590(float32x4_t *a1, int a2, float a3, float a4, double a5)
{
  int64x2_t v5; // q11
  int64x2_t v6; // q12
  float32x4_t v7; // q15
  float32x4_t v8; // q8
  float32x4_t v15; // q1
  int v16; // r2
  float32x4_t v17; // q11
  int64x2_t v18; // q8
  float32x4_t v19; // q10
  int64x2_t v20; // q10
  int64x2_t v21; // q11
  int64x2_t v22; // q8
  float32x4_t v23; // q9
  float32x4_t v24; // q12
  float32x4_t v25; // q11
  float32x4_t v26; // q13
  float32x4_t v27; // q12
  int64x2_t v28; // q14
  float32x4_t v29; // q13
  float32x4_t v30; // q12
  int64x2_t v31; // q12
  float32x4_t v32; // q13
  float32x4_t v33; // q8
  int32x4_t v34; // q14
  float32x4_t v35; // q3
  int32x4_t v36; // q13
  float32x4_t v37; // q2
  int32x4_t v38; // q10
  float32x4_t v39; // q5
  float32x4_t v40; // q4
  float32x4_t v41; // q6
  float v42; // s2
  float32x4_t v43; // q8
  float32x4_t v44; // q7
  float32x4_t v45; // q1
  float32x4_t v46; // q2
  float32x4_t *result; // r0
  float32x4_t v48; // q8
  float32x4_t v49; // q9
  float32x4_t v50; // q10
  float32x4_t v51; // q3
  float32x4_t v52; // q12
  float32x4_t v53; // q8
  int64x2_t v54; // q8
  int64x2_t v55; // q1
  int64x2_t v56; // q2
  int64x2_t v57; // q12
  int64x2_t v58; // q13
  int64x2_t v59; // q9
  int64x2_t v60; // q14
  int64x2_t v61; // q15
  int64x2_t v62; // q13
  int64x2_t v63; // q0
  int64x2_t v64; // q9
  int64x2_t v65; // q1
  float32x4_t v66; // q8
  float32x4_t v69; // q5
  float32x4_t v70; // q8
  float32x4_t v71; // q9
  float32x4_t v72; // q12
  float32x4_t v73; // q3
  float32x4_t v74; // q11
  float32x4_t v75; // q8
  int64x2_t v76; // q9
  int64x2_t v77; // q1
  int64x2_t v78; // q2
  int64x2_t v79; // q4
  int64x2_t v80; // q14
  int64x2_t v81; // q8
  int64x2_t v82; // q15
  int64x2_t v83; // q3
  float32x4_t v84; // q15
  int32x2_t v85; // d1
  float32x4_t v86; // q8
  float32x4_t v88; // q7
  float32x4_t v89; // q15
  float32x4_t v90; // q0
  float32x4_t v91; // q11
  int64x2_t v92; // q11
  float32x4_t v94; // q9
  float32x4_t v95; // q8
  float32x4_t v96; // q1
  float32x4_t v98; // q9
  float32x4_t v100; // q9
  float32x4_t v101; // q9
  float32x4_t v102; // q3
  float32x4_t v103; // q8
  float32x4_t v104; // q8
  float32x4_t v105; // q9
  float32x4_t v106; // q14
  float32x4_t v107; // q8
  float32x4_t v108; // q14
  float32x4_t v109; // q5
  float32x4_t v110; // q5
  float32x4_t v111; // q3
  float32x4_t v112; // q5
  float32x4_t v113; // q0
  int64x2_t v114; // q9
  float32x4_t v115; // q3
  float32x4_t v118; // q0
  int64x2_t v119; // q9
  int64x2_t v120; // q10
  float32x4_t v121; // q9
  float32x4_t v122; // q8
  float32x4_t v123; // q8
  float32x4_t v124; // q9
  float32x4_t v125; // q8
  float32x4_t v128; // q2
  int64x2_t v129; // q8
  int64x2_t v130; // q10
  float32x4_t v131; // q9
  float32x4_t v132; // q8
  float32x4_t v133; // q8
  float32x4_t v136; // q10
  float32x4_t v137; // q4
  int64x2_t v138; // q8
  int64x2_t v139; // q10
  float32x4_t v140; // q9
  float32x4_t v141; // q8
  float32x4_t v144; // q10
  float32x4_t v145; // q8
  int64x2_t v146; // q9
  float v148; // [sp+8h] [bp-D8h]
  float32x4_t v149; // [sp+20h] [bp-C0h]
  float32x4_t v150; // [sp+30h] [bp-B0h]
  float v151; // [sp+40h] [bp-A0h]
  float32x4_t v152; // [sp+40h] [bp-A0h]
  __int128 v153; // [sp+50h] [bp-90h]
  float32x4_t v154; // [sp+A0h] [bp-40h]
  int32x4_t v155; // [sp+D0h] [bp-10h]
  int32x4_t v156; // [sp+F0h] [bp+10h]
  float32x4_t v157; // [sp+100h] [bp+20h]
  float32x4_t v158; // [sp+120h] [bp+40h]
  int32x4_t v159; // 0:^10.16
  int32x4_t v160; // 0:^70.16
  int32x4_t v161; // 0:^80.16
  float32x4_t v162; // 0:^B0.16
  float32x4_t v163; // 0:^C0.16
  float32x4_t v164; // 0:^E0.16
  float32x4_t v165; // 0:^110.16
  float32x4_t v166; // 0:d4.8,8:d5.8
  float32x4_t v167; // 0:d8.8,8:d9.8
  float32x4_t v168; // 0:d18.8,8:d19.8
  float32x4_t v169; // 0:d20.8,8:d21.8
  int8x8x4_t v170; // 0:d20.8,8:d21.8,16:d22.8,24:d23.8
  int8x8x4_t v171; // 0:d24.8,8:d25.8,16:d26.8,24:d27.8

  v5.n128_u64[0] = 0xBF000000BF000000LL;
  v5.n128_u64[1] = 0xBF000000BF000000LL;
  v6.n128_u64[0] = 0x3F0000003F000000LL;
  v6.n128_u64[1] = 0x3F0000003F000000LL;
  v7.n128_f32[0] = 1.0;
  v7.n128_f32[1] = 1.0;
  v7.n128_f32[2] = 1.0;
  v7.n128_f32[3] = 1.0;
  v8.n128_u64[0] = FIELD_U64(a2, 32);
  v8.n128_u64[1] = FIELD_U32(a2, 40);
  v164 = (float32x4_t)vld1q_dup_f32((const float *)&nn__util__detail__Float1Divided2Pi);
  _Q9 = vmulq_f32(v8, v164);
  __asm { VCGE.F32        Q10, Q9, #0.0 }
  v15 = vaddq_f32(vbslq_s64(_Q10, v6, v5), _Q9);
  v16 = (int)v15.n128_f32[0];
  v15.n128_u32[0] = nn__util__detail__FloatPiDivided2;
  _Q9.n128_u32[0] = (int)v15.n128_f32[2];
  _Q9.n128_u32[2] = v16;
  _Q9.n128_u32[1] = (int)v15.n128_f32[3];
  _Q9.n128_u32[3] = (int)v15.n128_f32[1];
  LODWORD(a5) = nn__util__detail__FloatPi;
  v17 = vdupq_lane_s32(*(int32x2_t *)&a5, 0);
  v15.n128_f32[2] = -nn__util__detail__FloatPi;
  *(float32x2_t *)&_Q10.n128_i8[8] = vcvt_f32_s32((int32x2_t)_Q9.n128_u64[0]);
  _Q10.n128_u64[0] = vcvt_f32_s32(*(int32x2_t *)&_Q9.n128_i8[8]).n64_u64[0];
  v168 = (float32x4_t)vld1q_dup_f32((const float *)&nn__util__detail__Float2Pi);
  *(float *)&a5 = -nn__util__detail__CosCoefficients[0];
  v18 = vmlsq_f32(v8, v168, _Q10);
  v19 = vdupq_lane_s32((int32x2_t)v15.n128_u64[0], 0);
  v165 = v168;
  v15.n128_f32[0] = -nn__util__detail__FloatPiDivided2;
  v157 = v17;
  v158 = v19;
  v155 = vdupq_lane_s32(*(int32x2_t *)&v15.n128_i8[8], 0);
  v20 = vcgtq_f32(v18, v19);
  v21 = vbslq_s64(v20, vsubq_f32(v17, v18), v18);
  v156 = vdupq_lane_s32((int32x2_t)v15.n128_u64[0], 0);
  v22 = vcgtq_f32(v156, v21);
  v23 = vbslq_s64(v22, vsubq_f32(v155, v21), v21);
  v24 = vdupq_lane_s32(*(int32x2_t *)&a5, 0);
  *(float *)&a5 = -nn__util__detail__CosCoefficients[2];
  v25 = vmulq_f32(v23, v23);
  v26 = vmlaq_f32((float32x4_t)vld1q_dup_f32(&nn__util__detail__CosCoefficients[1]), v25, v24);
  v27 = vdupq_lane_s32(*(int32x2_t *)&a5, 0);
  *(float *)&a5 = -nn__util__detail__CosCoefficients[4];
  v28.n128_u64[0] = 0xBF800000BF800000LL;
  v28.n128_u64[1] = 0xBF800000BF800000LL;
  v29 = vmlaq_f32((float32x4_t)vld1q_dup_f32(&nn__util__detail__CosCoefficients[3]), v25, vmlaq_f32(v27, v25, v26));
  v30 = vdupq_lane_s32(*(int32x2_t *)&a5, 0);
  *(float *)&a5 = -nn__util__detail__SinCoefficients[0];
  v15.n128_f32[0] = -nn__util__detail__SinCoefficients[2];
  v31 = vmlaq_f32(v30, v25, v29);
  v29.n128_f32[0] = 1.0;
  v29.n128_f32[1] = 1.0;
  v29.n128_f32[2] = 1.0;
  v29.n128_f32[3] = 1.0;
  v32 = vmlaq_f32(v29, v25, v31);
  v31.n128_u64[0] = 0x3F8000003F800000LL;
  v31.n128_u64[1] = 0x3F8000003F800000LL;
  v33 = vbslq_s64(v22, v28, vbslq_s64(v20, v28, v31));
  v34 = vdupq_lane_s32(*(int32x2_t *)&a5, 0);
  *(float *)&a5 = -nn__util__detail__SinCoefficients[4];
  v35 = vmulq_f32(v33, v32);
  v36 = vdupq_lane_s32((int32x2_t)v15.n128_u64[0], 0);
  v37.n128_u32[0] = vdup_lane_s32((int32x2_t)v35.n128_u64[0], 1).n64_u32[0];
  v163 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__SinCoefficients[1]);
  v162 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__SinCoefficients[3]);
  v38 = vdupq_lane_s32(*(int32x2_t *)&a5, 0);
  v33.n128_f32[0] = 1.0;
  v33.n128_f32[1] = 1.0;
  v33.n128_f32[2] = 1.0;
  v33.n128_f32[3] = 1.0;
  v41 = vmulq_f32(
          v23,
          vmlaq_f32(v33, v25, vmlaq_f32(v38, v25, vmlaq_f32(v162, v25, vmlaq_f32(v36, v25, vmlaq_f32(v163, v25, v34))))));
  v39.n128_u32[0] = vdup_lane_s32((int32x2_t)v41.n128_u64[0], 1).n64_u32[0];
  v40.n128_u64[0] = vtrn_s32(*(int32x2_t *)&v35.n128_i8[8], *(int32x2_t *)&v41.n128_i8[8]).val[0].n64_u64[0];
  v39.n128_u32[1] = v41.n128_u32[1];
  v41.n128_u64[1] = vtrn_s32(*(int32x2_t *)&v41.n128_i8[8], *(int32x2_t *)&v35.n128_i8[8]).val[0].n64_u64[0];
  v42 = a1[4].n128_f32[1];
  v40.n128_u64[1] = v37.n128_u32[0];
  v39.n128_u64[1] = 1065353216;
  v37.n128_u32[1] = v35.n128_u32[1];
  v37.n128_u64[1] = 3212836864LL;
  v43 = vmulq_f32(v39, v40);
  v40.n128_u64[1] = v39.n128_u32[0];
  v44 = vmlaq_lane_f32(
          vmulq_f32(vmulq_n_f32((float32x4_t)v41.n128_u64[1], v41.n128_f32[0]), (float32x4_t)0xBF8000003F800000LL),
          v43,
          (float32x2_t)v35.n128_u64[0],
          0);
  v45 = vmlaq_lane_f32(
          vmulq_f32(vmulq_n_f32((float32x4_t)v41.n128_u64[1], v35.n128_f32[0]), (float32x4_t)0x3F800000BF800000uLL),
          v43,
          (float32x2_t)v41.n128_u64[0],
          0);
  v46 = vmulq_f32(v40, v37);
  result = a1 + 2;
  if ( v42 == 0.0 )
  {
    v48.n128_u64[0] = 0xBF8000003F800000LL;
    v48.n128_u64[1] = 0x3F800000BF800000LL;
    v49.n128_u64[0] = 0x3F800000BF800000LL;
    v49.n128_u64[1] = 0x3F800000BF800000LL;
    v50.n128_u64[0] = 0xBF800000BF800000LL;
    v50.n128_u64[1] = 0x3F8000003F800000LL;
    v51.n128_u64[0] = vtrn_s32((int32x2_t)v45.n128_u64[0], *(int32x2_t *)&v46.n128_i8[8]).val[0].n64_u64[0];
    v52.n128_u64[0] = vext_s8((int8x8_t)v46.n128_u64[0], (int8x8_t)v44.n128_u64[0], 4u).n64_u64[0];
    v51.n128_u64[1] = vdup_lane_s32((int32x2_t)v44.n128_u64[0], 1).n64_u32[0];
    v53 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v48, v46.n128_f32[0]), v49, (float32x2_t)v45.n128_u64[0], 1),
            v50,
            *(float32x2_t *)&v44.n128_i8[8],
            0);
    v52.n128_u64[1] = v45.n128_u32[2];
    *(float32x4_t *)v170.val[2].n64_u64 = vsubq_f32(v52, v51);
    *(float32x4_t *)v170.val[0].n64_u64 = vaddq_f32(v52, v51);
    v54 = vaddq_f32(v53, v7);
    *(int8x8_t *)&v55.n128_i8[8] = vtbl4_s8(v170, (int8x8_t)0x1B1A191807060504LL);
    *(int8x8_t *)&v56.n128_i8[8] = vtbl4_s8(v170, (int8x8_t)0x171615140B0A0908LL);
    v57 = vdupq_lane_s32((int32x2_t)v54.n128_u64[0], 0);
    v58 = vdupq_lane_s32((int32x2_t)v54.n128_u64[0], 1);
    v59 = vcgeq_f32(v58, v57);
    v55.n128_u64[0] = vtbl4_s8(v170, (int8x8_t)0x302010003020100LL).n64_u64[0];
    *(int8x8_t *)&v60.n128_i8[8] = vtbl4_s8(v170, (int8x8_t)0x1312111003020100LL);
    v60.n128_u64[0] = vtbl4_s8(v170, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    *(int8x8_t *)&v61.n128_i8[8] = vtbl4_s8(v170, (int8x8_t)0x302010013121110LL);
    v56.n128_u64[0] = v55.n128_u64[0];
    v61.n128_u64[0] = vtbl4_s8(v170, (int8x8_t)0x171615141B1A1918LL).n64_u64[0];
    *(int64x2_t *)v170.val[2].n64_u64 = vbslq_s64(v59, v58, v57);
    v57.n128_u64[0] = 0;
    v57.n128_u64[1] = 0xFFFFFFFFLL;
    v62 = vdupq_lane_s32(*(int32x2_t *)&v54.n128_i8[8], 0);
    v63.n128_u64[0] = 0;
    v63.n128_u64[1] = 0xFFFFFFFF00000000LL;
    v64 = vbslq_s64(
            v59,
            vbslq_s64((int64x2_t)0xFFFFFFFF00000000LL, v54, v56),
            vbslq_s64((int64x2_t)0xFFFFFFFFuLL, v54, v55));
    v65 = vcgeq_f32(v62, *(float32x4_t *)v170.val[2].n64_u64);
    v66 = vbslq_s64(
            vcgeq_f32(
              vdupq_lane_s32(*(int32x2_t *)&v54.n128_i8[8], 1),
              vbslq_s64(v65, v62, *(int64x2_t *)v170.val[2].n64_u64)),
            vbslq_s64(v63, v54, v61),
            vbslq_s64(v65, vbslq_s64(v57, v54, v60), v64));
    _Q9 = vmulq_f32(v66, v66);
    _Q9.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q9.n128_i8[8], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
    _Q9.n128_u64[0] = vpadd_f32((float32x2_t)_Q9.n128_u64[0], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
    _Q9.n128_u64[1] = _Q9.n128_u64[0];
    *(float32x4_t *)v170.val[0].n64_u64 = vrsqrteq_f32(_Q9);
    *(float32x4_t *)v170.val[0].n64_u64 = vmulq_f32(
                                            *(float32x4_t *)v170.val[0].n64_u64,
                                            vrsqrtsq_f32(
                                              *(float32x4_t *)v170.val[0].n64_u64,
                                              vmulq_f32(*(float32x4_t *)v170.val[0].n64_u64, _Q9)));
    *(float32x4_t *)v170.val[2].n64_u64 = vmulq_f32(_Q9, *(float32x4_t *)v170.val[0].n64_u64);
    __asm { VCEQ.F32        Q9, Q9, #0.0 }
    *result = vbslq_s64(
                _Q9,
                (int64x2_t)0,
                vmulq_f32(
                  v66,
                  vmulq_f32(
                    *(float32x4_t *)v170.val[0].n64_u64,
                    vrsqrtsq_f32(*(float32x4_t *)v170.val[0].n64_u64, *(float32x4_t *)v170.val[2].n64_u64))));
  }
  else
  {
    v69.n128_f32[0] = 1.0;
    v69.n128_f32[1] = 1.0;
    v69.n128_f32[2] = 1.0;
    v69.n128_f32[3] = 1.0;
    v70.n128_u64[0] = 0xBF8000003F800000LL;
    v70.n128_u64[1] = 0x3F800000BF800000LL;
    v71.n128_u64[0] = 0x3F800000BF800000LL;
    v71.n128_u64[1] = 0x3F800000BF800000LL;
    v72.n128_u64[0] = 0xBF800000BF800000LL;
    v72.n128_u64[1] = 0x3F8000003F800000LL;
    v73.n128_u64[0] = vtrn_s32((int32x2_t)v45.n128_u64[0], *(int32x2_t *)&v46.n128_i8[8]).val[0].n64_u64[0];
    v161 = v36;
    v160 = v34;
    v74.n128_u64[0] = vext_s8((int8x8_t)v46.n128_u64[0], (int8x8_t)v44.n128_u64[0], 4u).n64_u64[0];
    v73.n128_u64[1] = vdup_lane_s32((int32x2_t)v44.n128_u64[0], 1).n64_u32[0];
    v75 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(v70, v46.n128_f32[0]), v71, (float32x2_t)v45.n128_u64[0], 1),
            v72,
            *(float32x2_t *)&v44.n128_i8[8],
            0);
    v74.n128_u64[1] = v45.n128_u32[2];
    *(float32x4_t *)v171.val[2].n64_u64 = vsubq_f32(v74, v73);
    *(float32x4_t *)v171.val[0].n64_u64 = vaddq_f32(v74, v73);
    v76 = vaddq_f32(v75, v7);
    v77 = vdupq_lane_s32((int32x2_t)v76.n128_u64[0], 0);
    v78 = vdupq_lane_s32((int32x2_t)v76.n128_u64[0], 1);
    *(int8x8_t *)&v73.n128_i8[8] = vtbl4_s8(v171, (int8x8_t)0x1B1A191807060504LL);
    v73.n128_u64[0] = vtbl4_s8(v171, (int8x8_t)0x302010003020100LL).n64_u64[0];
    *(int8x8_t *)&v79.n128_i8[8] = vtbl4_s8(v171, (int8x8_t)0x1312111003020100LL);
    v79.n128_u64[0] = vtbl4_s8(v171, (int8x8_t)0xB0A090807060504LL).n64_u64[0];
    *(int8x8_t *)&v74.n128_i8[8] = vtbl4_s8(v171, (int8x8_t)0x302010013121110LL);
    v80 = vbslq_s64((int64x2_t)0xFFFFFFFFuLL, v76, v73);
    *(int8x8_t *)&v73.n128_i8[8] = vtbl4_s8(v171, (int8x8_t)0x171615140B0A0908LL);
    v81 = vdupq_lane_s32(*(int32x2_t *)&v76.n128_i8[8], 0);
    v74.n128_u64[0] = vtbl4_s8(v171, (int8x8_t)0x171615141B1A1918LL).n64_u64[0];
    *(float32x4_t *)v171.val[0].n64_u64 = vcgeq_f32(v78, v77);
    *(int64x2_t *)v171.val[2].n64_u64 = vbslq_s64(*(int64x2_t *)v171.val[0].n64_u64, v78, v77);
    v77.n128_u64[0] = 0;
    v77.n128_u64[1] = 0xFFFFFFFFLL;
    v78.n128_u64[0] = 0;
    v78.n128_u64[1] = 0xFFFFFFFF00000000LL;
    v82 = vcgeq_f32(v81, *(float32x4_t *)v171.val[2].n64_u64);
    v83 = vbslq_s64(
            v82,
            vbslq_s64(v77, v76, v79),
            vbslq_s64(*(int64x2_t *)v171.val[0].n64_u64, vbslq_s64((int64x2_t)0xFFFFFFFF00000000LL, v76, v73), v80));
    v84 = vbslq_s64(v82, v81, *(int64x2_t *)v171.val[2].n64_u64);
    v171.val[2].n64_u64[0] = FIELD_U64(result, 0x0)[0];
    v171.val[3].n64_u64[0] = FIELD_U64(result, 0x0)[1];
    v85.n64_f32[1] = nn__util__detail__AtanCoefficients[5];
    v151 = v42;
    v86 = vbslq_s64(vcgeq_f32(vdupq_lane_s32(*(int32x2_t *)&v76.n128_i8[8], 1), v84), vbslq_s64(v78, v76, v74), v83);
    v166 = (float32x4_t)vld1q_dup_f32(nn__util__detail__AtanCoefficients);
    _Q9 = vmulq_f32(v86, v86);
    v79.n128_f32[0] = -nn__util__detail__AtanCoefficients[4];
    _Q9.n128_u64[0] = vadd_f32(*(float32x2_t *)&_Q9.n128_i8[8], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
    v88 = vdupq_lane_s32((int32x2_t)v79.n128_u64[0], 0);
    v167 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__AtanCoefficients[2]);
    _Q9.n128_u64[0] = vpadd_f32((float32x2_t)_Q9.n128_u64[0], (float32x2_t)_Q9.n128_u64[0]).n64_u64[0];
    v41.n128_f32[0] = -nn__util__detail__AtanCoefficients[3];
    v89 = vdupq_lane_s32((int32x2_t)v41.n128_u64[0], 0);
    v41.n128_f32[0] = -v85.n64_f32[1];
    v85.n64_f32[0] = -nn__util__detail__AtanCoefficients[7];
    _Q9.n128_u64[1] = _Q9.n128_u64[0];
    v90 = vdupq_lane_s32(v85, 0);
    v91 = vrsqrteq_f32(_Q9);
    v92 = vmulq_f32(v91, vrsqrtsq_f32(v91, vmulq_f32(v91, _Q9)));
    *(float32x4_t *)v171.val[0].n64_u64 = vmulq_f32(_Q9, v92);
    __asm { VCEQ.F32        Q9, Q9, #0.0 }
    v94 = vbslq_s64(
            _Q9,
            (int64x2_t)0,
            vmulq_f32(v86, vmulq_f32(v92, vrsqrtsq_f32(v92, *(float32x4_t *)v171.val[0].n64_u64))));
    v95 = vmulq_f32(*(float32x4_t *)v171.val[2].n64_u64, v94);
    v154 = v94;
    v159 = v38;
    v169 = (float32x4_t)vld1q_dup_f32(&nn__util__detail__AtanCoefficients[4]);
    v95.n128_u64[0] = vadd_f32(*(float32x2_t *)&v95.n128_i8[8], (float32x2_t)v95.n128_u64[0]).n64_u64[0];
    v92.n128_u64[0] = vpadd_f32((float32x2_t)v95.n128_u64[0], (float32x2_t)v95.n128_u64[0]).n64_u64[0];
    v95.n128_u64[0] = vmul_f32((float32x2_t)v92.n128_u64[0], (float32x2_t)v92.n128_u64[0]).n64_u64[0];
    v92.n128_u64[1] = v92.n128_u64[0];
    v96 = vabsq_f32(v92);
    v95.n128_u64[1] = v95.n128_u64[0];
    _Q8 = vsubq_f32(v69, v95);
    v98 = vrsqrteq_f32(_Q8);
    __asm { VCEQ.F32        Q3, Q8, #0.0 }
    v100 = vmulq_f32(v98, vrsqrtsq_f32(v98, vmulq_f32(v98, _Q8)));
    v101 = vmulq_f32(v100, vrsqrtsq_f32(v100, vmulq_f32(_Q8, v100)));
    *(float32x4_t *)v171.val[2].n64_u64 = vrecpeq_f32(v101);
    *(float32x4_t *)v171.val[2].n64_u64 = vmulq_f32(
                                            *(float32x4_t *)v171.val[2].n64_u64,
                                            vrecpsq_f32(*(float32x4_t *)v171.val[2].n64_u64, v101));
    v102 = vbslq_s64(
             _Q3,
             (int64x2_t)0,
             vmulq_f32(*(float32x4_t *)v171.val[2].n64_u64, vrecpsq_f32(*(float32x4_t *)v171.val[2].n64_u64, v101)));
    v103 = vrecpeq_f32(v102);
    v104 = vmulq_f32(v103, vrecpsq_f32(v103, v102));
    v105 = vdupq_lane_s32((int32x2_t)v41.n128_u64[0], 0);
    v106 = vmulq_f32(v96, vmulq_f32(v104, vrecpsq_f32(v104, v102)));
    v107 = vmulq_f32(v106, v106);
    *(float32x2x2_t *)v171.val[2].n64_u64 = vld1q_dup_f32(&nn__util__detail__AtanCoefficients[6]);
    v69.n128_f32[0] = 1.0;
    v69.n128_f32[1] = 1.0;
    v69.n128_f32[2] = 1.0;
    v69.n128_f32[3] = 1.0;
    v108 = vmulq_f32(
             v106,
             vmlaq_f32(
               v69,
               v107,
               vmlaq_f32(
                 v90,
                 v107,
                 vmlaq_f32(
                   *(float32x4_t *)v171.val[2].n64_u64,
                   v107,
                   vmlaq_f32(
                     v105,
                     v107,
                     vmlaq_f32(v169, v107, vmlaq_f32(v89, v107, vmlaq_f32(v167, v107, vmlaq_f32(v88, v166, v107)))))))));
    *(_QWORD *)&v153 = v92.n128_u64[0];
    *((_QWORD *)&v153 + 1) = v92.n128_u64[0];
    v109 = vrecpeq_f32(v96);
    v110 = vmulq_f32(v109, vrecpsq_f32(v109, v96));
    v111 = vmulq_f32(v102, vmulq_f32(v110, vrecpsq_f32(v110, v96)));
    v112 = vmulq_f32(v111, v111);
    *(float32x4_t *)v171.val[2].n64_u64 = vmlaq_f32(
                                            *(float32x4_t *)v171.val[2].n64_u64,
                                            v112,
                                            vmlaq_f32(
                                              v105,
                                              v112,
                                              vmlaq_f32(
                                                v169,
                                                v112,
                                                vmlaq_f32(v89, v112, vmlaq_f32(v167, v112, vmlaq_f32(v88, v112, v166))))));
    v105.n128_f32[0] = 1.0;
    v105.n128_f32[1] = 1.0;
    v105.n128_f32[2] = 1.0;
    v105.n128_f32[3] = 1.0;
    v113 = vmlaq_f32(v90, v112, *(float32x4_t *)v171.val[2].n64_u64);
    *(int64x2_t *)v171.val[2].n64_u64 = vorrq_s64(vcgtq_f32((float32x4_t)0, v92), vcgeq_f32(v92, (float32x4_t)0));
    v114 = vmulq_f32(v111, vmlaq_f32(v105, v112, v113));
    v115 = v157;
    v107.n128_u64[0] = 0x3F3504F33F3504F3LL;
    v107.n128_u64[1] = 0x3F3504F33F3504F3LL;
    *(int64x2_t *)v171.val[0].n64_u64 = vbslq_s64(
                                          vcgtq_f32(v96, v107),
                                          vbslq_s64(*(int64x2_t *)v171.val[2].n64_u64, v114, vsubq_f32(v157, v114)),
                                          vbslq_s64(
                                            *(int64x2_t *)v171.val[2].n64_u64,
                                            vsubq_f32(v158, v108),
                                            vaddq_f32(v158, v108)));
    v169.n128_u64[0] = 0xBF000000BF000000LL;
    v169.n128_u64[1] = 0xBF000000BF000000LL;
    v171.val[2].n64_u64[0] = 0x3F0000003F000000LL;
    v171.val[3].n64_u64[0] = 0x3F0000003F000000LL;
    _Q8 = vmulq_f32(v164, *(float32x4_t *)v171.val[0].n64_u64);
    __asm { VCGE.F32        Q9, Q8, #0.0 }
    v118 = vaddq_f32(vbslq_s64(_Q9, *(int64x2_t *)v171.val[2].n64_u64, v169), _Q8);
    _Q8.n128_u32[0] = (int)v118.n128_f32[2];
    _Q9.n128_u32[0] = (int)v118.n128_f32[0];
    _Q8.n128_u32[1] = (int)v118.n128_f32[3];
    v166.n128_u64[0] = 0xBF000000BF000000LL;
    v166.n128_u64[1] = 0xBF000000BF000000LL;
    _Q9.n128_u32[1] = (int)v118.n128_f32[1];
    *(float32x2_t *)&_Q8.n128_i8[8] = vcvt_f32_s32((int32x2_t)_Q8.n128_u64[0]);
    _Q8.n128_u64[0] = vcvt_f32_s32((int32x2_t)_Q9.n128_u64[0]).n64_u64[0];
    v119 = vmlsq_f32(*(float32x4_t *)v171.val[0].n64_u64, v165, _Q8);
    v148 = a3 / (float)(v151 + a3);
    v120 = vbslq_s64(vcgtq_f32(v119, v158), vsubq_f32(v157, v119), v119);
    v121 = vbslq_s64(vcgtq_f32(v156, v120), vsubq_f32(v155, v120), v120);
    v122 = vmulq_f32(v121, v121);
    v120.n128_f32[0] = 1.0;
    v120.n128_f32[1] = 1.0;
    v120.n128_f32[2] = 1.0;
    v120.n128_f32[3] = 1.0;
    v171.val[2].n64_u64[0] = 0x3F0000003F000000LL;
    v171.val[3].n64_u64[0] = 0x3F0000003F000000LL;
    v123 = vmulq_f32(
             v121,
             vmlaq_f32(
               v120,
               v122,
               vmlaq_f32(v159, v122, vmlaq_f32(v162, v122, vmlaq_f32(v161, v122, vmlaq_f32(v163, v160, v122))))));
    v124 = vrecpeq_f32(v123);
    v149 = vmulq_f32(v124, vrecpsq_f32(v124, v123));
    v150 = vrecpsq_f32(v149, v123);
    v125 = vmulq_n_f32(*(float32x4_t *)v171.val[0].n64_u64, v148);
    _Q9 = vmulq_f32(v164, v125);
    __asm { VCGE.F32        Q10, Q9, #0.0 }
    v128 = vaddq_f32(_Q9, vbslq_s64(_Q10, *(int64x2_t *)v171.val[2].n64_u64, v166));
    _Q9.n128_u32[0] = (int)v128.n128_f32[2];
    _Q9.n128_u32[1] = (int)v128.n128_f32[3];
    *(float32x2_t *)&_Q9.n128_i8[8] = vcvt_f32_s32((int32x2_t)_Q9.n128_u64[0]);
    _Q9.n128_u64[0] = vcvt_f32_s32((int32x2_t)__PAIR64__((int)v128.n128_f32[1], (int)v128.n128_f32[0])).n64_u64[0];
    v129 = vmlsq_f32(v125, v165, _Q9);
    v130 = vbslq_s64(vcgtq_f32(v129, v158), vsubq_f32(v157, v129), v129);
    v128.n128_f32[2] = 1.0 - v148;
    v131 = vbslq_s64(vcgtq_f32(v156, v130), vsubq_f32(v155, v130), v130);
    v132 = vmulq_f32(v131, v131);
    v130.n128_f32[0] = 1.0;
    v130.n128_f32[1] = 1.0;
    v130.n128_f32[2] = 1.0;
    v130.n128_f32[3] = 1.0;
    v171.val[2].n64_u64[0] = 0x3F0000003F000000LL;
    v171.val[3].n64_u64[0] = 0x3F0000003F000000LL;
    v152 = vmulq_f32(
             v131,
             vmlaq_f32(
               v130,
               v132,
               vmlaq_f32(v159, v132, vmlaq_f32(v162, v132, vmlaq_f32(v161, v132, vmlaq_f32(v163, v160, v132))))));
    v133 = vmulq_n_f32(*(float32x4_t *)v171.val[0].n64_u64, 1.0 - v148);
    v171.val[0].n64_u64[0] = 0xBF000000BF000000LL;
    v171.val[1].n64_u64[0] = 0xBF000000BF000000LL;
    _Q9 = vmulq_f32(v164, v133);
    __asm { VCGE.F32        Q10, Q9, #0.0 }
    v136 = vbslq_s64(_Q10, *(int64x2_t *)v171.val[2].n64_u64, *(int64x2_t *)v171.val[0].n64_u64);
    v171.val[0].n64_f32[0] = 1.0;
    v171.val[0].n64_f32[1] = 1.0;
    v171.val[1].n64_f32[0] = 1.0;
    v171.val[1].n64_f32[1] = 1.0;
    v137 = vaddq_f32(_Q9, v136);
    _Q9.n128_u32[0] = (int)v137.n128_f32[2];
    _Q9.n128_u32[1] = (int)v137.n128_f32[3];
    *(float32x2_t *)&_Q9.n128_i8[8] = vcvt_f32_s32((int32x2_t)_Q9.n128_u64[0]);
    v136.n128_u32[0] = (int)v137.n128_f32[0];
    v136.n128_u32[1] = (int)v137.n128_f32[1];
    _Q9.n128_u64[0] = vcvt_f32_s32((int32x2_t)v136.n128_u64[0]).n64_u64[0];
    v138 = vmlsq_f32(v133, v165, _Q9);
    v115.n128_f32[0] = 1.0 - nn__util__detail__FloatQuaternionEpsilon;
    v139 = vbslq_s64(vcgtq_f32(v138, v158), vsubq_f32(v157, v138), v138);
    v140 = vbslq_s64(vcgtq_f32(v156, v139), vsubq_f32(v155, v139), v139);
    v141 = vmulq_f32(v140, v140);
    *(float32x4_t *)v171.val[0].n64_u64 = vmlaq_f32(
                                            *(float32x4_t *)v171.val[0].n64_u64,
                                            v141,
                                            vmlaq_f32(
                                              v159,
                                              v141,
                                              vmlaq_f32(v162, v141, vmlaq_f32(v161, v141, vmlaq_f32(v163, v160, v141)))));
    _Q8 = v153;
    v171.val[2].n64_u64[0] = 0xBF800000BF800000LL;
    v171.val[3].n64_u64[0] = 0xBF800000BF800000LL;
    __asm { VCLT.F32        Q8, Q8, #0.0 }
    v144 = vmulq_f32(v149, v150);
    v92.n128_u64[0] = 0x3F8000003F800000LL;
    v92.n128_u64[1] = 0x3F8000003F800000LL;
    v145 = vbslq_s64(_Q8, *(int64x2_t *)v171.val[2].n64_u64, v92);
    v146 = vmulq_f32(v144, vmulq_f32(v140, *(float32x4_t *)v171.val[0].n64_u64));
    *(float32x4_t *)v171.val[0].n64_u64 = vcgtq_f32(v96, vdupq_lane_s32((int32x2_t)v115.n128_u64[0], 0));
    *result = vmlaq_f32(
                vmulq_f32(
                  *result,
                  vbslq_s64(*(int64x2_t *)v171.val[0].n64_u64, vdupq_lane_s32(*(int32x2_t *)&v128.n128_i8[8], 0), v146)),
                v154,
                vbslq_s64(
                  *(int64x2_t *)v171.val[0].n64_u64,
                  vmulq_n_f32(v145, v148),
                  vmulq_f32(v145, vmulq_f32(v144, v152))));
  }
  return result;
}

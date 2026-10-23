/* sub_60896790
 * address: 0x60896790   size: 2116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60896790(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r0
  int v8; // r7
  int v9; // r6
  float32x4_t v10; // q4
  float32x4_t v11; // q12
  float32x4_t v12; // q9
  float32x4_t v13; // q0
  float32x4_t v14; // q11
  float32x4_t v15; // q2
  float32x4_t v16; // q4
  int v18; // r7
  float32x4_t v19; // q4
  float32x4_t v20; // q5
  float v21; // s8
  float32x4_t v22; // q8
  float v23; // s6
  float v24; // s10
  float32x4_t v25; // q11
  float v26; // s4
  float v27; // s12
  float v28; // s14
  float v29; // s21
  float v30; // s0
  float32x4_t v31; // q0
  float32x4_t v32; // q1
  float32x4_t v33; // q15
  float32x4_t v34; // q14
  float32x4_t v35; // q11
  float32x4_t v36; // q3
  float32x4_t v37; // q2
  float *v38; // r5
  float32x4_t v40; // q4
  float32x4_t v41; // q15
  float32x4_t v42; // q11
  float32x4_t v43; // q1
  float32x4_t v44; // q0
  float32x4_t v45; // q3
  float32x4_t v46; // q6
  float32x4_t v47; // q7
  float32x4_t v48; // q14
  float32x4_t v49; // q13
  float32x4_t v54; // q5
  float32x4_t v55; // q11
  float32x4_t v56; // q15
  float32x4_t v57; // q1
  float32x4_t v58; // q11
  int v59; // r6
  float v60; // s16
  int v61; // r10
  float v62; // s18
  float v63; // s20
  int v64; // r0
  int v65; // lr
  int v66; // r2
  int v67; // r3
  int v68; // r6
  int v69; // r2
  int v70; // r3
  int v71; // r6
  int v72; // r2
  int v73; // r3
  int v74; // r6
  int v75; // r12
  int v76; // r0
  unsigned __int32 v77; // r4
  unsigned __int32 v78; // r7
  unsigned __int64 v79; // kr40_8
  unsigned __int64 v80; // r4
  unsigned __int64 v81; // r6
  unsigned __int32 v82; // r3
  unsigned __int64 v83; // r4
  unsigned __int64 v84; // r6
  int v85; // r3
  __int64 v86; // r6
  unsigned __int64 v87; // r6
  __int64 v88; // kr50_8
  unsigned __int32 v89; // r3
  unsigned __int64 v90; // r4
  unsigned __int64 v91; // r6
  int v92; // r1
  int v93; // r6
  float32x4_t v94; // [sp+20h] [bp-1E8h]
  float32x4_t v95; // [sp+30h] [bp-1D8h]
  float *v96; // [sp+58h] [bp-1B0h]
  int v97; // [sp+5Ch] [bp-1ACh]
  int v98; // [sp+60h] [bp-1A8h]
  float32x4_t v99; // [sp+60h] [bp-1A8h]
  int v100; // [sp+60h] [bp-1A8h]
  float32x4_t v101; // [sp+70h] [bp-198h]
  int v102; // [sp+84h] [bp-184h]
  float32x2_t v104; // [sp+A0h] [bp-168h] BYREF
  float32x2_t v105; // [sp+A8h] [bp-160h]
  float32x2_t v106; // [sp+B0h] [bp-158h]
  float32x2_t v107; // [sp+B8h] [bp-150h]
  float32x2_t v108; // [sp+C0h] [bp-148h]
  float32x2_t v109; // [sp+C8h] [bp-140h]
  float32x2_t v110; // [sp+D0h] [bp-138h]
  float32x2_t v111; // [sp+D8h] [bp-130h]
  int v112; // [sp+F8h] [bp-110h]
  int v113; // [sp+FCh] [bp-10Ch]
  int v114; // [sp+100h] [bp-108h]
  int v115; // [sp+104h] [bp-104h]
  int32x4_t v116; // [sp+108h] [bp-100h]
  int32x4_t v117; // [sp+118h] [bp-F0h]
  int32x4_t v118; // [sp+128h] [bp-E0h]
  int32x4_t v119; // [sp+138h] [bp-D0h]
  _BYTE v120[32]; // [sp+148h] [bp-C0h]
  int64x2_t v121; // [sp+168h] [bp-A0h]
  int32x4_t v122; // [sp+178h] [bp-90h]
  float v123; // [sp+188h] [bp-80h]
  int v124; // [sp+18Ch] [bp-7Ch]
  int v125; // [sp+190h] [bp-78h]
  int v126; // [sp+194h] [bp-74h]
  int v127; // [sp+198h] [bp-70h]
  int v128; // [sp+19Ch] [bp-6Ch]
  int v129; // [sp+1A0h] [bp-68h]
  int v130; // [sp+1A4h] [bp-64h]
  int32x4_t v131; // 0:^10.16
  float32x4_t v132; // 0:q1.16
  float32x4_t v133; // 0:q3.16
  float32x4_t v134; // 0:q6.16
  float32x4_t v135; // 0:q7.16
  int32x4x2_t v136; // 0:kr00_32.32
  int32x4x2_t v137; // 0:kr20_32.32
  int32x4x2_t v138; // 0:q2.16,16:q10.16
  int32x4x2_t v139; // 0:q12.16,16:q9.16

  if ( a3 == 3 || (v7 = FIELD_U32(a2, 348), (v8 = *(_DWORD *)(v7 + 4 * a3 + 584)) == 0) )
  {
    nullsub_95();
    return 0;
  }
  else
  {
    v9 = FIELD_U32(v7, 580);
    sub_60835BF8(a1, FIELD_U32(v8, 4), 63);
    v112 = FIELD_U32(v9, 48);
    v113 = FIELD_U32(v9, 52);
    v114 = FIELD_U32(v9, 56);
    v115 = 0;
    v123 = (float)FIELD_S32(v9, 44);
    v124 = FIELD_U32(v9, 28);
    v125 = 0;
    v126 = 0;
    v127 = FIELD_U32(v9, 16);
    v128 = FIELD_U32(v9, 20);
    v129 = FIELD_U32(v9, 24);
    v130 = 0;
    v116.n128_u64[0] = 1065353216;
    v116.n128_u64[1] = 0;
    v117.n128_u64[0] = 0x3F80000000000000LL;
    v117.n128_u64[1] = 0;
    v118.n128_u64[0] = 0;
    v118.n128_u64[1] = 1065353216;
    v119.n128_u64[0] = 0;
    v119.n128_u64[1] = 0x3F80000000000000LL;
    v102 = a1;
    if ( FIELD_F32(v9, 60) == 0.0 )
    {
      v10.n128_u64[1] = FIELD_U32(v9, 72);
      ((void (__fastcall *)(float32x2_t *))loc_60885860)(&v104);
      v11.n128_u64[0] = 0;
      v11.n128_u64[1] = 1065353216;
      v12.n128_u64[0] = 0;
      v12.n128_u64[1] = 0x3F80000000000000LL;
      v132 = *(float32x4_t *)(a2 + 560);
      v133 = *(float32x4_t *)(a2 + 544);
      v134 = *(float32x4_t *)(a2 + 576);
      v135 = *(float32x4_t *)(a2 + 592);
      v132.n128_u32[3] = v10.n128_u32[3];
      v133.n128_u32[3] = v10.n128_u32[3];
      v134.n128_u32[3] = v10.n128_u32[3];
      v135.n128_u32[3] = 1.0;
      v13 = vaddq_f32(
              vmlaq_lane_f32(
                vmlaq_lane_f32(
                  vmlaq_lane_f32(
                    vmulq_n_f32((float32x4_t)0x3F800000uLL, v108.n64_f32[0]),
                    (float32x4_t)0x3F80000000000000uLL,
                    v108,
                    1),
                  v11,
                  v109,
                  0),
                v12,
                v109,
                1),
              (float32x4_t)0);
      v14 = vaddq_f32(
              vmlaq_lane_f32(
                vmlaq_lane_f32(
                  vmlaq_lane_f32(
                    vmulq_n_f32((float32x4_t)0x3F800000uLL, v106.n64_f32[0]),
                    (float32x4_t)0x3F80000000000000uLL,
                    v106,
                    1),
                  v11,
                  v107,
                  0),
                v12,
                v107,
                1),
              (float32x4_t)0);
      v10.n128_u64[0] = FIELD_U64(v9, 32);
      v10.n128_u32[2] = FIELD_U32(v9, 40);
      v15 = vaddq_f32(
              vmlaq_lane_f32(
                vmlaq_lane_f32(
                  vmlaq_lane_f32(
                    vmulq_n_f32((float32x4_t)0x3F800000uLL, v110.n64_f32[0]),
                    (float32x4_t)0x3F80000000000000uLL,
                    v110,
                    1),
                  v11,
                  v111,
                  0),
                v12,
                v111,
                1),
              v10);
      v16 = vaddq_f32(
              vmlaq_lane_f32(
                vmlaq_lane_f32(
                  vmlaq_lane_f32(
                    vmulq_n_f32((float32x4_t)0x3F800000uLL, v104.n64_f32[0]),
                    (float32x4_t)0x3F80000000000000uLL,
                    v104,
                    1),
                  v11,
                  v105,
                  0),
                v12,
                v105,
                1),
              (float32x4_t)0);
      v116 = vmlaq_lane_f32(
               vmlaq_lane_f32(
                 vmlaq_lane_f32(vmulq_n_f32(v133, COERCE_FLOAT(v16.n128_u32[0])), v132, (float32x2_t)v16.n128_u64[0], 1),
                 v134,
                 *(float32x2_t *)&v16.n128_i8[8],
                 0),
               v135,
               *(float32x2_t *)&v16.n128_i8[8],
               1);
      v117 = vmlaq_lane_f32(
               vmlaq_lane_f32(
                 vmlaq_lane_f32(vmulq_n_f32(v133, COERCE_FLOAT(v14.n128_u32[0])), v132, (float32x2_t)v14.n128_u64[0], 1),
                 v134,
                 *(float32x2_t *)&v14.n128_i8[8],
                 0),
               v135,
               *(float32x2_t *)&v14.n128_i8[8],
               1);
      v118 = vmlaq_lane_f32(
               vmlaq_lane_f32(
                 vmlaq_lane_f32(vmulq_n_f32(v133, v13.n128_f32[0]), v132, (float32x2_t)v13.n128_u64[0], 1),
                 v134,
                 *(float32x2_t *)&v13.n128_i8[8],
                 0),
               v135,
               *(float32x2_t *)&v13.n128_i8[8],
               1);
      v119 = vmlaq_lane_f32(
               vmlaq_lane_f32(
                 vmlaq_lane_f32(vmulq_n_f32(v133, v15.n128_f32[0]), v132, (float32x2_t)v15.n128_u64[0], 1),
                 v134,
                 *(float32x2_t *)&v15.n128_i8[8],
                 0),
               v135,
               *(float32x2_t *)&v15.n128_i8[8],
               1);
    }
    else
    {
      v98 = v8;
      v18 = FIELD_U32(a5, 4);
      v19.n128_u64[0] = FIELD_U64(v18, 272);
      v19.n128_u32[2] = FIELD_U32(v18, 280);
      v20.n128_u64[1] = FIELD_U32(v9, 72);
      ((void (__fastcall *)(float32x2_t *))loc_60885860)(&v104);
      v21 = FIELD_F32(v9, 36);
      v22.n128_u64[0] = 0;
      v22.n128_u64[1] = 1065353216;
      v23 = FIELD_F32(v9, 32);
      v24 = FIELD_F32(v9, 40);
      v25.n128_u64[0] = 0;
      v25.n128_u64[1] = 0x3F80000000000000LL;
      v26 = FIELD_F32(v18, 196);
      v27 = FIELD_F32(v18, 200);
      v28 = FIELD_F32(v18, 192);
      v29 = (float)(v21 * FIELD_F32(v18, 212)) + (float)(v23 * FIELD_F32(v18, 208));
      v20.n128_f32[2] = (float)((float)(v21 * FIELD_F32(v18, 228)) + (float)(v23 * FIELD_F32(v18, 224)))
                      + (float)(v24 * FIELD_F32(v18, 232));
      v30 = FIELD_F32(v18, 216);
      v8 = v98;
      v20.n128_f32[1] = v29 + (float)(v24 * v30);
      v31 = vaddq_f32(
              vmlaq_lane_f32(
                vmlaq_lane_f32(
                  vmlaq_lane_f32(
                    vmulq_n_f32((float32x4_t)0x3F800000uLL, v108.n64_f32[0]),
                    (float32x4_t)0x3F80000000000000uLL,
                    v108,
                    1),
                  v22,
                  v109,
                  0),
                v25,
                v109,
                1),
              (float32x4_t)0);
      v20.n128_f32[0] = (float)((float)(v21 * v26) + (float)(v23 * v28)) + (float)(v24 * v27);
      v19.n128_u32[3] = v20.n128_u32[3];
      v32 = vaddq_f32(
              vmlaq_lane_f32(
                vmlaq_lane_f32(
                  vmlaq_lane_f32(
                    vmulq_n_f32((float32x4_t)0x3F800000uLL, v110.n64_f32[0]),
                    (float32x4_t)0x3F80000000000000uLL,
                    v110,
                    1),
                  v22,
                  v111,
                  0),
                v25,
                v111,
                1),
              v20);
      v33 = vmlaq_lane_f32(
              vmlaq_lane_f32(
                vmlaq_lane_f32(
                  vmulq_n_f32((float32x4_t)0x3F800000uLL, v104.n64_f32[0]),
                  (float32x4_t)0x3F80000000000000uLL,
                  v104,
                  1),
                v22,
                v105,
                0),
              v25,
              v105,
              1);
      v34 = vmlaq_lane_f32(
              vmlaq_lane_f32(
                vmlaq_lane_f32(
                  vmulq_n_f32((float32x4_t)0x3F800000uLL, v106.n64_f32[0]),
                  (float32x4_t)0x3F80000000000000uLL,
                  v106,
                  1),
                v22,
                v107,
                0),
              v25,
              v107,
              1);
      v35 = vaddq_f32(v19, v25);
      v36 = vaddq_f32(v33, (float32x4_t)0);
      v37 = vaddq_f32(v34, (float32x4_t)0);
      v116 = vmlaq_lane_f32(
               vmlaq_lane_f32(
                 vmlaq_lane_f32(
                   vmulq_n_f32((float32x4_t)0x3F800000uLL, v36.n128_f32[0]),
                   (float32x4_t)0x3F80000000000000uLL,
                   (float32x2_t)v36.n128_u64[0],
                   1),
                 v22,
                 *(float32x2_t *)&v36.n128_i8[8],
                 0),
               v35,
               *(float32x2_t *)&v36.n128_i8[8],
               1);
      v117 = vmlaq_lane_f32(
               vmlaq_lane_f32(
                 vmlaq_lane_f32(
                   vmulq_n_f32((float32x4_t)0x3F800000uLL, v37.n128_f32[0]),
                   (float32x4_t)0x3F80000000000000uLL,
                   (float32x2_t)v37.n128_u64[0],
                   1),
                 v22,
                 *(float32x2_t *)&v37.n128_i8[8],
                 0),
               v35,
               *(float32x2_t *)&v37.n128_i8[8],
               1);
      v118 = vmlaq_lane_f32(
               vmlaq_lane_f32(
                 vmlaq_lane_f32(
                   vmulq_n_f32((float32x4_t)0x3F800000uLL, v31.n128_f32[0]),
                   (float32x4_t)0x3F80000000000000uLL,
                   (float32x2_t)v31.n128_u64[0],
                   1),
                 v22,
                 *(float32x2_t *)&v31.n128_i8[8],
                 0),
               v35,
               *(float32x2_t *)&v31.n128_i8[8],
               1);
      v119 = vmlaq_lane_f32(
               vmlaq_lane_f32(
                 vmlaq_lane_f32(
                   vmulq_n_f32((float32x4_t)0x3F800000uLL, v32.n128_f32[0]),
                   (float32x4_t)0x3F80000000000000uLL,
                   (float32x2_t)v32.n128_u64[0],
                   1),
                 v22,
                 *(float32x2_t *)&v32.n128_i8[8],
                 0),
               v35,
               *(float32x2_t *)&v32.n128_i8[8],
               1);
    }
    v38 = (float *)v9;
    v138 = vzipq_s32(v117, v119);
    v139 = vzipq_s32(v116, v118);
    v136 = vzipq_s32(v139.val[1], v138.val[1]);
    *(int8x8_t *)&_Q8.n128_i8[8] = vtbl2_s8((int8x8x2_t)v136.val[1], (int8x8_t)0xB0A09080F0E0D0CLL);
    _Q8.n128_u64[0] = vtbl2_s8((int8x8x2_t)v136.val[1], (int8x8_t)0xF0E0D0C0F0E0D0CLL).n64_u64[0];
    v40 = _Q8;
    v94 = _Q8;
    *(int8x8_t *)&_Q8.n128_i8[8] = vtbl2_s8((int8x8x2_t)v136.val[0], (int8x8_t)0x302010003020100LL);
    _Q8.n128_u64[0] = vtbl2_s8((int8x8x2_t)v136.val[0], (int8x8_t)0x302010007060504LL).n64_u64[0];
    *(int8x8_t *)&v41.n128_i8[8] = vtbl2_s8((int8x8x2_t)v136.val[1], (int8x8_t)0x302010003020100LL);
    v42 = _Q8;
    v41.n128_u64[0] = vtbl2_s8((int8x8x2_t)v136.val[1], (int8x8_t)0x302010007060504LL).n64_u64[0];
    *(int8x8_t *)&_Q8.n128_i8[8] = vtbl2_s8((int8x8x2_t)v136.val[0], (int8x8_t)0xB0A09080F0E0D0CLL);
    _Q8.n128_u64[0] = vtbl2_s8((int8x8x2_t)v136.val[0], (int8x8_t)0xF0E0D0C0F0E0D0CLL).n64_u64[0];
    v101 = _Q8;
    v99 = v42;
    v95 = vmlsq_f32(vmulq_f32(v42, v40), _Q8, v41);
    *(int8x8_t *)&v43.n128_i8[8] = vtbl2_s8((int8x8x2_t)v136.val[1], (int8x8_t)0x706050407060504LL);
    v43.n128_u64[0] = vtbl2_s8((int8x8x2_t)v136.val[1], (int8x8_t)0xB0A09080B0A0908LL).n64_u64[0];
    *(int8x8_t *)&v44.n128_i8[8] = vtbl2_s8((int8x8x2_t)v136.val[0], (int8x8_t)0x706050407060504LL);
    v44.n128_u64[0] = vtbl2_s8((int8x8x2_t)v136.val[0], (int8x8_t)0xB0A09080B0A0908LL).n64_u64[0];
    v137 = vzipq_s32(v139.val[0], v138.val[0]);
    v45 = vmlsq_f32(vmulq_f32(v44, v40), _Q8, v43);
    *(int8x8_t *)&v46.n128_i8[8] = vtbl2_s8((int8x8x2_t)v137.val[1], (int8x8_t)0x706050407060504LL);
    v46.n128_u64[0] = vtbl2_s8((int8x8x2_t)v137.val[1], (int8x8_t)0xB0A09080B0A0908LL).n64_u64[0];
    *(int8x8_t *)&v47.n128_i8[8] = vtbl2_s8((int8x8x2_t)v137.val[1], (int8x8_t)0x302010003020100LL);
    v47.n128_u64[0] = vtbl2_s8((int8x8x2_t)v137.val[1], (int8x8_t)0x302010007060504LL).n64_u64[0];
    v48 = vmlsq_f32(vmulq_f32(v42, v43), v44, v41);
    *(int8x8_t *)&v42.n128_i8[8] = vtbl2_s8((int8x8x2_t)v137.val[1], (int8x8_t)0xB0A09080F0E0D0CLL);
    v42.n128_u64[0] = vtbl2_s8((int8x8x2_t)v137.val[1], (int8x8_t)0xF0E0D0C0F0E0D0CLL).n64_u64[0];
    _Q8.n128_u64[0] = 0xBF8000003F800000LL;
    _Q8.n128_u64[1] = 0xBF8000003F800000LL;
    v138.val[0] = vmulq_f32(vmlaq_f32(vmlsq_f32(vmulq_f32(v47, v45), v46, v95), v42, v48), _Q8);
    v139.val[1] = vmulq_f32(v137.val[0], v138.val[0]);
    v139.val[1].n128_u64[0] = vadd_f32(*(float32x2_t *)&v139.val[1].n128_i8[8], (float32x2_t)v139.val[1].n128_u64[0]).n64_u64[0];
    _Q8.n128_u64[0] = vpadd_f32((float32x2_t)v139.val[1].n128_u64[0], (float32x2_t)v139.val[1].n128_u64[0]).n64_u64[0];
    _Q8.n128_u64[1] = _Q8.n128_u64[0];
    v139.val[1] = vrecpeq_f32(_Q8);
    v139.val[1] = vmulq_f32(v139.val[1], vrecpsq_f32(v139.val[1], _Q8));
    v49 = vmulq_f32(v139.val[1], vrecpsq_f32(v139.val[1], _Q8));
    v139.val[1] = vmulq_f32(v49, v138.val[0]);
    __asm { VCEQ.F32        Q2, Q8, #0.0 }
    v131 = v139.val[1];
    *(int8x8_t *)&v139.val[1].n128_i8[8] = vtbl2_s8((int8x8x2_t)v137.val[0], (int8x8_t)0xB0A09080F0E0D0CLL);
    v139.val[1].n128_u64[0] = vtbl2_s8((int8x8x2_t)v137.val[0], (int8x8_t)0xF0E0D0C0F0E0D0CLL).n64_u64[0];
    *(int8x8_t *)&v54.n128_i8[8] = vtbl2_s8((int8x8x2_t)v137.val[0], (int8x8_t)0x302010003020100LL);
    v54.n128_u64[0] = vtbl2_s8((int8x8x2_t)v137.val[0], (int8x8_t)0x302010007060504LL).n64_u64[0];
    *(int8x8_t *)&_Q8.n128_i8[8] = vtbl2_s8((int8x8x2_t)v137.val[0], (int8x8_t)0x706050407060504LL);
    _Q8.n128_u64[0] = vtbl2_s8((int8x8x2_t)v137.val[0], (int8x8_t)0xB0A09080B0A0908LL).n64_u64[0];
    v138.val[1] = vmlsq_f32(vmulq_f32(v54, v42), v139.val[1], v47);
    v55 = vmlsq_f32(vmulq_f32(_Q8, v42), v139.val[1], v46);
    v139.val[0] = vmulq_f32(v55, v41);
    v56 = vmlsq_f32(vmulq_f32(v54, v46), _Q8, v47);
    v139.val[0] = vmlaq_f32(vmlsq_f32(v139.val[0], v138.val[1], v43), v56, v94);
    v57 = vmlsq_f32(vmulq_f32(v54, v45), _Q8, v95);
    _Q8.n128_u64[0] = 0x3F800000BF800000LL;
    _Q8.n128_u64[1] = 0x3F800000BF800000LL;
    v58 = vmlaq_f32(vmlsq_f32(vmulq_f32(v99, v55), v138.val[1], v44), v56, v101);
    v56.n128_u64[0] = 0xBF8000003F800000LL;
    v56.n128_u64[1] = 0xBF8000003F800000LL;
    *(int64x2_t *)v120 = vbslq_s64(v138.val[0], (int64x2_t)0, v131);
    *(int64x2_t *)&v120[16] = vbslq_s64(
                                v138.val[0],
                                (int64x2_t)0,
                                vmulq_f32(v49, vmulq_f32(vmlaq_f32(v57, v139.val[1], v48), _Q8)));
    v121 = vbslq_s64(v138.val[0], (int64x2_t)0, vmulq_f32(vmulq_f32(v139.val[0], v56), v49));
    v122 = vbslq_s64(v138.val[0], (int64x2_t)0, vmulq_f32(vmulq_f32(v58, _Q8), v49));
    v44.n128_u32[0] = FIELD_U32(v9, 12);
    v59 = a5;
    v100 = (int)(float)(v44.n128_f32[0] + 1.0);
    if ( v100 >= 1 )
    {
      v60 = 0.0;
      v61 = 0;
      v97 = a2;
      v96 = v38;
      v62 = 0.0;
      v63 = 0.0;
      do
      {
        v105.n64_u64[0] = 0;
        v104.n64_u64[0] = 0;
        v64 = sub_60895D14(FIELD_U32(v59, 36), &v104, 192);
        if ( !v64 )
          break;
        *(float *)v64 = v60;
        FIELD_F32(v64, 4) = v62;
        FIELD_F32(v64, 8) = v63;
        v65 = v8;
        FIELD_F32(v64, 12) = v38[15];
        v66 = v113;
        v67 = v114;
        v68 = v115;
        FIELD_U32(v64, 16) = v112;
        FIELD_U32(v64, 20) = v66;
        FIELD_U32(v64, 24) = v67;
        FIELD_U32(v64, 28) = v68;
        v69 = v124;
        v70 = v125;
        v71 = v126;
        FIELD_F32(v64, 160) = v123;
        FIELD_U32(v64, 164) = v69;
        FIELD_U32(v64, 168) = v70;
        FIELD_U32(v64, 172) = v71;
        v72 = v128;
        v73 = v129;
        v74 = v130;
        FIELD_U32(v64, 176) = v127;
        FIELD_U32(v64, 180) = v72;
        FIELD_U32(v64, 184) = v73;
        FIELD_U32(v64, 188) = v74;
        v75 = v64 + 32;
        v76 = v64 + 96;
        v77 = v116.n128_u32[1];
        v79 = v116.n128_u64[1];
        v78 = v117.n128_u32[0];
        *(_DWORD *)v75 = v116.n128_u32[0];
        FIELD_U32(v75, 4) = v77;
        FIELD_U64(v75, 8) = v79;
        FIELD_U32(v75, 16) = v78;
        v75 += 20;
        v80 = v117.n128_u64[1];
        v81 = v118.n128_u64[0];
        *(_DWORD *)v75 = v117.n128_u32[1];
        FIELD_U64(v75, 4) = v80;
        FIELD_U64(v75, 12) = v81;
        v75 += 20;
        v82 = v118.n128_u32[3];
        v83 = v119.n128_u64[0];
        v84 = v119.n128_u64[1];
        *(_DWORD *)v75 = v118.n128_u32[2];
        FIELD_U32(v75, 4) = v82;
        FIELD_U64(v75, 8) = v83;
        FIELD_U64(v75, 16) = v84;
        v85 = *(_DWORD *)&v120[4];
        v86 = *(_QWORD *)&v120[12];
        HIDWORD(v83) = *(_DWORD *)&v120[8];
        *(_DWORD *)v76 = *(_DWORD *)v120;
        FIELD_U32(v76, 4) = v85;
        FIELD_U32(v76, 8) = HIDWORD(v83);
        FIELD_U64(v76, 12) = v86;
        v76 += 20;
        v88 = *(_QWORD *)&v120[24];
        v87 = v121.n128_u64[0];
        *(_DWORD *)v76 = *(_DWORD *)&v120[20];
        FIELD_U64(v76, 4) = v88;
        FIELD_U64(v76, 12) = v87;
        v76 += 20;
        v89 = v121.n128_u32[3];
        v90 = v122.n128_u64[0];
        v91 = v122.n128_u64[1];
        *(_DWORD *)v76 = v121.n128_u32[2];
        FIELD_U32(v76, 4) = v89;
        FIELD_U64(v76, 8) = v90;
        FIELD_U64(v76, 16) = v91;
        v8 = v65;
        v92 = FIELD_U32(v65, 316);
        v93 = FIELD_U32(v65, 320);
        if ( v92 != -1 )
          sub_60836348(v102, v92, 0, &v104, 192);
        if ( v93 != -1 )
          sub_60836348(v102, v93, 4, &v104, 192);
        v59 = a5;
        sub_6089B9C0(FIELD_U32(v97, 132), v102, v97, v8, a4, a5);
        v38 = v96;
        ++v61;
        v63 = v63 + v96[2];
        v62 = v62 + v96[1];
        v60 = v60 + *v96;
      }
      while ( v61 < v100 );
    }
    return 1;
  }
}

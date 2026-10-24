/* sub_60960770
 * address: 0x60960770   size: 1588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

double __fastcall sub_60960770(
        int a1,
        unsigned int a2,
        unsigned int a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        double a12,
        double a13,
        double a14,
        double a15)
{
  int v18; // r11
  int32x2_t v19; // d3
  int32x2_t v20; // d1
  float32x4_t *v21; // r5
  int32x4_t v22; // q12
  int32x4_t v23; // q13
  int8x16_t v24; // q12
  float32x4_t v25; // q14
  float32x4_t v26; // q15
  float32x2_t v27; // d0
  int32x2_t v28; // d1
  int8x16_t v29; // q13
  float32x2_t v30; // d2
  int32x2_t v31; // d3
  int32x4_t v32; // q12
  float32x4_t v33; // q13
  float32x4_t v34; // q9
  float v35; // s0
  int8x16_t v36; // q12
  int32x4_t v37; // q12
  int8x16_t v38; // q8
  float *v39; // r6
  int v40; // r9
  int v41; // r1
  char *v42; // r3
  _DWORD *v43; // r0
  float v44; // s2
  float v45; // s4
  float v46; // s6
  float v47; // s8
  float v48; // s10
  int32x2_t v49; // d5
  int32x2_t v50; // d3
  int32x4_t v51; // q13
  int32x4_t v52; // q14
  int8x16_t v53; // q13
  int32x2_t v54; // d1
  float32x4_t v55; // q12
  int8x16_t v56; // q14
  int32x4_t v57; // q1
  float32x4_t v58; // q13
  float32x4_t v59; // q15
  int32x2_t v60; // d5
  int8x16_t v61; // q1
  int32x4_t v62; // q11
  float32x4_t v63; // q10
  int8x16_t v64; // q8
  unsigned int v65; // r0
  int v66; // r2
  int32x2_t v67; // d5
  int32x2_t v68; // d3
  int32x4_t v69; // q12
  int32x4_t v70; // q14
  int32x2_t v71; // d1
  float32x4_t v72; // q13
  int32x4_t v73; // q2
  int8x16_t v74; // q12
  int8x16_t v75; // q14
  float32x4_t v76; // q15
  float32x4_t v77; // q12
  int8x16_t v78; // q1
  float32x4_t v79; // q13
  float32x4_t v80; // q15
  int32x4_t v82; // q11
  float32x4_t v83; // q10
  int8x16_t v84; // q9
  float32x4_t v85; // q9
  float32x4_t v86; // q10
  float32x4_t v87; // q8
  float32x4_t v88; // q14
  float32x2_t *v89; // [sp+0h] [bp-20h]
  float32x2_t *v90; // [sp+4h] [bp-1Ch]
  float32x2_t *v91; // [sp+8h] [bp-18h]
  float32x2_t *v92; // [sp+Ch] [bp-14h]
  unsigned __int64 v93; // [sp+10h] [bp-10h]
  float32x4_t *v94; // [sp+18h] [bp-8h]
  float32x4_t *v95; // [sp+1Ch] [bp-4h]
  float32x4_t v96; // [sp+20h] [bp+0h] BYREF
  float32x4_t v97; // [sp+30h] [bp+10h]
  float32x4_t v98; // [sp+40h] [bp+20h]
  float32x4_t v99; // [sp+50h] [bp+30h]
  _OWORD v100[5]; // [sp+60h] [bp+40h] BYREF
  float32x4_t v101; // 0:q8.16
  float32x4_t v102; // 0:q9.16
  float32x4_t v103; // 0:q11.16

  v93 = __PAIR64__(a3, a2);
  v18 = 0;
  v90 = (float32x2_t *)(a1 + 292);
  v19.n64_u64[0] = *(unsigned __int64 *)(a1 + 300);
  v91 = (float32x2_t *)(a1 + 308);
  v20.n64_u64[0] = *(unsigned __int64 *)(a1 + 316);
  v102 = *(float32x4_t *)(a1 + 244);
  v21 = (float32x4_t *)(a1 + 244);
  v95 = (float32x4_t *)(a1 + 260);
  v101 = *(float32x4_t *)(a1 + 260);
  v22 = vdupq_lane_s32(v19, 1);
  v23 = vdupq_lane_s32(v20, 1);
  v94 = (float32x4_t *)(a1 + 276);
  v103 = *(float32x4_t *)(a1 + 276);
  v92 = (float32x2_t *)(a1 + 340);
  v24 = vextq_s8((int8x16_t)vzipq_s32(v22, v22).val, (int8x16_t)0, 0xCu);
  v25 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(v102, FIELD_F32(a1, 292)), v101, *(float32x2_t *)(a1 + 292), 1),
          v103,
          v19,
          0);
  v26 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(v102, FIELD_F32(a1, 308)), v101, *(float32x2_t *)(a1 + 308), 1),
          v103,
          v20,
          0);
  v27.n64_u64[0] = *(unsigned __int64 *)(a1 + 340);
  v28.n64_u64[0] = *(unsigned __int64 *)(a1 + 348);
  v89 = (float32x2_t *)(a1 + 324);
  v29 = vextq_s8((int8x16_t)vzipq_s32(v23, v23).val, (int8x16_t)0, 0xCu);
  v30.n64_u64[0] = *(unsigned __int64 *)(a1 + 324);
  v31.n64_u64[0] = *(unsigned __int64 *)(a1 + 332);
  v100[0] = vaddq_f32(vextq_s8(v24, v24, 4u), v25);
  v32 = vdupq_lane_s32(v31, 1);
  v100[1] = vaddq_f32(vextq_s8(v29, v29, 4u), v26);
  v33 = vmlaq_lane_f32(vmulq_n_f32(v102, v30.n64_f32[0]), v101, v30, 1);
  v34 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v102, v27.n64_f32[0]), v101, v27, 1), v103, v28, 0);
  v35 = 3.4028e38;
  v36 = vextq_s8((int8x16_t)vzipq_s32(v32, v32).val, (int8x16_t)0, 0xCu);
  v100[2] = vaddq_f32(vextq_s8(v36, v36, 4u), vmlaq_lane_f32(v33, v103, v31, 0));
  v37 = vdupq_lane_s32(v28, 1);
  v38 = vextq_s8((int8x16_t)vzipq_s32(v37, v37).val, (int8x16_t)0, 0xCu);
  v100[3] = vaddq_f32(vextq_s8(v38, v38, 4u), v34);
  FIELD_U32(a1, 964) = 2139095039;
  v39 = (float *)(a1 + 964);
  FIELD_U32(a1, 968) = 2139095039;
  FIELD_U32(a1, 972) = 2139095039;
  FIELD_U32(a1, 976) = -8388609;
  FIELD_U32(a1, 980) = -8388609;
  FIELD_U32(a1, 984) = -8388609;
  do
  {
    v40 = a1 + v18;
    if ( *(float *)(a1 + v18 + 820) <= *(float *)(a1 + v18 + 832)
      && FIELD_F32(v40, 824) <= FIELD_F32(v40, 836)
      && FIELD_F32(v40, 828) <= FIELD_F32(v40, 840) )
    {
      v96.n128_u64[0] = 0x7F7FFFFF7F7FFFFFLL;
      v96.n128_u64[1] = 0xFF7FFFFF7F7FFFFFLL;
      v97.n128_u64[0] = 0xFF7FFFFFFF7FFFFFLL;
      v41 = FIELD_U32(a1, 44);
      v42 = *(char **)(a1 + 40);
      v43 = (_DWORD *)(a1 + (v41 >> 1));
      if ( (v41 & 1) != 0 )
        v42 = *(char **)&v42[*v43];
      ((void (__fastcall *)(_DWORD *, float32x4_t *, int, float))v42)(v43, &v96, v40 + 820, v35);
      if ( FIELD_F32(v40, 892) > v96.n128_f32[0] )
        FIELD_U32(v40, 892) = v96.n128_u32[0];
      if ( FIELD_F32(v40, 896) > v96.n128_f32[1] )
        FIELD_U32(v40, 896) = v96.n128_u32[1];
      if ( FIELD_F32(v40, 900) > v96.n128_f32[2] )
        FIELD_U32(v40, 900) = v96.n128_u32[2];
      if ( FIELD_F32(v40, 904) < v96.n128_f32[3] )
        FIELD_U32(v40, 904) = v96.n128_u32[3];
      if ( FIELD_F32(v40, 908) < v97.n128_f32[0] )
        FIELD_U32(v40, 908) = v97.n128_u32[0];
      if ( FIELD_F32(v40, 912) < v97.n128_f32[1] )
        FIELD_U32(v40, 912) = v97.n128_u32[1];
      v35 = *v39;
    }
    v44 = FIELD_F32(v40, 892);
    v18 += 24;
    if ( v35 > v44 )
    {
      *v39 = v44;
      v35 = v44;
    }
    v28.n64_u32[0] = FIELD_U32(a1, 968);
    v45 = FIELD_F32(v40, 896);
    if ( v28.n64_f32[0] > v45 )
    {
      FIELD_F32(a1, 968) = v45;
      v28.n64_f32[0] = v45;
    }
    v30.n64_u32[0] = FIELD_U32(a1, 972);
    v46 = FIELD_F32(v40, 900);
    if ( v30.n64_f32[0] > v46 )
    {
      FIELD_F32(a1, 972) = v46;
      v30.n64_f32[0] = v46;
    }
    v31.n64_u32[0] = FIELD_U32(a1, 976);
    v47 = FIELD_F32(v40, 904);
    if ( v31.n64_f32[0] < v47 )
    {
      FIELD_F32(a1, 976) = v47;
      v31.n64_f32[0] = v47;
    }
    LODWORD(a12) = FIELD_U32(a1, 980);
    v48 = FIELD_F32(v40, 908);
    if ( *(float *)&a12 < v48 )
    {
      FIELD_F32(a1, 980) = v48;
      *(float *)&a12 = v48;
    }
    LODWORD(a13) = FIELD_U32(a1, 984);
    LODWORD(a14) = FIELD_U32(v40, 912);
    if ( *(float *)&a13 < *(float *)&a14 )
    {
      LODWORD(a13) = FIELD_U32(v40, 912);
      FIELD_U32(a1, 984) = LODWORD(a14);
    }
  }
  while ( v18 != 72 );
  if ( v35 <= v31.n64_f32[0] && v28.n64_f32[0] <= *(float *)&a12 )
  {
    if ( FIELD_U8(a1, 1376) )
    {
      sub_601B59CC((float *)&v96, (float *)v21);
      sub_60962CEC(a1 + 68, a1 + 964, &v96, 254);
    }
    else
    {
      v49.n64_u64[0] = FIELD_U64(v90 + (1) * 8, 0x0)[0];
      v50.n64_u64[0] = FIELD_U64(v91 + (1) * 8, 0x0)[0];
      v51 = vdupq_lane_s32(v49, 1);
      v52 = vdupq_lane_s32(v50, 1);
      v53 = vextq_s8((int8x16_t)vzipq_s32(v51, v51).val, (int8x16_t)0, 0xCu);
      v54.n64_u64[0] = FIELD_U64(v89 + (1) * 8, 0x0)[0];
      v55 = vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_n_f32(*v21, FIELD_F32(v91, 0x0)[0]), *v95, (float32x2_t)FIELD_U64(v91, 0x0)[0], 1),
              *v94,
              v50,
              0);
      v56 = vextq_s8((int8x16_t)vzipq_s32(v52, v52).val, (int8x16_t)0, 0xCu);
      v57 = vdupq_lane_s32(v54, 1);
      v58 = vaddq_f32(
              vextq_s8(v53, v53, 4u),
              vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(*v21, FIELD_F32(v90, 0x0)[0]), *v95, (float32x2_t)FIELD_U64(v90, 0x0)[0], 1),
                *v94,
                v49,
                0));
      v59 = vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_n_f32(*v21, FIELD_F32(v89, 0x0)[0]), *v95, (float32x2_t)FIELD_U64(v89, 0x0)[0], 1),
              *v94,
              v54,
              0);
      v60.n64_u64[0] = FIELD_U64(v92 + (1) * 8, 0x0)[0];
      v61 = vextq_s8((int8x16_t)vzipq_s32(v57, v57).val, (int8x16_t)0, 0xCu);
      v62 = vdupq_lane_s32(v60, 1);
      v63 = vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_n_f32(*v21, FIELD_F32(v92, 0x0)[0]), *v95, (float32x2_t)FIELD_U64(v92, 0x0)[0], 1),
              *v94,
              v60,
              0);
      v96 = v58;
      v64 = vextq_s8((int8x16_t)vzipq_s32(v62, v62).val, (int8x16_t)0, 0xCu);
      v97 = vaddq_f32(vextq_s8(v56, v56, 4u), v55);
      v98 = vaddq_f32(vextq_s8(v61, v61, 4u), v59);
      v99 = vaddq_f32(vextq_s8(v64, v64, 4u), v63);
      sub_6042E898((float *)&v96, (float *)&v96);
      sub_60962B84(a1 + 68, a1 + 964, &v96, 255);
    }
  }
  v65 = FIELD_U32(a1, 104);
  if ( v65 >= 2 )
    v65 = 0;
  if ( *(int *)(a1 + 68 + 12 * v65 + 12) <= 0 )
    sub_60963AA8(a1 + 68);
  if ( !FIELD_U8(a1, 1376) )
    sub_60962B14(a1 + 68, v100);
  v66 = FIELD_U32(a1, 60);
  v96.n128_u64[0] = v93;
  sub_6095F6B0(
    a1,
    a1 + 708,
    v66,
    (int *)&v96,
    COERCE_DOUBLE(__PAIR64__(LODWORD(a5), LODWORD(a4))),
    v28.n64_f64[0],
    v30.n64_f64[0],
    v31.n64_f64[0],
    a12,
    a13,
    a14,
    a15);
  v67.n64_u64[0] = *(unsigned __int64 *)(a1 + 588);
  v68.n64_u64[0] = *(unsigned __int64 *)(a1 + 604);
  v69 = vdupq_lane_s32(v67, 1);
  v70 = vdupq_lane_s32(v68, 1);
  v71.n64_u64[0] = *(unsigned __int64 *)(a1 + 620);
  v72 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v21, FIELD_F32(a1, 580)), *v95, *(float32x2_t *)(a1 + 580), 1),
          *v94,
          v67,
          0);
  v73 = vdupq_lane_s32(v71, 1);
  v74 = vextq_s8((int8x16_t)vzipq_s32(v69, v69).val, (int8x16_t)0, 0xCu);
  v75 = vextq_s8((int8x16_t)vzipq_s32(v70, v70).val, (int8x16_t)0, 0xCu);
  v76 = vextq_s8(v74, v74, 4u);
  v77 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v21, FIELD_F32(a1, 596)), *v95, *(float32x2_t *)(a1 + 596), 1),
          *v94,
          v68,
          0);
  v78 = vextq_s8((int8x16_t)vzipq_s32(v73, v73).val, (int8x16_t)0, 0xCu);
  v73.n128_u64[1] = FIELD_U64(a1, 636);
  v79 = vaddq_f32(v76, v72);
  v80 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v21, FIELD_F32(a1, 612)), *v95, *(float32x2_t *)(a1 + 612), 1),
          *v94,
          v71,
          0);
  v82 = vdupq_lane_s32(*(int32x2_t *)&v73.n128_i8[8], 1);
  v83 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v21, FIELD_F32(a1, 628)), *v95, *(float32x2_t *)(a1 + 628), 1),
          *v94,
          *(float32x2_t *)&v73.n128_i8[8],
          0);
  *(float32x4_t *)(a1 + 644) = v79;
  v84 = vextq_s8((int8x16_t)vzipq_s32(v82, v82).val, (int8x16_t)0, 0xCu);
  *(float32x4_t *)(a1 + 660) = vaddq_f32(vextq_s8(v75, v75, 4u), v77);
  *(float32x4_t *)(a1 + 676) = vaddq_f32(vextq_s8(v78, v78, 4u), v80);
  *(float32x4_t *)(a1 + 692) = vaddq_f32(vextq_s8(v84, v84, 4u), v83);
  v85 = *(float32x4_t *)(a1 + 644);
  v86 = *(float32x4_t *)(a1 + 660);
  v87 = *(float32x4_t *)(a1 + 676);
  v88 = *(float32x4_t *)(a1 + 692);
  *(float32x4_t *)(a1 + 644) = vmlaq_lane_f32(
                                 vmlaq_lane_f32(
                                   vmlaq_lane_f32(vmulq_n_f32(v85, 0.5), v86, (float32x2_t)1056964608LL, 1),
                                   v87,
                                   unk_60B4688C,
                                   0),
                                 v88,
                                 unk_60B4688C,
                                 1);
  *(float32x4_t *)(a1 + 660) = vmlaq_lane_f32(
                                 vmlaq_lane_f32(
                                   vmlaq_lane_f32(vmulq_n_f32(v85, 0.0), v86, (float32x2_t)0xBF00000000000000LL, 1),
                                   v87,
                                   unk_60B4689C,
                                   0),
                                 v88,
                                 unk_60B4689C,
                                 1);
  *(float32x4_t *)(a1 + 676) = vmlaq_lane_f32(
                                 vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v85, 0.0), v86, 0, 1), v87, unk_60B468AC, 0),
                                 v88,
                                 unk_60B468AC,
                                 1);
  *(float32x4_t *)(a1 + 692) = vmlaq_lane_f32(
                                 vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v85, 0.0), v86, 0, 1), v87, unk_60B468BC, 0),
                                 v88,
                                 unk_60B468BC,
                                 1);
  return 0.0;
}

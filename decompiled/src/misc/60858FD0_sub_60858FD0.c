/* sub_60858FD0
 * address: 0x60858FD0   size: 1304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x4_t *__fastcall sub_60858FD0(float32x4_t *a1, int a2)
{
  int32x2_t *v3; // r10
  int32x2_t *v4; // r0
  float v5; // r6
  float v6; // r5
  bool v7; // zf
  unsigned int v8; // r1
  float32x4_t v9; // q5
  float32x4_t v10; // q6
  float32x4_t v11; // q4
  int v12; // r2
  float v13; // s0
  float v14; // s2
  float v15; // s0
  float v16; // s2
  float v17; // s0
  float v18; // s30
  unsigned int v19; // r5
  float *v20; // r7
  unsigned int v21; // r6
  float *v22; // r9
  __int64 v23; // r0
  int8x16_t v24; // q12
  unsigned int v25; // s6
  float v26; // s13
  float v27; // s15
  float v28; // s9
  float v29; // s11
  float v30; // s8
  float v31; // s10
  float v32; // s4
  float v33; // s13
  float v34; // s1
  float v35; // s15
  float v36; // s0
  float v37; // s3
  float v38; // s2
  float32x2_t *v39; // r10
  float32x2_t v40; // d4
  int32x2_t v41; // d5
  int32x4_t v42; // q13
  int32x2_t v43; // d3
  int32x4_t v44; // q11
  float32x2_t v45; // d6
  int32x2_t v46; // d7
  float32x4_t *v47; // r0
  int32x4_t v48; // q14
  int32x4_t v49; // q14
  int8x16_t v50; // q13
  int8x16_t v51; // q11
  float32x4_t v52; // q8
  float32x4_t v53; // q9
  float32x4_t v54; // q10
  int8x16_t v55; // q13
  int8x16_t v56; // q11
  float v57; // s0
  __int64 v58; // r0
  unsigned int v59; // s2
  float v60; // s12
  float32x4_t v61; // q0
  float v62; // s8
  float v63; // s10
  float32x2_t *v64; // r10
  float32x2_t v65; // d6
  int32x2_t v66; // d7
  int32x2_t v67; // d3
  int32x4_t v68; // q13
  int32x4_t v69; // q11
  float32x4_t v70; // q7
  float32x2_t v71; // d4
  int32x2_t v72; // d5
  int32x4_t v73; // q14
  int8x16_t v74; // q13
  int8x16_t v75; // q11
  int8x16_t v76; // q12
  float32x4_t v77; // q8
  float32x4_t *result; // r0
  float32x4_t v79; // q9
  int32x2_t *v80; // r0
  int32x2_t *v81; // r10
  float32x2_t v82; // d16
  unsigned __int64 v83; // d17
  float v84; // [sp+0h] [bp-D0h]
  float v85; // [sp+4h] [bp-CCh]
  unsigned __int64 v86; // [sp+8h] [bp-C8h]
  unsigned __int64 v87; // [sp+10h] [bp-C0h]
  unsigned __int64 v88; // [sp+18h] [bp-B8h]
  unsigned __int64 v89; // [sp+20h] [bp-B0h]
  __int64 v90; // [sp+50h] [bp-80h]
  __int64 v91; // [sp+60h] [bp-70h]
  float32x4_t v92; // 0:^28.16

  v3 = *(int32x2_t **)(a2 + 4);
  v4 = (int32x2_t *)FIELD_U32(a1, 0x0)[3];
  v5 = a1[3].n128_f32[0];
  v6 = a1[3].n128_f32[1];
  if ( v4 )
    v3 = v4 + 10;
  v7 = FIELD_U8(a2, 20) == 0;
  if ( FIELD_U8(a2, 20) )
    v7 = (a1[4].n128_u8[0] & 4) == 0;
  if ( !v7 )
  {
    v6 = v6 * FIELD_F32(a2, 12);
    v5 = v5 * FIELD_F32(a2, 8);
  }
  v8 = a1[4].n128_u8[3];
  v9.n128_u32[3] = a1[1].n128_u32[2];
  v10.n128_u32[3] = a1[1].n128_u32[3];
  v11.n128_u32[3] = a1[2].n128_u32[0];
  v12 = (v8 >> 4) & 3;
  if ( v12 == 2 )
  {
    v13 = v4[7].n64_f32[0];
    v14 = 0.5;
  }
  else
  {
    if ( v12 != 1 )
      goto LABEL_12;
    v13 = v4[7].n64_f32[0];
    v14 = -0.5;
  }
  v9.n128_f32[3] = v9.n128_f32[3] + (float)(v13 * v14);
LABEL_12:
  if ( v8 >> 6 == 2 )
  {
    v15 = v4[7].n64_f32[1];
    v16 = -0.5;
  }
  else
  {
    if ( v8 >> 6 != 1 )
      goto LABEL_17;
    v15 = v4[7].n64_f32[1];
    v16 = 0.5;
  }
  v10.n128_f32[3] = v10.n128_f32[3] + (float)(v15 * v16);
LABEL_17:
  v17 = a1[2].n128_f32[1];
  if ( v17 == 0.0 )
  {
    v57 = a1[2].n128_f32[3];
    if ( v57 == 0.0 )
    {
      v80 = v3 + 4;
      v82.n64_u64[0] = FIELD_U64(v3, 0x0)[0];
      v83 = v3[1].n64_u64[0];
      v81 = v3 + 2;
      v90 = v81[1].n64_i64[0];
      v91 = v80[1].n64_i64[0];
      *(float *)&v86 = v5 * v82.n64_f32[0];
      *((float *)&v86 + 1) = v6 * v82.n64_f32[1];
      LODWORD(v87) = v83;
      *((float *)&v87 + 1) = *((float *)&v83 + 1)
                           + (float)((float)((float)(v11.n128_f32[3] * *(float *)&v83)
                                           + (float)(v10.n128_f32[3] * v82.n64_f32[1]))
                                   + (float)(v9.n128_f32[3] * v82.n64_f32[0]));
      *(float *)&v88 = v5 * FIELD_F32(v81, 0x0)[0];
      *((float *)&v88 + 1) = v6 * FIELD_F32(v81, 0x0)[1];
      LODWORD(v89) = v90;
      *((float *)&v89 + 1) = *((float *)&v90 + 1)
                           + (float)((float)((float)(v11.n128_f32[3] * *(float *)&v90)
                                           + (float)(v10.n128_f32[3] * FIELD_F32(v81, 0x0)[1]))
                                   + (float)(v9.n128_f32[3] * FIELD_F32(v81, 0x0)[0]));
      v92.n128_f32[0] = v5 * FIELD_F32(v80, 0x0)[0];
      v92.n128_f32[1] = v6 * FIELD_F32(v80, 0x0)[1];
      v92.n128_u32[2] = v91;
      v92.n128_f32[3] = *((float *)&v91 + 1)
                      + (float)((float)((float)(v11.n128_f32[3] * *(float *)&v91)
                                      + (float)(v10.n128_f32[3] * FIELD_F32(v80, 0x0)[1]))
                              + (float)(v9.n128_f32[3] * FIELD_F32(v80, 0x0)[0]));
      v79 = v92;
      a1[5].n128_u64[0] = v86;
      a1[5].n128_u64[1] = v87;
      a1[6].n128_u64[0] = v88;
      a1[6].n128_u64[1] = v89;
      result = a1 + 7;
      goto LABEL_23;
    }
    v58 = (__int64)(float)(v57 * (float)((float)nn__util__detail__AngleIndexHalfRound / nn__util__detail__FloatDegree180));
    v11.n128_u64[0] = 0;
    v24 = 0u;
    HIDWORD(v58) = ((unsigned int)v58 >> 20) & 0xFF0;
    v59 = v58 & 0xFFFFFF;
    LODWORD(v58) = v3 + 4;
    v11.n128_u32[2] = 1.0;
    HIDWORD(v58) += &nn__util__detail__SinCosSampleTable;
    v60 = (float)v59 * 0.000000059605;
    v61.n128_u32[2] = 0;
    v62 = *(float *)HIDWORD(v58) + (float)(*(float *)(HIDWORD(v58) + 8) * v60);
    v63 = *(float *)(HIDWORD(v58) + 4) + (float)(*(float *)(HIDWORD(v58) + 12) * v60);
    v65.n64_u64[0] = FIELD_U64(v3, 0x0)[0];
    v66.n64_u64[0] = v3[1].n64_u64[0];
    v64 = v3 + 2;
    v67.n64_u64[0] = v64[1].n64_u64[0];
    v68 = vdupq_lane_s32(v66, 1);
    v69 = vdupq_lane_s32(v67, 1);
    v70.n128_f32[1] = v6 * v62;
    v61.n128_f32[1] = -(float)(v6 * v63);
    v70.n128_f32[0] = v5 * v63;
    v61.n128_f32[0] = v5 * v62;
    v71.n64_u64[0] = *(unsigned __int64 *)v58;
    v72.n64_u64[0] = *(unsigned __int64 *)(v58 + 8);
    v47 = a1 + 5;
    v70.n128_u32[2] = 0;
    v61.n128_u32[3] = v9.n128_u32[3];
    v73 = vdupq_lane_s32(v72, 1);
    v74 = vextq_s8((int8x16_t)vzipq_s32(v68, v68).val, (int8x16_t)0, 0xCu);
    v75 = vextq_s8((int8x16_t)vzipq_s32(v69, v69).val, (int8x16_t)0, 0xCu);
    v70.n128_u32[3] = v10.n128_u32[3];
    v55 = vextq_s8(v74, v74, 4u);
    v56 = vextq_s8(v75, v75, 4u);
    v49 = vzipq_s32(v73, v73).val[0];
    v52 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_lane_f32(v70, v65, 1), v61, v65, 0), v11, v66, 0);
    v53 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_lane_f32(v70, (float32x2_t)FIELD_U64(v64, 0x0)[0], 1), v61, (float32x2_t)FIELD_U64(v64, 0x0)[0], 0),
            v11,
            v67,
            0);
    v54 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_lane_f32(v70, v71, 1), v61, v71, 0), v11, v72, 0);
  }
  else
  {
    v18 = (float)nn__util__detail__AngleIndexHalfRound / nn__util__detail__FloatDegree180;
    v85 = v6;
    v19 = (__int64)(float)(v17 * v18);
    v20 = (float *)((char *)&nn__util__detail__SinCosSampleTable + ((v19 >> 20) & 0xFF0));
    v84 = v5;
    v21 = (__int64)(float)(a1[2].n128_f32[2] * v18);
    v22 = (float *)((char *)&nn__util__detail__SinCosSampleTable + ((v21 >> 20) & 0xFF0));
    v23 = (__int64)(float)(a1[2].n128_f32[3] * v18);
    v24 = 0u;
    v25 = v23 & 0xFFFFFF;
    LODWORD(v23) = (char *)&nn__util__detail__SinCosSampleTable + (((unsigned int)v23 >> 20) & 0xFF0);
    v26 = *(float *)v23;
    v27 = FIELD_F32(v23, 4);
    v28 = FIELD_F32(v23, 8);
    v29 = FIELD_F32(v23, 12);
    LODWORD(v23) = v3 + 4;
    v30 = (float)(v21 & 0xFFFFFF) * 0.000000059605;
    v31 = (float)(v19 & 0xFFFFFF) * 0.000000059605;
    v32 = (float)v25 * 0.000000059605;
    v33 = v26 + (float)(v32 * v28);
    v34 = *v20 + (float)(v20[2] * v31);
    v35 = v27 + (float)(v32 * v29);
    v36 = v22[1] + (float)(v22[3] * v30);
    v37 = v20[1] + (float)(v20[3] * v31);
    v38 = *v22 + (float)(v30 * v22[2]);
    v40.n64_u64[0] = FIELD_U64(v3, 0x0)[0];
    v41.n64_u64[0] = v3[1].n64_u64[0];
    v39 = v3 + 2;
    v42 = vdupq_lane_s32(v41, 1);
    v11.n128_f32[2] = v34 * v38;
    v11.n128_f32[0] = -(float)(v84 * v36);
    v10.n128_f32[0] = v84 * (float)(v38 * v35);
    v9.n128_f32[0] = v84 * (float)(v38 * v33);
    v10.n128_f32[1] = v85 * (float)((float)(v34 * v33) + (float)((float)(v37 * v36) * v35));
    v9.n128_f32[1] = v85 * (float)((float)((float)(v37 * v36) * v33) - (float)(v34 * v35));
    v43.n64_u64[0] = v39[1].n64_u64[0];
    v10.n128_f32[2] = (float)(v36 * (float)(v34 * v35)) - (float)(v37 * v33);
    v9.n128_f32[2] = (float)(v36 * (float)(v34 * v33)) + (float)(v37 * v35);
    v44 = vdupq_lane_s32(v43, 1);
    v45.n64_u64[0] = *(unsigned __int64 *)v23;
    v46.n64_u64[0] = *(unsigned __int64 *)(v23 + 8);
    v47 = a1 + 5;
    v11.n128_f32[1] = v85 * (float)(v37 * v38);
    v48 = vdupq_lane_s32(v46, 1);
    v49 = vzipq_s32(v48, v48).val[0];
    v50 = vextq_s8((int8x16_t)vzipq_s32(v42, v42).val, (int8x16_t)0, 0xCu);
    v51 = vextq_s8((int8x16_t)vzipq_s32(v44, v44).val, (int8x16_t)0, 0xCu);
    v52 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_lane_f32(v10, v40, 1), v9, v40, 0), v11, v41, 0);
    v53 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_lane_f32(v10, (float32x2_t)FIELD_U64(v39, 0x0)[0], 1), v9, (float32x2_t)FIELD_U64(v39, 0x0)[0], 0),
            v11,
            v43,
            0);
    v54 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_lane_f32(v10, v45, 1), v9, v45, 0), v11, v46, 0);
    v55 = vextq_s8(v50, v50, 4u);
    v56 = vextq_s8(v51, v51, 4u);
  }
  v76 = vextq_s8(v49, v24, 0xCu);
  *v47 = vaddq_f32(v55, v52);
  v77 = vaddq_f32(v56, v53);
  result = a1 + 7;
  v79 = vaddq_f32(vextq_s8(v76, v76, 4u), v54);
  a1[6] = v77;
LABEL_23:
  *result = v79;
  return result;
}

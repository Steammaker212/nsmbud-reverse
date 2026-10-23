/* sub_608686E0
 * address: 0x608686E0   size: 1448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_QWORD *__fastcall sub_608686E0(_DWORD *a1, int a2, __int64 *a3, float *a4, int a5, int a6)
{
  char v9; // r4
  int v10; // r1
  float v11; // s0
  float v12; // s2
  int v13; // r0
  float v14; // s10
  float v15; // s12
  float v16; // s1
  float v17; // s14
  float v18; // s3
  int32x4_t v19; // q1
  __int64 v20; // d8
  __int64 v21; // d9
  __int64 v22; // d10
  __int64 v23; // d11
  float v24; // s14
  float v25; // s9
  float v26; // s11
  float v27; // s10
  float v28; // s12
  float v29; // s14
  float32x4_t v30; // q2
  float32x4_t v31; // q0
  float32x4_t v32; // q3
  float v33; // s9
  float v34; // s2
  float v35; // s1
  float v36; // s16
  float v37; // s11
  float v38; // s14
  float v39; // s1
  __int64 v40; // d16
  __int64 v41; // d17
  unsigned __int64 v42; // d1
  float v43; // s28
  float v44; // s13
  float v45; // s31
  unsigned __int64 v46; // d0
  float v47; // s13
  float32x2_t v48; // d4
  float v49; // s18
  float32x2_t v50; // d6
  float v51; // s29
  float v52; // s31
  float v53; // s25
  unsigned int v54; // s2
  unsigned int v55; // s0
  unsigned int v56; // s1
  unsigned int v57; // s3
  float32x4_t v58; // q11
  float32x4_t v59; // q13
  float32x4_t v60; // q12
  float32x4_t v61; // q10
  float32x4_t v62; // q9
  float32x4_t v63; // q11
  int32x4_t v64; // q8
  int32x4_t v65; // q10
  int32x4_t v66; // q15
  float32x4_t v67; // q12
  float32x4_t v68; // q13
  float32x4_t v69; // q14
  float32x4_t v70; // q14
  int8x16_t v71; // q8
  int8x16_t v72; // q10
  int8x16_t v73; // q11
  float32x4_t v74; // q15
  float32x4_t v75; // q8
  float32x4_t v76; // q9
  float32x4_t v77; // q10
  int v78; // r0
  int v79; // r0
  int v80; // r0
  int v81; // r0
  int v82; // r0
  int v83; // r0
  float32x4_t *v84; // r1
  _QWORD *result; // r0
  int32x4_t v86; // [sp+10h] [bp-D0h]
  unsigned __int64 v87; // [sp+28h] [bp-B8h]
  unsigned __int64 v88; // [sp+38h] [bp-A8h]
  unsigned __int64 v89; // [sp+48h] [bp-98h]
  __int64 v90; // [sp+50h] [bp-90h] BYREF
  __int64 v91; // [sp+58h] [bp-88h]
  __int64 v92; // [sp+60h] [bp-80h]
  __int64 v93; // [sp+68h] [bp-78h]
  __int64 v94; // [sp+70h] [bp-70h]
  __int64 v95; // [sp+78h] [bp-68h]
  float32x4_t v96; // 0:q9.16
  float32x4_t v97; // 0:q9.16

  v9 = FIELD_U8(a5, 16);
  if ( (v9 & 1) != 0 )
  {
    v13 = FIELD_U32(a2, 188);
    v12 = FIELD_F32(v13, 20);
    v11 = FIELD_F32(v13, 24);
  }
  else if ( (FIELD_U8(a5, 16) & 2) != 0 )
  {
    v12 = *a4;
    v11 = a4[1];
  }
  else
  {
    v10 = *(_DWORD *)(a1[5] + 8 * a6 + 4);
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64 *))(*(_DWORD *)v10 + 16))(&v90);
      v11 = (float)WORD1(v90);
      v12 = (float)(unsigned __int16)v90;
    }
    else
    {
      v11 = 0.0;
      v12 = 0.0;
    }
  }
  v19.n128_f32[1] = v11 * -0.5;
  v14 = v11 * 0.5;
  v15 = v12 * 0.5;
  v16 = FIELD_F32(a5, 8);
  v17 = FIELD_F32(a5, 12);
  v18 = *(float *)a5;
  v19.n128_f32[0] = 0.5 / v17;
  v19.n128_f32[2] = 0.5 / v16;
  if ( *(_BYTE *)(a1[5] + ((8 * a1[3]) & 0x18) + 4 * ((a1[3] >> 2) & 3 | (4 * ((a1[3] >> 2) & 3))) + 16 * a6 + 1) == 4 )
  {
    v19.n128_u32[3] = FIELD_U32(a5, 4);
    v20 = *a3;
    v21 = a3[1];
    v22 = a3[2];
    v23 = a3[3];
    if ( (v9 & 4) != 0 )
    {
      v38 = v19.n128_f32[3] / v17;
      v39 = v18 / v16;
      v19.n128_f32[3] = v15 + v15;
      v40 = a3[4];
      v41 = a3[5];
      v90 = *a3;
      v91 = v21;
      v92 = v22;
      v93 = v23;
      *((float *)&v42 + 1) = 1.0 / (float)(v19.n128_f32[1] - v14);
      v94 = v40;
      v95 = v41;
      v43 = *(float *)&v21;
      *(float *)&v42 = v39 / v12;
      v44 = (float)(v38 / v11) + 0.5;
      v45 = (float)(*((float *)&v42 + 1) + *((float *)&v42 + 1)) * v19.n128_f32[0];
      LODWORD(v46) = 0;
      v47 = v44 - (float)((float)((float)(v14 - v14) * *((float *)&v42 + 1)) * v19.n128_f32[0]);
      v48.n64_u32[1] = 0;
      v19.n128_u32[0] = 0;
      *((float *)&v46 + 1) = (float)(0.5 - *(float *)&v42)
                           - (float)((float)((float)(v15 - v15) * (float)(1.0 / (float)(v15 + v15))) * v19.n128_f32[2]);
      v49 = 0.0;
      v19.n128_f32[1] = v47;
      v50.n64_u32[0] = 0;
      v86.n128_u64[0] = v46;
      v86.n128_u64[1] = v42;
      v50.n64_f32[1] = v45;
      v51 = (float)((float)((float)((float)((float)((float)(*((float *)&v90 + 1) * *(float *)&v23) * *(float *)&v40)
                                          + (float)((float)(*(float *)&v90 * *((float *)&v22 + 1)) * *(float *)&v41))
                                  + (float)((float)(*(float *)&v91 * *(float *)&v92) * *((float *)&v40 + 1)))
                          - (float)((float)(*((float *)&v22 + 1) * *(float *)&v40) * *(float *)&v91))
                  - (float)(*(float *)&v41 * (float)(*((float *)&v90 + 1) * *(float *)&v92)))
          - (float)(*(float *)&v23 * (float)(*(float *)&v90 * *((float *)&v40 + 1)));
      if ( v51 != 0.0 )
        v49 = 1.0 / v51;
      v52 = (float)(*((float *)&v20 + 1) * *(float *)&v40) - (float)(*(float *)&v90 * *((float *)&v40 + 1));
      v53 = (float)(*(float *)&v22 * *((float *)&v40 + 1)) - (float)(*((float *)&v22 + 1) * *(float *)&v40);
      *(float *)&v54 = (float)((float)(*((float *)&v22 + 1) * *(float *)&v41)
                             - (float)(*(float *)&v23 * *((float *)&v40 + 1)))
                     * v49;
      *(float *)&v55 = (float)((float)(v43 * *((float *)&v40 + 1)) - (float)(*(float *)&v41 * *((float *)&v20 + 1)))
                     * v49;
      *(float *)&v56 = (float)((float)(*(float *)&v23 * *(float *)&v40) - (float)(*(float *)&v41 * *(float *)&v22))
                     * v49;
      *(float *)&v57 = (float)((float)(*(float *)&v90 * *(float *)&v41) - (float)(*(float *)&v40 * v43)) * v49;
      *(float *)&v87 = (float)((float)(*((float *)&v90 + 1) * *(float *)&v23) - (float)(*((float *)&v22 + 1) * v43))
                     * v49;
      *(float *)&v88 = (float)((float)(*(float *)&v91 * *(float *)&v92) - (float)(*(float *)&v90 * *(float *)&v23))
                     * v49;
      *(float *)&v89 = (float)((float)(*(float *)&v90 * *((float *)&v22 + 1))
                             - (float)(*((float *)&v90 + 1) * *(float *)&v92))
                     * v49;
      *((float *)&v87 + 1) = (float)((float)-(float)(*(float *)&v54 * *((float *)&v91 + 1))
                                   - (float)(*(float *)&v55 * *((float *)&v93 + 1)))
                           - (float)(*(float *)&v87 * *((float *)&v95 + 1));
      *((float *)&v88 + 1) = (float)((float)-(float)(*(float *)&v56 * *((float *)&v91 + 1))
                                   - (float)(*(float *)&v57 * *((float *)&v93 + 1)))
                           - (float)(*(float *)&v88 * *((float *)&v95 + 1));
      *((float *)&v89 + 1) = (float)((float)-(float)((float)(v53 * v49) * *((float *)&v91 + 1))
                                   - (float)((float)(v52 * v49) * *((float *)&v93 + 1)))
                           - (float)(*(float *)&v89 * *((float *)&v95 + 1));
      v58.n128_u64[0] = __PAIR64__(v55, v54);
      v58.n128_u64[1] = v87;
      v59.n128_u64[0] = __PAIR64__(v52 * v49, v53 * v49);
      v59.n128_u64[1] = v89;
      v60.n128_u64[0] = __PAIR64__(v57, v56);
      v60.n128_u64[1] = v88;
      v61 = vmlaq_lane_f32(vmulq_n_f32(v58, v50.n64_f32[0]), v60, v50, 1);
      v62 = vmlaq_f32(vmulq_f32(v58, (float32x4_t)0), v60, (float32x4_t)0);
      v48.n64_f32[0] = (float)((float)(1.0 / v19.n128_f32[3]) + (float)(1.0 / v19.n128_f32[3])) * v19.n128_f32[2];
      v63 = vmlaq_lane_f32(vmulq_n_f32(v58, v48.n64_f32[0]), v60, v48, 1);
      v60.n128_u64[0] = 0;
      v60.n128_u64[1] = 0x3F80000000000000LL;
      v30 = vaddq_f32(vmlaq_f32(v62, v59, (float32x4_t)0), v60);
      v32 = vaddq_f32(
              (float32x4_t)vtrnq_s32((int32x4_t)0, vuzpq_s32((int32x4_t)0, v19).val[1]).val,
              vmlaq_lane_f32(v61, v59, (float32x2_t)v19.n128_u64[0], 0));
      v31 = vaddq_f32(
              (float32x4_t)vtrnq_s32((int32x4_t)0, vuzpq_s32((int32x4_t)0, v86).val[1]).val,
              vmlaq_lane_f32(v63, v59, (float32x2_t)v86.n128_u64[0], 0));
    }
    else
    {
      v24 = (float)(*((float *)&v23 + 1) + v19.n128_f32[3]) / v17;
      v19.n128_f32[1] = 1.0 / (float)(v19.n128_f32[1] - v14);
      v19.n128_f32[3] = 1.0 / (float)(v15 + v15);
      v25 = (float)((float)(*((float *)&v21 + 1) + v18) / v16) / v12;
      v31.n128_u32[2] = 0;
      v26 = v19.n128_f32[1] + v19.n128_f32[1];
      v27 = (float)(v14 - v14) * v19.n128_f32[1];
      v28 = (float)(v15 - v15) * v19.n128_f32[3];
      v31.n128_f32[3] = 0.5 - v25;
      v19.n128_f32[1] = (float)(v24 / v11) + 0.5;
      v29 = v19.n128_f32[3] + v19.n128_f32[3];
      v19.n128_f32[3] = v26 * v19.n128_f32[0];
      v31.n128_u32[1] = 0;
      v19.n128_f32[1] = v19.n128_f32[1] - (float)(v27 * v19.n128_f32[0]);
      v30.n128_u64[0] = 0;
      v30.n128_u64[1] = 0x3F80000000000000LL;
      v31.n128_f32[0] = v29 * v19.n128_f32[2];
      v31.n128_f32[3] = v31.n128_f32[3] - (float)(v28 * v19.n128_f32[2]);
      v32.n128_u32[0] = 0;
      v32.n128_u32[1] = v19.n128_u32[3];
      v32.n128_u32[2] = 0;
      v32.n128_u32[3] = v19.n128_u32[1];
    }
  }
  else
  {
    v33 = 1.0 / (float)(v15 + v15);
    v19.n128_f32[1] = 1.0 / (float)(v19.n128_f32[1] - v14);
    v34 = (float)(v18 / v16) / v12;
    v35 = FIELD_F32(a5, 4) / v17;
    v32.n128_u32[2] = 0;
    v36 = v35 / v11;
    v31.n128_u32[1] = 0;
    v31.n128_f32[0] = (float)(v33 + v33) * v19.n128_f32[2];
    v37 = (float)(0.5 - v34) - (float)((float)((float)(v15 - v15) * v33) * v19.n128_f32[2]);
    v19.n128_f32[2] = (float)(v14 - v14) * v19.n128_f32[1];
    v31.n128_u32[2] = 0;
    v31.n128_f32[3] = v37;
    v30.n128_u64[0] = 0;
    v30.n128_u64[1] = 0x3F80000000000000LL;
    v32.n128_f32[3] = (float)(v36 + 0.5) - (float)(v19.n128_f32[2] * v19.n128_f32[0]);
    v32.n128_u32[0] = 0;
    v32.n128_f32[1] = (float)(v19.n128_f32[1] + v19.n128_f32[1]) * v19.n128_f32[0];
  }
  v64 = vdupq_lane_s32(*(int32x2_t *)&v30.n128_i8[8], 1);
  v65 = vdupq_lane_s32(*(int32x2_t *)&v32.n128_i8[8], 1);
  v66 = vdupq_lane_s32(*(int32x2_t *)&v31.n128_i8[8], 1);
  v96 = *(float32x4_t *)(a2 + 128);
  v67 = vmulq_n_f32(v96, v30.n128_f32[0]);
  v68 = vmulq_n_f32(v96, v32.n128_f32[0]);
  v69 = vmulq_n_f32(v96, v31.n128_f32[0]);
  v97 = *(float32x4_t *)(a2 + 144);
  v70 = vmlaq_lane_f32(v69, v97, (float32x2_t)v31.n128_u64[0], 1);
  v71 = vextq_s8((int8x16_t)vzipq_s32(v64, v64).val, (int8x16_t)0, 0xCu);
  v72 = vextq_s8((int8x16_t)vzipq_s32(v65, v65).val, (int8x16_t)0, 0xCu);
  v73 = vextq_s8((int8x16_t)vzipq_s32(v66, v66).val, (int8x16_t)0, 0xCu);
  v74 = *(float32x4_t *)(a2 + 160);
  v75 = vaddq_f32(
          vextq_s8(v71, v71, 4u),
          vmlaq_lane_f32(
            vmlaq_lane_f32(v67, v97, (float32x2_t)v30.n128_u64[0], 1),
            v74,
            *(float32x2_t *)&v30.n128_i8[8],
            0));
  v76 = vaddq_f32(
          vextq_s8(v72, v72, 4u),
          vmlaq_lane_f32(
            vmlaq_lane_f32(v68, v97, (float32x2_t)v32.n128_u64[0], 1),
            v74,
            *(float32x2_t *)&v32.n128_i8[8],
            0));
  v77 = vaddq_f32(vextq_s8(v73, v73, 4u), vmlaq_lane_f32(v70, v74, *(float32x2_t *)&v31.n128_i8[8], 0));
  if ( a6 == 2 )
  {
    v80 = *(_DWORD *)(FIELD_U32(a2, 192) + 32);
    if ( v80 )
      v81 = v80 + a1[8];
    else
      v81 = 0;
    v78 = v81 + 352;
  }
  else if ( a6 == 1 )
  {
    v82 = *(_DWORD *)(FIELD_U32(a2, 192) + 32);
    if ( v82 )
      v83 = v82 + a1[8];
    else
      v83 = 0;
    v78 = v83 + 288;
  }
  else
  {
    v78 = 0;
    if ( !a6 )
    {
      v79 = *(_DWORD *)(FIELD_U32(a2, 192) + 32);
      if ( v79 )
        v78 = v79 + a1[8] + 224;
      else
        v78 = 224;
    }
  }
  *(float32x4_t *)v78 = v77;
  *(float32x4_t *)(v78 + 16) = v76;
  v84 = (float32x4_t *)(v78 + 32);
  result = (_QWORD *)(v78 + 48);
  *v84 = v75;
  *result = 0;
  result[1] = 0x3F80000000000000LL;
  return result;
}

/* sub_6087B2D0
 * address: 0x6087B2D0   size: 840   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_6087B2D0(int a1, int a2)
{
  float32x2_t *v2; // r9
  unsigned int v3; // lr
  float32x4_t *v4; // r12
  unsigned __int32 *v5; // r1
  unsigned __int32 v6; // r3
  unsigned __int32 v7; // r4
  unsigned __int32 v8; // r5
  unsigned __int32 v9; // r6
  unsigned __int32 v10; // r7
  unsigned __int32 v11; // r3
  unsigned __int32 v12; // r4
  unsigned __int32 v13; // r5
  unsigned __int32 v14; // r6
  unsigned __int32 v15; // r7
  unsigned __int32 v16; // r3
  unsigned __int32 v17; // r4
  unsigned __int32 v18; // r5
  unsigned __int32 v19; // r6
  unsigned __int32 v20; // r7
  float32x4_t v21; // q13
  float32x4_t v22; // q12
  float32x4_t v23; // q8
  float *result; // r0
  unsigned int v25; // r10
  int v26; // r8
  int v27; // r0
  int v28; // r3
  int v29; // r0
  int v30; // r6
  float32x4_t *v31; // r5
  unsigned __int32 v32; // r1
  float32x2_t *v33; // r7
  float32x4_t *v34; // r4
  unsigned __int32 v35; // r0
  unsigned __int32 v36; // r1
  unsigned __int32 v37; // r3
  float **v38; // r5
  unsigned __int32 v39; // r6
  unsigned __int32 v40; // r7
  float **v41; // r4
  float *v42; // r0
  float *v43; // r1
  float *v44; // r3
  float *v45; // r6
  float *v46; // r7
  float *v47; // r1
  float *v48; // r2
  float *v49; // r3
  float *v50; // r6
  float *v51; // r7
  float32x4_t v52; // q8
  float32x2_t v53; // d0
  float32x4_t v54; // q11
  float32x4_t v55; // q9
  float32x4_t v56; // q10
  float32x2_t *v57; // r1
  float32x2_t *v58; // r3
  float32x2_t v59; // d0
  float32x2_t v60; // d1
  float32x2_t *v61; // r2
  float32x2_t v62; // d7
  float32x4_t v63; // q12
  float32x4_t v64; // q13
  float32x4_t v65; // q14
  float32x4_t v66; // q11
  float32x4_t v67; // q14
  float32x4_t v68; // q11
  float32x2_t *v69; // r0
  float32x2_t v70; // d6
  float32x2_t v71; // d7
  float32x4_t v72; // q12
  float32x4_t v73; // q13
  float32x2_t v74; // d0
  float32x4_t v75; // q9
  float32x2_t *v77; // [sp+4h] [bp-28h]
  float32x4_t v78; // 0:q8.16
  float32x4_t v79; // 0:q9.16
  float32x4_t v80; // 0:q9.16
  float32x4_t v81; // 0:q10.16
  float32x4_t v82; // 0:q11.16
  float32x4_t v83; // 0:q11.16
  float32x4_t v84; // 0:q14.16
  float32x4_t v85; // 0:q14.16

  v2 = *(float32x2_t **)(a1 + 12);
  v3 = FIELD_U16(a1, 40);
  v4 = *(float32x4_t **)(a1 + 16);
  if ( (FIELD_U32(v2, 0x0)[0] & 0xC000000) == 0xC000000 )
  {
    v6 = *(_DWORD *)a2;
    v7 = FIELD_U32(a2, 4);
    v8 = FIELD_U32(a2, 8);
    v9 = FIELD_U32(a2, 12);
    v10 = FIELD_U32(a2, 16);
    v5 = (unsigned __int32 *)(a2 + 20);
    FIELD_U32(v4, 0x0)[0] = v6;
    FIELD_U32(v4, 0x0)[1] = v7;
    FIELD_U32(v4, 0x0)[2] = v8;
    FIELD_U32(v4, 0x0)[3] = v9;
    v4[1].n128_u32[0] = v10;
    v11 = *v5;
    v12 = v5[1];
    v13 = v5[2];
    v14 = v5[3];
    v15 = v5[4];
    v5 += 5;
    v4[1].n128_u32[1] = v11;
    v4[1].n128_u32[2] = v12;
    v4[1].n128_u32[3] = v13;
    v4[2].n128_u32[0] = v14;
    v4[2].n128_u32[1] = v15;
    v16 = v5[1];
    v17 = v5[2];
    v18 = v5[3];
    v19 = v5[4];
    v20 = v5[5];
    v4[2].n128_u32[2] = *v5;
    v4[2].n128_u32[3] = v16;
    v4[3].n128_u32[0] = v17;
    v4[3].n128_u32[1] = v18;
    v4[3].n128_u32[2] = v19;
    v4[3].n128_u32[3] = v20;
  }
  else
  {
    v79 = *(float32x4_t *)(a2 + 16);
    v82 = *(float32x4_t *)(a2 + 32);
    v84 = *(float32x4_t *)(a2 + 48);
    v21 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, v2[10].n64_f32[0]), v79, v2[10], 1),
            v82,
            v2[11],
            0);
    v22 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, v2[6].n64_f32[0]), v79, v2[6], 1),
            v82,
            v2[7],
            0);
    v23 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, v2[8].n64_f32[0]), v79, v2[8], 1),
            v82,
            v2[9],
            0);
    *v4 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, v2[4].n64_f32[0]), v79, v2[4], 1),
            v82,
            v2[5],
            0);
    v4[1] = v22;
    v4[2] = v23;
    v4[3] = vaddq_f32(v84, v21);
  }
  result = (float *)((16 * FIELD_U32(v2, 0x0)[0]) & 0x30000000 | FIELD_U32(v2, 0x0)[0] & 0xFFFFFFF);
  FIELD_U32(v2, 0x0)[0] = (unsigned __int32)result;
  if ( v3 >= 2 )
  {
    v25 = v3 - 1;
    v26 = 0;
    v77 = v2;
    do
    {
      v27 = FIELD_U32(a1, 8) + v26;
      v28 = FIELD_U16(v27, 136);
      v29 = FIELD_U16(v27, 138);
      v30 = 3 * v29;
      v31 = &v4[4 * v29];
      v33 = &v2[12 * v28];
      v32 = FIELD_U32(v33, 0x0)[0];
      FIELD_U32(v33, 0x0)[0] = v2[12 * v29].n64_u32[0] & (16 * FIELD_U32(v33, 0x0)[0]) & 0xF0000000 | FIELD_U32(v33, 0x0)[0] & 0xFFFFFFF;
      v34 = &v4[4 * v28];
      if ( (v2[12 * v29].n64_u32[0] & 0x3000000) == 0x3000000 )
      {
        if ( (v32 & 0xC000000) == 0xC000000 )
        {
          v35 = FIELD_U32(v31, 0x0)[0];
          v36 = FIELD_U32(v31, 0x0)[1];
          v37 = FIELD_U32(v31, 0x0)[2];
          v39 = FIELD_U32(v31, 0x0)[3];
          v40 = v31[1].n128_u32[0];
          v38 = (float **)&v31[1].n128_u32[1];
          FIELD_U32(v34, 0x0)[0] = v35;
          FIELD_U32(v34, 0x0)[1] = v36;
          FIELD_U32(v34, 0x0)[2] = v37;
          FIELD_U32(v34, 0x0)[3] = v39;
          v34[1].n128_u32[0] = v40;
          v41 = (float **)&v34[1].n128_u32[1];
          v42 = *v38;
          v43 = v38[1];
          v44 = v38[2];
          v45 = v38[3];
          v46 = v38[4];
          v38 += 5;
          *v41 = v42;
          v41[1] = v43;
          v41[2] = v44;
          v41[3] = v45;
          v41[4] = v46;
          v41 += 5;
          result = *v38;
          v47 = v38[1];
          v48 = v38[2];
          v49 = v38[3];
          v50 = v38[4];
          v51 = v38[5];
          *v41 = *v38;
          v41[1] = v47;
          v41[2] = v48;
          v41[3] = v49;
          v41[4] = v50;
          v41[5] = v51;
        }
        else
        {
          v69 = &v2[12 * v28];
          v78 = *v31;
          v80 = v31[1];
          v70.n64_u64[0] = v69[10].n64_u64[0];
          v71.n64_u64[0] = v69[11].n64_u64[0];
          v83 = v31[2];
          v85 = v31[3];
          v72 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v31, v69[6].n64_f32[0]), v80, v69[6], 1), v83, v69[7], 0);
          v73 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v31, v69[8].n64_f32[0]), v80, v69[8], 1), v83, v69[9], 0);
          *v34 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v31, v69[4].n64_f32[0]), v80, v69[4], 1), v83, v69[5], 0);
          v34[1] = v72;
          result = (float *)&v34[3];
          v34[2] = v73;
          v34[3] = vaddq_f32(
                     v85,
                     vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v78, v70.n64_f32[0]), v80, v70, 1), v83, v71, 0));
        }
      }
      else
      {
        v52 = v31[3];
        result = (float *)&v34[2];
        v53.n64_u64[0] = (unsigned __int64)v2[4 * v30 + 2];
        v54 = vmulq_n_f32(*v31, v53.n64_f32[0]);
        v55 = vmulq_n_f32(v31[2], v2[4 * v30 + 3].n64_f32[0]);
        v56 = vmulq_lane_f32(v31[1], v53, 1);
        *v34 = v54;
        v34[1] = v56;
        v34[2] = v55;
        v34[3] = v52;
        if ( (FIELD_U32(v33, 0x0)[0] & 0xC000000) != 0xC000000 )
        {
          v57 = &v77[12 * v28];
          v58 = v57 + 6;
          v59.n64_u64[0] = v57[4].n64_u64[0];
          v60.n64_u64[0] = v57[5].n64_u64[0];
          v61 = v57 + 10;
          v57 += 8;
          v62.n64_u64[0] = v57[1].n64_u64[0];
          v63 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v54, v59.n64_f32[0]), v56, v59, 1), v55, v60, 0);
          v64 = vmlaq_lane_f32(
                  vmlaq_lane_f32(vmulq_n_f32(v54, FIELD_F32(v58, 0x0)[0]), v56, (float32x2_t)FIELD_U64(v58, 0x0)[0], 1),
                  v55,
                  v58[1],
                  0);
          v65 = vmlaq_lane_f32(vmulq_n_f32(v54, FIELD_F32(v61, 0x0)[0]), v56, (float32x2_t)FIELD_U64(v61, 0x0)[0], 1);
          v66 = vmlaq_lane_f32(vmulq_n_f32(v54, FIELD_F32(v57, 0x0)[0]), v56, (float32x2_t)FIELD_U64(v57, 0x0)[0], 1);
          v67 = vmlaq_lane_f32(v65, v55, v61[1], 0);
          *v34 = v63;
          v34[1] = v64;
          v68 = vmlaq_lane_f32(v66, v55, v62, 0);
          *(_QWORD *)result = v68.n128_u64[0];
          v34[2].n128_u64[1] = v68.n128_u64[1];
          v34[3] = vaddq_f32(v52, v67);
        }
      }
      v2 = v77;
      v26 += 96;
      --v25;
    }
    while ( v25 );
  }
  if ( v3 )
  {
    result = (float *)&v2[2];
    do
    {
      if ( (*(_DWORD *)(result - 4) & 0x3000000) != 0x3000000 )
      {
        v74.n64_u64[0] = *(unsigned __int64 *)result;
        v81 = v4[1];
        v75 = vmulq_n_f32(v4[2], result[2]);
        *v4 = vmulq_n_f32(*v4, *result);
        v4[1] = vmulq_lane_f32(v81, v74, 1);
        v4[2] = v75;
      }
      v4 += 4;
      result += 24;
      --v3;
    }
    while ( v3 );
  }
  return result;
}

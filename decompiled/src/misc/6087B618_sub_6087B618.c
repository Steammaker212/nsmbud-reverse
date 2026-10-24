/* sub_6087B618
 * address: 0x6087B618   size: 1152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x2_t *__fastcall sub_6087B618(int a1, int a2)
{
  int v2; // lr
  float32x2_t *v3; // r12
  float32x2_t *result; // r0
  float32x4_t *v5; // r11
  unsigned __int32 *v6; // r1
  unsigned __int32 v7; // r3
  unsigned __int32 v8; // r4
  unsigned __int32 v9; // r5
  unsigned __int32 v10; // r6
  unsigned __int32 v11; // r7
  unsigned __int32 v12; // r3
  unsigned __int32 v13; // r4
  unsigned __int32 v14; // r5
  unsigned __int32 v15; // r6
  unsigned __int32 v16; // r7
  unsigned __int32 v17; // r4
  unsigned __int32 v18; // r5
  unsigned __int32 v19; // r6
  unsigned __int32 v20; // r7
  unsigned __int32 v21; // r8
  float32x4_t v22; // q13
  float32x4_t v23; // q12
  float32x4_t v24; // q8
  int v25; // r10
  int v26; // r2
  int v27; // r3
  int v28; // r4
  int v29; // r7
  int v30; // r9
  float32x4_t *v31; // r8
  unsigned __int32 v32; // r1
  float32x2_t *v33; // r2
  float32x4_t *v34; // r5
  unsigned __int32 v35; // r1
  unsigned __int32 v36; // r2
  unsigned __int32 v37; // r3
  unsigned __int32 *v38; // r5
  unsigned __int32 v39; // r6
  unsigned __int32 v40; // r7
  unsigned __int32 *v41; // r8
  unsigned __int32 v42; // r1
  unsigned __int32 v43; // r2
  unsigned __int32 v44; // r3
  unsigned __int32 v45; // r6
  unsigned __int32 v46; // r7
  unsigned __int32 v47; // r2
  unsigned __int32 v48; // r3
  unsigned __int32 v49; // r4
  unsigned __int32 v50; // r6
  unsigned __int32 v51; // r7
  float32x2_t *v52; // r1
  float32x2_t v53; // d6
  float32x2_t v54; // d7
  float32x4_t v55; // q12
  float32x4_t v56; // q13
  float *v57; // r4
  float32x2_t *v58; // r0
  float32x2_t v59; // d0
  float32x2_t *v60; // r3
  float32x4_t v61; // q10
  float32x4_t v62; // q9
  float32x4_t v63; // q11
  float32x2_t v64; // d0
  float32x2_t v65; // d1
  float32x2_t *v66; // r2
  float32x4_t v67; // q12
  float32x2_t v68; // d0
  float32x2_t v69; // d1
  float32x4_t v70; // q14
  float32x4_t v71; // q13
  float32x4_t v72; // q8
  unsigned __int64 v73; // d18
  unsigned __int64 v74; // d19
  float32x2_t v75; // d0
  float32x4_t v76; // q10
  float32x2_t *v77; // lr
  float32x2_t *v78; // r1
  unsigned __int32 v79; // r0
  unsigned __int32 v80; // r3
  unsigned __int32 v81; // r4
  unsigned __int32 v82; // r7
  unsigned __int32 v83; // r12
  unsigned __int32 v84; // r0
  unsigned __int32 v85; // r1
  unsigned __int32 v86; // r3
  unsigned __int32 v87; // r4
  unsigned __int32 v88; // r7
  unsigned __int32 v89; // r1
  unsigned __int32 v90; // r3
  unsigned __int32 v91; // r4
  unsigned __int32 v92; // r6
  unsigned __int32 v93; // r7
  float32x4_t v94; // q0
  float32x4_t v95; // q11
  float32x4_t v96; // q8
  float32x4_t v97; // q12
  float32x2_t *v98; // r3
  float32x2_t v99; // d0
  float32x4_t v100; // q9
  int v101; // [sp+0h] [bp-30h]
  float32x2_t *v102; // [sp+4h] [bp-2Ch]
  float *v103; // [sp+8h] [bp-28h]
  float32x4_t v104; // 0:q8.16
  float32x4_t v105; // 0:q8.16
  float32x4_t v106; // 0:q9.16
  float32x4_t v107; // 0:q9.16
  float32x4_t v108; // 0:q9.16
  float32x4_t v109; // 0:q10.16
  float32x4_t v110; // 0:q11.16
  float32x4_t v111; // 0:q11.16
  float32x4_t v112; // 0:q13.16
  float32x4_t v113; // 0:q14.16
  float32x4_t v114; // 0:q14.16
  float32x4_t v115; // 0:q14.16

  v2 = a1;
  v3 = *(float32x2_t **)(a1 + 12);
  result = (float32x2_t *)FIELD_U16(a1, 40);
  v5 = *(float32x4_t **)(v2 + 16);
  if ( (FIELD_U32(v3, 0x0)[0] & 0xC000000) == 0xC000000 )
  {
    v7 = *(_DWORD *)a2;
    v8 = FIELD_U32(a2, 4);
    v9 = FIELD_U32(a2, 8);
    v10 = FIELD_U32(a2, 12);
    v11 = FIELD_U32(a2, 16);
    v6 = (unsigned __int32 *)(a2 + 20);
    FIELD_U32(v5, 0x0)[0] = v7;
    FIELD_U32(v5, 0x0)[1] = v8;
    FIELD_U32(v5, 0x0)[2] = v9;
    FIELD_U32(v5, 0x0)[3] = v10;
    FIELD_U32(v5 + (1) * 16, 0x0)[0] = v11;
    v12 = *v6;
    v13 = v6[1];
    v14 = v6[2];
    v15 = v6[3];
    v16 = v6[4];
    v6 += 5;
    FIELD_U32(v5 + (1) * 16, 0x0)[1] = v12;
    FIELD_U32(v5 + (1) * 16, 0x0)[2] = v13;
    FIELD_U32(v5 + (1) * 16, 0x0)[3] = v14;
    FIELD_U32(v5 + (2) * 16, 0x0)[0] = v15;
    FIELD_U32(v5 + (2) * 16, 0x0)[1] = v16;
    v17 = v6[1];
    v18 = v6[2];
    v19 = v6[3];
    v20 = v6[4];
    v21 = v6[5];
    FIELD_U32(v5 + (2) * 16, 0x0)[2] = *v6;
    FIELD_U32(v5 + (2) * 16, 0x0)[3] = v17;
    FIELD_U32(v5 + (3) * 16, 0x0)[0] = v18;
    FIELD_U32(v5 + (3) * 16, 0x0)[1] = v19;
    FIELD_U32(v5 + (3) * 16, 0x0)[2] = v20;
    FIELD_U32(v5 + (3) * 16, 0x0)[3] = v21;
  }
  else
  {
    v106 = *(float32x4_t *)(a2 + 16);
    v113 = *(float32x4_t *)(a2 + 48);
    v22 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(v3 + (10) * 8, 0x0)[0]), v106, v3[10], 1),
            *(float32x4_t *)(a2 + 32),
            v3[11],
            0);
    v23 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(v3 + (6) * 8, 0x0)[0]), v106, v3[6], 1),
            *(float32x4_t *)(a2 + 32),
            v3[7],
            0);
    v24 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(v3 + (8) * 8, 0x0)[0]), v106, v3[8], 1),
            *(float32x4_t *)(a2 + 32),
            v3[9],
            0);
    *v5 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(v3 + (4) * 8, 0x0)[0]), v106, v3[4], 1),
            *(float32x4_t *)(a2 + 32),
            v3[5],
            0);
    v5[1] = v23;
    v5[2] = v24;
    v5[3] = vaddq_f32(v113, v22);
  }
  FIELD_U32(v3, 0x0)[0] = (16 * FIELD_U32(v3, 0x0)[0]) & 0x30000000 | FIELD_U32(v3, 0x0)[0] & 0xFFFFFFF;
  v102 = result;
  if ( (unsigned int)result >= 2 )
  {
    v25 = 0;
    v101 = v2;
    result = (float32x2_t *)((char *)result - 1);
    do
    {
      v26 = FIELD_U32(v2, 8) + v25;
      v27 = FIELD_U16(v26, 136);
      v28 = FIELD_U16(v26, 138);
      v29 = 3 * v27;
      v30 = 3 * v28;
      v31 = &v5[4 * v27];
      v32 = v3[12 * v27].n64_u32[0];
      v33 = &v3[12 * v28];
      v3[12 * v27].n64_u32[0] = FIELD_U32(v33, 0x0)[0] & (16 * v32) & 0xF0000000 | v32 & 0xFFFFFFF;
      v34 = &v5[4 * v28];
      if ( (v32 & 0xC000000) == 0xC000000 )
      {
        if ( (v32 & 0x800000) != 0 || (FIELD_U32(v33, 0x0)[0] & 0x3000000) == 0x3000000 )
        {
          v35 = FIELD_U32(v34, 0x0)[0];
          v36 = FIELD_U32(v34, 0x0)[1];
          v37 = FIELD_U32(v34, 0x0)[2];
          v39 = FIELD_U32(v34, 0x0)[3];
          v40 = FIELD_U32(v34 + (1) * 16, 0x0)[0];
          v38 = &FIELD_U32(v34 + (1) * 16, 0x0)[1];
          FIELD_U32(v31, 0x0)[0] = v35;
          FIELD_U32(v31, 0x0)[1] = v36;
          FIELD_U32(v31, 0x0)[2] = v37;
          FIELD_U32(v31, 0x0)[3] = v39;
          FIELD_U32(v31 + (1) * 16, 0x0)[0] = v40;
          v41 = &FIELD_U32(v31 + (1) * 16, 0x0)[1];
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
          v73 = FIELD_U64(v34 + (3) * 16, 0x0)[0];
          v74 = FIELD_U64(v34 + (3) * 16, 0x0)[1];
          v75.n64_u64[0] = (unsigned __int64)v3[12 * v28 + 2];
          v111 = v34[1];
          v76 = vmulq_n_f32(v34[2], v3[12 * v28 + 3].n64_f32[0]);
          *v31 = vmulq_n_f32(*v34, v75.n64_f32[0]);
          v31[1] = vmulq_lane_f32(v111, v75, 1);
          v31[2] = v76;
          FIELD_U64(v31 + (3) * 16, 0x0)[0] = v73;
          FIELD_U64(v31 + (3) * 16, 0x0)[1] = v74;
        }
      }
      else if ( (FIELD_U32(v33, 0x0)[0] & 0x3000000) == 0x3000000 )
      {
        v52 = &v3[12 * v27];
        v104 = *v34;
        v107 = v34[1];
        v53.n64_u64[0] = FIELD_U64(v52 + (10) * 8, 0x0)[0];
        v54.n64_u64[0] = v52[11].n64_u64[0];
        v110 = v34[2];
        v114 = v34[3];
        v55 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v34, FIELD_F32(v52 + (6) * 8, 0x0)[0]), v107, v52[6], 1), v110, v52[7], 0);
        v56 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v34, FIELD_F32(v52 + (8) * 8, 0x0)[0]), v107, v52[8], 1), v110, v52[9], 0);
        *v31 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v34, FIELD_F32(v52 + (4) * 8, 0x0)[0]), v107, v52[4], 1), v110, v52[5], 0);
        v31[1] = v55;
        v31[2] = v56;
        v31[3] = vaddq_f32(
                   v114,
                   vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v104, v53.n64_f32[0]), v107, v53, 1), v110, v54, 0));
      }
      else
      {
        if ( (v32 & 0x800000) != 0 )
        {
          v103 = (float *)result;
          v77 = &v3[12 * v27 + 4];
          v78 = v3;
          v79 = FIELD_U32(v77, 0x0)[0];
          v80 = v3[12 * v27 + 4].n64_u32[1];
          v81 = v3[4 * v29 + 5].n64_u32[0];
          v82 = v3[4 * v29 + 5].n64_u32[1];
          v83 = FIELD_U32(v77 + (2) * 8, 0x0)[0];
          v77 = (float32x2_t *)((char *)v77 + 20);
          FIELD_U32(v31, 0x0)[0] = v79;
          FIELD_U32(v31, 0x0)[1] = v80;
          FIELD_U32(v31, 0x0)[2] = v81;
          FIELD_U32(v31, 0x0)[3] = v82;
          FIELD_U32(v31 + (1) * 16, 0x0)[0] = v83;
          v3 = v78;
          v84 = FIELD_U32(v77, 0x0)[0];
          v85 = FIELD_U32(v77, 0x0)[1];
          v86 = FIELD_U32(v77 + (1) * 8, 0x0)[0];
          v87 = FIELD_U32(v77 + (1) * 8, 0x0)[1];
          v88 = FIELD_U32(v77 + (2) * 8, 0x0)[0];
          v77 = (float32x2_t *)((char *)v77 + 20);
          FIELD_U32(v31 + (1) * 16, 0x0)[1] = v84;
          FIELD_U32(v31 + (1) * 16, 0x0)[2] = v85;
          FIELD_U32(v31 + (1) * 16, 0x0)[3] = v86;
          FIELD_U32(v31 + (2) * 16, 0x0)[0] = v87;
          FIELD_U32(v31 + (2) * 16, 0x0)[1] = v88;
          v89 = FIELD_U32(v77, 0x0)[1];
          v90 = FIELD_U32(v77 + (1) * 8, 0x0)[0];
          v91 = FIELD_U32(v77 + (1) * 8, 0x0)[1];
          v92 = FIELD_U32(v77 + (2) * 8, 0x0)[0];
          v93 = FIELD_U32(v77 + (2) * 8, 0x0)[1];
          FIELD_U32(v31 + (2) * 16, 0x0)[2] = FIELD_U32(v77, 0x0)[0];
          FIELD_U32(v31 + (2) * 16, 0x0)[3] = v89;
          FIELD_U32(v31 + (3) * 16, 0x0)[0] = v90;
          FIELD_U32(v31 + (3) * 16, 0x0)[1] = v91;
          FIELD_U32(v31 + (3) * 16, 0x0)[2] = v92;
          FIELD_U32(v31 + (3) * 16, 0x0)[3] = v93;
          v2 = v101;
          v94 = vmulq_f32(v31[3], *(float32x4_t *)v3[4 * v30 + 2].n64_u64);
          v31[3] = v94;
          v108 = v34[1];
          v112 = v34[2];
          v115 = v34[3];
          result = (float32x2_t *)v103;
          v95 = vmulq_n_f32(*v34, v94.n128_f32[0]);
          v96 = vmlaq_lane_f32(
                  vmlaq_lane_f32(vmulq_n_f32(*v34, FIELD_F32(v31 + (1) * 16, 0x0)[0]), v108, (float32x2_t)FIELD_U64(v31 + (1) * 16, 0x0)[0], 1),
                  v112,
                  *(float32x2_t *)&FIELD_U32(v31 + (1) * 16, 0x0)[8],
                  0);
          v97 = vmlaq_lane_f32(
                  vmlaq_lane_f32(vmulq_n_f32(*v34, FIELD_F32(v31 + (2) * 16, 0x0)[0]), v108, (float32x2_t)FIELD_U64(v31 + (2) * 16, 0x0)[0], 1),
                  v112,
                  *(float32x2_t *)&FIELD_U32(v31 + (2) * 16, 0x0)[8],
                  0);
          *v31 = vmlaq_lane_f32(
                   vmlaq_lane_f32(vmulq_n_f32(*v34, FIELD_F32(v31, 0x0)[0]), v108, (float32x2_t)FIELD_U64(v31, 0x0)[0], 1),
                   v112,
                   *(float32x2_t *)&FIELD_U32(v31, 0x0)[8],
                   0);
          v31[1] = v96;
          v72 = vaddq_f32(
                  v115,
                  vmlaq_lane_f32(
                    vmlaq_lane_f32(v95, v108, (float32x2_t)v94.n128_u64[0], 1),
                    v112,
                    *(float32x2_t *)&v94.n128_i8[8],
                    0));
          v31[2] = v97;
        }
        else
        {
          v57 = (float *)result;
          v105 = v34[3];
          v58 = &v3[12 * v27];
          v59.n64_u64[0] = (unsigned __int64)v3[4 * v30 + 2];
          v60 = v58 + 6;
          v61 = vmulq_n_f32(*v34, v59.n64_f32[0]);
          v62 = vmulq_n_f32(v34[2], v3[4 * v30 + 3].n64_f32[0]);
          v63 = vmulq_lane_f32(v34[1], v59, 1);
          *v31 = v61;
          v31[1] = v63;
          v31[2] = v62;
          v31[3] = v105;
          v64.n64_u64[0] = FIELD_U64(v58 + (4) * 8, 0x0)[0];
          v65.n64_u64[0] = FIELD_U64(v58 + (5) * 8, 0x0)[0];
          v66 = v58 + 10;
          v58 += 8;
          v67 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v61, v64.n64_f32[0]), v63, v64, 1), v62, v65, 0);
          v68.n64_u64[0] = FIELD_U64(v58, 0x0)[0];
          v69.n64_u64[0] = FIELD_U64(v58 + (1) * 8, 0x0)[0];
          result = (float32x2_t *)v57;
          v70 = vmlaq_lane_f32(
                  vmlaq_lane_f32(vmulq_n_f32(v61, FIELD_F32(v66, 0x0)[0]), v63, (float32x2_t)FIELD_U64(v66, 0x0)[0], 1),
                  v62,
                  v66[1],
                  0);
          v71 = vmlaq_lane_f32(
                  vmlaq_lane_f32(vmulq_n_f32(v61, FIELD_F32(v60, 0x0)[0]), v63, (float32x2_t)FIELD_U64(v60, 0x0)[0], 1),
                  v62,
                  v60[1],
                  0);
          *v31 = v67;
          v31[1] = v71;
          v72 = vaddq_f32(v105, v70);
          v31[2] = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v61, v68.n64_f32[0]), v63, v68, 1), v62, v69, 0);
        }
        v31[3] = v72;
      }
      v25 += 96;
      result = (float32x2_t *)((char *)result - 1);
    }
    while ( result );
  }
  v98 = v102;
  if ( v102 )
  {
    result = v3 + 2;
    do
    {
      if ( (result[-2].n64_u32[0] & 0x3000000) != 0x3000000 )
      {
        v99.n64_u64[0] = FIELD_U64(result, 0x0)[0];
        v109 = v5[1];
        v100 = vmulq_n_f32(v5[2], FIELD_F32(result + (1) * 8, 0x0)[0]);
        *v5 = vmulq_n_f32(*v5, FIELD_F32(result, 0x0)[0]);
        v5[1] = vmulq_lane_f32(v109, v99, 1);
        v5[2] = v100;
      }
      v5 += 4;
      result += 12;
      v98 = (float32x2_t *)((char *)v98 - 1);
    }
    while ( v98 );
  }
  return result;
}

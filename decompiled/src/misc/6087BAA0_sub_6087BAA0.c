/* sub_6087BAA0
 * address: 0x6087BAA0   size: 1040   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x4_t *__fastcall sub_6087BAA0(int a1, int a2)
{
  unsigned int v2; // r12
  float32x2_t *v3; // r11
  unsigned __int32 *v4; // r1
  unsigned __int32 v5; // r2
  unsigned __int32 v6; // r3
  unsigned __int32 v7; // r4
  unsigned __int32 v8; // r5
  unsigned __int32 v9; // r6
  unsigned __int32 v10; // r2
  unsigned __int32 v11; // r3
  unsigned __int32 v12; // r4
  unsigned __int32 v13; // r5
  unsigned __int32 v14; // r6
  unsigned __int32 v15; // r3
  unsigned __int32 v16; // r4
  unsigned __int32 v17; // r5
  unsigned __int32 v18; // r6
  unsigned __int32 v19; // r7
  float32x4_t v20; // q13
  float32x4_t v21; // q12
  float32x4_t v22; // q8
  int v23; // r2
  float32x4_t *result; // r0
  unsigned __int32 v25; // r1
  unsigned __int32 v26; // r2
  unsigned __int32 v27; // r3
  float *v28; // r8
  int v29; // r4
  unsigned int v30; // r12
  int v31; // r0
  int v32; // r7
  int v33; // r0
  int v34; // lr
  unsigned __int32 v35; // r1
  int v36; // r5
  int v37; // r6
  float32x4_t *v38; // r9
  float32x4_t *v39; // r10
  unsigned __int32 v40; // r0
  unsigned __int32 v41; // r1
  unsigned __int32 v42; // r2
  unsigned __int32 v43; // r3
  unsigned __int32 v44; // r7
  unsigned __int32 *v45; // r9
  unsigned __int32 *v46; // r10
  unsigned __int32 v47; // r0
  unsigned __int32 v48; // r1
  unsigned __int32 v49; // r2
  unsigned __int32 v50; // r3
  unsigned __int32 v51; // r7
  unsigned __int32 v52; // r1
  unsigned __int32 v53; // r2
  unsigned __int32 v54; // r3
  unsigned __int32 v55; // r4
  unsigned __int32 v56; // r7
  float32x2_t *v57; // r12
  float32x2_t *v58; // r1
  float32x4_t v59; // q9
  float32x4_t v60; // q12
  float32x4_t v61; // q13
  float32x4_t v62; // q8
  int v63; // r12
  unsigned __int32 v64; // r0
  unsigned __int32 *v65; // r1
  unsigned __int32 v66; // r3
  unsigned __int32 v67; // r4
  unsigned __int32 v68; // r6
  unsigned __int32 v69; // r7
  int v70; // r8
  unsigned __int32 v71; // r0
  unsigned __int32 v72; // r3
  unsigned __int32 v73; // r4
  unsigned __int32 v74; // r6
  unsigned __int32 v75; // r7
  unsigned __int32 v76; // r3
  unsigned __int32 v77; // r4
  unsigned __int32 v78; // r5
  unsigned __int32 v79; // r6
  unsigned __int32 v80; // r7
  float32x4_t v81; // q0
  float32x4_t v82; // q11
  float32x4_t v83; // q8
  float32x4_t v84; // q12
  float32x4_t *v85; // r1
  unsigned __int32 v86; // r2
  unsigned __int32 v87; // r3
  unsigned __int32 v88; // r7
  unsigned __int32 v89; // r1
  int v90; // r4
  unsigned int i; // r2
  float32x2_t v92; // d0
  float32x4_t v93; // q9
  unsigned int v94; // [sp+0h] [bp-48h]
  float32x4_t *v95; // [sp+4h] [bp-44h]
  unsigned int v96; // [sp+8h] [bp-40h]
  float32x2_t *v97; // [sp+Ch] [bp-3Ch]
  int v99; // [sp+14h] [bp-34h]
  float32x2_t *v100; // [sp+18h] [bp-30h]
  int v101; // [sp+1Ch] [bp-2Ch]
  float32x4_t *v102; // [sp+20h] [bp-28h]
  float32x4_t v103; // 0:q8.16
  float32x4_t v104; // 0:q9.16
  float32x4_t v105; // 0:q9.16
  float32x4_t v106; // 0:q10.16
  float32x4_t v107; // 0:q10.16
  float32x4_t v108; // 0:q11.16
  float32x4_t v109; // 0:q13.16
  float32x4_t v110; // 0:q14.16
  float32x4_t v111; // 0:q14.16
  float32x4_t v112; // 0:q14.16

  v2 = FIELD_U16(a1, 40);
  v3 = *(float32x2_t **)(a1 + 12);
  v102 = *(float32x4_t **)(a1 + 16);
  v95 = *(float32x4_t **)(a1 + 20);
  if ( (FIELD_U32(v3, 0x0)[0] & 0xC000000) == 0xC000000 )
  {
    v5 = *(_DWORD *)a2;
    v6 = FIELD_U32(a2, 4);
    v7 = FIELD_U32(a2, 8);
    v8 = FIELD_U32(a2, 12);
    v9 = FIELD_U32(a2, 16);
    v4 = (unsigned __int32 *)(a2 + 20);
    FIELD_U32(v102, 0x0)[0] = v5;
    FIELD_U32(v102, 0x0)[1] = v6;
    FIELD_U32(v102, 0x0)[2] = v7;
    FIELD_U32(v102, 0x0)[3] = v8;
    v102[1].n128_u32[0] = v9;
    v10 = *v4;
    v11 = v4[1];
    v12 = v4[2];
    v13 = v4[3];
    v14 = v4[4];
    v4 += 5;
    v102[1].n128_u32[1] = v10;
    v102[1].n128_u32[2] = v11;
    v102[1].n128_u32[3] = v12;
    v102[2].n128_u32[0] = v13;
    v102[2].n128_u32[1] = v14;
    v15 = v4[1];
    v16 = v4[2];
    v17 = v4[3];
    v18 = v4[4];
    v19 = v4[5];
    v102[2].n128_u32[2] = *v4;
    v102[2].n128_u32[3] = v15;
    v102[3].n128_u32[0] = v16;
    v102[3].n128_u32[1] = v17;
    v102[3].n128_u32[2] = v18;
    v102[3].n128_u32[3] = v19;
  }
  else
  {
    v104 = *(float32x4_t *)(a2 + 16);
    v108 = *(float32x4_t *)(a2 + 32);
    v110 = *(float32x4_t *)(a2 + 48);
    v20 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, v3[10].n64_f32[0]), v104, v3[10], 1),
            v108,
            v3[11],
            0);
    v21 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, v3[6].n64_f32[0]), v104, v3[6], 1),
            v108,
            v3[7],
            0);
    v22 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, v3[8].n64_f32[0]), v104, v3[8], 1),
            v108,
            v3[9],
            0);
    *v102 = vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, v3[4].n64_f32[0]), v104, v3[4], 1),
              v108,
              v3[5],
              0);
    v102[1] = v21;
    v102[2] = v22;
    v102[3] = vaddq_f32(v110, v20);
  }
  v23 = FIELD_U32(v3, 0x0)[0] & 0x3000000;
  FIELD_U32(v3, 0x0)[0] = (16 * FIELD_U32(v3, 0x0)[0]) & 0x30000000 | FIELD_U32(v3, 0x0)[0] & 0xFFFFFFF;
  if ( v23 == 50331648 )
  {
    result = v95;
    FIELD_U64(v95, 0x0)[0] = 0x3F8000003F800000LL;
    FIELD_U64(v95, 0x0)[1] = 1065353216;
  }
  else
  {
    result = (float32x4_t *)v3[2].n64_u32[0];
    v25 = v3[2].n64_u32[1];
    v26 = v3[3].n64_u32[0];
    v27 = v3[3].n64_u32[1];
    FIELD_U32(v95, 0x0)[0] = (unsigned __int32)result;
    FIELD_U32(v95, 0x0)[1] = v25;
    FIELD_U32(v95, 0x0)[2] = v26;
    FIELD_U32(v95, 0x0)[3] = v27;
  }
  v28 = (float *)v95;
  v94 = v2;
  if ( v2 >= 2 )
  {
    v29 = 0;
    v97 = v3;
    v30 = v2 - 1;
    do
    {
      v31 = FIELD_U32(a1, 8) + v29;
      v32 = FIELD_U16(v31, 136);
      v33 = FIELD_U16(v31, 138);
      v34 = 3 * v33;
      v35 = v3[12 * v32].n64_u32[0];
      v100 = &v3[12 * v32];
      FIELD_U32(v100, 0x0)[0] = v3[12 * v33].n64_u32[0] & (16 * v35) & 0xF0000000 | v35 & 0xFFFFFFF;
      v36 = v33;
      v37 = v32;
      v101 = v29;
      v99 = 3 * v32;
      v38 = &v102[4 * v33];
      v39 = &v102[4 * v32];
      if ( (v35 & 0xC000000) == 0xC000000 )
      {
        v40 = FIELD_U32(v38, 0x0)[0];
        v41 = FIELD_U32(v38, 0x0)[1];
        v42 = FIELD_U32(v38, 0x0)[2];
        v43 = FIELD_U32(v38, 0x0)[3];
        v44 = v38[1].n128_u32[0];
        v45 = &v38[1].n128_u32[1];
        FIELD_U32(v39, 0x0)[0] = v40;
        FIELD_U32(v39, 0x0)[1] = v41;
        FIELD_U32(v39, 0x0)[2] = v42;
        FIELD_U32(v39, 0x0)[3] = v43;
        v39[1].n128_u32[0] = v44;
        v46 = &v39[1].n128_u32[1];
        v47 = *v45;
        v48 = v45[1];
        v49 = v45[2];
        v50 = v45[3];
        v51 = v45[4];
        v45 += 5;
        *v46 = v47;
        v46[1] = v48;
        v46[2] = v49;
        v46[3] = v50;
        v46[4] = v51;
        v46 += 5;
        v52 = v45[1];
        v53 = v45[2];
        v54 = v45[3];
        v55 = v45[4];
        v56 = v45[5];
        *v46 = *v45;
        v46[1] = v52;
        v46[2] = v53;
        v46[3] = v54;
        v46[4] = v55;
        v46[5] = v56;
      }
      else
      {
        v96 = v30;
        v57 = &v3[12 * v32];
        v58 = v57 + 4;
        if ( (v3[12 * v33].n64_u32[0] & 0x30000000) == 0x30000000 )
        {
          v106 = v38[1];
          v103 = v38[2];
          v111 = v38[3];
          v59 = vmlaq_lane_f32(
                  vmlaq_lane_f32(vmulq_n_f32(*v38, v57[10].n64_f32[0]), v106, v57[10], 1),
                  v103,
                  v57[11],
                  0);
          v60 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v38, v57[6].n64_f32[0]), v106, v57[6], 1), v103, v57[7], 0);
          v61 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v38, v57[8].n64_f32[0]), v106, v57[8], 1), v103, v57[9], 0);
          *v39 = vmlaq_lane_f32(
                   vmlaq_lane_f32(vmulq_n_f32(*v38, FIELD_F32(v58, 0x0)[0]), v106, (float32x2_t)FIELD_U64(v58, 0x0)[0], 1),
                   v103,
                   v57[5],
                   0);
          v62 = vaddq_f32(v111, v59);
          v39[1] = v60;
          v39[2] = v61;
        }
        else
        {
          v63 = v32;
          v64 = FIELD_U32(v58, 0x0)[0];
          v66 = FIELD_U32(v58, 0x0)[1];
          v67 = v58[1].n64_u32[0];
          v68 = v58[1].n64_u32[1];
          v69 = v58[2].n64_u32[0];
          v65 = &v58[2].n64_u32[1];
          v70 = v36;
          FIELD_U32(v39, 0x0)[0] = v64;
          FIELD_U32(v39, 0x0)[1] = v66;
          FIELD_U32(v39, 0x0)[2] = v67;
          FIELD_U32(v39, 0x0)[3] = v68;
          v39[1].n128_u32[0] = v69;
          v71 = *v65;
          v72 = v65[1];
          v73 = v65[2];
          v74 = v65[3];
          v75 = v65[4];
          v65 += 5;
          v39[1].n128_u32[1] = v71;
          v39[1].n128_u32[2] = v72;
          v39[1].n128_u32[3] = v73;
          v39[2].n128_u32[0] = v74;
          v39[2].n128_u32[1] = v75;
          v76 = v65[1];
          v77 = v65[2];
          v78 = v65[3];
          v79 = v65[4];
          v80 = v65[5];
          v39[2].n128_u32[2] = *v65;
          v39[2].n128_u32[3] = v76;
          v39[3].n128_u32[0] = v77;
          v39[3].n128_u32[1] = v78;
          v39[3].n128_u32[2] = v79;
          v39[3].n128_u32[3] = v80;
          v36 = v70;
          v37 = v63;
          v81 = vmulq_f32(v39[3], *(float32x4_t *)v3[4 * v34 + 2].n64_u64);
          v39[3] = v81;
          v105 = v38[1];
          v109 = v38[2];
          v112 = v38[3];
          v82 = vmulq_n_f32(*v38, v81.n128_f32[0]);
          v83 = vmlaq_lane_f32(
                  vmlaq_lane_f32(vmulq_n_f32(*v38, v39[1].n128_f32[0]), v105, (float32x2_t)v39[1].n128_u64[0], 1),
                  v109,
                  *(float32x2_t *)&v39[1].n128_i8[8],
                  0);
          v84 = vmlaq_lane_f32(
                  vmlaq_lane_f32(vmulq_n_f32(*v38, v39[2].n128_f32[0]), v105, (float32x2_t)v39[2].n128_u64[0], 1),
                  v109,
                  *(float32x2_t *)&v39[2].n128_i8[8],
                  0);
          *v39 = vmlaq_lane_f32(
                   vmlaq_lane_f32(vmulq_n_f32(*v38, FIELD_F32(v39, 0x0)[0]), v105, (float32x2_t)FIELD_U64(v39, 0x0)[0], 1),
                   v109,
                   *(float32x2_t *)&FIELD_U32(v39, 0x0)[8],
                   0);
          v39[1] = v83;
          v62 = vaddq_f32(
                  v112,
                  vmlaq_lane_f32(
                    vmlaq_lane_f32(v82, v105, (float32x2_t)v81.n128_u64[0], 1),
                    v109,
                    *(float32x2_t *)&v81.n128_i8[8],
                    0));
          v39[2] = v84;
        }
        v39[3] = v62;
        v28 = (float *)v95;
        v30 = v96;
      }
      v85 = (float32x4_t *)&v28[4 * v36];
      result = (float32x4_t *)&v28[4 * v37];
      if ( (FIELD_U32(v100, 0x0)[0] & 0x3000000) == 0x3000000 )
      {
        v86 = FIELD_U32(v85, 0x0)[0];
        v87 = FIELD_U32(v85, 0x0)[1];
        v88 = FIELD_U32(v85, 0x0)[2];
        v89 = FIELD_U32(v85, 0x0)[3];
        FIELD_U32(result, 0x0)[0] = v86;
        FIELD_U32(result, 0x0)[1] = v87;
        FIELD_U32(result, 0x0)[2] = v88;
        FIELD_U32(result, 0x0)[3] = v89;
        v90 = v101;
        v3 = v97;
      }
      else
      {
        v3 = v97;
        *result = vmulq_f32(*v85, *(float32x4_t *)v97[4 * v99 + 2].n64_u64);
        v90 = v101;
      }
      v29 = v90 + 96;
      --v30;
    }
    while ( v30 );
  }
  for ( i = v94; i; v102 += 4 )
  {
    if ( (FIELD_U32(v3, 0x0)[0] & 0x30000000) != 0x30000000 )
    {
      v92.n64_u64[0] = *(unsigned __int64 *)v28;
      v107 = v102[1];
      v93 = vmulq_n_f32(v102[2], v28[2]);
      *v102 = vmulq_n_f32(*v102, *v28);
      v102[1] = vmulq_lane_f32(v107, v92, 1);
      v102[2] = v93;
    }
    v3 += 12;
    v28 += 4;
    --i;
    result = v102 + 4;
  }
  return result;
}

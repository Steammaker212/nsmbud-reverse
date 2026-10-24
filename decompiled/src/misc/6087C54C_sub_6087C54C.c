/* sub_6087C54C
 * address: 0x6087C54C   size: 1292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087C54C(int a1, int a2)
{
  int v2; // r10
  float32x2_t *v3; // r11
  int v4; // r8
  float32x4_t *v5; // r9
  unsigned __int32 *v6; // r1
  unsigned __int32 v7; // r2
  unsigned __int32 v8; // r3
  unsigned __int32 v9; // r4
  unsigned __int32 v10; // r6
  unsigned __int32 v11; // r7
  unsigned __int32 v12; // r2
  unsigned __int32 v13; // r3
  unsigned __int32 v14; // r4
  unsigned __int32 v15; // r6
  unsigned __int32 v16; // r7
  unsigned __int32 v17; // r3
  unsigned __int32 v18; // r4
  unsigned __int32 v19; // r5
  unsigned __int32 v20; // r6
  unsigned __int32 v21; // r7
  float32x2_t v22; // d1
  float32x4_t v23; // q13
  float32x4_t v24; // q12
  float32x4_t v25; // q8
  float32x2_t *v26; // r1
  int result; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r7
  int v31; // r0
  int v32; // r2
  float32x4_t *v33; // lr
  unsigned __int32 v34; // r4
  float32x2_t *v35; // r6
  float32x4_t *v36; // r1
  unsigned __int32 *v37; // r1
  unsigned __int32 v38; // r2
  unsigned __int32 v39; // r3
  unsigned __int32 v40; // r4
  unsigned __int32 v41; // r6
  unsigned __int32 v42; // r7
  unsigned __int32 *v43; // lr
  unsigned __int32 v44; // r2
  unsigned __int32 v45; // r3
  unsigned __int32 v46; // r4
  unsigned __int32 v47; // r6
  unsigned __int32 v48; // r7
  unsigned __int32 v49; // r3
  unsigned __int32 v50; // r4
  unsigned __int32 v51; // r5
  unsigned __int32 v52; // r6
  unsigned __int32 v53; // r7
  float32x2_t *v54; // r2
  float32x4_t v55; // q12
  float32x4_t v56; // q13
  float32x4_t v57; // q8
  float32x4_t *v58; // r1
  float32x4_t v59; // q8
  float32x2_t *v60; // r0
  float32x2_t *v61; // r2
  float32x2_t v62; // d0
  unsigned __int64 v63; // d1
  float32x4_t *v64; // r2
  float32x2_t *v65; // r4
  float32x4_t v66; // q10
  float32x4_t v67; // q9
  float32x4_t v68; // q11
  float32x2_t v69; // d0
  float32x2_t v70; // d1
  float32x2_t *v71; // r3
  float32x4_t v72; // q12
  float32x2_t v73; // d0
  float32x2_t v74; // d1
  float32x4_t v75; // q14
  float32x4_t v76; // q13
  unsigned __int64 v77; // d18
  unsigned __int64 v78; // d19
  float32x2_t v79; // d0
  float32x4_t v80; // q10
  float32x2_t *v81; // r12
  unsigned __int32 v82; // r3
  unsigned __int32 v83; // r4
  unsigned __int32 v84; // r5
  unsigned __int32 v85; // r6
  unsigned __int32 v86; // r7
  unsigned __int32 v87; // r3
  unsigned __int32 v88; // r4
  unsigned __int32 v89; // r5
  unsigned __int32 v90; // r6
  unsigned __int32 v91; // r7
  unsigned __int32 v92; // r4
  unsigned __int32 v93; // r5
  unsigned __int32 v94; // r6
  unsigned __int32 v95; // r7
  unsigned __int32 v96; // r10
  float32x4_t v97; // q0
  float32x4_t v98; // q11
  float32x4_t v99; // q8
  float32x4_t v100; // q12
  float32x2_t *v101; // r1
  int v102; // r1
  float32x2_t v103; // d0
  float32x4_t v104; // q9
  int v105; // [sp+0h] [bp-40h]
  int v106; // [sp+4h] [bp-3Ch] BYREF
  int v107; // [sp+8h] [bp-38h]
  int v108; // [sp+Ch] [bp-34h]
  float32x2_t **v109; // [sp+10h] [bp-30h] BYREF
  float32x2_t *v110; // [sp+14h] [bp-2Ch]
  float32x2_t *v111; // [sp+18h] [bp-28h] BYREF
  float32x4_t v112; // 0:q8.16
  float32x4_t v113; // 0:q9.16
  float32x4_t v114; // 0:q9.16
  float32x4_t v115; // 0:q9.16
  float32x4_t v116; // 0:q9.16
  float32x4_t v117; // 0:q10.16
  float32x4_t v118; // 0:q11.16
  float32x4_t v119; // 0:q11.16
  float32x4_t v120; // 0:q12.16
  float32x4_t v121; // 0:q13.16
  float32x4_t v122; // 0:q14.16
  float32x4_t v123; // 0:q14.16
  float32x4_t v124; // 0:q14.16

  v2 = a1;
  v3 = *(float32x2_t **)(a1 + 12);
  v4 = FIELD_U16(a1, 40);
  v5 = *(float32x4_t **)(a1 + 16);
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
    v22.n64_u64[0] = v3[11].n64_u64[0];
    v113 = *(float32x4_t *)(a2 + 16);
    v118 = *(float32x4_t *)(a2 + 32);
    v122 = *(float32x4_t *)(a2 + 48);
    v23 = vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(v3 + (10) * 8, 0x0)[0]), v113, v3[10], 1);
    v24 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(v3 + (6) * 8, 0x0)[0]), v113, v3[6], 1),
            v118,
            v3[7],
            0);
    v25 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(v3 + (8) * 8, 0x0)[0]), v113, v3[8], 1),
            v118,
            v3[9],
            0);
    *v5 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(v3 + (4) * 8, 0x0)[0]), v113, v3[4], 1),
            v118,
            v3[5],
            0);
    v5[1] = v24;
    v5[2] = v25;
    v5[3] = vaddq_f32(v122, vmlaq_lane_f32(v23, v118, v22, 0));
  }
  FIELD_U32(v3, 0x0)[0] = (16 * FIELD_U32(v3, 0x0)[0]) & 0x30000000 | FIELD_U32(v3, 0x0)[0] & 0xFFFFFFF;
  v111 = 0;
  v26 = (float32x2_t *)FIELD_U16(a1, 42);
  v109 = &v111;
  result = 1;
  v110 = v26;
  if ( !v26 )
  {
    v28 = FIELD_U32(v2, 12);
    v106 = FIELD_U32(v2, 16);
    v107 = (int)&v3[2];
    v108 = v28;
    (*(void (__fastcall **)(_DWORD, float32x2_t ***, int *))(**(_DWORD **)(v2 + 44) + 8))(
      FIELD_U32(v2, 44),
      &v109,
      &v106);
    result = (int)FIELD_U32(v111, 0x0) + 1;
  }
  v111 = (float32x2_t *)result;
  if ( result < v4 )
  {
    v105 = v2;
    do
    {
      v29 = FIELD_U32(v2, 8) + 96 * result;
      v30 = FIELD_U16(v29, 40);
      v31 = FIELD_U16(v29, 42);
      v32 = 3 * v31;
      v33 = &v5[4 * v30];
      v34 = v3[12 * v30].n64_u32[0];
      v35 = &v3[12 * v31];
      v3[12 * v30].n64_u32[0] = FIELD_U32(v35, 0x0)[0] & (16 * v34) & 0xF0000000 | v34 & 0xFFFFFFF;
      v36 = &v5[4 * v31];
      if ( (v34 & 0xC000000) == 0xC000000 )
      {
        if ( (v34 & 0x800000) != 0 || (FIELD_U32(v35, 0x0)[0] & 0x3000000) == 0x3000000 )
        {
          v38 = FIELD_U32(v36, 0x0)[0];
          v39 = FIELD_U32(v36, 0x0)[1];
          v40 = FIELD_U32(v36, 0x0)[2];
          v41 = FIELD_U32(v36, 0x0)[3];
          v42 = FIELD_U32(v36 + (1) * 16, 0x0)[0];
          v37 = &FIELD_U32(v36 + (1) * 16, 0x0)[1];
          FIELD_U32(v33, 0x0)[0] = v38;
          FIELD_U32(v33, 0x0)[1] = v39;
          FIELD_U32(v33, 0x0)[2] = v40;
          FIELD_U32(v33, 0x0)[3] = v41;
          FIELD_U32(v33 + (1) * 16, 0x0)[0] = v42;
          v43 = &FIELD_U32(v33 + (1) * 16, 0x0)[1];
          v44 = *v37;
          v45 = v37[1];
          v46 = v37[2];
          v47 = v37[3];
          v48 = v37[4];
          v37 += 5;
          *v43 = v44;
          v43[1] = v45;
          v43[2] = v46;
          v43[3] = v47;
          v43[4] = v48;
          v43 += 5;
          v49 = v37[1];
          v50 = v37[2];
          v51 = v37[3];
          v52 = v37[4];
          v53 = v37[5];
          *v43 = *v37;
          v43[1] = v49;
          v43[2] = v50;
          v43[3] = v51;
          v43[4] = v52;
          v43[5] = v53;
        }
        else
        {
          v77 = FIELD_U64(v36 + (3) * 16, 0x0)[0];
          v78 = FIELD_U64(v36 + (3) * 16, 0x0)[1];
          v79.n64_u64[0] = (unsigned __int64)v3[12 * v31 + 2];
          v119 = v36[1];
          v80 = vmulq_n_f32(v36[2], v3[12 * v31 + 3].n64_f32[0]);
          *v33 = vmulq_n_f32(*v36, v79.n64_f32[0]);
          v33[1] = vmulq_lane_f32(v119, v79, 1);
          v33[2] = v80;
          FIELD_U64(v33 + (3) * 16, 0x0)[0] = v77;
          FIELD_U64(v33 + (3) * 16, 0x0)[1] = v78;
        }
        goto LABEL_19;
      }
      if ( (FIELD_U32(v35, 0x0)[0] & 0x3000000) == 0x3000000 )
      {
        v54 = &v3[12 * v30];
        v114 = v36[1];
        v123 = v36[3];
        v55 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v36, FIELD_F32(v54 + (6) * 8, 0x0)[0]), v114, v54[6], 1), v36[2], v54[7], 0);
        v56 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v36, FIELD_F32(v54 + (8) * 8, 0x0)[0]), v114, v54[8], 1), v36[2], v54[9], 0);
        v57 = vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(*v36, FIELD_F32(v54 + (10) * 8, 0x0)[0]), v114, v54[10], 1),
                v36[2],
                v54[11],
                0);
        *v33 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v36, FIELD_F32(v54 + (4) * 8, 0x0)[0]), v114, v54[4], 1), v36[2], v54[5], 0);
        v33[1] = v55;
        v58 = v33 + 3;
        v33[2] = v56;
        v59 = vaddq_f32(v123, v57);
      }
      else
      {
        if ( (v34 & 0x800000) != 0 )
        {
          v81 = &v3[12 * v30 + 4];
          v82 = FIELD_U32(v81, 0x0)[0];
          v83 = v3[12 * v30 + 4].n64_u32[1];
          v84 = v3[12 * v30 + 5].n64_u32[0];
          v85 = v3[12 * v30 + 5].n64_u32[1];
          v86 = v3[12 * v30 + 6].n64_u32[0];
          v81 = (float32x2_t *)((char *)v81 + 20);
          FIELD_U32(v33, 0x0)[0] = v82;
          FIELD_U32(v33, 0x0)[1] = v83;
          FIELD_U32(v33, 0x0)[2] = v84;
          FIELD_U32(v33, 0x0)[3] = v85;
          FIELD_U32(v33 + (1) * 16, 0x0)[0] = v86;
          v87 = FIELD_U32(v81, 0x0)[0];
          v88 = FIELD_U32(v81, 0x0)[1];
          v89 = FIELD_U32(v81 + (1) * 8, 0x0)[0];
          v90 = FIELD_U32(v81 + (1) * 8, 0x0)[1];
          v91 = FIELD_U32(v81 + (2) * 8, 0x0)[0];
          v81 = (float32x2_t *)((char *)v81 + 20);
          FIELD_U32(v33 + (1) * 16, 0x0)[1] = v87;
          FIELD_U32(v33 + (1) * 16, 0x0)[2] = v88;
          FIELD_U32(v33 + (1) * 16, 0x0)[3] = v89;
          FIELD_U32(v33 + (2) * 16, 0x0)[0] = v90;
          FIELD_U32(v33 + (2) * 16, 0x0)[1] = v91;
          v92 = FIELD_U32(v81, 0x0)[1];
          v93 = FIELD_U32(v81 + (1) * 8, 0x0)[0];
          v94 = FIELD_U32(v81 + (1) * 8, 0x0)[1];
          v95 = FIELD_U32(v81 + (2) * 8, 0x0)[0];
          v96 = FIELD_U32(v81 + (2) * 8, 0x0)[1];
          FIELD_U32(v33 + (2) * 16, 0x0)[2] = FIELD_U32(v81, 0x0)[0];
          FIELD_U32(v33 + (2) * 16, 0x0)[3] = v92;
          FIELD_U32(v33 + (3) * 16, 0x0)[0] = v93;
          FIELD_U32(v33 + (3) * 16, 0x0)[1] = v94;
          FIELD_U32(v33 + (3) * 16, 0x0)[2] = v95;
          FIELD_U32(v33 + (3) * 16, 0x0)[3] = v96;
          v2 = v105;
          v97 = vmulq_f32(v33[3], *(float32x4_t *)v3[12 * v31 + 2].n64_u64);
          v33[3] = v97;
          v116 = v36[1];
          v121 = v36[2];
          v124 = v36[3];
          v98 = vmulq_n_f32(*v36, v97.n128_f32[0]);
          v99 = vmlaq_lane_f32(
                  vmlaq_lane_f32(vmulq_n_f32(*v36, FIELD_F32(v33 + (1) * 16, 0x0)[0]), v116, (float32x2_t)FIELD_U64(v33 + (1) * 16, 0x0)[0], 1),
                  v121,
                  *(float32x2_t *)&FIELD_U32(v33 + (1) * 16, 0x0)[8],
                  0);
          v100 = vmlaq_lane_f32(
                   vmlaq_lane_f32(vmulq_n_f32(*v36, FIELD_F32(v33 + (2) * 16, 0x0)[0]), v116, (float32x2_t)FIELD_U64(v33 + (2) * 16, 0x0)[0], 1),
                   v121,
                   *(float32x2_t *)&FIELD_U32(v33 + (2) * 16, 0x0)[8],
                   0);
          *v33 = vmlaq_lane_f32(
                   vmlaq_lane_f32(vmulq_n_f32(*v36, FIELD_F32(v33, 0x0)[0]), v116, (float32x2_t)FIELD_U64(v33, 0x0)[0], 1),
                   v121,
                   *(float32x2_t *)&FIELD_U32(v33, 0x0)[8],
                   0);
          v33[1] = v99;
          v33[2] = v100;
          v33[3] = vaddq_f32(
                     v124,
                     vmlaq_lane_f32(
                       vmlaq_lane_f32(v98, v116, (float32x2_t)v97.n128_u64[0], 1),
                       v121,
                       *(float32x2_t *)&v97.n128_i8[8],
                       0));
          goto LABEL_19;
        }
        v115 = *v36;
        v120 = v36[2];
        v112 = v36[3];
        v60 = &v3[12 * v30];
        v61 = &v3[4 * v32 + 2];
        v62.n64_u64[0] = FIELD_U64(v61, 0x0)[0];
        v63 = FIELD_U64(v61 + (1) * 8, 0x0)[0];
        v64 = v36 + 1;
        v58 = v33 + 3;
        v65 = v60 + 6;
        v66 = vmulq_n_f32(v115, v62.n64_f32[0]);
        v67 = vmulq_n_f32(v120, *(float *)&v63);
        v68 = vmulq_lane_f32(*v64, v62, 1);
        *v33 = v66;
        v33[1] = v68;
        v33[2] = v67;
        v33[3] = v112;
        v69.n64_u64[0] = FIELD_U64(v60 + (4) * 8, 0x0)[0];
        v70.n64_u64[0] = FIELD_U64(v60 + (5) * 8, 0x0)[0];
        v71 = v60 + 10;
        v60 += 8;
        v72 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v66, v69.n64_f32[0]), v68, v69, 1), v67, v70, 0);
        v73.n64_u64[0] = FIELD_U64(v60, 0x0)[0];
        v74.n64_u64[0] = FIELD_U64(v60 + (1) * 8, 0x0)[0];
        v75 = vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(v66, FIELD_F32(v71, 0x0)[0]), v68, (float32x2_t)FIELD_U64(v71, 0x0)[0], 1),
                v67,
                v71[1],
                0);
        v76 = vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(v66, FIELD_F32(v65, 0x0)[0]), v68, (float32x2_t)FIELD_U64(v65, 0x0)[0], 1),
                v67,
                v65[1],
                0);
        *v33 = v72;
        v33[1] = v76;
        v59 = vaddq_f32(v112, v75);
        v33[2] = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v66, v73.n64_f32[0]), v68, v73, 1), v67, v74, 0);
      }
      *v58 = v59;
LABEL_19:
      v101 = v111;
      if ( v110 == v111 )
      {
        v102 = FIELD_U32(v2, 12);
        v106 = FIELD_U32(v2, 16) + ((_DWORD)v110 << 6);
        v107 = (int)&v3[12 * (int)v110 + 2];
        v108 = v102 + 96 * (_DWORD)v110;
        (*(void (__fastcall **)(_DWORD, float32x2_t ***, int *))(**(_DWORD **)(v2 + 44) + 8))(
          FIELD_U32(v2, 44),
          &v109,
          &v106);
        v101 = v111;
      }
      result = (int)FIELD_U32(v101, 0x0) + 1;
      v111 = (float32x2_t *)((char *)FIELD_U64(v101, 0x0) + 1);
    }
    while ( (int)FIELD_U32(v101, 0x0) + 1 < v4 );
  }
  if ( v4 )
  {
    result = (int)&v3[2];
    do
    {
      if ( (*(_DWORD *)(result - 16) & 0x3000000) != 0x3000000 )
      {
        v103.n64_u64[0] = *(unsigned __int64 *)result;
        v117 = v5[1];
        v104 = vmulq_n_f32(v5[2], FIELD_F32(result, 8));
        *v5 = vmulq_n_f32(*v5, *(float *)result);
        v5[1] = vmulq_lane_f32(v117, v103, 1);
        v5[2] = v104;
      }
      v5 += 4;
      result += 96;
      --v4;
    }
    while ( v4 );
  }
  return result;
}

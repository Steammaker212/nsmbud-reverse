/* sub_6087CA60
 * address: 0x6087CA60   size: 1152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087CA60(int a1, int a2)
{
  float32x2_t *v2; // r9
  int v3; // r11
  float32x4_t *v4; // r10
  int v5; // r4
  unsigned __int32 *v6; // r1
  unsigned __int32 v7; // r2
  unsigned __int32 v8; // r3
  unsigned __int32 v9; // r4
  unsigned __int32 v10; // r5
  unsigned __int32 v11; // r7
  unsigned __int32 v12; // r2
  unsigned __int32 v13; // r3
  unsigned __int32 v14; // r4
  unsigned __int32 v15; // r5
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
  int v26; // r2
  unsigned __int32 v27; // r1
  unsigned __int32 v28; // r2
  unsigned __int32 v29; // r3
  int v30; // r1
  int result; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r2
  int v35; // r4
  int v36; // r12
  float32x4_t *v37; // r7
  float32x4_t *v38; // lr
  unsigned __int32 v39; // r3
  float32x2_t *v40; // r8
  float32x2_t *v41; // r5
  int v42; // r0
  unsigned __int32 v43; // r1
  unsigned __int32 v44; // r3
  unsigned __int32 v45; // r4
  unsigned __int32 v46; // r5
  unsigned __int32 v47; // r6
  unsigned __int32 *v48; // r7
  unsigned __int32 *v49; // lr
  unsigned __int32 v50; // r1
  unsigned __int32 v51; // r3
  unsigned __int32 v52; // r4
  unsigned __int32 v53; // r5
  unsigned __int32 v54; // r6
  unsigned __int32 v55; // r3
  unsigned __int32 v56; // r4
  unsigned __int32 v57; // r5
  unsigned __int32 v58; // r6
  unsigned __int32 v59; // r12
  float32x2_t *v60; // r4
  float32x2_t *v61; // r3
  float32x4_t v62; // q9
  float32x4_t v63; // q12
  float32x4_t v64; // q13
  float32x4_t v65; // q8
  unsigned __int32 v66; // r1
  unsigned __int32 v67; // r2
  unsigned __int32 *v68; // r3
  unsigned __int32 v69; // r4
  unsigned __int32 v70; // r5
  unsigned __int32 v71; // r6
  unsigned __int32 v72; // r1
  unsigned __int32 v73; // r2
  unsigned __int32 v74; // r4
  unsigned __int32 v75; // r5
  unsigned __int32 v76; // r6
  unsigned __int32 v77; // r2
  unsigned __int32 v78; // r4
  unsigned __int32 v79; // r5
  unsigned __int32 v80; // r6
  unsigned __int32 v81; // r11
  float32x4_t v82; // q0
  float32x4_t v83; // q11
  float32x4_t v84; // q8
  float32x4_t v85; // q12
  float32x4_t *v86; // r1
  float32x4_t *v87; // r0
  unsigned __int32 v88; // r2
  unsigned __int32 v89; // r3
  unsigned __int32 v90; // r7
  unsigned __int32 v91; // r1
  int v92; // r1
  int v93; // r1
  float32x2_t v94; // d0
  float32x4_t v95; // q9
  int v96; // [sp+4h] [bp-54h]
  int v97; // [sp+8h] [bp-50h]
  int v98; // [sp+Ch] [bp-4Ch]
  int v99; // [sp+10h] [bp-48h]
  int v100; // [sp+14h] [bp-44h]
  int v102; // [sp+1Ch] [bp-3Ch] BYREF
  int v103; // [sp+20h] [bp-38h]
  int v104; // [sp+24h] [bp-34h]
  int *v105; // [sp+28h] [bp-30h] BYREF
  int v106; // [sp+2Ch] [bp-2Ch]
  int v107; // [sp+30h] [bp-28h] BYREF
  float32x4_t v108; // 0:q8.16
  float32x4_t v109; // 0:q9.16
  float32x4_t v110; // 0:q9.16
  float32x4_t v111; // 0:q10.16
  float32x4_t v112; // 0:q10.16
  float32x4_t v113; // 0:q11.16
  float32x4_t v114; // 0:q13.16
  float32x4_t v115; // 0:q14.16
  float32x4_t v116; // 0:q14.16
  float32x4_t v117; // 0:q14.16

  v2 = *(float32x2_t **)(a1 + 12);
  v3 = FIELD_U16(a1, 40);
  v4 = *(float32x4_t **)(a1 + 16);
  v5 = FIELD_U32(a1, 20);
  v99 = v5;
  if ( (FIELD_U32(v2, 0x0)[0] & 0xC000000) == 0xC000000 )
  {
    v7 = *(_DWORD *)a2;
    v8 = FIELD_U32(a2, 4);
    v9 = FIELD_U32(a2, 8);
    v10 = FIELD_U32(a2, 12);
    v11 = FIELD_U32(a2, 16);
    v6 = (unsigned __int32 *)(a2 + 20);
    FIELD_U32(v4, 0x0)[0] = v7;
    FIELD_U32(v4, 0x0)[1] = v8;
    FIELD_U32(v4, 0x0)[2] = v9;
    FIELD_U32(v4, 0x0)[3] = v10;
    v4[1].n128_u32[0] = v11;
    v12 = *v6;
    v13 = v6[1];
    v14 = v6[2];
    v15 = v6[3];
    v16 = v6[4];
    v6 += 5;
    v4[1].n128_u32[1] = v12;
    v4[1].n128_u32[2] = v13;
    v4[1].n128_u32[3] = v14;
    v4[2].n128_u32[0] = v15;
    v4[2].n128_u32[1] = v16;
    v17 = v6[1];
    v18 = v6[2];
    v19 = v6[3];
    v20 = v6[4];
    v21 = v6[5];
    v4[2].n128_u32[2] = *v6;
    v4[2].n128_u32[3] = v17;
    v4[3].n128_u32[0] = v18;
    v4[3].n128_u32[1] = v19;
    v4[3].n128_u32[2] = v20;
    v4[3].n128_u32[3] = v21;
    v5 = v99;
  }
  else
  {
    v22.n64_u64[0] = v2[11].n64_u64[0];
    v109 = *(float32x4_t *)(a2 + 16);
    v113 = *(float32x4_t *)(a2 + 32);
    v115 = *(float32x4_t *)(a2 + 48);
    v23 = vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, v2[10].n64_f32[0]), v109, v2[10], 1);
    v24 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, v2[6].n64_f32[0]), v109, v2[6], 1),
            v113,
            v2[7],
            0);
    v25 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, v2[8].n64_f32[0]), v109, v2[8], 1),
            v113,
            v2[9],
            0);
    *v4 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, v2[4].n64_f32[0]), v109, v2[4], 1),
            v113,
            v2[5],
            0);
    v4[1] = v24;
    v4[2] = v25;
    v4[3] = vaddq_f32(v115, vmlaq_lane_f32(v23, v113, v22, 0));
  }
  v26 = FIELD_U32(v2, 0x0)[0] & 0x3000000;
  FIELD_U32(v2, 0x0)[0] = (16 * FIELD_U32(v2, 0x0)[0]) & 0x30000000 | FIELD_U32(v2, 0x0)[0] & 0xFFFFFFF;
  if ( v26 == 50331648 )
  {
    *(_QWORD *)v5 = 0x3F8000003F800000LL;
    FIELD_U64(v5, 8) = 1065353216;
  }
  else
  {
    v27 = v2[2].n64_u32[1];
    v28 = v2[3].n64_u32[0];
    v29 = v2[3].n64_u32[1];
    *(_DWORD *)v5 = v2[2].n64_u32[0];
    FIELD_U32(v5, 4) = v27;
    FIELD_U32(v5, 8) = v28;
    FIELD_U32(v5, 12) = v29;
  }
  v107 = 0;
  v30 = FIELD_U16(a1, 42);
  v105 = &v107;
  result = 1;
  v106 = v30;
  if ( !v30 )
  {
    v32 = FIELD_U32(a1, 12);
    v102 = FIELD_U32(a1, 16);
    v103 = v5;
    v104 = v32;
    (*(void (__fastcall **)(_DWORD, int **, int *))(**(_DWORD **)(a1 + 44) + 8))(FIELD_U32(a1, 44), &v105, &v102);
    result = v107 + 1;
  }
  v107 = result;
  if ( result < v3 )
  {
    v96 = v3;
    do
    {
      v33 = FIELD_U32(a1, 8) + 96 * result;
      v34 = FIELD_U16(v33, 40);
      v35 = FIELD_U16(v33, 42);
      v36 = 3 * v35;
      v37 = &v4[4 * v35];
      v38 = &v4[4 * v34];
      v40 = &v2[12 * v34];
      v39 = FIELD_U32(v40, 0x0)[0];
      v41 = &v2[12 * v35];
      FIELD_U32(v40, 0x0)[0] = FIELD_U32(v41, 0x0)[0] & (16 * FIELD_U32(v40, 0x0)[0]) & 0xF0000000 | FIELD_U32(v40, 0x0)[0] & 0xFFFFFFF;
      v100 = 3 * v34;
      if ( (v39 & 0xC000000) == 0xC000000 )
      {
        v42 = v35;
        v43 = FIELD_U32(v37, 0x0)[0];
        v44 = FIELD_U32(v37, 0x0)[1];
        v45 = FIELD_U32(v37, 0x0)[2];
        v46 = FIELD_U32(v37, 0x0)[3];
        v47 = v37[1].n128_u32[0];
        v48 = &v37[1].n128_u32[1];
        FIELD_U32(v38, 0x0)[0] = v43;
        FIELD_U32(v38, 0x0)[1] = v44;
        FIELD_U32(v38, 0x0)[2] = v45;
        FIELD_U32(v38, 0x0)[3] = v46;
        v38[1].n128_u32[0] = v47;
        v49 = &v38[1].n128_u32[1];
        v50 = *v48;
        v51 = v48[1];
        v52 = v48[2];
        v53 = v48[3];
        v54 = v48[4];
        v48 += 5;
        *v49 = v50;
        v49[1] = v51;
        v49[2] = v52;
        v49[3] = v53;
        v49[4] = v54;
        v49 += 5;
        v55 = v48[1];
        v56 = v48[2];
        v57 = v48[3];
        v58 = v48[4];
        v59 = v48[5];
        *v49 = *v48;
        v49[1] = v55;
        v49[2] = v56;
        v49[3] = v57;
        v49[4] = v58;
        v49[5] = v59;
        v5 = v99;
      }
      else
      {
        v98 = v35;
        v60 = &v2[12 * v34];
        v61 = v60 + 4;
        if ( (FIELD_U32(v41, 0x0)[0] & 0x30000000) == 0x30000000 )
        {
          v111 = v37[1];
          v108 = v37[2];
          v116 = v37[3];
          v62 = vmlaq_lane_f32(
                  vmlaq_lane_f32(vmulq_n_f32(*v37, v60[10].n64_f32[0]), v111, v60[10], 1),
                  v108,
                  v60[11],
                  0);
          v63 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v37, v60[6].n64_f32[0]), v111, v60[6], 1), v108, v60[7], 0);
          v64 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v37, v60[8].n64_f32[0]), v111, v60[8], 1), v108, v60[9], 0);
          *v38 = vmlaq_lane_f32(
                   vmlaq_lane_f32(vmulq_n_f32(*v37, FIELD_F32(v61, 0x0)[0]), v111, (float32x2_t)FIELD_U64(v61, 0x0)[0], 1),
                   v108,
                   v60[5],
                   0);
          v65 = vaddq_f32(v116, v62);
          v38[1] = v63;
          v38[2] = v64;
        }
        else
        {
          v97 = v34;
          v66 = FIELD_U32(v61, 0x0)[0];
          v67 = v60[4].n64_u32[1];
          v69 = v60[5].n64_u32[0];
          v70 = v61[1].n64_u32[1];
          v71 = v61[2].n64_u32[0];
          v68 = &v61[2].n64_u32[1];
          FIELD_U32(v38, 0x0)[0] = v66;
          FIELD_U32(v38, 0x0)[1] = v67;
          FIELD_U32(v38, 0x0)[2] = v69;
          FIELD_U32(v38, 0x0)[3] = v70;
          v38[1].n128_u32[0] = v71;
          v72 = *v68;
          v73 = v68[1];
          v74 = v68[2];
          v75 = v68[3];
          v76 = v68[4];
          v68 += 5;
          v38[1].n128_u32[1] = v72;
          v38[1].n128_u32[2] = v73;
          v38[1].n128_u32[3] = v74;
          v38[2].n128_u32[0] = v75;
          v38[2].n128_u32[1] = v76;
          v77 = v68[1];
          v78 = v68[2];
          v79 = v68[3];
          v80 = v68[4];
          v81 = v68[5];
          v38[2].n128_u32[2] = *v68;
          v38[2].n128_u32[3] = v77;
          v38[3].n128_u32[0] = v78;
          v38[3].n128_u32[1] = v79;
          v38[3].n128_u32[2] = v80;
          v38[3].n128_u32[3] = v81;
          v34 = v97;
          v3 = v96;
          v82 = vmulq_f32(v38[3], *(float32x4_t *)v2[4 * v36 + 2].n64_u64);
          v38[3] = v82;
          v110 = v37[1];
          v114 = v37[2];
          v117 = v37[3];
          v83 = vmulq_n_f32(*v37, v82.n128_f32[0]);
          v84 = vmlaq_lane_f32(
                  vmlaq_lane_f32(vmulq_n_f32(*v37, v38[1].n128_f32[0]), v110, (float32x2_t)v38[1].n128_u64[0], 1),
                  v114,
                  *(float32x2_t *)&v38[1].n128_i8[8],
                  0);
          v85 = vmlaq_lane_f32(
                  vmlaq_lane_f32(vmulq_n_f32(*v37, v38[2].n128_f32[0]), v110, (float32x2_t)v38[2].n128_u64[0], 1),
                  v114,
                  *(float32x2_t *)&v38[2].n128_i8[8],
                  0);
          *v38 = vmlaq_lane_f32(
                   vmlaq_lane_f32(vmulq_n_f32(*v37, FIELD_F32(v38, 0x0)[0]), v110, (float32x2_t)FIELD_U64(v38, 0x0)[0], 1),
                   v114,
                   *(float32x2_t *)&FIELD_U32(v38, 0x0)[8],
                   0);
          v38[1] = v84;
          v65 = vaddq_f32(
                  v117,
                  vmlaq_lane_f32(
                    vmlaq_lane_f32(v83, v110, (float32x2_t)v82.n128_u64[0], 1),
                    v114,
                    *(float32x2_t *)&v82.n128_i8[8],
                    0));
          v38[2] = v85;
        }
        v38[3] = v65;
        v5 = v99;
        v42 = v98;
      }
      v86 = (float32x4_t *)(v5 + 16 * v42);
      v87 = (float32x4_t *)(v5 + 16 * v34);
      if ( (FIELD_U32(v40, 0x0)[0] & 0x3000000) == 0x3000000 )
      {
        v88 = FIELD_U32(v86, 0x0)[0];
        v89 = FIELD_U32(v86, 0x0)[1];
        v90 = FIELD_U32(v86, 0x0)[2];
        v91 = FIELD_U32(v86, 0x0)[3];
        FIELD_U32(v87, 0x0)[0] = v88;
        FIELD_U32(v87, 0x0)[1] = v89;
        FIELD_U32(v87, 0x0)[2] = v90;
        FIELD_U32(v87, 0x0)[3] = v91;
      }
      else
      {
        *v87 = vmulq_f32(*v86, *(float32x4_t *)v2[4 * v100 + 2].n64_u64);
      }
      v92 = v107;
      if ( v106 == v107 )
      {
        v93 = FIELD_U32(a1, 12);
        v102 = FIELD_U32(a1, 16) + (v106 << 6);
        v103 = v5 + 16 * v106;
        v104 = v93 + 96 * v106;
        (*(void (__fastcall **)(_DWORD, int **, int *))(**(_DWORD **)(a1 + 44) + 8))(FIELD_U32(a1, 44), &v105, &v102);
        v92 = v107;
      }
      result = v92 + 1;
      v107 = v92 + 1;
    }
    while ( v92 + 1 < v3 );
  }
  for ( ; v3; --v3 )
  {
    result = FIELD_U32(v2, 0x0)[0] & 0x30000000;
    if ( result != 805306368 )
    {
      v94.n64_u64[0] = *(unsigned __int64 *)v5;
      result = (int)&v4[1];
      v112 = v4[1];
      v95 = vmulq_n_f32(v4[2], FIELD_F32(v5, 8));
      *v4 = vmulq_n_f32(*v4, *(float *)v5);
      v4[1] = vmulq_lane_f32(v112, v94, 1);
      v4[2] = v95;
    }
    v2 += 12;
    v4 += 4;
    v5 += 16;
  }
  return result;
}

/* sub_6087C164
 * address: 0x6087C164   size: 1000   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087C164(int a1, int a2, double a3)
{
  float32x2_t *v4; // r11
  int v5; // r8
  float32x4_t *v6; // r9
  unsigned __int32 *v7; // r1
  unsigned __int32 v8; // r2
  unsigned __int32 v9; // r3
  unsigned __int32 v10; // r4
  unsigned __int32 v11; // r6
  unsigned __int32 v12; // r7
  unsigned __int32 v13; // r2
  unsigned __int32 v14; // r3
  unsigned __int32 v15; // r4
  unsigned __int32 v16; // r6
  unsigned __int32 v17; // r7
  unsigned __int32 v18; // r3
  unsigned __int32 v19; // r4
  unsigned __int32 v20; // r5
  unsigned __int32 v21; // r6
  unsigned __int32 v22; // r7
  float32x2_t v23; // d1
  float32x4_t v24; // q13
  float32x4_t v25; // q12
  float32x4_t v26; // q8
  float32x2_t *v27; // r1
  int result; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r7
  int v32; // r0
  int v33; // r4
  unsigned __int32 v34; // r3
  float32x2_t *v35; // r6
  float32x4_t *v36; // r1
  float32x4_t *v37; // r0
  unsigned __int32 *v38; // r1
  unsigned __int32 v39; // r2
  unsigned __int32 v40; // r3
  unsigned __int32 v41; // r4
  unsigned __int32 v42; // r6
  unsigned __int32 v43; // r7
  unsigned __int32 *v44; // r0
  unsigned __int32 v45; // r2
  unsigned __int32 v46; // r3
  unsigned __int32 v47; // r4
  unsigned __int32 v48; // r6
  unsigned __int32 v49; // r7
  unsigned __int32 v50; // r3
  unsigned __int32 v51; // r4
  unsigned __int32 v52; // r5
  unsigned __int32 v53; // r6
  unsigned __int32 v54; // r7
  float32x4_t v55; // q8
  float32x4_t v56; // q11
  float32x4_t v57; // q9
  float32x4_t v58; // q10
  float32x2_t *v59; // r2
  float32x2_t *v60; // r6
  float32x2_t v61; // d1
  float32x2_t *v62; // r7
  float32x2_t v63; // d5
  float32x2_t v64; // d7
  float32x4_t v65; // q12
  float32x4_t v66; // q13
  float32x4_t v67; // q14
  float32x4_t v68; // q11
  float32x2_t *v69; // r2
  float32x2_t v70; // d4
  float32x2_t v71; // d5
  float32x2_t v72; // d2
  float32x2_t v73; // d3
  float32x2_t *v74; // r3
  float32x4_t v75; // q8
  float32x4_t v76; // q12
  float32x4_t v77; // q13
  float32x2_t *v78; // r1
  int v79; // r1
  float32x2_t v80; // d0
  float32x4_t v81; // q9
  int v82; // [sp+4h] [bp-3Ch] BYREF
  int v83; // [sp+8h] [bp-38h]
  int v84; // [sp+Ch] [bp-34h]
  float32x2_t **v85; // [sp+10h] [bp-30h] BYREF
  float32x2_t *v86; // [sp+14h] [bp-2Ch]
  float32x2_t *v87; // [sp+18h] [bp-28h] BYREF
  float32x4_t v88; // 0:q9.16
  float32x4_t v89; // 0:q9.16
  float32x4_t v90; // 0:q10.16
  float32x4_t v91; // 0:q11.16
  float32x4_t v92; // 0:q14.16
  float32x4_t v93; // 0:q14.16

  v4 = *(float32x2_t **)(a1 + 12);
  v5 = FIELD_U16(a1, 40);
  v6 = *(float32x4_t **)(a1 + 16);
  if ( (FIELD_U32(v4, 0x0)[0] & 0xC000000) == 0xC000000 )
  {
    v8 = *(_DWORD *)a2;
    v9 = FIELD_U32(a2, 4);
    v10 = FIELD_U32(a2, 8);
    v11 = FIELD_U32(a2, 12);
    v12 = FIELD_U32(a2, 16);
    v7 = (unsigned __int32 *)(a2 + 20);
    FIELD_U32(v6, 0x0)[0] = v8;
    FIELD_U32(v6, 0x0)[1] = v9;
    FIELD_U32(v6, 0x0)[2] = v10;
    FIELD_U32(v6, 0x0)[3] = v11;
    v6[1].n128_u32[0] = v12;
    v13 = *v7;
    v14 = v7[1];
    v15 = v7[2];
    v16 = v7[3];
    v17 = v7[4];
    v7 += 5;
    v6[1].n128_u32[1] = v13;
    v6[1].n128_u32[2] = v14;
    v6[1].n128_u32[3] = v15;
    v6[2].n128_u32[0] = v16;
    v6[2].n128_u32[1] = v17;
    v18 = v7[1];
    v19 = v7[2];
    v20 = v7[3];
    v21 = v7[4];
    v22 = v7[5];
    v6[2].n128_u32[2] = *v7;
    v6[2].n128_u32[3] = v18;
    v6[3].n128_u32[0] = v19;
    v6[3].n128_u32[1] = v20;
    v6[3].n128_u32[2] = v21;
    v6[3].n128_u32[3] = v22;
  }
  else
  {
    a3 = v4[10].n64_f64[0];
    v23.n64_u64[0] = v4[11].n64_u64[0];
    v88 = *(float32x4_t *)(a2 + 16);
    v91 = *(float32x4_t *)(a2 + 32);
    v92 = *(float32x4_t *)(a2 + 48);
    v24 = vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, *(float *)&a3), v88, *(float32x2_t *)&a3, 1);
    v25 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, v4[6].n64_f32[0]), v88, v4[6], 1),
            v91,
            v4[7],
            0);
    v26 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, v4[8].n64_f32[0]), v88, v4[8], 1),
            v91,
            v4[9],
            0);
    *v6 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, v4[4].n64_f32[0]), v88, v4[4], 1),
            v91,
            v4[5],
            0);
    v6[1] = v25;
    v6[2] = v26;
    v6[3] = vaddq_f32(v92, vmlaq_lane_f32(v24, v91, v23, 0));
  }
  FIELD_U32(v4, 0x0)[0] = (16 * FIELD_U32(v4, 0x0)[0]) & 0x30000000 | FIELD_U32(v4, 0x0)[0] & 0xFFFFFFF;
  v87 = 0;
  v27 = (float32x2_t *)FIELD_U16(a1, 42);
  v85 = &v87;
  result = 1;
  v86 = v27;
  if ( !v27 )
  {
    v29 = FIELD_U32(a1, 12);
    v82 = FIELD_U32(a1, 16);
    v83 = (int)&v4[2];
    v84 = v29;
    (*(void (__fastcall **)(_DWORD, float32x2_t ***, int *))(**(_DWORD **)(a1 + 44) + 8))(
      FIELD_U32(a1, 44),
      &v85,
      &v82);
    result = (int)FIELD_U32(v87, 0x0) + 1;
  }
  while ( 1 )
  {
    v87 = (float32x2_t *)result;
    if ( result >= v5 )
      break;
    v30 = FIELD_U32(a1, 8) + 96 * result;
    v31 = FIELD_U16(v30, 40);
    v32 = FIELD_U16(v30, 42);
    v33 = 3 * v32;
    v35 = &v4[12 * v31];
    v34 = FIELD_U32(v35, 0x0)[0];
    FIELD_U32(v35, 0x0)[0] = v4[12 * v32].n64_u32[0] & (16 * FIELD_U32(v35, 0x0)[0]) & 0xF0000000 | FIELD_U32(v35, 0x0)[0] & 0xFFFFFFF;
    v36 = &v6[4 * v32];
    v37 = &v6[4 * v31];
    if ( (v4[4 * v33].n64_u32[0] & 0x3000000) == 0x3000000 )
    {
      if ( (v34 & 0xC000000) == 0xC000000 )
      {
        v39 = FIELD_U32(v36, 0x0)[0];
        v40 = FIELD_U32(v36, 0x0)[1];
        v41 = FIELD_U32(v36, 0x0)[2];
        v42 = FIELD_U32(v36, 0x0)[3];
        v43 = v36[1].n128_u32[0];
        v38 = &v36[1].n128_u32[1];
        FIELD_U32(v37, 0x0)[0] = v39;
        FIELD_U32(v37, 0x0)[1] = v40;
        FIELD_U32(v37, 0x0)[2] = v41;
        FIELD_U32(v37, 0x0)[3] = v42;
        v37[1].n128_u32[0] = v43;
        v44 = &v37[1].n128_u32[1];
        v45 = *v38;
        v46 = v38[1];
        v47 = v38[2];
        v48 = v38[3];
        v49 = v38[4];
        v38 += 5;
        *v44 = v45;
        v44[1] = v46;
        v44[2] = v47;
        v44[3] = v48;
        v44[4] = v49;
        v44 += 5;
        v50 = v38[1];
        v51 = v38[2];
        v52 = v38[3];
        v53 = v38[4];
        v54 = v38[5];
        *v44 = *v38;
        v44[1] = v50;
        v44[2] = v51;
        v44[3] = v52;
        v44[4] = v53;
        v44[5] = v54;
      }
      else
      {
        v69 = &v4[12 * v31];
        v70.n64_u64[0] = v69[4].n64_u64[0];
        v71.n64_u64[0] = v69[5].n64_u64[0];
        v72.n64_u64[0] = v69[6].n64_u64[0];
        v73.n64_u64[0] = v69[7].n64_u64[0];
        v74 = v69 + 10;
        v69 += 8;
        v89 = v36[1];
        a3 = FIELD_F64(v69, 0x0)[0];
        v93 = v36[3];
        v75 = vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(*v36, FIELD_F32(v74, 0x0)[0]), v89, (float32x2_t)FIELD_U64(v74, 0x0)[0], 1),
                v36[2],
                v74[1],
                0);
        v76 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v36, v72.n64_f32[0]), v89, v72, 1), v36[2], v73, 0);
        v77 = vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(*v36, FIELD_F32(v69, 0x0)[0]), v89, (float32x2_t)FIELD_U64(v69, 0x0)[0], 1),
                v36[2],
                v69[1],
                0);
        *v37 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v36, v70.n64_f32[0]), v89, v70, 1), v36[2], v71, 0);
        v37[1] = v76;
        v37[2] = v77;
        v37[3] = vaddq_f32(v93, v75);
      }
    }
    else
    {
      v55 = v36[3];
      a3 = v4[4 * v33 + 2].n64_f64[0];
      v56 = vmulq_n_f32(*v36, *(float *)&a3);
      v57 = vmulq_n_f32(v36[2], v4[4 * v33 + 3].n64_f32[0]);
      v58 = vmulq_lane_f32(v36[1], *(float32x2_t *)&a3, 1);
      *v37 = v56;
      v37[1] = v58;
      v37[2] = v57;
      v37[3] = v55;
      if ( (FIELD_U32(v35, 0x0)[0] & 0xC000000) != 0xC000000 )
      {
        v59 = &v4[12 * v31];
        v60 = v59 + 6;
        a3 = v59[4].n64_f64[0];
        v61.n64_u64[0] = v59[5].n64_u64[0];
        v62 = v59 + 10;
        v59 += 8;
        v63.n64_u64[0] = v62[1].n64_u64[0];
        v64.n64_u64[0] = v59[1].n64_u64[0];
        v65 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v56, *(float *)&a3), v58, *(float32x2_t *)&a3, 1), v57, v61, 0);
        v66 = vmlaq_lane_f32(
                vmlaq_lane_f32(vmulq_n_f32(v56, FIELD_F32(v60, 0x0)[0]), v58, (float32x2_t)FIELD_U64(v60, 0x0)[0], 1),
                v57,
                v60[1],
                0);
        v67 = vmlaq_lane_f32(vmulq_n_f32(v56, FIELD_F32(v62, 0x0)[0]), v58, (float32x2_t)FIELD_U64(v62, 0x0)[0], 1);
        v68 = vmlaq_lane_f32(vmulq_n_f32(v56, FIELD_F32(v59, 0x0)[0]), v58, (float32x2_t)FIELD_U64(v59, 0x0)[0], 1);
        *v37 = v65;
        v37[1] = v66;
        v37[2] = vmlaq_lane_f32(v68, v57, v64, 0);
        v37[3] = vaddq_f32(v55, vmlaq_lane_f32(v67, v57, v63, 0));
      }
    }
    v78 = v87;
    if ( v86 == v87 )
    {
      v79 = FIELD_U32(a1, 12);
      v82 = FIELD_U32(a1, 16) + ((_DWORD)v86 << 6);
      v83 = (int)&v4[12 * (int)v86 + 2];
      v84 = v79 + 96 * (_DWORD)v86;
      (*(void (__fastcall **)(_DWORD, float32x2_t ***, int *, float, float))(**(_DWORD **)(a1 + 44) + 8))(
        FIELD_U32(a1, 44),
        &v85,
        &v82,
        *(float *)&a3,
        *((float *)&a3 + 1));
      v78 = v87;
    }
    result = (int)FIELD_U32(v78, 0x0) + 1;
  }
  if ( v5 )
  {
    result = (int)&v4[2];
    do
    {
      if ( (*(_DWORD *)(result - 16) & 0x3000000) != 0x3000000 )
      {
        v80.n64_u64[0] = *(unsigned __int64 *)result;
        v90 = v6[1];
        v81 = vmulq_n_f32(v6[2], FIELD_F32(result, 8));
        *v6 = vmulq_n_f32(*v6, *(float *)result);
        v6[1] = vmulq_lane_f32(v90, v80, 1);
        v6[2] = v81;
      }
      v6 += 4;
      result += 96;
      --v5;
    }
    while ( v5 );
  }
  return result;
}

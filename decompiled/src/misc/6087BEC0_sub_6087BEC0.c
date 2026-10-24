/* sub_6087BEC0
 * address: 0x6087BEC0   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087BEC0(int a1, int a2, double a3)
{
  float32x2_t *v4; // r9
  int v5; // r11
  float32x4_t *v6; // r10
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
  int v27; // r2
  int result; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r3
  int v32; // r0
  unsigned __int32 v33; // r7
  float32x4_t *v34; // r1
  float32x4_t *v35; // r0
  unsigned __int32 *v36; // r1
  unsigned __int32 v37; // r2
  unsigned __int32 v38; // r3
  unsigned __int32 v39; // r4
  unsigned __int32 v40; // r6
  unsigned __int32 v41; // r7
  unsigned __int32 *v42; // r0
  unsigned __int32 v43; // r2
  unsigned __int32 v44; // r3
  unsigned __int32 v45; // r4
  unsigned __int32 v46; // r6
  unsigned __int32 v47; // r7
  unsigned __int32 v48; // r3
  unsigned __int32 v49; // r4
  unsigned __int32 v50; // r5
  unsigned __int32 v51; // r6
  unsigned __int32 v52; // r7
  float32x2_t *v53; // r2
  float32x2_t v54; // d4
  float32x2_t v55; // d5
  float32x2_t v56; // d2
  float32x2_t v57; // d3
  float32x2_t *v58; // r3
  float32x4_t v59; // q8
  float32x4_t v60; // q12
  float32x4_t v61; // q13
  int v62; // r1
  int v63; // r0
  int v64; // [sp+4h] [bp-3Ch] BYREF
  int v65; // [sp+8h] [bp-38h]
  int v66; // [sp+Ch] [bp-34h]
  int *v67; // [sp+10h] [bp-30h] BYREF
  int v68; // [sp+14h] [bp-2Ch]
  int v69; // [sp+18h] [bp-28h] BYREF
  float32x4_t v70; // 0:q9.16
  float32x4_t v71; // 0:q9.16
  float32x4_t v72; // 0:q11.16
  float32x4_t v73; // 0:q14.16
  float32x4_t v74; // 0:q14.16

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
    FIELD_U32(v6 + (1) * 16, 0x0)[0] = v12;
    v13 = *v7;
    v14 = v7[1];
    v15 = v7[2];
    v16 = v7[3];
    v17 = v7[4];
    v7 += 5;
    FIELD_U32(v6 + (1) * 16, 0x0)[1] = v13;
    FIELD_U32(v6 + (1) * 16, 0x0)[2] = v14;
    FIELD_U32(v6 + (1) * 16, 0x0)[3] = v15;
    FIELD_U32(v6 + (2) * 16, 0x0)[0] = v16;
    FIELD_U32(v6 + (2) * 16, 0x0)[1] = v17;
    v18 = v7[1];
    v19 = v7[2];
    v20 = v7[3];
    v21 = v7[4];
    v22 = v7[5];
    FIELD_U32(v6 + (2) * 16, 0x0)[2] = *v7;
    FIELD_U32(v6 + (2) * 16, 0x0)[3] = v18;
    FIELD_U32(v6 + (3) * 16, 0x0)[0] = v19;
    FIELD_U32(v6 + (3) * 16, 0x0)[1] = v20;
    FIELD_U32(v6 + (3) * 16, 0x0)[2] = v21;
    FIELD_U32(v6 + (3) * 16, 0x0)[3] = v22;
  }
  else
  {
    a3 = FIELD_F64(v4 + (10) * 8, 0x0)[0];
    v23.n64_u64[0] = v4[11].n64_u64[0];
    v70 = *(float32x4_t *)(a2 + 16);
    v72 = *(float32x4_t *)(a2 + 32);
    v73 = *(float32x4_t *)(a2 + 48);
    v24 = vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, *(float *)&a3), v70, *(float32x2_t *)&a3, 1);
    v25 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(v4 + (6) * 8, 0x0)[0]), v70, v4[6], 1),
            v72,
            v4[7],
            0);
    v26 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(v4 + (8) * 8, 0x0)[0]), v70, v4[8], 1),
            v72,
            v4[9],
            0);
    *v6 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(v4 + (4) * 8, 0x0)[0]), v70, v4[4], 1),
            v72,
            v4[5],
            0);
    v6[1] = v25;
    v6[2] = v26;
    v6[3] = vaddq_f32(v73, vmlaq_lane_f32(v24, v72, v23, 0));
  }
  FIELD_U32(v4, 0x0)[0] = (16 * FIELD_U32(v4, 0x0)[0]) & 0x30000000 | FIELD_U32(v4, 0x0)[0] & 0xFFFFFFF;
  v69 = 0;
  v27 = FIELD_U16(a1, 42);
  v67 = &v69;
  result = 1;
  v68 = v27;
  if ( !v27 )
  {
    v29 = FIELD_U32(a1, 12);
    v64 = FIELD_U32(a1, 16);
    v65 = 0;
    v66 = v29;
    (*(void (__fastcall **)(_DWORD, int **, int *))(**(_DWORD **)(a1 + 44) + 8))(FIELD_U32(a1, 44), &v67, &v64);
    result = v69 + 1;
  }
  while ( 1 )
  {
    v69 = result;
    if ( result >= v5 )
      break;
    v30 = FIELD_U32(a1, 8) + 96 * result;
    v31 = FIELD_U16(v30, 40);
    v32 = FIELD_U16(v30, 42);
    v33 = v4[12 * v31].n64_u32[0];
    v4[12 * v31].n64_u32[0] = v4[12 * v32].n64_u32[0] & (16 * v33) & 0xF0000000 | v33 & 0xFFFFFFF;
    v34 = &v6[4 * v32];
    v35 = &v6[4 * v31];
    if ( (v33 & 0xC000000) == 0xC000000 )
    {
      v37 = FIELD_U32(v34, 0x0)[0];
      v38 = FIELD_U32(v34, 0x0)[1];
      v39 = FIELD_U32(v34, 0x0)[2];
      v40 = FIELD_U32(v34, 0x0)[3];
      v41 = FIELD_U32(v34 + (1) * 16, 0x0)[0];
      v36 = &FIELD_U32(v34 + (1) * 16, 0x0)[1];
      FIELD_U32(v35, 0x0)[0] = v37;
      FIELD_U32(v35, 0x0)[1] = v38;
      FIELD_U32(v35, 0x0)[2] = v39;
      FIELD_U32(v35, 0x0)[3] = v40;
      FIELD_U32(v35 + (1) * 16, 0x0)[0] = v41;
      v42 = &FIELD_U32(v35 + (1) * 16, 0x0)[1];
      v43 = *v36;
      v44 = v36[1];
      v45 = v36[2];
      v46 = v36[3];
      v47 = v36[4];
      v36 += 5;
      *v42 = v43;
      v42[1] = v44;
      v42[2] = v45;
      v42[3] = v46;
      v42[4] = v47;
      v42 += 5;
      v48 = v36[1];
      v49 = v36[2];
      v50 = v36[3];
      v51 = v36[4];
      v52 = v36[5];
      *v42 = *v36;
      v42[1] = v48;
      v42[2] = v49;
      v42[3] = v50;
      v42[4] = v51;
      v42[5] = v52;
    }
    else
    {
      v53 = &v4[12 * v31];
      v54.n64_u64[0] = FIELD_U64(v53 + (4) * 8, 0x0)[0];
      v55.n64_u64[0] = FIELD_U64(v53 + (5) * 8, 0x0)[0];
      v56.n64_u64[0] = FIELD_U64(v53 + (6) * 8, 0x0)[0];
      v57.n64_u64[0] = v53[7].n64_u64[0];
      v58 = v53 + 10;
      v53 += 8;
      v71 = v34[1];
      a3 = FIELD_F64(v53, 0x0)[0];
      v74 = v34[3];
      v59 = vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_n_f32(*v34, FIELD_F32(v58, 0x0)[0]), v71, (float32x2_t)FIELD_U64(v58, 0x0)[0], 1),
              v34[2],
              v58[1],
              0);
      v60 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v34, v56.n64_f32[0]), v71, v56, 1), v34[2], v57, 0);
      v61 = vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_n_f32(*v34, FIELD_F32(v53, 0x0)[0]), v71, (float32x2_t)FIELD_U64(v53, 0x0)[0], 1),
              v34[2],
              v53[1],
              0);
      *v35 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v34, v54.n64_f32[0]), v71, v54, 1), v34[2], v55, 0);
      v35[1] = v60;
      v35[2] = v61;
      v35[3] = vaddq_f32(v74, v59);
    }
    v62 = v69;
    if ( v68 == v69 )
    {
      v63 = FIELD_U32(a1, 12) + 96 * v68;
      v64 = FIELD_U32(a1, 16) + (v68 << 6);
      v65 = 0;
      v66 = v63;
      (*(void (__fastcall **)(_DWORD, int **, int *, float, float))(**(_DWORD **)(a1 + 44) + 8))(
        FIELD_U32(a1, 44),
        &v67,
        &v64,
        *(float *)&a3,
        *((float *)&a3 + 1));
      v62 = v69;
    }
    result = v62 + 1;
  }
  return result;
}

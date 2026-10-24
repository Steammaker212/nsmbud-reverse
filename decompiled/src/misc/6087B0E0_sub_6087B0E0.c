/* sub_6087B0E0
 * address: 0x6087B0E0   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087B0E0(int result, int a2)
{
  float32x2_t *v2; // lr
  unsigned int v3; // r8
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
  unsigned __int32 v16; // r4
  unsigned __int32 v17; // r5
  unsigned __int32 v18; // r6
  unsigned __int32 v19; // r7
  unsigned __int32 v20; // r9
  float32x4_t v21; // q13
  float32x4_t v22; // q12
  float32x4_t v23; // q8
  unsigned int v24; // r8
  int v25; // r9
  int v26; // r2
  int v27; // r6
  int v28; // r2
  float32x4_t *v29; // r10
  unsigned __int32 v30; // r7
  float32x4_t *v31; // r4
  unsigned __int32 v32; // r1
  unsigned __int32 v33; // r3
  unsigned __int32 *v34; // r4
  unsigned __int32 v35; // r5
  unsigned __int32 v36; // r6
  unsigned __int32 v37; // r7
  unsigned __int32 *v38; // r10
  unsigned __int32 v39; // r1
  unsigned __int32 v40; // r3
  unsigned __int32 v41; // r5
  unsigned __int32 v42; // r6
  unsigned __int32 v43; // r7
  unsigned __int32 v44; // r2
  unsigned __int32 v45; // r3
  unsigned __int32 v46; // r5
  unsigned __int32 v47; // r6
  unsigned __int32 v48; // r7
  float32x2_t *v49; // r1
  float32x2_t v50; // d6
  float32x2_t v51; // d7
  float32x4_t v52; // q12
  float32x4_t v53; // q13
  float32x4_t v54; // 0:q8.16
  float32x4_t v55; // 0:q9.16
  float32x4_t v56; // 0:q9.16
  float32x4_t v57; // 0:q11.16
  float32x4_t v58; // 0:q14.16
  float32x4_t v59; // 0:q14.16

  v2 = *(float32x2_t **)(result + 12);
  v3 = FIELD_U16(result, 40);
  v4 = *(float32x4_t **)(result + 16);
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
    FIELD_U32(v4 + (1) * 16, 0x0)[0] = v10;
    v11 = *v5;
    v12 = v5[1];
    v13 = v5[2];
    v14 = v5[3];
    v15 = v5[4];
    v5 += 5;
    FIELD_U32(v4 + (1) * 16, 0x0)[1] = v11;
    FIELD_U32(v4 + (1) * 16, 0x0)[2] = v12;
    FIELD_U32(v4 + (1) * 16, 0x0)[3] = v13;
    FIELD_U32(v4 + (2) * 16, 0x0)[0] = v14;
    FIELD_U32(v4 + (2) * 16, 0x0)[1] = v15;
    v16 = v5[1];
    v17 = v5[2];
    v18 = v5[3];
    v19 = v5[4];
    v20 = v5[5];
    FIELD_U32(v4 + (2) * 16, 0x0)[2] = *v5;
    FIELD_U32(v4 + (2) * 16, 0x0)[3] = v16;
    FIELD_U32(v4 + (3) * 16, 0x0)[0] = v17;
    FIELD_U32(v4 + (3) * 16, 0x0)[1] = v18;
    FIELD_U32(v4 + (3) * 16, 0x0)[2] = v19;
    FIELD_U32(v4 + (3) * 16, 0x0)[3] = v20;
  }
  else
  {
    v55 = *(float32x4_t *)(a2 + 16);
    v58 = *(float32x4_t *)(a2 + 48);
    v21 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(v2 + (10) * 8, 0x0)[0]), v55, v2[10], 1),
            *(float32x4_t *)(a2 + 32),
            v2[11],
            0);
    v22 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(v2 + (6) * 8, 0x0)[0]), v55, v2[6], 1),
            *(float32x4_t *)(a2 + 32),
            v2[7],
            0);
    v23 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(v2 + (8) * 8, 0x0)[0]), v55, v2[8], 1),
            *(float32x4_t *)(a2 + 32),
            v2[9],
            0);
    *v4 = vmlaq_lane_f32(
            vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(v2 + (4) * 8, 0x0)[0]), v55, v2[4], 1),
            *(float32x4_t *)(a2 + 32),
            v2[5],
            0);
    v4[1] = v22;
    v4[2] = v23;
    v4[3] = vaddq_f32(v58, v21);
  }
  FIELD_U32(v2, 0x0)[0] = (16 * FIELD_U32(v2, 0x0)[0]) & 0x30000000 | FIELD_U32(v2, 0x0)[0] & 0xFFFFFFF;
  if ( v3 >= 2 )
  {
    v24 = v3 - 1;
    v25 = 0;
    do
    {
      v26 = FIELD_U32(result, 8) + v25;
      v27 = FIELD_U16(v26, 136);
      v28 = FIELD_U16(v26, 138);
      v29 = &v4[4 * v27];
      v30 = v2[12 * v27].n64_u32[0];
      v2[12 * v27].n64_u32[0] = v2[12 * v28].n64_u32[0] & (16 * v30) & 0xF0000000 | v30 & 0xFFFFFFF;
      v31 = &v4[4 * v28];
      if ( (v30 & 0xC000000) == 0xC000000 )
      {
        v32 = FIELD_U32(v31, 0x0)[0];
        v33 = FIELD_U32(v31, 0x0)[1];
        v35 = FIELD_U32(v31, 0x0)[2];
        v36 = FIELD_U32(v31, 0x0)[3];
        v37 = FIELD_U32(v31 + (1) * 16, 0x0)[0];
        v34 = &FIELD_U32(v31 + (1) * 16, 0x0)[1];
        FIELD_U32(v29, 0x0)[0] = v32;
        FIELD_U32(v29, 0x0)[1] = v33;
        FIELD_U32(v29, 0x0)[2] = v35;
        FIELD_U32(v29, 0x0)[3] = v36;
        FIELD_U32(v29 + (1) * 16, 0x0)[0] = v37;
        v38 = &FIELD_U32(v29 + (1) * 16, 0x0)[1];
        v39 = *v34;
        v40 = v34[1];
        v41 = v34[2];
        v42 = v34[3];
        v43 = v34[4];
        v34 += 5;
        *v38 = v39;
        v38[1] = v40;
        v38[2] = v41;
        v38[3] = v42;
        v38[4] = v43;
        v38 += 5;
        v44 = v34[1];
        v45 = v34[2];
        v46 = v34[3];
        v47 = v34[4];
        v48 = v34[5];
        *v38 = *v34;
        v38[1] = v44;
        v38[2] = v45;
        v38[3] = v46;
        v38[4] = v47;
        v38[5] = v48;
      }
      else
      {
        v49 = &v2[12 * v27];
        v54 = *v31;
        v56 = v31[1];
        v50.n64_u64[0] = FIELD_U64(v49 + (10) * 8, 0x0)[0];
        v51.n64_u64[0] = v49[11].n64_u64[0];
        v57 = v31[2];
        v59 = v31[3];
        v52 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v31, FIELD_F32(v49 + (6) * 8, 0x0)[0]), v56, v49[6], 1), v57, v49[7], 0);
        v53 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v31, FIELD_F32(v49 + (8) * 8, 0x0)[0]), v56, v49[8], 1), v57, v49[9], 0);
        *v29 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v31, FIELD_F32(v49 + (4) * 8, 0x0)[0]), v56, v49[4], 1), v57, v49[5], 0);
        v29[1] = v52;
        v29[2] = v53;
        v29[3] = vaddq_f32(
                   v59,
                   vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v54, v50.n64_f32[0]), v56, v50, 1), v57, v51, 0));
      }
      v25 += 96;
      --v24;
    }
    while ( v24 );
  }
  return result;
}

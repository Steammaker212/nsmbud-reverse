/* sub_604028B8
 * address: 0x604028B8   size: 1008   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604028B8(int a1)
{
  float v2; // s0
  float v3; // s6
  float v4; // s4
  float v5; // s2
  float v6; // s0
  int v7; // r0
  float *v8; // r0
  float v9; // s0
  float v10; // s4
  float v11; // s2
  float v12; // s8
  float v13; // s4
  float v14; // s6
  float v15; // s8
  float v16; // s10
  unsigned int v17; // r2
  unsigned int v18; // r1
  unsigned int v19; // r3
  int v20; // r5
  int v21; // s6
  int v22; // r1
  float *v23; // r5
  float *v24; // r6
  float v25; // s4
  float v26; // s6
  float v27; // s8
  float v28; // s14
  float v29; // s9
  float v30; // s7
  float v31; // s11
  float v32; // s16
  float v33; // s13
  float v34; // s3
  float v35; // s1
  float v36; // s5
  float v37; // s10
  float v38; // s6
  unsigned int v39; // s12
  float v40; // s8
  float v41; // s14
  unsigned __int64 v42; // kr00_8
  int32x4_t v43; // q9
  int32x4_t v44; // q15
  float32x4_t v45; // q14
  float32x4_t v46; // q8
  int8x16_t v47; // q9
  int32x4_t v48; // q2
  int8x16_t v49; // q15
  int8x16_t v50; // q10
  float v51; // s0
  float v52; // s0
  float v53; // s0
  float32x2_t v55; // [sp+4h] [bp-8Ch] BYREF
  int32x2_t v56; // [sp+Ch] [bp-84h]
  float32x2_t v57; // [sp+14h] [bp-7Ch]
  int32x2_t v58; // [sp+1Ch] [bp-74h]
  float32x2_t v59; // [sp+24h] [bp-6Ch]
  int32x2_t v60; // [sp+2Ch] [bp-64h]
  float32x4_t v61; // [sp+34h] [bp-5Ch] BYREF
  float32x4_t v62; // [sp+44h] [bp-4Ch]
  float32x4_t v63; // [sp+54h] [bp-3Ch]
  float v64; // [sp+64h] [bp-2Ch]

  v2 = FIELD_F32(a1, 384);
  v3 = FIELD_F32(a1, 380);
  v64 = FIELD_F32(a1, 388);
  v4 = v64;
  v5 = v2 + FIELD_F32(a1, 2628);
  v6 = v3 * FIELD_F32(a1, 2624);
  switch ( FIELD_U32(a1, 2544) )
  {
    case 0:
      v7 = 2600;
      goto LABEL_8;
    case 1:
      v7 = 2604;
      goto LABEL_8;
    case 2:
      v8 = (float *)(a1 + 2608);
      goto LABEL_9;
    case 3:
      v7 = 2612;
      goto LABEL_8;
    case 4:
      v7 = 2616;
      goto LABEL_8;
    case 5:
      v7 = 2620;
LABEL_8:
      v8 = (float *)(a1 + v7);
LABEL_9:
      v4 = v64 - *v8;
      v64 = v4;
      break;
    default:
      break;
  }
  v9 = v6 + FIELD_F32(a1, 392);
  v10 = (float)(v4 + FIELD_F32(a1, 2568)) + FIELD_F32(a1, 400);
  v11 = (float)(v5 + FIELD_F32(a1, 2572)) + FIELD_F32(a1, 396);
  v64 = v10;
  FIELD_F32(a1, 464) = v9;
  FIELD_F32(a1, 468) = v11;
  FIELD_F32(a1, 472) = v10;
  v12 = FIELD_F32(a1, 2588);
  v13 = v12 * FIELD_F32(a1, 404);
  FIELD_F32(a1, 428) = v13;
  v14 = v12 * FIELD_F32(a1, 408);
  FIELD_F32(a1, 432) = v14;
  v15 = v12 * FIELD_F32(a1, 412);
  FIELD_F32(a1, 436) = v15;
  if ( (*(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 16) + 4) + 164) & 0xFFFFFFFE) == 2 )
  {
    v16 = FIELD_F32(a1, 2660);
    FIELD_F32(a1, 428) = v16 * v13;
    FIELD_F32(a1, 432) = v16 * v14;
    FIELD_F32(a1, 436) = v16 * v15;
  }
  v17 = FIELD_U32(a1, 496) + FIELD_U32(a1, 484);
  v18 = FIELD_U32(a1, 492) + FIELD_U32(a1, 480);
  v19 = FIELD_U32(a1, 488) + FIELD_U32(a1, 476);
  v20 = (v18 >> 20) & 0xFF0;
  v21 = v18 & 0xFFFFFF;
  v22 = (v19 >> 20) & 0xFF0;
  v23 = (float *)((char *)sinLutTable + v20);
  v24 = (float *)((char *)sinLutTable + ((v17 >> 20) & 0xFF0));
  v25 = (float)(v17 & 0xFFFFFF) * 0.000000059605;
  v26 = (float)(unsigned int)v21 * 0.000000059605;
  v27 = (float)(v19 & 0xFFFFFF) * 0.000000059605;
  v28 = *v24 + (float)(v25 * v24[1]);
  v29 = *v23 + (float)(v26 * v23[1]);
  v30 = v24[2] + (float)(v25 * v24[3]);
  v31 = v23[2] + (float)(v26 * v23[3]);
  v32 = *(float *)((char *)&sinLutTable[2] + v22) + (float)(v27 * *(float *)((char *)&sinLutTable[3] + v22));
  v33 = *(float *)((char *)sinLutTable + v22) + (float)(*(float *)((char *)&sinLutTable[1] + v22) * v27);
  v34 = -v29;
  v35 = v31 * v28;
  v36 = v33 * v31;
  v61.n128_f32[0] = v31 * v30;
  v62.n128_f32[0] = v31 * v28;
  v63.n128_f32[0] = -v29;
  v37 = (float)(v32 * v30) + (float)((float)(v33 * v29) * v28);
  v38 = (float)(v29 * (float)(v32 * v30)) + (float)(v33 * v28);
  *(float *)&v39 = (float)((float)(v33 * v29) * v30) - (float)(v32 * v28);
  v40 = (float)(v29 * (float)(v32 * v28)) - (float)(v33 * v30);
  v41 = v32 * v31;
  v61.n128_u32[1] = v39;
  v62.n128_f32[1] = v37;
  v63.n128_f32[1] = v33 * v31;
  v61.n128_u64[1] = __PAIR64__(LODWORD(v9), LODWORD(v38));
  v62.n128_u64[1] = __PAIR64__(LODWORD(v11), LODWORD(v40));
  v63.n128_f32[2] = v32 * v31;
  v63.n128_f32[3] = v64;
  v42 = __PAIR64__(v39, v31 * v30);
  if ( FIELD_U32(a1, 2684) )
  {
    sub_60832710((int)&v55, (unsigned int *)(a1 + 2684));
    v43 = vdupq_lane_s32(v56, 1);
    v44 = vdupq_lane_s32(v58, 1);
    v45 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v61, v57.n64_f32[0]), v62, v57, 1), v63, v58, 0);
    v46 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v61, v59.n64_f32[0]), v62, v59, 1), v63, v60, 0);
    v47 = vextq_s8((int8x16_t)vzipq_s32(v43, v43).val, (int8x16_t)0, 0xCu);
    v48 = vdupq_lane_s32(v60, 1);
    v49 = vextq_s8((int8x16_t)vzipq_s32(v44, v44).val, (int8x16_t)0, 0xCu);
    v61 = vaddq_f32(
            vextq_s8(v47, v47, 4u),
            vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v61, v55.n64_f32[0]), v62, v55, 1), v63, v56, 0));
    v50 = vextq_s8((int8x16_t)vzipq_s32(v48, v48).val, (int8x16_t)0, 0xCu);
    v62 = vaddq_f32(vextq_s8(v49, v49, 4u), v45);
    v63 = vaddq_f32(vextq_s8(v50, v50, 4u), v46);
    v41 = v63.n128_f32[2];
    v40 = v62.n128_f32[2];
    v42 = v61.n128_u64[0];
    v38 = v61.n128_f32[2];
    v37 = v62.n128_f32[1];
    v36 = v63.n128_f32[1];
    v34 = v63.n128_f32[0];
    v35 = v62.n128_f32[0];
  }
  v51 = FIELD_F32(a1, 428);
  v61.n128_f32[0] = *(float *)&v42 * v51;
  v62.n128_f32[0] = v51 * v35;
  v63.n128_f32[0] = v34 * v51;
  v52 = FIELD_F32(a1, 432);
  v61.n128_f32[1] = *((float *)&v42 + 1) * v52;
  v62.n128_f32[1] = v52 * v37;
  v63.n128_f32[1] = v36 * v52;
  v53 = FIELD_F32(a1, 436);
  v61.n128_f32[2] = v38 * v53;
  v62.n128_f32[2] = v53 * v40;
  v63.n128_f32[2] = v41 * v53;
  ((void (__fastcall *)(_DWORD, float32x4_t *))loc_60793FF0)(*(_DWORD *)(FIELD_U32(a1, 16) + 4), &v61);
  return skl_root_ref_402CB0(a1, 0);
}

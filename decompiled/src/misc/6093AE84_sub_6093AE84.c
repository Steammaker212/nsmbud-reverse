/* sub_6093AE84
 * address: 0x6093AE84   size: 928   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6093AE84(int a1, int a2, float32x2_t *a3, float32x2_t *a4, int a5, int a6, unsigned __int32 *a7)
{
  int32x2_t v8; // d5
  int32x2_t v9; // d1
  float32x2_t v10; // d2
  int32x2_t v11; // d3
  int32x4_t v12; // q10
  int32x4_t v13; // q13
  float32x4_t v14; // q14
  int8x16_t v15; // q10
  int8x16_t v16; // q13
  float32x4_t v17; // q12
  int32x4_t v18; // q2
  float32x4_t v19; // q9
  int8x16_t v20; // q2
  int32x2_t v21; // d3
  int32x4_t v22; // q12
  int32x4_t v23; // q14
  int32x2_t v24; // d1
  float32x4_t v25; // q13
  int32x4_t v26; // q2
  int8x16_t v27; // q12
  int8x16_t v28; // q14
  float32x4_t v29; // q15
  float32x4_t v30; // q12
  int8x16_t v31; // q1
  float32x4_t v32; // q13
  float32x4_t v33; // q15
  int32x4_t v34; // q11
  float32x4_t v35; // q10
  int8x16_t v36; // q8
  float v37; // s16
  float v38; // s18
  float v39; // s20
  float v40; // s2
  int v41; // r5
  _DWORD *result; // r0
  _DWORD *v43; // r1
  unsigned int v44; // r2
  _DWORD *v45; // r1
  _DWORD *v46; // r1
  _DWORD *v47; // r1
  float v48; // [sp+4h] [bp-ACh] BYREF
  float v49; // [sp+8h] [bp-A8h]
  float v50; // [sp+Ch] [bp-A4h]
  _OWORD v51[4]; // [sp+10h] [bp-A0h] BYREF
  float32x4_t v52; // [sp+50h] [bp-60h] BYREF
  float32x4_t v53; // [sp+60h] [bp-50h]
  float32x4_t v54; // [sp+70h] [bp-40h]
  float32x4_t v55; // 0:q11.16
  float32x4_t v56; // 0:q15.16

  v8.n64_u64[0] = a3[1].n64_u64[0];
  v9.n64_u64[0] = a3[5].n64_u64[0];
  v10.n64_u64[0] = a3[2].n64_u64[0];
  v11.n64_u64[0] = a3[3].n64_u64[0];
  v12 = vdupq_lane_s32(v8, 1);
  v13 = vdupq_lane_s32(v9, 1);
  v14 = vmulq_n_f32(*(float32x4_t *)a2, v10.n64_f32[0]);
  v55 = *(float32x4_t *)(a2 + 16);
  v56 = *(float32x4_t *)(a2 + 32);
  v15 = vextq_s8((int8x16_t)vzipq_s32(v12, v12).val, (int8x16_t)0, 0xCu);
  v16 = vextq_s8((int8x16_t)vzipq_s32(v13, v13).val, (int8x16_t)0, 0xCu);
  v17 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, FIELD_F32(a3, 0x0)[0]), v55, (float32x2_t)FIELD_U64(a3, 0x0)[0], 1),
          v56,
          v8,
          0);
  v18 = vdupq_lane_s32(v11, 1);
  v19 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t *)a2, a3[4].n64_f32[0]), v55, a3[4], 1), v56, v9, 0);
  v20 = vextq_s8((int8x16_t)vzipq_s32(v18, v18).val, (int8x16_t)0, 0xCu);
  v52 = vaddq_f32(vextq_s8(v15, v15, 4u), v17);
  v53 = vaddq_f32(vextq_s8(v20, v20, 4u), vmlaq_lane_f32(vmlaq_lane_f32(v14, v55, v10, 1), v56, v11, 0));
  v54 = vaddq_f32(vextq_s8(v16, v16, 4u), v19);
  *(float32x2_t *)&v20.n128_i8[8] = a4[1];
  v21.n64_u64[0] = a4[3].n64_u64[0];
  v22 = vdupq_lane_s32(*(int32x2_t *)&v20.n128_i8[8], 1);
  v23 = vdupq_lane_s32(v21, 1);
  v24.n64_u64[0] = a4[5].n64_u64[0];
  v25 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(v52, FIELD_F32(a4, 0x0)[0]), v53, (float32x2_t)FIELD_U64(a4, 0x0)[0], 1),
          v54,
          *(float32x2_t *)&v20.n128_i8[8],
          0);
  v26 = vdupq_lane_s32(v24, 1);
  v27 = vextq_s8((int8x16_t)vzipq_s32(v22, v22).val, (int8x16_t)0, 0xCu);
  v28 = vextq_s8((int8x16_t)vzipq_s32(v23, v23).val, (int8x16_t)0, 0xCu);
  v29 = vextq_s8(v27, v27, 4u);
  v30 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v52, a4[2].n64_f32[0]), v53, a4[2], 1), v54, v21, 0);
  v31 = vextq_s8((int8x16_t)vzipq_s32(v26, v26).val, (int8x16_t)0, 0xCu);
  *(float32x2_t *)&v26.n128_i8[8] = a4[7];
  v32 = vaddq_f32(v29, v25);
  v33 = vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(v52, a4[4].n64_f32[0]), v53, a4[4], 1), v54, v24, 0);
  v34 = vdupq_lane_s32(*(int32x2_t *)&v26.n128_i8[8], 1);
  v35 = vmlaq_lane_f32(
          vmlaq_lane_f32(vmulq_n_f32(v52, a4[6].n64_f32[0]), v53, a4[6], 1),
          v54,
          *(float32x2_t *)&v26.n128_i8[8],
          0);
  v51[0] = v32;
  v36 = vextq_s8((int8x16_t)vzipq_s32(v34, v34).val, (int8x16_t)0, 0xCu);
  v51[1] = vaddq_f32(vextq_s8(v28, v28, 4u), v30);
  v51[2] = vaddq_f32(vextq_s8(v31, v31, 4u), v33);
  v51[3] = vaddq_f32(vextq_s8(v36, v36, 4u), v35);
  v26.n128_u32[0] = a7[1];
  v31.n128_u32[2] = *a7;
  v26.n128_u32[2] = a7[2];
  v37 = (float)((float)(v26.n128_f32[0] * FIELD_F32(a3, 0x0)[1]) + (float)(*(float *)a7 * FIELD_F32(a3, 0x0)[0]))
      + (float)(v26.n128_f32[2] * a3[1].n64_f32[0]);
  v48 = v37;
  v38 = (float)((float)(v26.n128_f32[0] * a3[2].n64_f32[1]) + (float)(v31.n128_f32[2] * a3[2].n64_f32[0]))
      + (float)(v26.n128_f32[2] * a3[3].n64_f32[0]);
  v49 = v38;
  v39 = (float)((float)(v26.n128_f32[0] * a3[4].n64_f32[1]) + (float)(v31.n128_f32[2] * a3[4].n64_f32[0]))
      + (float)(v26.n128_f32[2] * a3[5].n64_f32[0]);
  v50 = v39;
  v40 = sqrtf((float)((float)(v38 * v38) + (float)(v37 * v37)) + (float)(v39 * v39));
  if ( v40 > 0.0 )
  {
    v48 = (float)(1.0 / v40) * v37;
    v49 = (float)(1.0 / v40) * v38;
    v50 = (float)(1.0 / v40) * v39;
  }
  if ( FIELD_U32(dword_60CD0B60, 20) )
    v41 = **(_DWORD **)(dword_60CD0B60 + 28);
  else
    v41 = 0;
  result = *(_DWORD **)(v41 + 612);
  v43 = result;
  if ( FIELD_U32(v41, 608) > 1u )
    v43 = result + 3;
  if ( *v43 != -1 )
  {
    sub_6091B890(v43, a1, 12, (int)&v52);
    result = *(_DWORD **)(v41 + 612);
  }
  if ( *result != -1 )
  {
    sub_6091B890(result, a1, 16, (int)v51);
    result = *(_DWORD **)(v41 + 612);
  }
  v44 = FIELD_U32(v41, 608);
  v45 = result;
  if ( v44 > 2 )
    v45 = result + 6;
  if ( *v45 != -1 )
  {
    sub_6091B890(v45, a1, 4, a5);
    v44 = FIELD_U32(v41, 608);
    result = *(_DWORD **)(v41 + 612);
  }
  v46 = result;
  if ( v44 > 3 )
    v46 = result + 9;
  if ( *v46 != -1 )
  {
    sub_6091B890(v46, a1, 4, a6);
    v44 = FIELD_U32(v41, 608);
    result = *(_DWORD **)(v41 + 612);
  }
  v47 = result;
  if ( v44 > 4 )
    v47 = result + 12;
  if ( *v47 != -1 )
  {
    sub_6091B890(v47, a1, 4, (int)&dword_60B45CCC);
    v44 = FIELD_U32(v41, 608);
    result = *(_DWORD **)(v41 + 612);
  }
  if ( v44 > 5 )
    result += 15;
  if ( *result != -1 )
    return (_DWORD *)sub_6091B890(result, a1, 3, (int)&v48);
  return result;
}

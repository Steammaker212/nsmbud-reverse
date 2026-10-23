/* sub_60878E50
 * address: 0x60878E50   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60878E50(double a1, int a2, int a3, int a4, int a5)
{
  float v6; // s16
  float v8; // s22
  unsigned int v9; // r6
  __int64 v10; // r0
  unsigned int v11; // r11
  unsigned int v12; // r5
  __int64 v13; // r0
  float32x4_t v14; // q8
  float v15; // s4
  float *v16; // r3
  float v17; // s8
  float v18; // s10
  float v19; // s12
  float v20; // s14
  float v21; // s4
  float v22; // s0
  float v23; // s6
  float v24; // s8
  float v25; // s5
  float v26; // s10
  float v27; // s9
  float v28; // s13
  float v29; // s11
  float v30; // s1
  float v31; // s5
  float32x4_t v32; // q1
  float v33; // s2
  float32x4_t v34; // q0
  float32x4_t v35; // q9
  float result; // s0

  v6 = *(float *)&a1;
  v8 = (float)nn__util__detail__AngleIndexHalfRound / nn__util__detail__FloatPi;
  v9 = (__int64)(float)(FIELD_F32(a4, 32) * v8);
  v10 = (__int64)(float)(FIELD_F32(a4, 36) * v8);
  v11 = ((unsigned int)v10 >> 20) & 0xFF0;
  v12 = v10 & 0xFFFFFF;
  v13 = (__int64)(float)(FIELD_F32(a4, 40) * v8);
  v14 = vdupq_lane_s32(*(int32x2_t *)&a1, 0);
  v15 = (float)(v13 & 0xFFFFFF);
  LODWORD(v13) = (char *)&nn__util__detail__SinCosSampleTable + (((unsigned int)v13 >> 20) & 0xFF0);
  v16 = (float *)((char *)&nn__util__detail__SinCosSampleTable + ((v9 >> 20) & 0xFF0));
  v17 = *(float *)v13;
  v18 = FIELD_F32(v13, 4);
  v19 = FIELD_F32(v13, 8);
  v20 = FIELD_F32(v13, 12);
  v21 = v15 * 0.000000059605;
  v22 = (float)(v9 & 0xFFFFFF) * 0.000000059605;
  LODWORD(v13) = a3 + 80 * a5;
  v23 = (float)v12 * 0.000000059605;
  v24 = v17 + (float)(v21 * v19);
  v25 = *v16 + (float)(v22 * v16[2]);
  v26 = v18 + (float)(v20 * v21);
  v27 = v16[1] + (float)(v16[3] * v22);
  v28 = *(float *)((char *)&nn__util__detail__SinCosSampleTable + v11 + 4)
      + (float)(*(float *)((char *)&nn__util__detail__SinCosSampleTable + v11 + 12) * v23);
  v29 = *(float *)((char *)&nn__util__detail__SinCosSampleTable + v11)
      + (float)(v23 * *(float *)((char *)&nn__util__detail__SinCosSampleTable + v11 + 8));
  v30 = v25 * v24;
  v31 = v26 * v25;
  v32.n128_u32[3] = 0;
  v32.n128_f32[0] = v29 * v24;
  v33 = v28 * v31;
  v32.n128_f32[1] = (float)((float)(v27 * v28) * v24) - v31;
  v34.n128_f32[0] = v26 * v29;
  v32.n128_f32[2] = (float)(v28 * v30) + (float)(v27 * v26);
  v34.n128_f32[1] = v30 + (float)(v26 * (float)(v27 * v28));
  v34.n128_f32[2] = v33 - (float)(v27 * v24);
  *(float32x4_t *)(v13 + 32) = vmlaq_f32(*(float32x4_t *)(v13 + 32), v14, v32);
  v34.n128_u32[3] = 0;
  *(float32x4_t *)(v13 + 48) = vmlaq_f32(*(float32x4_t *)(v13 + 48), v14, v34);
  v35.n128_u64[0] = FIELD_U64(a4, 4);
  v35.n128_u64[1] = FIELD_U32(a4, 12);
  *(float32x4_t *)v13 = vmlaq_f32(*(float32x4_t *)v13, v14, v35);
  v35.n128_u64[0] = FIELD_U64(a4, 16);
  v35.n128_u32[2] = FIELD_U32(a4, 24);
  *(float32x4_t *)(v13 + 16) = vmlaq_f32(*(float32x4_t *)(v13 + 16), v14, v35);
  FIELD_U32(v13, 64) |= ~*(_DWORD *)a4;
  result = FIELD_F32(v13, 68) + v6;
  FIELD_F32(v13, 68) = result;
  return result;
}

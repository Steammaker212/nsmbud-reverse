/* sub_60879048
 * address: 0x60879048   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60879048(int a1, int a2, int a3, int a4, float a5)
{
  int32x2_t v5; // d8
  float v9; // s22
  unsigned int v10; // r7
  __int64 v11; // r0
  unsigned int v12; // r6
  unsigned int v13; // r5
  __int64 v14; // r0
  float32x4_t v15; // q8
  float *v16; // r3
  unsigned int v17; // s4
  float v18; // s8
  float v19; // s10
  float v20; // s12
  float v21; // s14
  float v22; // s4
  float v23; // s6
  float v24; // s18
  float v25; // s8
  float v26; // s5
  float v27; // s10
  float v28; // s9
  float v29; // s11
  float v30; // s13
  float v31; // s1
  float v32; // s5
  float32x4_t v33; // q1
  float v34; // s2
  float32x4_t v35; // q0
  float32x4_t v36; // q9
  float result; // s0
  int v38; // [sp+0h] [bp-48h] BYREF
  float v39; // [sp+4h] [bp-44h]

  v38 = a4;
  v39 = a5;
  (*(void (__fastcall **)(_DWORD, int *))(**(_DWORD **)(a1 + 16) + 8))(FIELD_U32(a1, 16), &v38);
  v5.n64_f32[0] = v39;
  v9 = (float)nn__util__detail__AngleIndexHalfRound / nn__util__detail__FloatPi;
  v10 = (__int64)(float)(FIELD_F32(a3, 32) * v9);
  v11 = (__int64)(float)(FIELD_F32(a3, 36) * v9);
  v12 = ((unsigned int)v11 >> 20) & 0xFF0;
  v13 = v11 & 0xFFFFFF;
  v14 = (__int64)(float)(FIELD_F32(a3, 40) * v9);
  v15 = vdupq_lane_s32(v5, 0);
  v16 = (float *)((char *)&nn__util__detail__SinCosSampleTable + ((v10 >> 20) & 0xFF0));
  v17 = v14 & 0xFFFFFF;
  LODWORD(v14) = (char *)&nn__util__detail__SinCosSampleTable + (((unsigned int)v14 >> 20) & 0xFF0);
  v18 = *(float *)v14;
  v19 = FIELD_F32(v14, 4);
  v20 = FIELD_F32(v14, 8);
  v21 = FIELD_F32(v14, 12);
  LODWORD(v14) = a2 + 80 * a4;
  v22 = (float)v17 * 0.000000059605;
  v23 = (float)(v10 & 0xFFFFFF) * 0.000000059605;
  v24 = (float)v13 * 0.000000059605;
  v25 = v18 + (float)(v22 * v20);
  v26 = *v16 + (float)(v23 * v16[2]);
  v27 = v19 + (float)(v21 * v22);
  v28 = v16[1] + (float)(v16[3] * v23);
  v29 = *(float *)((char *)&nn__util__detail__SinCosSampleTable + v12)
      + (float)(v24 * *(float *)((char *)&nn__util__detail__SinCosSampleTable + v12 + 8));
  v30 = *(float *)((char *)&nn__util__detail__SinCosSampleTable + v12 + 4)
      + (float)(*(float *)((char *)&nn__util__detail__SinCosSampleTable + v12 + 12) * v24);
  v31 = v26 * v25;
  v32 = v27 * v26;
  v33.n128_u32[3] = 0;
  v33.n128_f32[0] = v29 * v25;
  v34 = v30 * v32;
  v33.n128_f32[1] = (float)((float)(v28 * v30) * v25) - v32;
  v35.n128_f32[0] = v27 * v29;
  v33.n128_f32[2] = (float)(v30 * v31) + (float)(v28 * v27);
  v35.n128_f32[1] = v31 + (float)(v27 * (float)(v28 * v30));
  v35.n128_f32[2] = v34 - (float)(v28 * v25);
  *(float32x4_t *)(v14 + 32) = vmlaq_f32(*(float32x4_t *)(v14 + 32), v15, v33);
  v35.n128_u32[3] = 0;
  *(float32x4_t *)(v14 + 48) = vmlaq_f32(*(float32x4_t *)(v14 + 48), v15, v35);
  v36.n128_u64[0] = FIELD_U64(a3, 4);
  v36.n128_u64[1] = FIELD_U32(a3, 12);
  *(float32x4_t *)v14 = vmlaq_f32(*(float32x4_t *)v14, v15, v36);
  v36.n128_u64[0] = FIELD_U64(a3, 16);
  v36.n128_u32[2] = FIELD_U32(a3, 24);
  *(float32x4_t *)(v14 + 16) = vmlaq_f32(*(float32x4_t *)(v14 + 16), v15, v36);
  FIELD_U32(v14, 64) |= ~*(_DWORD *)a3;
  result = v5.n64_f32[0] + FIELD_F32(v14, 68);
  FIELD_F32(v14, 68) = result;
  return result;
}

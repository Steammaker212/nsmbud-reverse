/* sub_60875CD8
 * address: 0x60875CD8   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60875CD8(_DWORD *result, int a2, int a3)
{
  int v3; // r3
  int v4; // lr
  int v5; // r12
  int v6; // r4
  int v7; // r5
  int v8; // r0
  unsigned __int16 *v9; // r5
  int v10; // r4
  int v11; // r6
  int v12; // r7
  int v13; // r5
  int v14; // r6
  float32x4_t v15; // q0
  float32x4_t *v16; // r1
  float32x4_t *v17; // r2
  float *v18; // lr
  float *v19; // r3
  const float *v20; // r4
  float32x4_t v21; // q2
  float32x4_t v22; // q1
  unsigned int v23; // r7
  float32x2_t v24; // d6
  const float *v25; // r6
  float32x4_t v26; // q6
  float32x4_t v27; // q4
  float32x4_t v28; // q9
  float32x4_t v29; // q8
  float32x4_t v30; // 0:d16.8,8:d17.8
  float32x4_t v31; // 0:d22.8,8:d23.8

  v3 = result[9];
  if ( !v3 )
    return result;
  v4 = *result;
  result = (_DWORD *)*(unsigned __int8 *)(*result + 102);
  if ( result )
    return result;
  v5 = FIELD_U32(v4, 32);
  if ( a3 < 1 )
  {
    v6 = 0;
    goto LABEL_11;
  }
  if ( (a3 & 1) != 0 )
  {
    v6 = FIELD_U16(v5, 52);
    v7 = 1;
    if ( a3 == 1 )
      goto LABEL_11;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    if ( a3 == 1 )
      goto LABEL_11;
  }
  v8 = a3 - v7;
  v9 = (unsigned __int16 *)(v5 + 56 * v7 + 108);
  do
  {
    v8 -= 2;
    v10 = *(v9 - 28) + v6;
    v11 = *v9;
    v9 += 56;
    v6 = v11 + v10;
  }
  while ( v8 );
LABEL_11:
  result = (_DWORD *)*(unsigned __int16 *)(v5 + 56 * a3 + 52);
  if ( *(_WORD *)(v5 + 56 * a3 + 52) )
  {
    v12 = v6 + a3;
    v13 = FIELD_U32(a2, 16);
    v14 = FIELD_U32(v4, 64);
    v15.n128_u32[3] = 0;
    v16 = (float32x4_t *)(v3 + 32 * v6 + 16);
    v17 = (float32x4_t *)(v13 + (FIELD_U16(v4, 96) << 6));
    v18 = (float *)&v17[2];
    v19 = (float *)&v17[1];
    v20 = (const float *)(v14 + 24 * v12 + 20);
    do
    {
      v21.n128_u64[0] = *(_QWORD *)v19;
      v21.n128_u64[1] = v17[1].n128_u64[1];
      v22.n128_u64[0] = *(_QWORD *)v18;
      v22.n128_u64[1] = v17[2].n128_u64[1];
      v23 = *((_DWORD *)v20 - 3);
      v31 = (float32x4_t)vld1q_dup_f32(v20);
      result = (_DWORD *)((char *)result - 1);
      v24.n64_u64[0] = *(unsigned __int64 *)(v20 - 5);
      v30 = (float32x4_t)vld1q_dup_f32(v20 - 2);
      v25 = v20 - 1;
      v20 += 6;
      v15.n128_f32[2] = fabsf(FIELD_F32(v17, 0x0)[2]);
      v26.n128_f32[2] = fabsf(v21.n128_f32[2]);
      v15.n128_f32[1] = fabsf(FIELD_F32(v17, 0x0)[1]);
      v26.n128_f32[1] = fabsf(v17[1].n128_f32[1]);
      v15.n128_f32[0] = fabsf(FIELD_F32(v17, 0x0)[0]);
      v27.n128_f32[2] = fabsf(v22.n128_f32[2]);
      v26.n128_f32[0] = fabsf(*v19);
      v27.n128_f32[1] = fabsf(v17[2].n128_f32[1]);
      v26.n128_u32[3] = 0;
      v27.n128_f32[0] = fabsf(*v18);
      v27.n128_u32[3] = 0;
      v28 = vaddq_f32(
              v17[3],
              vmlaq_lane_f32(vmlaq_lane_f32(vmulq_n_f32(*v17, v24.n64_f32[0]), v21, v24, 1), v22, (float32x2_t)v23, 0));
      v29 = vmlaq_f32(vmlaq_f32(vmulq_f32(v30, v15), (float32x4_t)vld1q_dup_f32(v25), v26), v31, v27);
      v16[-1] = vsubq_f32(v28, v29);
      *v16 = vaddq_f32(v28, v29);
      v16 += 2;
    }
    while ( result );
  }
  return result;
}

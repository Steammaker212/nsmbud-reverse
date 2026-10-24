/* sub_60878A58
 * address: 0x60878A58   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x4_t *__fastcall sub_60878A58(float32x4_t *result, int a2, float a3)
{
  float32x4_t *v5; // r11
  int v6; // r7
  float32x4_t v7; // q5
  unsigned __int32 v8; // r9
  int v9; // r5
  float *v10; // r6
  int v11; // r8
  float v12; // s2
  float v13; // s4
  float v14; // s6
  int32x2_t v15; // d0
  float v16; // s8
  float32x4_t v17; // q8
  float v18; // s5
  float v19; // s14
  float32x4_t v20; // q6
  float32x4_t v21; // q9
  int v22; // [sp+0h] [bp-60h] BYREF
  float v23; // [sp+4h] [bp-5Ch]

  v5 = result;
  v6 = FIELD_U16(a2, 64);
  if ( FIELD_U16(a2, 64) )
  {
    v7.n128_u32[3] = 0;
    v8 = FIELD_U32(result, 0x0)[0];
    v9 = 0;
    v10 = (float *)(FIELD_U32(a2, 48) + 44);
    do
    {
      result = *(float32x4_t **)(a2 + 56);
      if ( FIELD_U32(result, 0x0)[v9] >= 0 )
      {
        v22 = FIELD_U32(result, 0x0)[v9] & 0x7FFF;
        v11 = v22;
        v23 = a3;
        (*(void (__fastcall **)(unsigned __int32, int *))(*(_DWORD *)FIELD_U32(v5 + (1) * 16, 0x0)[0] + 8))(FIELD_U32(v5 + (1) * 16, 0x0)[0], &v22);
        v12 = *(v10 - 3);
        v13 = *(v10 - 2);
        v14 = *(v10 - 1);
        v15.n64_f32[0] = v23;
        result = (float32x4_t *)(v8 + 80 * v11);
        v16 = *v10 + *v10;
        v17 = vdupq_lane_s32(v15, 0);
        v18 = v13 * (float)(v12 + v12);
        v19 = v14 * (float)(v14 + v14);
        v7.n128_f32[1] = v18 - (float)(v14 * v16);
        v20.n128_f32[1] = (float)(1.0 - (float)(v12 * (float)(v12 + v12))) - v19;
        v7.n128_f32[0] = (float)(1.0 - (float)(v13 * (float)(v13 + v13))) - v19;
        v20.n128_f32[0] = v18 + (float)(v14 * v16);
        v7.n128_f32[2] = (float)(v13 * v16) + (float)(v14 * (float)(v12 + v12));
        v20.n128_f32[2] = (float)((float)(v13 + v13) * v14) - (float)(v12 * v16);
        v20.n128_u32[3] = 0;
        result[2] = vmlaq_f32(result[2], v17, v7);
        result[3] = vmlaq_f32(result[3], v17, v20);
        v21.n128_u64[0] = *((_QWORD *)v10 - 5);
        v21.n128_u64[1] = *((unsigned int *)v10 - 8);
        *result = vmlaq_f32(*result, v17, v21);
        v21.n128_u64[0] = *(_QWORD *)(v10 - 7);
        v21.n128_u64[1] = *((unsigned int *)v10 - 5);
        result[1] = vmlaq_f32(result[1], v17, v21);
        FIELD_U32(result + (4) * 16, 0x0)[0] |= ~*((_DWORD *)v10 - 11);
        FIELD_F32(result + (4) * 16, 0x0)[1] = v15.n64_f32[0] + FIELD_F32(result + (4) * 16, 0x0)[1];
      }
      ++v9;
      v10 += 12;
    }
    while ( v6 != v9 );
  }
  return result;
}

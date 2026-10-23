/* sub_608786F4
 * address: 0x608786F4   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608786F4(int *result, int a2, double a3)
{
  int *v3; // r2
  int v4; // lr
  float32x4_t v5; // q1
  int32x4_t v6; // q8
  float *v7; // r3
  float v8; // s8
  float v9; // s10
  float v10; // s12
  float32x4_t *v11; // r4
  float v12; // s14
  float v13; // s15
  float v14; // s11
  float32x4_t v15; // q4
  float32x4_t v16; // q9

  v3 = (int *)FIELD_U16(a2, 64);
  if ( FIELD_U16(a2, 64) )
  {
    v4 = *result;
    v5.n128_u32[3] = 0;
    v6 = vdupq_lane_s32(*(int32x2_t *)&a3, 0);
    v7 = (float *)(FIELD_U32(a2, 48) + 44);
    result = 0;
    do
    {
      if ( *(int *)(FIELD_U32(a2, 56) + 4 * (_DWORD)result) >= 0 )
      {
        v8 = *(v7 - 3);
        v9 = *(v7 - 2);
        v10 = *(v7 - 1);
        v11 = (float32x4_t *)(v4 + 80 * (*(_DWORD *)(FIELD_U32(a2, 56) + 4 * (_DWORD)result) & 0x7FFF));
        v12 = *v7 + *v7;
        v13 = v9 * (float)(v8 + v8);
        v14 = v10 * (float)(v10 + v10);
        v5.n128_f32[1] = v13 - (float)(v10 * v12);
        v5.n128_f32[0] = (float)(1.0 - (float)(v9 * (float)(v9 + v9))) - v14;
        v5.n128_f32[2] = (float)(v9 * v12) + (float)(v10 * (float)(v8 + v8));
        v15.n128_f32[1] = (float)(1.0 - (float)(v8 * (float)(v8 + v8))) - v14;
        v15.n128_f32[0] = v13 + (float)(v10 * v12);
        v15.n128_f32[2] = (float)((float)(v9 + v9) * v10) - (float)(v8 * v12);
        v11[2] = vmlaq_f32(v11[2], v6, v5);
        v15.n128_u32[3] = 0;
        v11[3] = vmlaq_f32(v11[3], v6, v15);
        v16.n128_u64[0] = *((_QWORD *)v7 - 5);
        v16.n128_u64[1] = *((unsigned int *)v7 - 8);
        *v11 = vmlaq_f32(*v11, v6, v16);
        v16.n128_u64[0] = *(_QWORD *)(v7 - 7);
        v16.n128_u64[1] = *((unsigned int *)v7 - 5);
        v11[1] = vmlaq_f32(v11[1], v6, v16);
        v11[4].n128_u32[0] |= ~*((_DWORD *)v7 - 11);
        v11[4].n128_f32[1] = v11[4].n128_f32[1] + *(float *)&a3;
      }
      result = (int *)((char *)result + 1);
      v7 += 12;
    }
    while ( v3 != result );
  }
  return result;
}

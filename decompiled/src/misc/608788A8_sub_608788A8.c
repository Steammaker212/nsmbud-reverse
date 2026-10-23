/* sub_608788A8
 * address: 0x608788A8   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608788A8(int *result, int a2, double a3)
{
  float v4; // s16
  int v5; // r10
  int v6; // r8
  int v7; // r5
  int32x4_t v8; // q5
  int v9; // r7
  float32x4_t *v10; // r6
  float32x4_t v11; // q8

  v4 = *(float *)&a3;
  v5 = FIELD_U16(a2, 64);
  if ( FIELD_U16(a2, 64) )
  {
    v6 = *result;
    v7 = FIELD_U32(a2, 48);
    v8 = vdupq_lane_s32(*(int32x2_t *)&a3, 0);
    v9 = 0;
    do
    {
      result = *(int **)(FIELD_U32(a2, 56) + 4 * v9);
      if ( (int)result >= 0 )
      {
        v10 = (float32x4_t *)(v6 + 80 * (*(_DWORD *)(FIELD_U32(a2, 56) + 4 * v9) & 0x7FFF));
        sub_60879FC0(v10, v7, v4);
        v11.n128_u64[0] = FIELD_U64(v7, 4);
        v11.n128_u64[1] = FIELD_U32(v7, 12);
        *v10 = vmlaq_f32(*v10, v8, v11);
        v11.n128_u64[0] = FIELD_U64(v7, 16);
        v11.n128_u64[1] = FIELD_U32(v7, 24);
        v10[1] = vmlaq_f32(v10[1], v8, v11);
        result = (int *)(v10[4].n128_u32[0] | ~*(_DWORD *)v7);
        v10[4].n128_u32[0] = (unsigned __int32)result;
        v10[4].n128_f32[1] = v10[4].n128_f32[1] + v4;
      }
      ++v9;
      v7 += 48;
    }
    while ( v5 != v9 );
  }
  return result;
}

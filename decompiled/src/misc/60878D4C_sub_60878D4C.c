/* sub_60878D4C
 * address: 0x60878D4C   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60878D4C(_DWORD *result, int a2, float a3)
{
  int32x2_t v3; // d9
  _DWORD *v6; // r9
  int v7; // r5
  int v8; // r10
  int v9; // r6
  int v10; // r8
  int v11; // r7
  float32x4_t *v12; // r7
  float32x4_t v13; // q10
  float32x4_t v14; // q8
  int v15; // [sp+0h] [bp-40h] BYREF
  float v16; // [sp+4h] [bp-3Ch]

  v6 = result;
  v7 = FIELD_U16(a2, 64);
  if ( FIELD_U16(a2, 64) )
  {
    v8 = *result;
    v9 = FIELD_U32(a2, 48);
    v10 = 0;
    do
    {
      result = *(_DWORD **)(a2 + 56);
      if ( (int)result[v10] >= 0 )
      {
        v15 = result[v10] & 0x7FFF;
        v11 = v15;
        v16 = a3;
        (*(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)v6[4] + 8))(v6[4], &v15);
        v3.n64_f32[0] = v16;
        v12 = (float32x4_t *)(v8 + 80 * v11);
        sub_6087A590(v12, v9, v16);
        v13 = vdupq_lane_s32(v3, 0);
        v14.n128_u64[0] = FIELD_U64(v9, 4);
        v14.n128_u64[1] = FIELD_U32(v9, 12);
        *v12 = vmlaq_f32(*v12, v13, v14);
        v14.n128_u64[0] = FIELD_U64(v9, 16);
        v14.n128_u64[1] = FIELD_U32(v9, 24);
        v12[1] = vmlaq_f32(v12[1], v13, v14);
        result = (_DWORD *)(FIELD_U32(v12 + (4) * 16, 0x0)[0] | ~*(_DWORD *)v9);
        FIELD_U32(v12 + (4) * 16, 0x0)[0] = (unsigned __int32)result;
        FIELD_F32(v12 + (4) * 16, 0x0)[1] = v3.n64_f32[0] + FIELD_F32(v12 + (4) * 16, 0x0)[1];
      }
      ++v10;
      v9 += 48;
    }
    while ( v7 != v10 );
  }
  return result;
}

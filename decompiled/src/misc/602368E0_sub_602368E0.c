/* sub_602368E0
 * address: 0x602368E0   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int32x4_t *__fastcall sub_602368E0(int32x4_t *a1)
{
  int32x4_t *result; // r0
  unsigned __int32 v3; // r1
  unsigned __int32 v4; // t1
  int8x16_t v5; // q13
  int32x4_t v6; // q10
  int32x4_t v7; // q8
  int8x16_t v8; // q13
  int32x4_t v9; // q11
  int32x4_t v10; // q9
  int32x4_t v11[2]; // [sp+0h] [bp-48h] BYREF
  int8x16_t v12; // [sp+20h] [bp-28h] BYREF
  int32x4_t v13; // [sp+30h] [bp-18h] BYREF
  int32x4x2_t v14; // 0:q8.16,16:q9.16
  int32x4x2_t v15; // 0:q10.16,16:q11.16

  v4 = a1[3].n128_u32[1];
  result = (int32x4_t *)((char *)a1 + 52);
  v3 = v4;
  if ( v4 && a1[3].n128_u32[2] == FIELD_U32(v3, 32) )
  {
    result = (int32x4_t *)sub_60881DE8(result);
    if ( result[22].n128_i32[0] >= 1 && FIELD_U32(result, 0x0)[8] )
    {
      v14 = vzipq_s32(*a1, a1[1]);
      v15 = vzipq_s32(a1[2], (int32x4_t)0);
      if ( a1[3].n128_u8[0] )
      {
        v11[0] = vextq_s8(vextq_s8(v14.val[0], v14.val[0], 8u), v15.val[0], 8u);
        v11[1] = vextq_s8(v14.val[0], vextq_s8(v15.val[0], v14.val[0], 8u), 8u);
        v12 = vextq_s8(vextq_s8(v14.val[1], v14.val[1], 8u), v15.val[1], 8u);
        v13 = vextq_s8(v14.val[1], vextq_s8(v15.val[1], v14.val[1], 8u), 8u);
        return (int32x4_t *)((int (__fastcall *)(int32x4_t *, int32x4_t *, int32x4_t *, int8x16_t *))sub_60881BB0)(
                              result,
                              v11,
                              &v13,
                              &v12);
      }
      else
      {
        v5 = vextq_s8(v15.val[0], v14.val[0], 8u);
        v6 = vextq_s8(vextq_s8(v14.val[0], v14.val[0], 8u), v15.val[0], 8u);
        v7 = vextq_s8(v14.val[0], v5, 8u);
        v8 = vextq_s8(v15.val[1], v14.val[1], 8u);
        v9 = vextq_s8(vextq_s8(v14.val[1], v14.val[1], 8u), v15.val[1], 8u);
        v10 = vextq_s8(v14.val[1], v8, 8u);
        result[9] = v6;
        result[10] = v7;
        result[11] = v9;
        result[12] = v10;
        result[5] = v6;
        result[6] = v7;
        v7.n128_u64[0] = 0x3F8000003F800000LL;
        v7.n128_u64[1] = 1065353216;
        result[7] = v9;
        result[8] = v10;
        result[14].n128_u64[0] = 0x3F8000003F800000LL;
        result[14].n128_u64[1] = 1065353216;
        result[19] = vmulq_f32(result[17], v7);
        result[1].n128_u32[1] = 1;
      }
    }
    else
    {
      result = 0;
      a1[3].n128_u32[1] = 0;
      a1[3].n128_u32[2] = -1;
    }
  }
  return result;
}

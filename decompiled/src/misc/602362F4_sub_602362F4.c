/* sub_602362F4
 * address: 0x602362F4   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x4_t *__fastcall sub_602362F4(int a1, unsigned __int64 *a2)
{
  float32x4_t *result; // r0
  int v5; // r2
  int v6; // t1
  bool v7; // zf
  float32x4_t v8; // q8
  float32x4_t *v9; // r1

  v6 = FIELD_U32(a1, 52);
  result = (float32x4_t *)(a1 + 52);
  v5 = v6;
  if ( v6 )
  {
    if ( FIELD_U32(a1, 56) == FIELD_U32(v5, 32) )
    {
      result = (float32x4_t *)sub_60881DE8(result);
      if ( result[22].n128_i32[0] >= 1 )
      {
        v7 = result == 0;
        if ( result )
          v7 = FIELD_U32(result, 0x0)[8] == 0;
        if ( !v7 )
        {
          v8.n128_u64[1] = result[17].n128_u64[1];
          v8.n128_u64[0] = *a2;
          result[17].n128_u64[0] = *a2;
          result[17].n128_u64[1] = v8.n128_u64[1];
          v9 = result + 14;
          result += 19;
          *result = vmulq_f32(v8, *v9);
        }
      }
    }
  }
  return result;
}

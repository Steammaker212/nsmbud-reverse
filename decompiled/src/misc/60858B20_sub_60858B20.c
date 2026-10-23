/* sub_60858B20
 * address: 0x60858B20   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_60858B20(int a1)
{
  unsigned int v1; // r1
  __n64 result; // d0
  int v3; // r1

  v1 = FIELD_U8(a1, 67);
  result.n64_u32[1] = 0;
  if ( (v1 & 3) == 2 )
  {
    result.n64_f32[0] = -FIELD_F32(a1, 56);
  }
  else
  {
    result.n64_u32[0] = 0;
    if ( (v1 & 3) == 0 )
      result.n64_f32[0] = FIELD_F32(a1, 56) * -0.5;
  }
  v3 = (v1 >> 2) & 3;
  if ( v3 == 2 )
  {
    result.n64_u32[1] = FIELD_U32(a1, 60);
  }
  else if ( !v3 )
  {
    result.n64_f32[1] = FIELD_F32(a1, 60) * 0.5;
  }
  return result;
}

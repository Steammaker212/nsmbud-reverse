/* sub_600035C0
 * address: 0x600035C0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_600035C0(int a1)
{
  __n128 result; // q0

  if ( FIELD_U8(a1, 6054) )
  {
    result.n128_u32[0] = FIELD_U32(a1, 96);
    result.n128_u32[1] = FIELD_U32(a1, 6044);
    if ( result.n128_f32[0] >= result.n128_f32[1] )
    {
      result.n128_u32[1] = FIELD_U32(a1, 96);
      if ( result.n128_f32[0] > FIELD_F32(a1, 6040) )
        result.n128_u32[1] = FIELD_U32(a1, 6040);
    }
    result.n128_u32[0] = FIELD_U32(a1, 6048);
  }
  else
  {
    result.n128_u32[1] = FIELD_U32(a1, 96);
    result.n128_u32[0] = FIELD_U32(a1, 100);
  }
  result.n128_u32[2] = FIELD_U32(a1, 124);
  if ( result.n128_f32[2] < result.n128_f32[1] || result.n128_f32[2] > result.n128_f32[1] )
    JUMPOUT(0x60001044);
  return result;
}

/* sub_608ACAFC
 * address: 0x608ACAFC   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x2_t __fastcall sub_608ACAFC(int a1, int a2, float32x2_t result, float32x2_t a4)
{
  if ( !a2 )
  {
    a4.n64_u32[0] = 0;
    result.n64_u64[0] = vmax_f32(result, a4).n64_u64[0];
    FIELD_U32(a1, 64) = result.n64_u32[0];
  }
  return result;
}

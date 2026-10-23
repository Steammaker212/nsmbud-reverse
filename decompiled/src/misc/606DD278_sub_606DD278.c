/* sub_606DD278
 * address: 0x606DD278   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_606DD278(int a1)
{
  __n64 result; // d0

  result.n64_u32[0] = FIELD_U32(a1, 6436);
  result.n64_f32[1] = FIELD_F32(a1, 6440) + 8.0;
  return result;
}

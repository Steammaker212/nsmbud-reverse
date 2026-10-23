/* sub_6019B800
 * address: 0x6019B800   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_6019B800(float *a1)
{
  __n64 result; // d0

  result.n64_f32[0] = *a1 / 640.0;
  result.n64_f32[1] = a1[1] / 360.0;
  return result;
}

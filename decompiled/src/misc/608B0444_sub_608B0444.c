/* sub_608B0444
 * address: 0x608B0444   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B0444(int a1, int a2, float a3)
{
  int result; // r0

  result = a1 + 80 * a2;
  FIELD_F32(result, 308) = a3;
  return result;
}

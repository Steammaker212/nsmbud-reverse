/* sub_607600F4
 * address: 0x607600F4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_607600F4(int a1, float a2)
{
  float *result; // r0

  FIELD_U32(a1, 1220) |= 2u;
  result = (float *)(a1 + 10020);
  *result = a2;
  return result;
}

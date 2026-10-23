/* sub_605AF320
 * address: 0x605AF320   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605AF320(int a1, float *a2, int a3)
{
  float result; // s0

  result = *a2 + 224.0;
  *a2 = result;
  FIELD_U32(a3, 8) = -1073741824;
  return result;
}

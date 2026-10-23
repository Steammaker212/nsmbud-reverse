/* sub_608009EC
 * address: 0x608009EC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608009EC(int a1, float *a2)
{
  float result; // s0

  result = (float)(a2[2] - *a2) / 398.22;
  FIELD_F32(a1, 16) = result;
  return result;
}

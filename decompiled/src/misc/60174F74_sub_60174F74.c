/* sub_60174F74
 * address: 0x60174F74   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60174F74(int a1)
{
  float result; // s0

  FIELD_U8(a1, 586) = 0;
  result = FIELD_F32(a1, 496) + 80.0;
  FIELD_F32(a1, 84) = result;
  FIELD_U8(a1, 587) = 1;
  return result;
}

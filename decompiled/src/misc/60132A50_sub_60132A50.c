/* sub_60132A50
 * address: 0x60132A50   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60132A50(int a1)
{
  float result; // s0

  FIELD_U32(a1, 6512) = 8;
  FIELD_U32(a1, 6500) = 1040187392;
  FIELD_U32(a1, 6504) = 1040187392;
  FIELD_U32(a1, 6508) = 1040187392;
  result = fabsf(FIELD_F32(a1, 120));
  FIELD_F32(a1, 88) = result;
  return result;
}

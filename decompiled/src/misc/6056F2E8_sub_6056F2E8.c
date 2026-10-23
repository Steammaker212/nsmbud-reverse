/* sub_6056F2E8
 * address: 0x6056F2E8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6056F2E8(int a1)
{
  float result; // s0

  FIELD_U32(a1, 516) = 1132462080;
  FIELD_U32(a1, 520) = 1132462080;
  FIELD_U32(a1, 524) = 1140850688;
  FIELD_U32(a1, 528) = 1140850688;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1133314048;
  FIELD_U32(a1, 504) = 1133314048;
  result = FIELD_F32(a1, 7400) + FIELD_F32(a1, 6796);
  FIELD_F32(a1, 112) = result;
  return result;
}

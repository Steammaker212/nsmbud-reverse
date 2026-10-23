/* sub_601A8D18
 * address: 0x601A8D18   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601A8D18(int a1)
{
  float result; // s0

  FIELD_U32(a1, 492) = 1133903872;
  FIELD_U32(a1, 496) = 26843545;
  FIELD_U32(a1, 192) = FIELD_U32(a1, 180);
  FIELD_U32(a1, 120) = 0;
  result = FIELD_F32(a1, 460) + -200.0;
  FIELD_F32(a1, 460) = result;
  FIELD_U32(a1, 484) = 140;
  return result;
}

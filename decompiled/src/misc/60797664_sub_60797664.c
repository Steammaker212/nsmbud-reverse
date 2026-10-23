/* sub_60797664
 * address: 0x60797664   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60797664(int a1, float a2)
{
  float result; // s0

  FIELD_U32(a1, 1228) |= 0x1000u;
  result = a2 - (float)(32 * FIELD_U8(a1, 1312));
  FIELD_F32(a1, 116) = result;
  return result;
}

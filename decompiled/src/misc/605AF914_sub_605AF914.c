/* sub_605AF914
 * address: 0x605AF914   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605AF914(int a1, float a2)
{
  float result; // s0

  result = FIELD_F32(a1, 6108) + a2;
  FIELD_F32(a1, 108) = result;
  return result;
}

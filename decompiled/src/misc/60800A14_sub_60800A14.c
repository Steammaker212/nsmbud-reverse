/* sub_60800A14
 * address: 0x60800A14   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60800A14(int a1, float a2)
{
  float result; // s0

  result = FIELD_F32(a1, 24) + a2;
  FIELD_F32(a1, 32) = result;
  return result;
}

/* sub_601F1D6C
 * address: 0x601F1D6C   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601F1D6C(int a1)
{
  float result; // s0

  result = FIELD_F32(a1, 608) + 150.0;
  FIELD_F32(a1, 608) = result;
  return result;
}

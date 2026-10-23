/* sub_60630B4C
 * address: 0x60630B4C   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60630B4C(int a1, float a2, float a3, float a4)
{
  float result; // s0

  result = (float)((float)-a3 - a4) * a2;
  FIELD_F32(a1, 12) = result;
  return result;
}

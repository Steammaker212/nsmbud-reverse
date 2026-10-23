/* sub_60364F00
 * address: 0x60364F00   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60364F00(int a1)
{
  float result; // s0

  FIELD_U32(a1, 80) ^= 1u;
  result = -FIELD_F32(a1, 120);
  FIELD_F32(a1, 120) = result;
  return result;
}

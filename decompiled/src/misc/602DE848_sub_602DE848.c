/* sub_602DE848
 * address: 0x602DE848   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602DE848(int a1)
{
  float result; // s0

  result = FIELD_F32(a1, 116) + -16.0;
  FIELD_F32(a1, 116) = result;
  return result;
}

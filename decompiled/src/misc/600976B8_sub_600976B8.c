/* sub_600976B8
 * address: 0x600976B8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600976B8(int a1)
{
  float result; // s0

  result = FIELD_F32(a1, 116) + 300.0;
  FIELD_F32(a1, 116) = result;
  FIELD_U32(a1, 6184) = 1;
  return result;
}

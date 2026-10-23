/* sub_602142F4
 * address: 0x602142F4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602142F4(int a1)
{
  float result; // s0

  FIELD_U8(a1, 425) = 1;
  result = FIELD_F32(a1, 392) + 80.0;
  FIELD_F32(a1, 84) = result;
  return result;
}

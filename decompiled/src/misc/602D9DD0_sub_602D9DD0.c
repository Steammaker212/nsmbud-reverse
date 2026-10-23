/* sub_602D9DD0
 * address: 0x602D9DD0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D9DD0(int result)
{
  FIELD_U32(result, 80) = FIELD_U32(result, 160) < 1;
  FIELD_U32(result, 6332) = 1095237632;
  FIELD_U32(result, 6348) = 180;
  FIELD_U8(result, 6309) = 1;
  FIELD_U32(result, 3196) &= ~2u;
  FIELD_U32(result, 3204) &= ~2u;
  FIELD_U32(result, 3180) &= ~2u;
  FIELD_U32(result, 3188) &= ~2u;
  FIELD_U32(result, 568) &= ~4u;
  return result;
}

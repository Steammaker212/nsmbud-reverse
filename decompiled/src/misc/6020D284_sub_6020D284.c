/* sub_6020D284
 * address: 0x6020D284   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020D284(int result)
{
  FIELD_U32(result, 416) = FIELD_U32(result, 80);
  FIELD_U32(result, 420) = FIELD_U32(result, 84);
  FIELD_U32(result, 424) = FIELD_U32(result, 88);
  FIELD_U8(result, 370) = 1;
  return result;
}

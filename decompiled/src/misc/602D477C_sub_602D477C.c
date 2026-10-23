/* sub_602D477C
 * address: 0x602D477C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_602D477C(__int64 result)
{
  HIDWORD(result) = FIELD_F32(result, 120) < 0.0;
  FIELD_U8(result, 6672) = BYTE4(result);
  return result;
}

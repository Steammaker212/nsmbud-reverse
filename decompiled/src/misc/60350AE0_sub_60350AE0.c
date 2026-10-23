/* sub_60350AE0
 * address: 0x60350AE0   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_60350AE0(__int64 result)
{
  FIELD_U32(result, 120) = 0;
  HIDWORD(result) = FIELD_U32(result, 80) != 1;
  FIELD_U32(result, 80) = HIDWORD(result);
  return result;
}

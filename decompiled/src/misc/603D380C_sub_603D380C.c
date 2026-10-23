/* sub_603D380C
 * address: 0x603D380C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_603D380C(__int64 result)
{
  FIELD_U32(result, 108) = FIELD_U32(result, 6368);
  FIELD_U32(result, 112) = FIELD_U32(result, 6372);
  FIELD_U32(result, 116) = FIELD_U32(result, 6376);
  FIELD_U32(result, 120) = 0;
  HIDWORD(result) = FIELD_U32(result, 80) == 0;
  FIELD_U32(result, 80) = HIDWORD(result);
  return result;
}

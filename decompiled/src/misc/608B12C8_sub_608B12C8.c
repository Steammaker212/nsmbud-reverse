/* sub_608B12C8
 * address: 0x608B12C8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B12C8(int result)
{
  *(_DWORD *)result = off_60C5AF8C;
  FIELD_U8(result, 20) = 0;
  FIELD_U32(result, 16) = 0;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 4) = 0;
  FIELD_U32(result, 24) = result + 24;
  FIELD_U32(result, 28) = result + 24;
  FIELD_U32(result, 32) = result + 32;
  FIELD_U32(result, 36) = result + 32;
  return result;
}

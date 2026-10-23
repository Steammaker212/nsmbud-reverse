/* sub_608ED438
 * address: 0x608ED438   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608ED438(int result)
{
  *(_DWORD *)result = off_60C5C57C;
  FIELD_U8(result, 4) = 0;
  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 12) = &off_60C5C5D0;
  FIELD_U32(result, 24) = 0;
  FIELD_U32(result, 20) = result + 16;
  FIELD_U32(result, 16) = result + 16;
  FIELD_U32(result, 28) = 0;
  FIELD_U32(result, 32) = 0;
  FIELD_U32(result, 36) = 0;
  return result;
}

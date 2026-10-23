/* sub_608A9234
 * address: 0x608A9234   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A9234(int result)
{
  *(_DWORD *)result = &off_60C5AD64;
  FIELD_U32(result, 4) = off_60C5AD84;
  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 16) = 0;
  FIELD_U32(result, 20) = result + 20;
  FIELD_U32(result, 24) = result + 20;
  FIELD_U32(result, 28) = &unk_60CC82A8;
  FIELD_U32(result, 32) = 32;
  FIELD_U32(result, 36) = 1063675494;
  FIELD_U32(result, 40) = 0;
  FIELD_U32(result, 44) = -1;
  FIELD_U32(result, 48) = 0;
  FIELD_U8(result, 52) = 0;
  return result;
}

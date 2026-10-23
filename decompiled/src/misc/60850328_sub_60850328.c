/* sub_60850328
 * address: 0x60850328   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60850328(int result)
{
  FIELD_U32(result, 4) = result + 4;
  FIELD_U32(result, 8) = result + 4;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 16) = 0;
  FIELD_U8(result, 20) = 1;
  *(_DWORD *)result = off_60C345E0;
  FIELD_U32(result, 24) = 0;
  FIELD_U32(result, 28) = 0;
  FIELD_U32(result, 32) = 0;
  return result;
}

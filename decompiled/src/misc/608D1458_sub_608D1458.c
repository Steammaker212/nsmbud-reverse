/* sub_608D1458
 * address: 0x608D1458   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D1458(int result)
{
  *(_DWORD *)result = 1;
  FIELD_U32(result, 4) = 1;
  FIELD_U32(result, 8) = 1;
  FIELD_U32(result, 12) = 1;
  FIELD_U32(result, 16) = 0;
  FIELD_U8(result, 44) = 1;
  FIELD_U32(result, 32) = 16843009;
  FIELD_U32(result, 36) = 16843009;
  FIELD_U32(result, 40) = 16843009;
  FIELD_U32(result, 28) = 16843009;
  FIELD_U32(result, 24) = 16843009;
  FIELD_U32(result, 20) = 16843009;
  return result;
}

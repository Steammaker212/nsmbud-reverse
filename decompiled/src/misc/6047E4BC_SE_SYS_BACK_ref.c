/* SE_SYS_BACK_ref
 * address: 0x6047E4BC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_BACK_ref(int result)
{
  *(_DWORD *)result = 9;
  FIELD_U32(result, 4) = "SE_SYS_BACK";
  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 16) = result + 12;
  FIELD_U32(result, 12) = result + 12;
  FIELD_U8(result, 52) = 0;
  FIELD_U32(result, 32) = 0;
  FIELD_U32(result, 36) = 0;
  FIELD_U32(result, 40) = 0;
  FIELD_U32(result, 44) = 0;
  FIELD_U32(result, 48) = 0;
  FIELD_U32(result, 28) = 0;
  FIELD_U32(result, 24) = 212;
  FIELD_U8(result, 53) = 0;
  return result;
}

/* SE_SYS_BTN_OVER_ref
 * address: 0x604776F0   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int SE_SYS_BTN_OVER_ref()
{
  int result; // r0

  result = sub_60852BBC();
  *(_DWORD *)result = off_60BFCD74;
  FIELD_U32(result, 92) = 0;
  FIELD_U8(result, 160) = 0;
  FIELD_U8(result, 168) = 0;
  FIELD_U32(result, 172) = "SE_SYS_DECIDE";
  FIELD_U32(result, 176) = "SE_SYS_BTN_OVER";
  FIELD_U32(result, 180) = "SE_SYS_BTN_OVER_OFF";
  FIELD_U32(result, 184) = "SE_SYS_CURSOR";
  FIELD_U8(result, 188) = 0;
  FIELD_U32(result, 192) = 9;
  FIELD_U32(result, 196) = 9;
  FIELD_U32(result, 200) = 9;
  FIELD_U32(result, 204) = 9;
  FIELD_U8(result, 208) = 1;
  FIELD_U32(result, 212) = 0;
  FIELD_U32(result, 216) = 0;
  FIELD_U32(result, 164) = 0;
  return result;
}

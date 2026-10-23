/* sub_608CDD90
 * address: 0x608CDD90   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_608CDD90()
{
  int result; // r0

  result = sub_608D9E04();
  *(_DWORD *)result = off_60C5B4FC;
  FIELD_U32(result, 36) = 0;
  FIELD_U32(result, 32) = 2000000000;
  FIELD_U32(result, 44) = 0;
  FIELD_U32(result, 40) = 160000000;
  FIELD_U32(result, 48) = 1056964608;
  FIELD_U32(result, 52) = 1053609165;
  FIELD_U32(result, 56) = 1056964608;
  FIELD_U32(result, 60) = 1061997773;
  FIELD_U32(result, 64) = 1050253722;
  FIELD_U8(result, 68) = 0;
  FIELD_U32(result, 76) = 0;
  FIELD_U32(result, 72) = 0;
  FIELD_U32(result, 84) = 2;
  FIELD_U32(result, 88) = 0;
  FIELD_U32(result, 92) = 1;
  FIELD_U32(result, 96) = 2;
  FIELD_U32(result, 100) = 3;
  FIELD_U32(result, 104) = 4;
  FIELD_U32(result, 108) = 5;
  return result;
}

/* sub_60991A30
 * address: 0x60991A30   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60991A30()
{
  int result; // r0

  result = sub_60992DB8();
  *(_DWORD *)result = off_60C601F4;
  FIELD_U32(result, 20) = result + 20;
  FIELD_U32(result, 24) = result + 20;
  FIELD_U8(result, 28) = 0;
  FIELD_U8(result, 29) = 0;
  FIELD_U16(result, 30) = 31;
  FIELD_U32(result, 36) = 0;
  FIELD_U32(result, 40) = 0;
  return result;
}

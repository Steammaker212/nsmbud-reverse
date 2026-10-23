/* sub_60995718
 * address: 0x60995718   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60995718()
{
  int result; // r0

  result = sub_60990E0C();
  FIELD_U8(result, 60) = 0;
  FIELD_U8(result, 61) = 1;
  FIELD_U32(result, 64) = 0;
  *(_DWORD *)result = off_60C60704;
  FIELD_U32(result, 68) = 0;
  FIELD_U32(result, 72) = 0;
  FIELD_U8(result, 76) = 0;
  return result;
}

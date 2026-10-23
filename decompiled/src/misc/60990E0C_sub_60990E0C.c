/* sub_60990E0C
 * address: 0x60990E0C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60990E0C()
{
  int result; // r0

  result = sub_60991A30();
  *(_DWORD *)result = off_60C60148;
  FIELD_U32(result, 44) = 0;
  FIELD_U32(result, 48) = 0;
  FIELD_U32(result, 52) = 0;
  FIELD_U32(result, 56) = 0;
  FIELD_U16(result, 30) |= 0x2000u;
  return result;
}

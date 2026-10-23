/* sub_6002B9F4
 * address: 0x6002B9F4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6002B9F4(int a1)
{
  _BYTE *result; // r0

  FIELD_U8(a1, 7427) = 0;
  result = (_BYTE *)(a1 + 7427);
  result[3] = 0;
  result[2] = 0;
  result[1] = 0;
  return result;
}

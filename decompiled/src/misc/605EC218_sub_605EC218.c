/* sub_605EC218
 * address: 0x605EC218   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_605EC218(int a1)
{
  _BYTE *result; // r0

  FIELD_U8(a1, 6560) = -1;
  result = (_BYTE *)(a1 + 6560);
  result[3] = -1;
  result[2] = -1;
  result[1] = -1;
  result[43] = 0;
  return result;
}

/* sub_608C938C
 * address: 0x608C938C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_608C938C(int a1)
{
  _WORD *result; // r0
  __int16 v2; // t1

  FIELD_U8(a1, 413) = 1;
  FIELD_U8(a1, 415) = 0;
  v2 = FIELD_U16(a1, 424);
  result = (_WORD *)(a1 + 424);
  *result = v2 | 1;
  return result;
}

/* sub_6025A74C
 * address: 0x6025A74C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_6025A74C(int a1)
{
  _WORD *result; // r0
  __int16 v2; // t1

  v2 = FIELD_U16(a1, 6364);
  result = (_WORD *)(a1 + 6364);
  *result = v2 & 0xFFFC;
  return result;
}

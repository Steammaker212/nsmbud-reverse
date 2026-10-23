/* sub_602B6C80
 * address: 0x602B6C80   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_602B6C80(int a1)
{
  _BYTE *result; // r0
  char v2; // t1

  v2 = FIELD_U8(a1, 6318);
  result = (_BYTE *)(a1 + 6318);
  *result = v2 & 0xFE;
  return result;
}

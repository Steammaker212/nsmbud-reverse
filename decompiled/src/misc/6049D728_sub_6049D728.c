/* sub_6049D728
 * address: 0x6049D728   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6049D728(int a1)
{
  _BYTE *result; // r0

  FIELD_U8(a1, 22388) = 0;
  result = (_BYTE *)(a1 + 22388);
  result[5] = 0;
  result[4] = 0;
  result[3] = 0;
  result[2] = 0;
  result[1] = 0;
  result[6] = 0;
  return result;
}

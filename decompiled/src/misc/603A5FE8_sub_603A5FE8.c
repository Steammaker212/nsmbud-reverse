/* sub_603A5FE8
 * address: 0x603A5FE8   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_603A5FE8(int a1)
{
  _BYTE *result; // r0

  FIELD_U8(a1, 23620) = 0;
  result = (_BYTE *)(a1 + 23620);
  result[3] = 0;
  result[2] = 0;
  result[1] = 0;
  return result;
}

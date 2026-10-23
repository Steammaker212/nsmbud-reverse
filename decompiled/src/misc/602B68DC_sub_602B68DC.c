/* sub_602B68DC
 * address: 0x602B68DC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_602B68DC(int a1)
{
  _BYTE *result; // r0
  char v2; // t1

  FIELD_U32(a1, 80) ^= 1u;
  FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
  v2 = FIELD_U8(a1, 6318);
  result = (_BYTE *)(a1 + 6318);
  *result = v2 | 2;
  *(result - 2) = 0;
  return result;
}

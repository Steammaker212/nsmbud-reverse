/* sub_602F8A2C
 * address: 0x602F8A2C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_602F8A2C(int a1)
{
  _DWORD *result; // r0

  FIELD_U8(a1, 6501) = 0;
  FIELD_U32(a1, 304) = 0;
  result = (_DWORD *)(a1 + 308);
  *result = 1077936128;
  result[1] = 1095761920;
  result[2] = 1093664768;
  return result;
}

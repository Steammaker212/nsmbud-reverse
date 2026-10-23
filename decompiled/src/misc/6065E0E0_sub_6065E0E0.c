/* sub_6065E0E0
 * address: 0x6065E0E0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6065E0E0(int a1)
{
  _DWORD *result; // r0
  int v2; // t1

  FIELD_U32(a1, 6360) += 0x1000000;
  v2 = FIELD_U32(a1, 6396);
  result = (_DWORD *)(a1 + 6396);
  *result = v2 + 0x800000;
  *(result - 7) = 32;
  result[2] = 4;
  *(result - 5) = 0x1000000;
  result[4] = 0x800000;
  return result;
}

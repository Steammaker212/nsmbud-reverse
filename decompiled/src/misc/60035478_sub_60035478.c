/* sub_60035478
 * address: 0x60035478   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60035478(int a1)
{
  _DWORD *result; // r0
  int v2; // t1

  FIELD_U8(a1, 7787) = 1;
  v2 = FIELD_U32(a1, 7112);
  result = (_DWORD *)(a1 + 7112);
  *result = v2 + *(_DWORD *)(result[33] + 160);
  return result;
}

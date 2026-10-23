/* sub_6068A7C8
 * address: 0x6068A7C8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6068A7C8(int a1, _DWORD *a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)(a1 + 12 * a3);
  result[2] = *a2;
  result[3] = a2[1];
  result[4] = a2[2];
  return result;
}

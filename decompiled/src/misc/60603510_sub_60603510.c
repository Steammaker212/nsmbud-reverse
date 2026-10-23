/* sub_60603510
 * address: 0x60603510   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60603510(int a1)
{
  _DWORD *result; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 6116);
  result = (_DWORD *)(a1 + 6116);
  *result = v2 + *(result - 1);
  return result;
}

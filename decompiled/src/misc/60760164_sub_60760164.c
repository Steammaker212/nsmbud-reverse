/* sub_60760164
 * address: 0x60760164   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60760164(int a1)
{
  _DWORD *result; // r0
  int v2; // t1

  FIELD_U32(a1, 1224) |= 0x80000u;
  v2 = FIELD_U32(a1, 10028);
  result = (_DWORD *)(a1 + 10028);
  *result = v2 + 1;
  return result;
}

/* sub_60859B1C
 * address: 0x60859B1C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60859B1C(int a1, int a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_6085852C(a1, a2);
  *result = &off_60C5A2EC;
  result[43] = result + 43;
  result[44] = result + 43;
  result[45] = 0;
  return result;
}

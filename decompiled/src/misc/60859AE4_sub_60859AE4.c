/* sub_60859AE4
 * address: 0x60859AE4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60859AE4(int a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0

  result = (_DWORD *)((int (__fastcall *)(int, int, int))loc_60857B80)(a1, a2, a4);
  *result = &off_60C5A2EC;
  result[43] = result + 43;
  result[44] = result + 43;
  result[45] = 0;
  return result;
}

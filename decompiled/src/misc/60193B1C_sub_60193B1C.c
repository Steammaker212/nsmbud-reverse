/* sub_60193B1C
 * address: 0x60193B1C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60193B1C(int a1, int a2)
{
  _DWORD *result; // r0
  int v3; // r2
  int v4; // r3

  result = (_DWORD *)sub_601A75F0(a1, a2);
  *result = off_60BD5A70;
  result[67] = 0;
  v3 = result[21];
  v4 = result[22];
  result[68] = result[20];
  result[69] = v3;
  result[70] = v4;
  return result;
}

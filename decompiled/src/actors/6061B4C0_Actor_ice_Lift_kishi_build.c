/* Actor_ice_Lift_kishi_build
 * address: 0x6061B4C0   size: 132   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_ice_Lift_kishi_build(int a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x1AD8u);
  result = (_DWORD *)sub_6061BC30(v2, a1);
  *result = off_60C10A20;
  result[1712] = 0;
  result[1711] = 0;
  result[1710] = 0;
  result[1708] = 0;
  result[1709] = 0;
  result[1713] = 0x4000000;
  result[1714] = 78643200;
  result[1715] = 0;
  result[1716] = 0;
  return result;
}

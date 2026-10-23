/* sub_6061C240
 * address: 0x6061C240   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061C240(int a1, int a2)
{
  _DWORD *v2; // r0

  v2 = *(_DWORD **)(a2 + 144);
  v2[1695] = 0;
  v2 += 1695;
  v2[1] = 0;
  v2[2] = 1061997773;
  v2[3] = 1045220557;
  v2[4] = 1036831949;
  v2[5] = 0x40000000;
  sub_608337AC(v2, 2.0);
  return 1;
}

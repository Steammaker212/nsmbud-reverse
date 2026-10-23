/* sub_6003F97C
 * address: 0x6003F97C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6003F97C(_DWORD *a1)
{
  int v2; // r0
  int result; // r0

  sub_60045DB4((int)a1, 0, 1, 1, 0.0, 1.0);
  a1[2950] = 477218560;
  v2 = 477218560 - a1[40];
  if ( v2 < 0 )
    v2 = a1[40] - 477218560;
  result = v2 / 7;
  a1[2951] = result;
  return result;
}

/* sub_60032A58
 * address: 0x60032A58   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60032A58(_DWORD *a1)
{
  int v2; // r0

  demo_fortress_ref((int)a1);
  a1[27] = a1[1617];
  a1[28] = a1[1618];
  a1[29] = a1[1619];
  sub_60054F68(a1);
  v2 = a1[1577];
  a1[1611] = a1[1576];
  a1[1612] = v2;
  a1[1613] = 2;
  return 1;
}

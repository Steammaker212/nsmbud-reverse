/* sub_607AAF18
 * address: 0x607AAF18   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AAF18(int *a1)
{
  int result; // r0

  PlayerBase_dispatchVirtual3((int)(a1 + 2839), 33, 0.0);
  a1[40] = sub_60773F3C((int)a1, a1[20]);
  a1[3012] = a1[20];
  result = a1[306] | 0x40C20;
  a1[306] = result;
  return result;
}

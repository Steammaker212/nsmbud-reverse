/* sub_607C07D0
 * address: 0x607C07D0   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C07D0(int *a1)
{
  int v2; // r0
  int v3; // r2
  int result; // r0

  sub_60774040((int)a1, a1[20]);
  v2 = a1[3211];
  a1[3213] = v2;
  v3 = a1[1688];
  a1[3211] = v3;
  a1[3214] = a1[3212];
  a1[3212] = v2 - v3;
  sub_607C0FB4(a1);
  if ( sub_60786750((int)(a1 + 172)) || sub_6078675C((int)(a1 + 172)) || sub_60786778(a1 + 172, 3) != 1 )
  {
    result = sub_607867EC(a1 + 172, 3);
    if ( result == 1 )
    {
      result = a1[3215];
      if ( result != 2 )
      {
        a1[2485] = 2;
        return PlayerBase_dispatchVirtual3((int)(a1 + 2839), 47, 0.0);
      }
    }
  }
  else
  {
    a1[2485] = 3;
    return PlayerBase_dispatchVirtual3((int)(a1 + 2839), 48, 0.0);
  }
  return result;
}

/* sub_60773398
 * address: 0x60773398   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60773398(_DWORD *a1, int a2)
{
  int v4; // r1
  int result; // r0
  int v6; // r0
  int v7; // r0

  v4 = ((int (*)(void))loc_60763E28)();
  result = 0;
  if ( !v4 )
  {
    a1[303] &= ~0x400u;
    v6 = a1[304];
    if ( (v6 & 0x10) != 0 )
      a1[304] = v6 & 0xFFFFFFEF;
    a1[2485] = 3;
    a1[22] = 0;
    a1[23] = 0;
    v7 = a1[162];
    if ( a2 == 1 )
      PlayerBase_dispatchVirtual3(v7, 23);
    else
      sub_60794954(v7, 23, 0.0, 0.0);
    return 1;
  }
  return result;
}

/* sub_607734A0
 * address: 0x607734A0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607734A0(_DWORD *a1)
{
  int v1; // r1

  a1[2508] = 30;
  a1[303] &= ~0x400u;
  v1 = a1[304];
  if ( (v1 & 0x10) != 0 )
    a1[304] = v1 & 0xFFFFFFEF;
  a1[2485] = 2;
  return PlayerBase_dispatchVirtual3(a1[162], 24);
}

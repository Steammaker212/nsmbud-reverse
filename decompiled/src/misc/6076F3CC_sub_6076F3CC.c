/* sub_6076F3CC
 * address: 0x6076F3CC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076F3CC(_DWORD *a1)
{
  int v2; // r5

  a1[2485] = 1;
  PlayerBase_dispatchVirtual3(a1[162], 17);
  if ( sub_6075EDF8((int)a1) )
  {
    v2 = a1[162];
    sub_60793E10(FIELD_U32(v2, 4));
    sub_60793114(FIELD_U32(v2, 4));
  }
  a1[2486] = 5;
  a1[31] = 0;
  return 0;
}

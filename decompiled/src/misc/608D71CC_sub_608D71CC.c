/* sub_608D71CC
 * address: 0x608D71CC   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608D71CC(_DWORD *a1)
{
  int *v2; // r4
  int *v3; // r7
  int *v4; // r5
  int *v5; // r1
  int v6; // r2
  int v7; // r0

  nn__os__WaitEvent(a1 + 483);
  nn__os__WaitEvent(a1 + 496);
  v2 = (int *)a1[507];
  v3 = a1 + 506;
  if ( v2 != a1 + 506 )
  {
    do
    {
      v4 = (int *)v2[1];
      nn__os__WaitEvent(v2 - 29);
      if ( v2 != v3 )
      {
        v5 = (int *)v2[1];
        v6 = *v5;
        *(_DWORD *)(*v2 + 4) = v5;
        *v5 = *v2;
        FIELD_U32(v6, 4) = v2;
        *v2 = v6;
      }
      (*(void (__fastcall **)(int *))*(v2 - 32))(v2 - 32);
      sub_608C66F8(a1 + 508, v2 - 32);
      v2 = v4;
    }
    while ( v4 != v3 );
  }
  v7 = a1[2497];
  if ( v7 )
  {
    if ( a1[2496] )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      a1[2496] = 0;
    }
    a1[2497] = 0;
  }
  sub_608C666C(a1 + 508);
  sub_608C4D98(a1 + 493);
  sub_608C4D98(a1 + 480);
  return a1;
}

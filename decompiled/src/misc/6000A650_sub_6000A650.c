/* sub_6000A650
 * address: 0x6000A650   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000A650(_BYTE *a1)
{
  _BYTE *v1; // r2
  _BYTE *v2; // r0
  int v3; // t1
  int v4; // r1

  v1 = a1 + 2528;
  if ( !a1[2528] )
  {
    v4 = 0;
    goto LABEL_33;
  }
  v1 = a1 + 2529;
  if ( !a1[2529] )
  {
    v4 = 1;
    goto LABEL_33;
  }
  v1 = a1 + 2530;
  if ( !a1[2530] )
  {
    v4 = 2;
    goto LABEL_33;
  }
  v1 = a1 + 2531;
  if ( !a1[2531] )
  {
    v4 = 3;
    goto LABEL_33;
  }
  v1 = a1 + 2532;
  if ( !a1[2532] )
  {
    v4 = 4;
    goto LABEL_33;
  }
  v1 = a1 + 2533;
  if ( !a1[2533] )
  {
    v4 = 5;
    goto LABEL_33;
  }
  v1 = a1 + 2534;
  if ( !a1[2534] )
  {
    v4 = 6;
    goto LABEL_33;
  }
  v1 = a1 + 2535;
  if ( !a1[2535] )
  {
    v4 = 7;
    goto LABEL_33;
  }
  v1 = a1 + 2536;
  if ( !a1[2536] )
  {
    v4 = 8;
    goto LABEL_33;
  }
  v1 = a1 + 2537;
  if ( !a1[2537] )
  {
    v4 = 9;
    goto LABEL_33;
  }
  v1 = a1 + 2538;
  if ( !a1[2538] )
  {
    v4 = 10;
    goto LABEL_33;
  }
  v1 = a1 + 2539;
  if ( !a1[2539] )
  {
    v4 = 11;
    goto LABEL_33;
  }
  v1 = a1 + 2540;
  if ( !a1[2540] )
  {
    v4 = 12;
    goto LABEL_33;
  }
  v1 = a1 + 2541;
  if ( !a1[2541] )
  {
    v4 = 13;
    goto LABEL_33;
  }
  v1 = a1 + 2542;
  if ( !a1[2542] )
  {
    v4 = 14;
    goto LABEL_33;
  }
  v3 = (unsigned __int8)a1[2543];
  v2 = a1 + 2543;
  v4 = -1;
  if ( !v3 )
  {
    v4 = 15;
    v1 = v2;
LABEL_33:
    *v1 = 1;
  }
  return v4;
}

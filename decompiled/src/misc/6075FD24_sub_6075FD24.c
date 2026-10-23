/* sub_6075FD24
 * address: 0x6075FD24   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075FD24(_DWORD *a1)
{
  int v2; // r2
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r0
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int v16; // r1
  int v17; // r1

  v2 = a1[2393];
  if ( v2 )
  {
    a1[2393] = v2 - 1;
    if ( v2 > 60 )
    {
      if ( (((_BYTE)v2 - 1) & 8) == 0 )
        goto LABEL_7;
    }
    else if ( (((_BYTE)v2 - 1) & 4) == 0 )
    {
      goto LABEL_7;
    }
    a1[306] |= 0x200000u;
  }
LABEL_7:
  v3 = a1[2394];
  if ( v3 )
    a1[2394] = v3 - 1;
  v4 = a1[2395];
  if ( v4 )
    a1[2395] = v4 - 1;
  v5 = a1[2396];
  if ( v5 )
    a1[2396] = v5 - 1;
  v6 = a1[2397];
  if ( v6 )
    a1[2397] = v6 - 1;
  v7 = a1[2398];
  if ( v7 )
    a1[2398] = v7 - 1;
  v8 = a1[322];
  if ( v8 )
    a1[322] = v8 - 1;
  v9 = a1[2447];
  if ( v9 )
    a1[2447] = v9 - 1;
  v10 = a1[2409];
  if ( v10 )
    a1[2409] = v10 - 1;
  v11 = a1[2410];
  if ( v11 )
    a1[2410] = v11 - 1;
  v12 = a1[2491];
  if ( v12 )
    a1[2491] = v12 - 1;
  v13 = a1[2493];
  if ( v13 )
    a1[2493] = v13 - 1;
  v14 = a1[2489];
  if ( v14 )
    a1[2489] = v14 - 1;
  v15 = a1[2453];
  if ( v15 )
    a1[2453] = v15 - 1;
  v16 = a1[1783];
  if ( v16 )
    a1[1783] = v16 - 1;
  v17 = a1[2508];
  if ( v17 )
    a1[2508] = v17 - 1;
  sub_60765960(a1);
  return sub_6076445C(a1);
}

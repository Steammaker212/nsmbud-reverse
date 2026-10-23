/* sub_6088077C
 * address: 0x6088077C   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088077C(_DWORD *a1, int a2, int a3)
{
  int (__fastcall *v4)(_DWORD *); // r1
  int v5; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int v11; // r1
  _DWORD *v13; // [sp+4h] [bp-14h] BYREF

  a1[33] = 0;
  if ( a3 == 1 )
  {
    sub_6087F06C((int)a1);
    v13 = a1;
    sub_6087F210(&v13, v4);
  }
  v5 = a1[84];
  if ( v5 )
  {
    --a1[368];
    sub_60882124(v5, 1);
    a1[84] = 0;
  }
  v6 = a1[318];
  if ( v6 )
  {
    sub_60897440(a1[320], v6, 0);
    a1[318] = 0;
  }
  v7 = a1[323];
  if ( v7 )
  {
    sub_60897440(a1[325], v7, 0);
    a1[323] = 0;
  }
  v8 = a1[327];
  if ( v8 )
  {
    sub_60897440(a1[329], v8, 0);
    a1[327] = 0;
  }
  v9 = a1[331];
  if ( v9 )
  {
    sub_60897440(a1[333], v9, 0);
    a1[331] = 0;
  }
  v10 = a1[335];
  if ( v10 )
  {
    sub_60897440(a1[337], v10, 0);
    a1[335] = 0;
  }
  v11 = a1[339];
  if ( v11 )
  {
    sub_60897440(a1[341], v11, 0);
    a1[339] = 0;
  }
  return sub_608966B0(a1 + 344);
}

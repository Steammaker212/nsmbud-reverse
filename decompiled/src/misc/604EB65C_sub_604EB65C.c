/* sub_604EB65C
 * address: 0x604EB65C   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604EB65C(_DWORD *a1)
{
  unsigned int *v2; // r7
  int v3; // r1
  _BOOL4 v4; // r5
  _DWORD *v5; // r8
  int v6; // r0
  int v7; // r0
  int v8; // r0
  _DWORD *v9; // r4
  unsigned int v10; // t1
  int v11; // r0
  int v12; // r0

  sub_60473DE4(a1 + 2702, 0, &dword_60CA60E8, 0);
  v2 = a1 + 5934;
  v3 = a1[5936];
  v4 = v3 < 1;
  a1[5935] = (v3 + a1[5934] + a1[4122]) % a1[4122];
  sub_604ED694(a1 + 9, v4);
  v5 = a1 + 5935;
  v6 = a1[904];
  if ( v6 == a1[5934] )
  {
    sub_604ED7A0(a1 + 9, 0);
  }
  else if ( v6 == *v5 )
  {
    sub_604ED800(a1 + 9, 0);
  }
  sub_604ED694(a1 + 906, v4);
  v7 = a1[1801];
  if ( v7 == *v2 )
  {
    sub_604ED7A0(a1 + 906, 0);
  }
  else if ( v7 == *v5 )
  {
    sub_604ED800(a1 + 906, 0);
  }
  sub_604ED694(a1 + 1803, v4);
  v8 = a1[2698];
  if ( v8 == *v2 )
  {
    sub_604ED7A0(a1 + 1803, 0);
  }
  else if ( v8 == *v5 )
  {
    sub_604ED800(a1 + 1803, 0);
  }
  v10 = a1[2700];
  v9 = a1 + 2700;
  v11 = v9[1];
  if ( v10 > *v2 )
    v11 += 3540 * *v2;
  sub_604ED9CC(v11, 0);
  v12 = v9[1];
  if ( *v9 > *v5 )
    v12 += 3540 * *v5;
  return sub_604ED9B4(v12);
}

/* sub_604ECC44
 * address: 0x604ECC44   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604ECC44(_DWORD *a1)
{
  _DWORD *v2; // r10
  unsigned int v3; // r0
  unsigned int *v4; // r4
  unsigned int v5; // r5
  unsigned int v6; // r2
  int *v7; // r9
  unsigned int v8; // r5
  int v9; // r2
  unsigned int v10; // r6
  int v11; // r2
  int result; // r0
  int v13; // r5
  int v14; // r6
  int v15; // r4

  a1[5934] = 0;
  v2 = a1 + 5934;
  v4 = a1 + 4122;
  v3 = a1[4122];
  v5 = (int)(v3 - 1) % (int)v3;
  v7 = (int *)(v4 + 1);
  v6 = v4[1];
  if ( v3 > v5 )
    v6 += 24 * v5;
  sub_604ED658(v4 - 4113, v5, v6, 0.0);
  if ( v5 == *v2 )
    sub_604ED800(v4 - 4113, 1);
  else
    sub_604ED7A0(v4 - 4113, 1);
  v8 = (int)(v5 + 1) % (int)*v4;
  v9 = *v7;
  if ( *v4 > v8 )
    v9 += 24 * v8;
  sub_604ED658(a1 + 906, v8, v9, 0.0);
  if ( v8 == *v2 )
    sub_604ED800(a1 + 906, 1);
  else
    sub_604ED7A0(a1 + 906, 1);
  v10 = (int)(v8 + 1) % (int)*v4;
  v11 = *v7;
  if ( *v4 > v10 )
    v11 += 24 * v10;
  sub_604ED658(a1 + 1803, v10, v11, 0.0);
  if ( v10 == *v2 )
    sub_604ED800(a1 + 1803, 1);
  else
    sub_604ED7A0(a1 + 1803, 1);
  result = 10800;
  v13 = a1[2700];
  if ( v13 )
  {
    v14 = 0;
    v15 = a1[2701];
    do
    {
      if ( v14 == *v2 )
        result = sub_604ED9B4(v15);
      else
        result = sub_604ED9CC(v15, 1);
      ++v14;
      v15 += 3540;
    }
    while ( v13 != v14 );
  }
  return result;
}

/* sub_6021F408
 * address: 0x6021F408   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6021F408(int a1, unsigned int a2, int a3)
{
  int v3; // r7
  unsigned int v4; // r4
  int v5; // r0
  unsigned int v6; // r5
  int v7; // r6
  int v8; // r0
  int v9; // r2
  int v10; // r3
  int v11; // r1

  v3 = a3;
  v4 = a2;
  v5 = a3;
  if ( a3 != 1 )
    v5 = 0;
  if ( a2 != 1 )
    a2 = 0;
  v6 = a2 & v5;
  v7 = sub_60187054(dword_60CC6D78 + 984, v4, a2 & v5);
  v8 = 4;
  if ( v3 )
    v3 = 3;
  else
    v8 = 1;
  if ( v4 == 1 )
  {
    v9 = v7;
    do
    {
      v10 = v3;
      if ( v9 <= v8 )
        v10 = v9 + 1;
      v9 = v10;
    }
    while ( dword_60AFD3B0[v10 + 6] == -1 );
  }
  else
  {
    v11 = v7;
    do
    {
      v10 = v11 + 1;
      if ( v11 > 4 )
        v10 = 0;
      v11 = v10;
    }
    while ( dword_60AFD3B0[6 * v4 + v10] == -1 );
  }
  sub_60187030(dword_60CC6D78 + 984, v4, v6, v10);
  return &dword_60AFD3B0[6 * v4 + v7];
}

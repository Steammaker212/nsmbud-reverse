/* sub_601684B4
 * address: 0x601684B4   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601684B4(_DWORD *a1)
{
  int v2; // r8
  int v3; // r6
  int v4; // r9
  int v5; // r10
  unsigned int v6; // r0
  unsigned int v7; // r1
  _DWORD *v8; // r2
  _DWORD *v9; // r3
  unsigned int v10; // r7
  _DWORD *v11; // r0
  unsigned int v12; // r0
  int v13; // r0

  v2 = a1[87];
  if ( v2 >= 1 )
  {
    v3 = 1;
    v4 = 0;
    v5 = 0;
    v6 = a1[87];
    while ( 1 )
    {
      v7 = a1[85];
      v8 = (_DWORD *)a1[86];
      v9 = (_DWORD *)a1[88];
      v10 = v3 - 1;
      if ( v6 > v3 - 1 )
        v9 = (_DWORD *)((char *)v9 + v5);
      v11 = (_DWORD *)a1[86];
      if ( v7 > v10 )
        v11 = &v8[v4];
      v9[1] = *v11;
      v9[2] = v11[1];
      v12 = 0;
      if ( v3 < v2 )
        v12 = v3;
      if ( v7 > v12 )
        v8 += 2 * v12;
      v9[3] = *v8;
      v9[4] = v8[1];
      v13 = a1[88];
      if ( a1[87] > v10 )
        v13 += v5;
      sub_6015DFC0(v13);
      if ( v2 == v3 )
        break;
      v6 = a1[87];
      v4 += 2;
      v5 += 32;
      ++v3;
    }
  }
  a1[51] = 1090519040;
  a1[52] = -1056964608;
  return 1090519040;
}

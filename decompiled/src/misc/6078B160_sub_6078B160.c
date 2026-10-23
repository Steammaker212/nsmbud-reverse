/* sub_6078B160
 * address: 0x6078B160   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6078B160(_DWORD *result, int a2)
{
  int v2; // lr
  int v3; // r2
  int *v4; // r12
  int v5; // r7
  int v6; // r8
  int v7; // r3
  int v8; // r5
  int v9; // r5
  bool v10; // cc
  int i; // r2
  int v12; // r6
  int v13; // r7
  int v14; // r4
  int v15; // r7
  int v16; // r2
  int v17; // r3
  int v18; // r3
  bool v19; // vf
  int v20; // r2

  v2 = result[28];
  if ( v2 )
  {
    v4 = result + 26;
    v3 = result[26];
    v5 = result[27];
    v6 = result[25] + 4 * v5;
    v7 = 0;
    while ( 1 )
    {
      v8 = result[26];
      if ( v5 + v7 < v3 )
        v8 = 0;
      v9 = v6 - 4 * v8;
      if ( *(_DWORD *)(v9 + 4 * v7) == a2 )
        break;
      if ( v2 == ++v7 )
        goto LABEL_24;
    }
    if ( v2 > v7 )
    {
      v10 = v2 < 1;
      if ( v2 >= 1 )
        v10 = v7 < 0;
      if ( !v10 )
      {
        if ( --v2 > v7 )
        {
          if ( v5 + v7 + 1 < v3 )
            v3 = 0;
          *(_DWORD *)(v9 + 4 * v7) = *(_DWORD *)(v6 - 4 * v3 + 4 * v7 + 4);
          for ( i = v7 + 1; ; ++i )
          {
            v2 = result[28] - 1;
            if ( i >= v2 )
              break;
            v12 = result[27];
            v13 = result[26];
            v14 = i + v12 - v13;
            if ( i + v12 < v13 )
              v14 = i + v12;
            if ( i + v12 + 1 >= v13 )
              v12 -= v13;
            v15 = i + v12;
            *(_DWORD *)(result[25] + 4 * v14) = *(_DWORD *)(result[25] + 4 * v15 + 4);
          }
        }
        result[28] = v2;
      }
    }
  }
  else
  {
    v4 = result + 26;
    v2 = 0;
  }
LABEL_24:
  v16 = *v4;
  if ( v2 < *v4 )
  {
    v17 = result[27];
    if ( v17 < 1 )
      v17 = *v4;
    v18 = v17 - 1;
    result[27] = v18;
    result[28] = v2 + 1;
    v19 = __OFSUB__(v18, v16);
    v20 = v18 - v16;
    result = (_DWORD *)result[25];
    if ( v20 < 0 != v19 )
      v20 = v18;
    result[v20] = a2;
  }
  return result;
}

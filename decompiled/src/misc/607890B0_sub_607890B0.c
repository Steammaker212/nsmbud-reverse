/* sub_607890B0
 * address: 0x607890B0   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607890B0(_DWORD *result, int a2)
{
  int v2; // lr
  int v3; // r3
  int v4; // r5
  int v5; // r12
  int v6; // r2
  int v7; // r4
  int v8; // r6
  bool v9; // cc
  int v10; // r5
  int v11; // r1
  int i; // r1
  int v13; // r3
  int v14; // r6
  int v15; // r4
  int v16; // r3

  v2 = result[20];
  if ( v2 )
  {
    v3 = result[18];
    v4 = result[19];
    v5 = result[17] + 4 * v4;
    v6 = 0;
    while ( 1 )
    {
      v7 = v4 + v6;
      v8 = result[18];
      if ( v4 + v6 < v3 )
        v8 = 0;
      if ( *(_DWORD *)(v5 - 4 * v8 + 4 * v6) == a2 )
        break;
      if ( v2 == ++v6 )
        return result;
    }
    if ( v2 > v6 )
    {
      v9 = v6 < 0;
      if ( v6 >= 0 )
        v9 = v2 < 1;
      if ( !v9 )
      {
        v10 = v2 - 1;
        if ( v2 - 1 > v6 )
        {
          v11 = result[18];
          if ( v7 < v3 )
            v11 = 0;
          if ( v7 + 1 < v3 )
            v3 = 0;
          *(_DWORD *)(v5 - 4 * v11 + 4 * v6) = *(_DWORD *)(v5 - 4 * v3 + 4 * v6 + 4);
          for ( i = v6 + 1; ; ++i )
          {
            v10 = result[20] - 1;
            if ( i >= v10 )
              break;
            v13 = result[18];
            v14 = result[19];
            v15 = i + v14 - v13;
            if ( i + v14 < v13 )
              v15 = i + v14;
            if ( i + v14 + 1 >= v13 )
              v14 -= v13;
            v16 = i + v14;
            *(_DWORD *)(result[17] + 4 * v15) = *(_DWORD *)(result[17] + 4 * v16 + 4);
          }
        }
        result[20] = v10;
      }
    }
  }
  return result;
}

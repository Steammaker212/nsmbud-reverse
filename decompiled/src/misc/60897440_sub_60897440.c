/* sub_60897440
 * address: 0x60897440   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60897440(_DWORD *result, int a2, int a3)
{
  int *v3; // r12
  int **v4; // lr
  int *v5; // r2
  int *v6; // r3
  int v7; // r4
  int *v8; // r2
  int *v9; // r1
  int v10; // r2
  int v11; // t1
  int v12; // t1

  if ( a2 )
  {
    v3 = result + 94;
    v4 = (int **)(result + 95);
    if ( a3 == 1 )
    {
      while ( 1 )
      {
        v5 = *v4;
        if ( *v4 == v3 )
          break;
        v4 = (int **)(v5 + 1);
        if ( *(v5 - 2) == a2 )
        {
          *(v5 - 2) = 0;
          result[102] -= *(v5 - 1);
          v6 = (int *)v5[1];
          v7 = *v6;
          *(_DWORD *)(*v5 + 4) = v6;
          *v6 = *v5;
          FIELD_U32(v7, 4) = v5;
          *v5 = v7;
          result[105] = v5 - 3;
          --result[100];
          return result;
        }
      }
    }
    else
    {
      v8 = *v4;
      if ( *v4 != v3 )
      {
        while ( *(v8 - 2) != a2 )
        {
          v8 = (int *)v8[1];
          if ( v8 == v3 )
            return result;
        }
        v9 = v8 - 3;
        *v9 = result[98];
        v11 = result[96];
        result += 96;
        v10 = v11;
        v12 = v9[5];
        v9 += 5;
        *v9 = v10;
        FIELD_U32(v12, 4) = result;
        *(_DWORD *)(*result + 4) = v9;
        *result = v12;
      }
    }
  }
  return result;
}

/* sub_6089751C
 * address: 0x6089751C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6089751C(_DWORD *result)
{
  _DWORD *v1; // r2
  _DWORD *v2; // r1
  _DWORD *v3; // r4
  _DWORD *v4; // r5
  int v5; // r6
  int v6; // r6
  int v7; // r5
  int **v8; // r6
  int *v9; // r4
  int *v10; // r7
  int v11; // r5

  v1 = (_DWORD *)result[97];
  v2 = result + 96;
  while ( v1 != v2 )
  {
    while ( 1 )
    {
      v3 = v1;
      v4 = v1;
      v5 = *(v1 - 5);
      v1 = (_DWORD *)v1[1];
      if ( !v5 )
        break;
      *(v3 - 5) = v5 - 1;
      if ( v1 == v2 )
        return result;
    }
    if ( v3 != v2 )
    {
      v6 = *v1;
      *(_DWORD *)(*v3 + 4) = v1;
      *v1 = *v4;
      FIELD_U32(v6, 4) = v3;
      *v3 = v6;
    }
    v7 = *(v3 - 4);
    v8 = (int **)(result + 95);
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 == result + 94 )
        break;
      v8 = (int **)(v9 + 1);
      if ( *(v9 - 2) == v7 )
      {
        *(v9 - 2) = 0;
        result[102] -= *(v9 - 1);
        v10 = (int *)v9[1];
        v11 = *v10;
        *(_DWORD *)(*v9 + 4) = v10;
        *v10 = *v9;
        FIELD_U32(v11, 4) = v9;
        *v9 = v11;
        result[105] = v9 - 3;
        --result[100];
        break;
      }
    }
  }
  return result;
}

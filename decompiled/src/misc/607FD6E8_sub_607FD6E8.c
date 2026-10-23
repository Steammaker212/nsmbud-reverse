/* sub_607FD6E8
 * address: 0x607FD6E8   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FD6E8(_DWORD *a1, int *a2)
{
  int v4; // r0
  int **v5; // r6
  int v6; // r7
  int *v7; // t1
  int result; // r0
  _DWORD *v9; // r12
  int v10; // r0
  int v11; // r2
  int v12; // r3
  _DWORD *v13; // r5
  int v14; // r6
  int v15; // r7
  int v16; // r2
  int v17; // r3
  int v18; // r4
  int v19; // r6
  int v20; // r7
  int v21; // r1

  v4 = a1[8];
  if ( v4 )
  {
    v5 = (int **)a1[10];
    v6 = 4 * v4;
    while ( 1 )
    {
      v7 = *v5++;
      result = sub_607FD0E4(v7, (int)a2);
      if ( result )
        break;
      v6 -= 4;
      if ( !v6 )
      {
        result = a1[8];
        goto LABEL_7;
      }
    }
  }
  else
  {
    result = 0;
LABEL_7:
    if ( result < a1[9] )
    {
      v9 = (_DWORD *)a1[11];
      if ( v9 )
        a1[11] = *v9;
      else
        v9 = 0;
      v10 = *a2;
      v11 = a2[1];
      v12 = a2[2];
      v14 = a2[3];
      v15 = a2[4];
      v13 = a2 + 5;
      *v9 = v10;
      v9[1] = v11;
      v9[2] = v12;
      v9[3] = v14;
      v9[4] = v15;
      v16 = v13[1];
      v17 = v13[2];
      v18 = v13[3];
      v19 = v13[4];
      v20 = v13[5];
      v9[5] = *v13;
      v9[6] = v16;
      v9[7] = v17;
      v9[8] = v18;
      v9[9] = v19;
      v9[10] = v20;
      v21 = a1[8];
      result = a1[9];
      if ( v21 < result )
      {
        *(_DWORD *)(a1[10] + 4 * v21) = v9;
        result = a1[8] + 1;
        a1[8] = result;
      }
    }
  }
  return result;
}

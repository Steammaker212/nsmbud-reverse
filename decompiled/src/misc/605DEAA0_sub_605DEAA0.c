/* sub_605DEAA0
 * address: 0x605DEAA0   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605DEAA0(_DWORD *a1)
{
  int v1; // r4
  int *v2; // r12
  int v3; // lr
  int *v4; // r8
  int *v5; // r9
  int *v6; // r10
  int v7; // r5
  int v8; // r6
  int v9; // r5
  _BYTE *v10; // r5
  char v11; // r6
  int v12; // t1
  char v13; // r6
  int v14; // r5
  int v15; // r4
  int v16; // r7
  int v17; // r3
  int v18; // r6
  int v19; // r2
  int v20; // r2
  int v21; // r4
  int v22; // r2
  int v23; // r2
  int v24; // r2
  _DWORD *result; // r0
  int v26; // r1
  int v27; // t1

  v2 = a1 + 1764;
  v1 = a1[1764];
  if ( v1 )
  {
    v3 = 0;
    v4 = a1 + 1762;
    v5 = a1 + 1763;
    v6 = a1 + 1761;
    do
    {
      while ( 1 )
      {
        v7 = *v5 + v3;
        v8 = v7 - *v4;
        if ( v7 < *v4 )
          v8 = *v5 + v3;
        v9 = *v6 + 8 * v8;
        v12 = FIELD_U8(v9, 4);
        v10 = (_BYTE *)(v9 + 4);
        v11 = v12;
        if ( !v12 )
          break;
        v13 = v11 - 1;
        *v10 = v13;
        v1 = *v2;
        if ( !v13 )
          break;
        if ( ++v3 == v1 )
          goto LABEL_20;
      }
      if ( v1 > v3 && v1 >= 1 )
      {
        if ( --v1 > v3 )
        {
          v14 = v3;
          do
          {
            v15 = *v5;
            v16 = *v4;
            v17 = *v6;
            v18 = v14 + *v5;
            v19 = v18;
            if ( v18 + 1 >= *v4 )
              v19 = v18 - v16;
            v20 = v17 + 8 * v19;
            if ( v18 >= v16 )
              v15 -= v16;
            v21 = v14 + v15;
            ++v14;
            *(_DWORD *)(v17 + 8 * v21) = FIELD_U32(v20, 8);
            *(_BYTE *)(v17 + 8 * v21 + 4) = FIELD_U8(v20, 12);
            v1 = *v2 - 1;
          }
          while ( v14 < v1 );
        }
        *v2 = v1;
      }
    }
    while ( v3 != v1 );
  }
LABEL_20:
  v22 = a1[1732];
  if ( v22 )
    a1[1732] = v22 - 1;
  v23 = a1[1733];
  if ( v23 )
    a1[1733] = v23 - 1;
  v24 = a1[1734];
  if ( v24 )
    a1[1734] = v24 - 1;
  v27 = a1[1735];
  result = a1 + 1735;
  v26 = v27;
  if ( v27 )
    *result = v26 - 1;
  return result;
}

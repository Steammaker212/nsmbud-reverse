/* sub_60963754
 * address: 0x60963754   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60963754(unsigned int *a1, _DWORD *a2)
{
  int result; // r0
  int v5; // r1
  int v6; // r2
  unsigned int v7; // r6
  int v8; // r1
  int v9; // r1
  unsigned int **v10; // r2
  unsigned int *v11; // r6
  unsigned int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r2
  _DWORD *v15; // r0
  _DWORD *v16; // r1
  _DWORD *v17; // r5
  _DWORD *v18; // r1
  unsigned int v19; // r3
  unsigned int **v20; // r2
  int v21; // r0
  unsigned int v22; // r3
  unsigned int *v23; // r1
  unsigned int v24; // r2
  unsigned int v25; // r0
  _DWORD *v26; // r0
  int v27; // r1
  unsigned int v28; // r0
  unsigned int v29; // r1
  int v30; // r0

  result = 0;
  v5 = a1[2];
  if ( v5 >= 3 )
  {
    v6 = 4 * v5 - 4;
    do
    {
      if ( v5 <= 1 )
      {
        a1[2] = v5;
        return result;
      }
      v7 = a1[1];
      if ( *a1 > --v5 )
        v7 += v6;
      v6 -= 4;
    }
    while ( *(_DWORD *)(*(_DWORD *)v7 + 8) != 2 );
    v8 = v5 + 1;
    a1[2] = v8;
    if ( v8 >= 3 )
    {
      v9 = a2[2];
      if ( v9 <= 15 )
      {
        v10 = (unsigned int **)a2[1];
        if ( *a2 > (unsigned int)v9 )
          v10 += v9;
        v11 = *v10;
        memset((void *)(*v10)[1], 0, 12 * **v10);
        result = 0;
        v11[2] = 0;
        ++a2[2];
        if ( v11 )
        {
          v12 = a1[1];
          v13 = a1[2] - 1;
          if ( *a1 > v13 )
            v12 += 4 * v13;
          v14 = v11[2];
          v15 = *(_DWORD **)v12;
          v16 = *(_DWORD **)(*(_DWORD *)v12 + 4);
          v11[2] = v14 + 1;
          v17 = (_DWORD *)v11[1];
          if ( *v11 > v14 )
            v17 += 3 * v14;
          *v17 = *v16;
          v17[1] = v16[1];
          v17[2] = v16[2];
          v18 = (_DWORD *)v15[1];
          v19 = v11[2];
          if ( *v15 > 1u )
            v18 += 3;
          v11[2] = v19 + 1;
LABEL_24:
          v26 = (_DWORD *)v11[1];
          if ( *v11 > v19 )
            v26 += 3 * v19;
          *v26 = *v18;
          v26[1] = v18[1];
          v26[2] = v18[2];
          while ( 1 )
          {
            v27 = a1[2];
            a1[2] = v27 - 1;
            v28 = v11[2] - 1;
            if ( v27 < 2 )
              break;
            v29 = v11[1];
            if ( *v11 > v28 )
              v29 += 12 * v28;
            v30 = sub_60963934(a1, v29);
            if ( v30 >= 0 )
            {
              v20 = (unsigned int **)a1[1];
              v21 = v30 + 1;
              v22 = a1[2] - 1;
              if ( *a1 > v22 )
                v20 += v22;
              v19 = v11[2];
              v23 = *v20;
              v24 = **v20;
              v18 = (_DWORD *)v23[1];
              v11[2] = v19 + 1;
              v25 = v21 % 2;
              if ( v24 > v25 )
                v18 += 3 * v25;
              goto LABEL_24;
            }
          }
          v11[2] = v28;
          return 1;
        }
      }
    }
  }
  return result;
}

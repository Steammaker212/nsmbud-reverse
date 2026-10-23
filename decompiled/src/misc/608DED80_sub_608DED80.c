/* sub_608DED80
 * address: 0x608DED80   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_608DED80(signed int result, int (__fastcall *a2)(int, _DWORD))
{
  int v2; // r9
  _DWORD *v4; // r7
  int v5; // r6
  signed int v6; // r4
  unsigned int v7; // r5
  int v8; // r11
  signed int v9; // r8
  _DWORD *v10; // r1
  int v11; // r11
  int v12; // r5
  int v13; // r8
  int v14; // r6
  signed int v15; // r4
  _DWORD *v16; // r1
  _DWORD *v17; // [sp+0h] [bp-28h]

  v2 = *(_DWORD *)result;
  if ( *(int *)result >= 2 )
  {
    v4 = *(_DWORD **)(result + 8);
    result = (unsigned int)v2 >> 1;
    do
    {
      v5 = result;
      v6 = 2 * result;
      v7 = result;
      v17 = (_DWORD *)(result - 1);
      v8 = v4[result - 1];
      if ( 2 * result <= v2 )
      {
        v9 = result;
        while ( 1 )
        {
          v7 = v6 >= v2 ? v6 : v6 | ((unsigned int)a2(v4[v6 - 1], v4[v6]) >> 31);
          if ( a2(v8, v4[v7 - 1]) >= 0 )
            break;
          v10 = &v4[v9];
          v6 = 2 * v7;
          v9 = v7;
          *(v10 - 1) = v4[v7 - 1];
          if ( (int)(2 * v7) > v2 )
            goto LABEL_12;
        }
        v7 = v9;
      }
LABEL_12:
      v4[v7 - 1] = v8;
      result = (signed int)v17;
    }
    while ( v5 > 1 );
    if ( v2 >= 2 )
    {
      do
      {
        v11 = v2;
        v12 = 1;
        v13 = v4[--v2];
        v4[v2] = *v4;
        if ( v11 >= 3 )
        {
          v14 = 1;
          v15 = 2;
          while ( 1 )
          {
            v12 = v15 >= v2 ? v15 : v15 | ((unsigned int)a2(v4[v15 - 1], v4[v15]) >> 31);
            if ( a2(v13, v4[v12 - 1]) >= 0 )
              break;
            v16 = &v4[v14];
            v15 = 2 * v12;
            v14 = v12;
            *(v16 - 1) = v4[v12 - 1];
            if ( 2 * v12 >= v11 )
              goto LABEL_23;
          }
          v12 = v14;
        }
LABEL_23:
        result = (signed int)&v4[v12];
        *(_DWORD *)(result - 4) = v13;
      }
      while ( v2 > 1 );
    }
  }
  return result;
}

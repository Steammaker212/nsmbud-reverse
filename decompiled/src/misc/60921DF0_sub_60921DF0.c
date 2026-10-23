/* sub_60921DF0
 * address: 0x60921DF0   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60921DF0(int result, int a2, int a3, char a4)
{
  int v6; // r6
  int v7; // r8
  _DWORD *v8; // r7
  int v9; // r1
  _DWORD *v10; // r4
  int v11; // r7
  unsigned int v12; // r6
  int v13; // r3
  unsigned int v14; // r2

  v6 = result;
  if ( a2 != -1 )
  {
    v7 = result + 8 * a2;
    v8 = (_DWORD *)(v7 + 4);
    result = FIELD_U32(v7, 4);
    if ( result )
    {
      sub_60921EB8(v6, v8);
      result = 255;
      FIELD_U8(v7, 9) = -1;
    }
    if ( a3 )
    {
      *v8 = a3;
      FIELD_U8(v7, 8) = a4;
      v9 = FIELD_U32(v6, 132);
      v10 = *(_DWORD **)(v6 + 136);
      if ( v9 < 1 )
      {
        v12 = -1;
LABEL_15:
        if ( v9 > v12 )
          v10 += v12;
        *v10 = a3;
      }
      else
      {
        v11 = v9 + 1;
        v12 = -1;
        v13 = (int)&v10[v9 - 1];
        while ( 1 )
        {
          v14 = v11 - 2;
          result = (int)v10;
          if ( v9 > (unsigned int)(v11 - 2) )
            result = v13;
          if ( *(_DWORD *)result == a3 )
            break;
          --v11;
          v13 -= 4;
          if ( !*(_DWORD *)result )
            v12 = v14;
          if ( v11 <= 1 )
            goto LABEL_15;
        }
        LOBYTE(v12) = v11 - 2;
      }
      FIELD_U8(v7, 9) = v12;
    }
  }
  return result;
}

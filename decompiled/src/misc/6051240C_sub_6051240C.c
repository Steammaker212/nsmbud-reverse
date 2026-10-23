/* sub_6051240C
 * address: 0x6051240C   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051240C(int result, int a2, int a3)
{
  _DWORD *v4; // r8
  int v5; // r4
  unsigned int *v6; // r1
  signed int v7; // r7
  int v8; // r2
  unsigned int v9; // r3
  signed int v10; // r7
  unsigned int v11; // r7
  char *v12; // r6
  int v13; // r4
  unsigned int *v14; // r1
  int v15; // r7
  unsigned int v16; // r3
  signed int v17; // r6
  char *v18; // r6

  v4 = (_DWORD *)result;
  if ( a3 >= 2 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
        return result;
      result = sub_605117A0(result);
      v5 = 0;
      v6 = v4 + 2389;
      v7 = v4[2389];
      v8 = a3 + result - 1;
      v9 = v7;
      if ( v7 > v8 )
        v9 = a3 + result - 1;
      if ( v7 < result )
        v9 = result;
      *v6 = v9;
      while ( 1 )
      {
        v10 = v9;
        v9 = result;
        if ( v10 < v8 )
          v9 = v10 + 1;
        *v6 = v9;
        if ( v9 <= 0x22 )
        {
          v11 = v4[v9 + 1446];
          if ( v11 != 256 )
          {
            v12 = (char *)v4;
            if ( v11 < 0x100 )
              v12 = (char *)v4 + v11;
            if ( v12[4204] )
              break;
          }
        }
        if ( ++v5 >= a3 )
          return result;
      }
    }
    else
    {
      result = sub_605117A0(result);
      v13 = 0;
      v14 = v4 + 2389;
      v15 = v4[2389];
      v16 = v15;
      if ( v15 > a3 + result - 1 )
        v16 = a3 + result - 1;
      if ( v15 < result )
        v16 = result;
      *v14 = v16;
      while ( 1 )
      {
        v17 = v16;
        v16 = a3 + result - 1;
        if ( v17 > result )
          v16 = v17 - 1;
        *v14 = v16;
        if ( v16 <= 0x22 )
        {
          v11 = v4[v16 + 1446];
          if ( v11 != 256 )
          {
            v18 = (char *)v4;
            if ( v11 < 0x100 )
              v18 = (char *)v4 + v11;
            if ( v18[4204] )
              break;
          }
        }
        if ( ++v13 >= a3 )
          return result;
      }
    }
    v4[1183] = v11;
    result = v4[2391];
    v4[2390] = result;
  }
  return result;
}

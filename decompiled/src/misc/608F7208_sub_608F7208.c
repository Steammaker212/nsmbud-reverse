/* sub_608F7208
 * address: 0x608F7208   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F7208(_DWORD *a1, unsigned int a2, int a3, int a4)
{
  _DWORD *v5; // lr
  int result; // r0
  bool v7; // zf
  unsigned int v8; // r8
  unsigned int v9; // r9
  unsigned int v10; // r2
  int v11; // r2
  _DWORD *v12; // r3
  int v13; // r2
  int v14; // r3
  unsigned int v15; // r6
  _DWORD *v16; // r7
  int v17; // r2
  int v18; // r5
  unsigned int v19; // r6
  _DWORD *v20; // r7

  if ( (int)a1[34] < 1 )
    return 0;
  v5 = a1 + 32;
  result = a1[32];
  v7 = result == 0;
  if ( result )
  {
    result -= a1[35];
    v7 = result == 0;
  }
  if ( v7 )
    return 0;
  v8 = a3 - 1;
  v9 = 16 - a2;
  if ( a4 == 1 )
  {
    v13 = a1[35];
    v14 = result;
    result = 0;
    do
    {
      v15 = FIELD_U32(v14, 12);
      if ( v15 >= a2 && v15 >= ((v9 + v14 + v15 + FIELD_U16(v14, 10)) & v8) + a2 )
      {
        if ( result )
        {
          if ( FIELD_U32(result, 12) > v15 )
            result = v14;
        }
        else
        {
          result = v14;
        }
      }
      v16 = *(_DWORD **)(v13 + v14);
      v14 = (int)v16 - v13;
      if ( v16 == v5 )
        v14 = 0;
    }
    while ( v14 );
  }
  else if ( a4 )
  {
    v17 = a1[35];
    v18 = result;
    result = 0;
    do
    {
      v19 = FIELD_U32(v18, 12);
      if ( v19 >= a2 && v19 >= ((v9 + v18 + v19 + FIELD_U16(v18, 10)) & v8) + a2 )
      {
        if ( result )
        {
          if ( a4 == 2 && FIELD_U32(result, 12) < v19 )
            result = v18;
        }
        else
        {
          result = v18;
        }
      }
      v20 = *(_DWORD **)(v17 + v18);
      v18 = (int)v20 - v17;
      if ( v20 == v5 )
        v18 = 0;
    }
    while ( v18 );
  }
  else
  {
    while ( 1 )
    {
      v10 = FIELD_U32(result, 12);
      if ( v10 >= a2 && v10 >= ((v9 + result + v10 + FIELD_U16(result, 10)) & v8) + a2 )
        break;
      v11 = a1[35];
      v12 = *(_DWORD **)(v11 + result);
      result = (int)v12 - v11;
      if ( v12 == v5 )
        result = 0;
      if ( !result )
        return 0;
    }
  }
  return result;
}

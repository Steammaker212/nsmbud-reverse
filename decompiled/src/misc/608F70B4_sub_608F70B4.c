/* sub_608F70B4
 * address: 0x608F70B4   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F70B4(_DWORD *a1, unsigned int a2, int a3)
{
  int result; // r0
  _DWORD *v5; // r12
  int v6; // r3
  bool v7; // zf
  int v8; // r2
  _DWORD *v9; // r4
  int v10; // lr
  unsigned int v11; // r2
  _DWORD *v12; // r2
  int v13; // lr
  unsigned int v14; // r2
  _DWORD *v15; // r2
  int v16; // lr
  _DWORD *v17; // r4
  int v18; // r2
  int v19; // r4
  bool v20; // cf

  result = 0;
  if ( (int)a1[34] >= 1 )
  {
    v5 = a1 + 32;
    v6 = a1[32];
    v7 = v6 == 0;
    if ( v6 )
    {
      v6 -= a1[35];
      v7 = v6 == 0;
    }
    if ( !v7 )
    {
      if ( a3 == 2 )
      {
        v10 = a1[35];
        result = 0;
        do
        {
          v11 = FIELD_U32(v6, 12);
          if ( v11 >= a2 )
          {
            if ( result )
            {
              if ( FIELD_U32(result, 12) < v11 )
                result = v6;
            }
            else
            {
              result = v6;
            }
          }
          v12 = *(_DWORD **)(v10 + v6);
          v6 = (int)v12 - v10;
          if ( v12 == v5 )
            v6 = 0;
        }
        while ( v6 );
      }
      else if ( a3 == 1 )
      {
        v13 = a1[35];
        result = 0;
        do
        {
          v14 = FIELD_U32(v6, 12);
          if ( v14 >= a2 )
          {
            if ( result )
            {
              if ( FIELD_U32(result, 12) > v14 )
                result = v6;
            }
            else
            {
              result = v6;
            }
          }
          v15 = *(_DWORD **)(v13 + v6);
          v6 = (int)v15 - v13;
          if ( v15 == v5 )
            v6 = 0;
        }
        while ( v6 );
      }
      else if ( a3 )
      {
        v16 = a1[35];
        result = 0;
        do
        {
          v17 = *(_DWORD **)(v16 + v6);
          v18 = (int)v17 - v16;
          v7 = v17 == v5;
          v19 = result;
          if ( v7 )
            v18 = 0;
          if ( !result )
            v19 = v6;
          v20 = FIELD_U32(v6, 12) >= a2;
          v6 = v18;
          if ( v20 )
            result = v19;
        }
        while ( v18 );
      }
      else
      {
        while ( FIELD_U32(v6, 12) < a2 )
        {
          v8 = a1[35];
          v9 = *(_DWORD **)(v8 + v6);
          v6 = (int)v9 - v8;
          if ( v9 == v5 )
            v6 = 0;
          if ( !v6 )
            return result;
        }
        return v6;
      }
    }
  }
  return result;
}

/* sub_607122FC
 * address: 0x607122FC   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607122FC(_DWORD *a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r4
  _DWORD *v5; // r9
  _DWORD *v6; // r0
  unsigned int v7; // r1
  _DWORD *v8; // r5
  int *v9; // r4
  int *v10; // r9
  unsigned int v11; // r1

  a1[7] = a1[6];
  result = *(_DWORD **)(dword_60C995D0 + 32);
  if ( !result )
  {
    v3 = (_DWORD *)a1[2571];
    if ( v3 != a1 + 2570 )
    {
      v4 = v3 - 5;
      v5 = a1 + 2573;
      do
      {
        v6 = v3;
        v3 = (_DWORD *)v3[1];
        if ( *((_BYTE *)v4 + 16) )
        {
          v7 = v4[3] + 1;
          v4[3] = v7;
          if ( v7 >= 0xA )
          {
            sead__ListNode__erase(v6);
            --a1[2572];
            *v4 = *v5;
            *v5 = v4;
          }
        }
        v4 = v3 - 5;
      }
      while ( v3 - 5 != a1 + 2565 );
    }
    v8 = (_DWORD *)a1[3255];
    result = a1 + 3254;
    if ( v8 != a1 + 3254 )
    {
      v9 = v8 - 5;
      v10 = a1 + 3257;
      do
      {
        result = v8;
        v8 = (_DWORD *)v8[1];
        if ( *((_BYTE *)v9 + 16) )
        {
          v11 = v9[3] + 1;
          v9[3] = v11;
          if ( v11 >= 0xA )
          {
            sead__ListNode__erase(result);
            --a1[3256];
            result = (_DWORD *)*v10;
            *v9 = *v10;
            *v10 = (int)v9;
          }
        }
        v9 = v8 - 5;
      }
      while ( v8 - 5 != a1 + 3249 );
    }
  }
  return result;
}

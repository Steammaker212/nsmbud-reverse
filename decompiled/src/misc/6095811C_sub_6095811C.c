/* sub_6095811C
 * address: 0x6095811C   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095811C(_DWORD *a1, _DWORD *a2)
{
  int v4; // r9
  int v5; // r8
  int v6; // r1
  int v7; // r1
  int v8; // r4
  int v9; // r7
  unsigned int v10; // r8
  int v11; // r4
  int *v12; // r5
  int v13; // t1
  _DWORD *v14; // r1

  v4 = (int)(a1 + 200);
  sead__CriticalSection__lock((int)(a1 + 200));
  v5 = 0;
  if ( a2 )
  {
    sead__CriticalSection__lock(v4);
    v6 = a1[8];
    if ( v6 )
    {
      v7 = -v6;
      v8 = 1;
      v9 = 0;
      while ( *(_DWORD **)(a1[9] - v9) != a2 )
      {
        ++v8;
        v9 -= 4;
        if ( v7 + v8 == 1 )
          goto LABEL_6;
      }
      sead__CriticalSection__unlock(v4);
      if ( v8 )
      {
        v10 = v8 - 1;
        v11 = a1[6];
        if ( v11 )
        {
          v12 = (int *)a1[7];
          do
          {
            v13 = *v12++;
            sub_60975830(v13, a2);
            --v11;
          }
          while ( v11 );
        }
        v14 = (_DWORD *)a1[9];
        if ( a1[8] > v10 )
          v14 = (_DWORD *)((char *)v14 - v9);
        *v14 = 0;
        sub_609729A8(a2[33]);
        sub_609729A8(a2[34]);
        sub_609729A8(a2[35]);
        v5 = 1;
        a1[62] |= 1u;
      }
      else
      {
        v5 = 0;
      }
    }
    else
    {
LABEL_6:
      sead__CriticalSection__unlock(v4);
    }
  }
  sead__CriticalSection__unlock(v4);
  return v5;
}

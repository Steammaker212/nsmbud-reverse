/* sub_607F6ABC
 * address: 0x607F6ABC   size: 8   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F6ABC(int a1)
{
  _DWORD *v1; // r1
  int result; // r0
  int v3; // r3
  _DWORD *v4; // r2
  int v5; // r3
  _DWORD *v6; // r2
  int v7; // r3
  _DWORD *v8; // r2
  int v9; // r3
  _DWORD *v10; // r2
  int v11; // r3
  _DWORD *v12; // r2
  int v13; // r3
  _DWORD *v14; // r2
  int v15; // r3
  _DWORD *v16; // r2
  int v17; // r3
  _DWORD *v18; // r1
  int v19; // r2

  v1 = *(_DWORD **)(a1 + 104);
  result = 1;
  if ( *((_BYTE *)v1 + 36) )
  {
    v3 = *(_DWORD *)(*v1 + 496);
    if ( !v3 || v3 == 3 && *(_DWORD *)(*v1 + 472) > *(_DWORD *)(*v1 + 484) )
    {
      v4 = (_DWORD *)v1[1];
      v5 = v4[124];
      if ( !v5 || v5 == 3 && v4[118] > v4[121] )
      {
        v6 = (_DWORD *)v1[2];
        v7 = v6[124];
        if ( !v7 || v7 == 3 && v6[118] > v6[121] )
        {
          v8 = (_DWORD *)v1[3];
          v9 = v8[124];
          if ( !v9 || v9 == 3 && v8[118] > v8[121] )
          {
            v10 = (_DWORD *)v1[4];
            v11 = v10[124];
            if ( !v11 || v11 == 3 && v10[118] > v10[121] )
            {
              v12 = (_DWORD *)v1[5];
              v13 = v12[124];
              if ( !v13 || v13 == 3 && v12[118] > v12[121] )
              {
                v14 = (_DWORD *)v1[6];
                v15 = v14[124];
                if ( !v15 || v15 == 3 && v14[118] > v14[121] )
                {
                  v16 = (_DWORD *)v1[7];
                  v17 = v16[124];
                  if ( !v17 || v17 == 3 && v16[118] > v16[121] )
                  {
                    v18 = (_DWORD *)v1[8];
                    v19 = v18[124];
                    if ( v19 )
                    {
                      if ( v19 == 3 && v18[118] > v18[121] )
                        return 0;
                    }
                    else
                    {
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

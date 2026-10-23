/* sub_60873D58
 * address: 0x60873D58   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60873D58(_DWORD *a1, int *a2, int a3, unsigned int a4)
{
  int v4; // r9
  int result; // r0
  int v9; // r2
  int v10; // r1
  bool v11; // nf
  int v12; // r8
  int v13; // r0
  int v14; // r1
  int v15; // r1
  int v16; // r0

  result = 0;
  if ( a2[6] )
  {
    v9 = *a2;
    if ( *a2 >= 0 )
    {
      v10 = a2[1];
      v11 = v10 < 0;
      if ( v10 >= 0 )
      {
        v4 = a2[3];
        v11 = v4 < 0;
      }
      if ( !v11 && a2[5] <= a4 )
      {
        v12 = 0;
        v13 = (int)(a1 + 14);
        a1[13] = a3;
        if ( v9 < v10 )
          LOWORD(v9) = v10;
        a1[17] = 0;
        if ( a3 )
        {
          v14 = a2[11];
          if ( v14 )
            v14 = a3 + a2[14];
          sub_6086A288(v13, v14, v9);
          v15 = a2[19];
          if ( v15 )
            v15 = a3 + a2[22];
          sub_6086A3DC(a1 + 8, v15, v4);
          if ( a2[7] )
            v12 = a3 + a2[10];
        }
        else
        {
          v12 = 0;
          sub_6086A288(v13, 0, v9);
          sub_6086A3DC(a1 + 8, 0, v4);
        }
        a1[12] = v12;
        a1[19] = a2[1];
        a1[20] = a2[2];
        v16 = 0;
        if ( a3 )
        {
          if ( a2[15] )
            v16 = a3 + a2[18];
        }
        a1[21] = v16;
        return 1;
      }
    }
  }
  return result;
}

/* sub_6086A548
 * address: 0x6086A548   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086A548(int a1, int *a2, int a3, unsigned int a4)
{
  int v4; // r9
  int result; // r0
  int v9; // r1
  int v10; // r2
  bool v11; // nf
  int v12; // r8
  int v13; // r0
  int v14; // r1
  int v15; // r1

  result = 0;
  if ( a2[5] )
  {
    v9 = *a2;
    if ( *a2 >= 0 )
    {
      v10 = a2[1];
      v11 = v10 < 0;
      if ( v10 >= 0 )
      {
        v4 = a2[2];
        v11 = v4 < 0;
      }
      if ( !v11 && a2[4] <= a4 )
      {
        v12 = 0;
        v13 = a1 + 56;
        FIELD_U32(a1, 52) = a3;
        if ( v10 <= 0 )
        {
          v9 = 0;
          v10 = 0;
        }
        FIELD_U32(a1, 68) = 0;
        if ( v9 >= v10 )
          LOWORD(v10) = v9;
        if ( a3 )
        {
          v14 = a2[10];
          if ( v14 )
            v14 = a3 + a2[13];
          sub_6086A288(v13, v14, v10);
          v15 = a2[14];
          if ( v15 )
            v15 = a3 + a2[17];
          sub_6086A3DC((_DWORD *)(a1 + 32), v15, v4);
          if ( a2[6] )
            v12 = a3 + a2[9];
        }
        else
        {
          v12 = 0;
          sub_6086A288(v13, 0, v10);
          sub_6086A3DC((_DWORD *)(a1 + 32), 0, v4);
        }
        FIELD_U32(a1, 48) = v12;
        FIELD_U16(a1, 72) = a2[1];
        return 1;
      }
    }
  }
  return result;
}

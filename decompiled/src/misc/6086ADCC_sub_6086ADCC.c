/* sub_6086ADCC
 * address: 0x6086ADCC   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086ADCC(_DWORD *a1, int *a2, int a3, unsigned int a4)
{
  int result; // r0
  int v8; // r2
  int v9; // r1
  bool v10; // nf
  int v11; // r9
  bool v12; // nf
  int v13; // r8
  int v14; // r0
  int v15; // r1
  int v16; // r1
  int v17; // r0
  int v18; // r0
  int v19; // r0

  result = 0;
  if ( a2[7] )
  {
    v8 = *a2;
    if ( *a2 >= 0 )
    {
      v9 = a2[1];
      v10 = v9 < 0;
      if ( v9 >= 0 )
        v10 = a2[2] < 0;
      if ( !v10 )
      {
        v11 = a2[4];
        v12 = v11 < 0;
        if ( v11 >= 0 )
          v12 = a2[3] < 0;
        if ( !v12 && a2[6] <= a4 )
        {
          v13 = 0;
          v14 = (int)(a1 + 14);
          a1[13] = a3;
          if ( v8 < v9 )
            LOWORD(v8) = v9;
          a1[17] = 0;
          if ( a3 )
          {
            v15 = a2[12];
            if ( v15 )
              v15 = a3 + a2[15];
            sub_6086A288(v14, v15, v8);
            v16 = a2[20];
            if ( v16 )
              v16 = a3 + a2[23];
            sub_6086A3DC(a1 + 8, v16, v11);
            if ( a2[8] )
              v13 = a3 + a2[11];
          }
          else
          {
            v13 = 0;
            sub_6086A288(v14, 0, v8);
            sub_6086A3DC(a1 + 8, 0, v11);
          }
          a1[12] = v13;
          a1[19] = a2[1];
          a1[20] = a2[2];
          a1[21] = a2[3];
          a1[22] = a2[4];
          if ( a3 )
          {
            v17 = a2[16];
            if ( v17 )
              v17 = a3 + a2[19];
            a1[23] = v17;
            v18 = a2[24];
            if ( v18 )
              v18 = a3 + a2[27];
            a1[24] = v18;
            if ( a2[28] )
              v19 = a3 + a2[31];
            else
              v19 = 0;
          }
          else
          {
            v19 = 0;
            a1[23] = 0;
            a1[24] = 0;
          }
          a1[25] = v19;
          return 1;
        }
      }
    }
  }
  return result;
}

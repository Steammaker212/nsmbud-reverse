/* sub_60921EB8
 * address: 0x60921EB8   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60921EB8(_DWORD *a1, int *a2)
{
  int v2; // r2
  int v3; // r3
  bool v4; // zf
  int v5; // r3
  bool v6; // zf
  int v7; // r3
  bool v8; // zf
  int v9; // r3
  bool v10; // zf
  int v11; // r3
  bool v12; // zf
  int v13; // r3
  bool v14; // zf
  int v15; // r3
  bool v16; // zf
  int v17; // r3
  bool v18; // zf
  unsigned int v19; // r2
  unsigned int v20; // r1
  _DWORD *v21; // r0

  v2 = *a2;
  *a2 = 0;
  *((_BYTE *)a2 + 4) = 1;
  v3 = a1[1];
  v4 = v2 == v3;
  if ( v2 != v3 )
    v4 = v2 == a1[3];
  if ( !v4 )
  {
    v5 = a1[5];
    v6 = v2 == v5;
    if ( v2 != v5 )
      v6 = v2 == a1[7];
    if ( !v6 )
    {
      v7 = a1[9];
      v8 = v2 == v7;
      if ( v2 != v7 )
        v8 = v2 == a1[11];
      if ( !v8 )
      {
        v9 = a1[13];
        v10 = v2 == v9;
        if ( v2 != v9 )
          v10 = v2 == a1[15];
        if ( !v10 )
        {
          v11 = a1[17];
          v12 = v2 == v11;
          if ( v2 != v11 )
            v12 = v2 == a1[19];
          if ( !v12 )
          {
            v13 = a1[21];
            v14 = v2 == v13;
            if ( v2 != v13 )
              v14 = v2 == a1[23];
            if ( !v14 )
            {
              v15 = a1[25];
              v16 = v2 == v15;
              if ( v2 != v15 )
                v16 = v2 == a1[27];
              if ( !v16 )
              {
                v17 = a1[29];
                v18 = v2 == v17;
                if ( v2 != v17 )
                  v18 = v2 == a1[31];
                if ( !v18 )
                {
                  v19 = a1[33];
                  v20 = *((char *)a2 + 5);
                  v21 = (_DWORD *)a1[34];
                  if ( v19 > v20 )
                    v21 += v20;
                  *v21 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return -1;
}

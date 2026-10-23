/* sub_604FBE14
 * address: 0x604FBE14   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FBE14(int result)
{
  int *v1; // r1
  int v2; // r2
  int v3; // r2
  int v4; // r3
  int v5; // r3
  int *v6; // r2
  int v7; // r5
  int v8; // r7
  int v9; // r1
  int v10; // r4
  int v11; // r6
  unsigned int v12; // r7
  bool v13; // cc
  int v14; // r1
  unsigned int v15; // r12
  int v16; // lr
  unsigned int v17; // r4
  int v18; // lr
  unsigned int v19; // r1
  int v20; // r1
  int v21; // lr
  unsigned int v22; // r1
  unsigned int v23; // r1
  unsigned int v24; // r1
  unsigned int v25; // r1

  v1 = (int *)(result + 40080);
  v2 = FIELD_U32(result, 40080);
  if ( FIELD_U8(result, 40100) )
  {
    v3 = v2 + 1;
    *v1 = v3;
    v4 = FIELD_U32(result, 40084);
    if ( v3 < v4 )
      v4 = v3;
  }
  else
  {
    v4 = v2 - 1;
    *v1 = v2 - 1;
    if ( v2 < 1 )
      v4 = 0;
  }
  *v1 = v4;
  v5 = 9 * v4;
  v6 = (int *)(result + 40088);
  v7 = FIELD_U32(result, 40088);
  if ( !FIELD_U8(result, 40103) )
  {
    v14 = dword_60B0368C[v7];
    *v6 = v14;
    if ( v7 == 5 )
    {
      v16 = dword_60C99E1C;
    }
    else
    {
      v15 = v7 + v5;
      if ( v7 != 8
        || (v16 = dword_60C99E1C, v15 <= 0x35)
        && (v17 = *(_DWORD *)(dword_60C99E1C + 4 * v15 + 16), v17 <= 0x35)
        && *(_DWORD *)(dword_60C99E1C + 4424 * v17 + 236) )
      {
        switch ( v14 )
        {
          case 4:
            v18 = dword_60C99E1C;
            goto LABEL_36;
          case 5:
            v21 = dword_60C99E1C;
            goto LABEL_44;
          case 7:
            v18 = dword_60C99E1C;
            if ( v15 <= 0x35 )
            {
              v22 = *(_DWORD *)(dword_60C99E1C + 4 * v15 + 16);
              if ( v22 <= 0x35 )
              {
                if ( *(_DWORD *)(dword_60C99E1C + 4424 * v22 + 236) )
                  goto LABEL_30;
              }
            }
            *v6 = 4;
LABEL_36:
            if ( (unsigned int)(v5 + 4) <= 0x35 )
            {
              v23 = *(_DWORD *)(v18 + 4 * (v5 + 4) + 16);
              if ( v23 <= 0x35 )
              {
                if ( *(_DWORD *)(v18 + 4424 * v23 + 236) )
                  goto LABEL_30;
              }
            }
            v20 = 1;
            goto LABEL_29;
          case 8:
            v21 = dword_60C99E1C;
            if ( v15 <= 0x35 )
            {
              v24 = *(_DWORD *)(dword_60C99E1C + 4 * v15 + 16);
              if ( v24 <= 0x35 )
              {
                if ( *(_DWORD *)(dword_60C99E1C + 4424 * v24 + 236) )
                  goto LABEL_30;
              }
            }
            *v6 = 5;
LABEL_44:
            if ( (unsigned int)(v5 + 5) <= 0x35 )
            {
              v25 = *(_DWORD *)(v21 + 4 * (v5 + 5) + 16);
              if ( v25 <= 0x35 )
              {
                if ( *(_DWORD *)(v21 + 4424 * v25 + 236) )
                  goto LABEL_30;
              }
            }
            v20 = 2;
            break;
          default:
            goto LABEL_30;
        }
        goto LABEL_29;
      }
      *v6 = 3;
    }
    if ( (unsigned int)(v5 + 3) <= 0x35 )
    {
      v19 = *(_DWORD *)(v16 + 4 * (v5 + 3) + 16);
      if ( v19 <= 0x35 )
      {
        if ( *(_DWORD *)(v16 + 4424 * v19 + 236) )
          goto LABEL_30;
      }
    }
    v20 = 0;
LABEL_29:
    *v6 = v20;
    goto LABEL_30;
  }
  if ( v7 >= 0 )
  {
    v8 = v7 + 4;
    v9 = dword_60C99E1C;
    v10 = dword_60C99E1C + 4 * v5;
    do
    {
      v11 = v8;
      v12 = v5 + v8 - 4;
      v13 = v12 > 0x35;
      if ( v12 <= 0x35 )
      {
        v12 = *(_DWORD *)(v10 + 4 * v11);
        v13 = v12 > 0x35;
      }
      if ( !v13 && *(_DWORD *)(v9 + 4424 * v12 + 236) )
        break;
      *v6 = v11 - 5;
      v8 = v11 - 1;
    }
    while ( v11 - 4 > 0 );
  }
LABEL_30:
  FIELD_U8(result, 40097) = 0;
  FIELD_U8(result, 40103) = 0;
  return result;
}

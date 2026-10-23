/* sub_6085852C
 * address: 0x6085852C   size: 692   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085852C(int a1, int a2)
{
  int v4; // r0
  int v5; // r2
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r1
  int v10; // r2
  int v11; // r0
  int v12; // r0
  int v13; // r3
  int v14; // r4
  int v15; // r5
  int v16; // r6
  int v17; // r7
  int v18; // r3
  int v19; // r4
  int v20; // r5
  int v21; // r6
  int v22; // r7
  _BYTE *v23; // r0
  _BYTE *v24; // r1
  _BYTE *v25; // r0
  int *v27; // r6
  int v28; // r5
  int v29; // r0
  int v30; // r2
  int v31; // r1
  int v32; // r6
  int v33; // r3
  int v34; // r2
  int v35; // r3
  int v36; // r6
  int v37; // r7
  int v38; // r4

  v4 = a1 + 4;
  v5 = a2 + 24;
  FIELD_U32(a1, 4) = v4;
  FIELD_U32(a1, 8) = v4;
  *(_DWORD *)a1 = &off_60C5A264;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 16) = a1 + 16;
  FIELD_U32(a1, 20) = a1 + 16;
  v6 = FIELD_U32(a2, 24);
  v7 = FIELD_U32(a2, 28);
  v8 = FIELD_U32(v5, 8);
  FIELD_U32(a1, 24) = v6;
  FIELD_U32(a1, 28) = v7;
  FIELD_U32(a1, 32) = v8;
  v9 = FIELD_U32(a2, 40);
  v10 = FIELD_U32(a2, 44);
  FIELD_U32(a1, 36) = FIELD_U32(a2, 36);
  FIELD_U32(a1, 40) = v9;
  FIELD_U32(a1, 44) = v10;
  v11 = FIELD_U32(a2, 48);
  FIELD_U32(a1, 52) = FIELD_U32(a2, 52);
  FIELD_U32(a1, 48) = v11;
  v12 = FIELD_U32(a2, 56);
  FIELD_U32(a1, 60) = FIELD_U32(a2, 60);
  FIELD_U32(a1, 56) = v12;
  FIELD_U8(a1, 64) = FIELD_U8(a2, 64);
  FIELD_U8(a1, 65) = FIELD_U8(a2, 65);
  FIELD_U8(a1, 66) = FIELD_U8(a2, 66);
  FIELD_U8(a1, 67) = FIELD_U8(a2, 67);
  FIELD_U8(a1, 68) = FIELD_U8(a2, 68);
  FIELD_U32(a1, 72) = FIELD_U32(a2, 72);
  v13 = FIELD_U32(a2, 84);
  v14 = FIELD_U32(a2, 88);
  v15 = FIELD_U32(a2, 92);
  v16 = FIELD_U32(a2, 96);
  v17 = FIELD_U32(a2, 100);
  FIELD_U32(a1, 80) = FIELD_U32(a2, 80);
  FIELD_U32(a1, 84) = v13;
  FIELD_U32(a1, 88) = v14;
  FIELD_U32(a1, 92) = v15;
  FIELD_U32(a1, 96) = v16;
  FIELD_U32(a1, 100) = v17;
  v18 = FIELD_U32(a2, 108);
  v19 = FIELD_U32(a2, 112);
  v20 = FIELD_U32(a2, 116);
  v21 = FIELD_U32(a2, 120);
  v22 = FIELD_U32(a2, 124);
  FIELD_U32(a1, 104) = FIELD_U32(a2, 104);
  FIELD_U32(a1, 108) = v18;
  FIELD_U32(a1, 112) = v19;
  FIELD_U32(a1, 116) = v20;
  FIELD_U32(a1, 120) = v21;
  FIELD_U32(a1, 124) = v22;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = FIELD_U32(a2, 132);
  sub_608580EC((_BYTE *)a1, (unsigned __int8 *)(a2 + 136));
  v23 = (_BYTE *)(a2 + 161);
  if ( FIELD_U8(a2, 161) )
  {
    FIELD_U8(a1, 161) = FIELD_U8(a2, 161);
    v23 = (_BYTE *)(a2 + 162);
    if ( FIELD_U8(a2, 162) )
    {
      FIELD_U8(a1, 162) = FIELD_U8(a2, 162);
      v23 = (_BYTE *)(a2 + 163);
      if ( FIELD_U8(a2, 163) )
      {
        FIELD_U8(a1, 163) = FIELD_U8(a2, 163);
        v23 = (_BYTE *)(a2 + 164);
        if ( FIELD_U8(a2, 164) )
        {
          FIELD_U8(a1, 164) = FIELD_U8(a2, 164);
          v23 = (_BYTE *)(a2 + 165);
          if ( FIELD_U8(a2, 165) )
          {
            FIELD_U8(a1, 165) = FIELD_U8(a2, 165);
            v23 = (_BYTE *)(a2 + 166);
            if ( FIELD_U8(a2, 166) )
            {
              FIELD_U8(a1, 166) = FIELD_U8(a2, 166);
              v23 = (_BYTE *)(a2 + 167);
              if ( FIELD_U8(a2, 167) )
              {
                FIELD_U8(a1, 167) = FIELD_U8(a2, 167);
                v23 = (_BYTE *)(a2 + 168);
                if ( FIELD_U8(a2, 168) )
                {
                  FIELD_U8(a1, 168) = FIELD_U8(a2, 168);
                  v24 = (_BYTE *)(a1 + 169);
                  v23 = (_BYTE *)(a2 + 169);
                }
                else
                {
                  v24 = (_BYTE *)(a1 + 168);
                }
              }
              else
              {
                v24 = (_BYTE *)(a1 + 167);
              }
            }
            else
            {
              v24 = (_BYTE *)(a1 + 166);
            }
          }
          else
          {
            v24 = (_BYTE *)(a1 + 165);
          }
        }
        else
        {
          v24 = (_BYTE *)(a1 + 164);
        }
      }
      else
      {
        v24 = (_BYTE *)(a1 + 163);
      }
    }
    else
    {
      v24 = (_BYTE *)(a1 + 162);
    }
  }
  else
  {
    v24 = (_BYTE *)(a1 + 161);
  }
  *v24 = 0;
  if ( *v23 )
  {
    v25 = v23 + 1;
    while ( *v25++ )
      ;
  }
  FIELD_U8(a1, 64) = FIELD_U8(a1, 64) & 0xCF | 0x10;
  if ( (FIELD_U8(a1, 68) & 4) != 0 )
  {
    v27 = *(int **)(a2 + 132);
    v28 = sub_60855BC8(v27[1]);
    qmemcpy((void *)v28, v27, v27[1]);
    FIELD_U32(a1, 132) = v28;
    if ( v28 )
    {
      if ( FIELD_U8(v28, 22) == 3 )
      {
        v29 = v28 + 12;
        v30 = FIELD_U32(a1, 72) | 1;
        FIELD_U32(a1, 72) = v30;
        v31 = FIELD_U32(v28, 16);
        v32 = v28 + 12 + v31;
        v33 = FIELD_U16(v32, 2);
        if ( FIELD_U16(v32, 2) )
        {
          v34 = v30 | (1 << (*(_BYTE *)(v29 + FIELD_U32(v32, 4) + v31) + 1));
          FIELD_U32(a1, 72) = v34;
          if ( v33 != 1 )
          {
            v35 = v33 - 1;
            v36 = v28 + 20;
            do
            {
              v37 = FIELD_U32(v28, 16);
              --v35;
              v38 = *(_DWORD *)(v36 + v37);
              v36 += 4;
              v34 |= 1 << (*(_BYTE *)(v29 + v38 + v37) + 1);
              FIELD_U32(a1, 72) = v34;
            }
            while ( v35 );
          }
        }
      }
    }
  }
  return a1;
}

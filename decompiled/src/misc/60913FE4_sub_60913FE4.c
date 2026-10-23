/* sub_60913FE4
 * address: 0x60913FE4   size: 1380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60913FE4(_DWORD *a1, int a2)
{
  _DWORD *v2; // r9
  int v3; // r6
  int v4; // r8
  int v5; // r4
  int v6; // r7
  int v7; // r6
  int v8; // r4
  int v9; // r6
  int v10; // r8
  _DWORD *v11; // r7
  int v12; // r1
  int v13; // r4
  int v14; // r0
  int v15; // r4
  _DWORD *v16; // r5
  int v17; // r0
  int v18; // r5
  int v19; // r4
  _DWORD *v20; // r6
  _DWORD *v21; // r7
  int v22; // r8
  int i; // r9
  int v24; // r5
  int v25; // r7
  _DWORD *v26; // r5
  _DWORD *v27; // r5
  int v28; // r4
  _DWORD *v29; // r7
  char *v30; // r5
  int v31; // r4
  _DWORD *v32; // r10
  _DWORD *v33; // r7
  int v34; // r7
  int j; // r11
  char *v36; // r4
  char *v37; // r5
  int v38; // r4
  _DWORD *v39; // r5
  int v40; // r7
  _DWORD *v41; // r6
  int v42; // r1
  int v43; // r0
  int v45; // [sp+4h] [bp-BCh]
  _DWORD *v46; // [sp+8h] [bp-B8h]
  int v47; // [sp+Ch] [bp-B4h]
  int v48; // [sp+10h] [bp-B0h]
  _BYTE v50[64]; // [sp+18h] [bp-A8h] BYREF
  _DWORD v51[26]; // [sp+58h] [bp-68h] BYREF

  v2 = a1;
  v3 = *a1;
  v4 = *(_DWORD *)(*a1 + 12) & 1;
  if ( !v4 )
  {
    sub_6091AE30(0, v3, 336);
    v3 = *v2;
  }
  v5 = FIELD_U32(v3, 28);
  v6 = FIELD_U32(dword_60CCFC8C, 28);
  dword_60CC73C4(v51);
  dword_60CC73C0(v51, v6);
  dword_60CC73CC(v51, 98);
  dword_60CC73C8(v51, v3 + v5, (*(_DWORD *)(*v2 + 24) + 4095) & 0xFFFFF000);
  v7 = v3 + 32;
  dword_60CC73DC(v7, v51);
  dword_60CC7444(v50, v6);
  dword_60CC7448(v50);
  dword_60CC744C(v50, v7, 0, (*(_DWORD *)(*v2 + 24) + 4095) & 0xFFFFF000);
  dword_60CC745C(*v2 + 288, v50);
  v8 = *v2 + *(_DWORD *)(*v2 + 20) + 336;
  if ( !v4 )
  {
    v47 = *(_DWORD *)(*v2 + 12) & 2;
    v45 = *(_DWORD *)(*v2 + 12) & 4;
    sub_6091AE30(0, v8, 8);
    v48 = v8;
    v15 = FIELD_U32(v8, 4);
    if ( v15 )
    {
      v16 = (_DWORD *)(v48 + 8);
      do
      {
        sub_6091AE30(0, v16, 16);
        --v15;
        v16 = (_DWORD *)((char *)v16 + *v16);
      }
      while ( v15 );
    }
    v46 = v2;
    v17 = *v2 + *(_DWORD *)(*v2 + 20);
    v18 = v17 + 336 + FIELD_U32(v17, 336);
    sub_6091AE30(0, v18, 8);
    v19 = FIELD_U32(v18, 4);
    if ( v19 )
    {
      v20 = (_DWORD *)(v18 + 8);
      v21 = (_DWORD *)(v18 + 8);
      do
      {
        sub_6091AE30(0, v21, 16);
        --v19;
        v21 = (_DWORD *)((char *)v21 + *v21);
      }
      while ( v19 );
      v22 = FIELD_U32(v18, 4);
      if ( v22 )
      {
        for ( i = 0; i != v22; ++i )
        {
          v24 = (int)v20 + v20[1] + 16;
          sub_6091AE30(0, v24, 8);
          v25 = FIELD_U32(v24, 4);
          if ( v25 )
          {
            v26 = (_DWORD *)(v24 + 8);
            do
            {
              sub_6091AE30(0, v26, 16);
              --v25;
              v26 = (_DWORD *)((char *)v26 + *v26);
            }
            while ( v25 );
          }
          v27 = (_DWORD *)((char *)v20 + v20[1] + *(_DWORD *)((char *)v20 + v20[1] + 16) + 16);
          sub_6091AE30(0, v27, 8);
          v28 = v27[1];
          if ( v28 )
          {
            v29 = v27 + 2;
            do
            {
              sub_6091AE30(0, v29, 16);
              --v28;
              v29 = (_DWORD *)((char *)v29 + *v29);
            }
            while ( v28 );
          }
          v30 = (char *)v27 + *v27;
          sub_6091AE30(0, v30, 8);
          v31 = *((_DWORD *)v30 + 1);
          if ( v31 )
          {
            v32 = v30 + 8;
            v33 = v30 + 8;
            do
            {
              sub_6091AE30(0, v33, 12);
              --v31;
              v33 = (_DWORD *)((char *)v33 + *v33);
            }
            while ( v31 );
            v34 = *((_DWORD *)v30 + 1);
            if ( v34 )
            {
              for ( j = 0; j != v34; ++j )
              {
                v36 = (char *)v32 + v32[2];
                v37 = v36 + 12;
                sub_6091AE30(0, v36 + 12, 8);
                v38 = *((_DWORD *)v36 + 4);
                if ( v38 )
                {
                  v39 = v37 + 8;
                  do
                  {
                    sub_6091AE30(0, v39, 12);
                    --v38;
                    v39 = (_DWORD *)((char *)v39 + *v39);
                  }
                  while ( v38 );
                }
                v32 = (_DWORD *)((char *)v32 + *v32);
              }
            }
          }
          v20 = (_DWORD *)((char *)v20 + *v20);
        }
      }
    }
    v40 = FIELD_U32(v48, 4);
    if ( v40 )
    {
      if ( v47 || (a2 ^ 1) == 1 )
      {
        v42 = 0;
        if ( (v40 & 7) != 0 )
        {
          v2 = v46;
          do
            ++v42;
          while ( (FIELD_U32(v48, 4) & 7) != v42 );
        }
        else
        {
          v2 = v46;
        }
        v10 = 1;
        if ( (unsigned int)(v40 - 1) >= 7 )
        {
          v43 = v40 - v42;
          do
            v43 -= 8;
          while ( v43 );
        }
        goto LABEL_58;
      }
      v2 = v46;
      v41 = (_DWORD *)(v48 + 8);
      if ( v45 )
      {
        do
        {
          v51[0] = v41;
          sub_60914574(v51, *v46 + 336);
          --v40;
          v41 = (_DWORD *)((char *)v41 + *v41);
        }
        while ( v40 );
      }
      else
      {
        do
        {
          v51[0] = v41;
          sub_60914574(v51, 0);
          --v40;
          v41 = (_DWORD *)((char *)v41 + *v41);
        }
        while ( v40 );
      }
    }
    else
    {
      v10 = 1;
      if ( v47 )
      {
        v2 = v46;
        goto LABEL_58;
      }
      v2 = v46;
      if ( a2 != 1 )
      {
LABEL_58:
        *(_DWORD *)(*v2 + 12) |= v10;
        return 1;
      }
    }
    v10 = 1;
    *(_DWORD *)(*v2 + 12) |= 2u;
    goto LABEL_58;
  }
  if ( (*(_DWORD *)(*v2 + 12) & 2) == 0 )
  {
    v9 = *(_DWORD *)(*v2 + *(_DWORD *)(*v2 + 20) + 340);
    v10 = 2;
    if ( v9 )
    {
      v11 = (_DWORD *)(*v2 + *(_DWORD *)(*v2 + 20) + 344);
      if ( (*(_DWORD *)(*v2 + 12) & 4) != 0 )
      {
        v12 = *v2 + 336;
        v51[0] = *v2 + *(_DWORD *)(*v2 + 20) + 344;
        sub_60914574(v51, v12);
        if ( v9 != 1 )
        {
          v13 = v9 - 1;
          do
          {
            v11 = (_DWORD *)((char *)v11 + *v11);
            v14 = *v2;
            v51[0] = v11;
            sub_60914574(v51, v14 + 336);
            --v13;
          }
          while ( v13 );
        }
      }
      else
      {
        do
        {
          v51[0] = v11;
          sub_60914574(v51, 0);
          --v9;
          v11 = (_DWORD *)((char *)v11 + *v11);
        }
        while ( v9 );
      }
    }
    goto LABEL_58;
  }
  return 1;
}

/* sub_604F00D8
 * address: 0x604F00D8   size: 708   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F00D8(int a1)
{
  unsigned int v1; // r7
  int v2; // r11
  int v3; // r3
  _DWORD *v4; // r9
  _DWORD *v5; // r8
  int v6; // r1
  unsigned int v7; // r4
  unsigned int v8; // r5
  unsigned int v9; // r5
  int *v10; // r2
  unsigned int v11; // r4
  int v12; // r6
  bool v13; // cc
  int v14; // r2
  int *v15; // r3
  unsigned int v16; // r6
  int v17; // r9
  int v18; // r5
  int v19; // r7
  unsigned int v20; // r7
  int v21; // r6
  unsigned int v22; // r7
  int v23; // r6
  _DWORD *v24; // r5
  _BYTE *v25; // r5
  int v26; // t1
  int v28; // [sp+4h] [bp-28h]

  v1 = 9;
  v2 = dword_60CC6D78;
  v3 = dword_60CC6D78 + 98488;
  v4 = (_DWORD *)(dword_60CC6D78 + 98524);
  v28 = dword_60CC6D78 + 98492;
  v5 = (_DWORD *)dword_60C99DEC;
  v6 = 0;
  do
  {
    if ( *(_DWORD *)(v2 + 4 * v1 + 98488) != 15 )
      goto LABEL_17;
    v7 = v1 + 1;
    if ( (int)(v1 + 1) <= 9 )
    {
      if ( (v6 & 1) != 0 )
      {
        v9 = 0;
        if ( v1 < 0xA )
          v9 = v1;
        *(_DWORD *)(v3 + 4 * v9) = *(_DWORD *)(v3 + 4 * v7);
        v8 = v1 + 2;
        if ( v6 == 1 )
          goto LABEL_16;
LABEL_10:
        v10 = (int *)(v28 + 4 * v8);
        do
        {
          if ( v7 >= 0xA )
            v7 = 0;
          *(_DWORD *)(v3 + 4 * v7) = *(v10 - 1);
          v11 = 0;
          v12 = *v10;
          if ( v8 < 0xA )
            v11 = v8;
          v10 += 2;
          *(_DWORD *)(v3 + 4 * v11) = v12;
          v7 = v8 + 1;
          v8 += 2;
        }
        while ( v8 != 10 );
        goto LABEL_16;
      }
      v8 = v1 + 1;
      v7 = v1;
      if ( v6 != 1 )
        goto LABEL_10;
    }
LABEL_16:
    *v4 = 15;
LABEL_17:
    v13 = (int)v1 <= 0;
    ++v6;
    --v1;
  }
  while ( !v13 );
  if ( FIELD_U32(a1, 74460) != 15 )
  {
    v14 = 0;
    v15 = (int *)(a1 + 56500);
    do
    {
      if ( *((_BYTE *)v15 + 2313) )
      {
        v16 = v5[12];
        v17 = 0;
        v18 = *v15;
        v19 = 0;
        if ( v16 < 7 )
          v17 = dword_60B03360[v16];
        if ( v18 != v17 )
        {
          v20 = v5[30];
          v21 = 0;
          if ( v20 < 7 )
            v21 = dword_60B03360[v20];
          v19 = 1;
          if ( v18 != v21 )
          {
            v22 = v5[48];
            v23 = 0;
            if ( v22 <= 6 )
              v23 = dword_60B03360[v22];
            v19 = 3;
            if ( v18 == v23 )
              v19 = 2;
          }
        }
        v24 = &v5[18 * v19];
        v24[11] = v15[32];
        if ( *(_BYTE *)(a1 + 74448 + v14) )
        {
          v26 = *((unsigned __int8 *)v24 + 66);
          v25 = (char *)v24 + 66;
          if ( !v26 )
            *v25 = 1;
        }
      }
      ++v14;
      v15 += 747;
    }
    while ( v14 != 6 );
  }
  if ( FIELD_U8(a1, 58813) )
    FIELD_U8(a1, 58821) = 1;
  if ( FIELD_U8(a1, 61801) )
    FIELD_U8(a1, 61809) = 1;
  if ( FIELD_U8(a1, 64789) )
    FIELD_U8(a1, 64797) = 1;
  if ( FIELD_U8(a1, 67777) )
    FIELD_U8(a1, 67785) = 1;
  if ( FIELD_U8(a1, 70765) )
    FIELD_U8(a1, 70773) = 1;
  if ( FIELD_U8(a1, 73753) )
    FIELD_U8(a1, 73761) = 1;
  FIELD_U16(a1, 74476) = 0;
  FIELD_U8(a1, 74478) = 0;
  return 74478;
}

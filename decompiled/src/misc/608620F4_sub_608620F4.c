/* sub_608620F4
 * address: 0x608620F4   size: 992   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608620F4(int a1, int a2, int a3)
{
  int result; // r0
  char v7; // r1
  bool v8; // zf
  int v9; // r7
  unsigned int v10; // r11
  _DWORD *v11; // r8
  _DWORD *v12; // r1
  int v13; // r0
  int v14; // r2
  int v15; // r6
  int v16; // r5
  int v17; // r7
  int v18; // r1
  int v19; // r6
  int v20; // r5
  int v21; // r0
  __int64 v22; // [sp+8h] [bp-38h] BYREF
  int v23; // [sp+10h] [bp-30h]
  int v24; // [sp+14h] [bp-2Ch]

  result = **(unsigned __int8 **)(a2 + 192);
  if ( (result & 2) == 0 )
  {
    v7 = FIELD_U8(a1, 214);
    v8 = (v7 & 2) == 0;
    if ( (v7 & 2) == 0 )
      v8 = FIELD_U32(a1, 228) == 0;
    if ( v8 )
    {
      result = FIELD_S8(a1, 213);
      if ( result >= 1 )
      {
        v15 = 0;
        do
        {
          v16 = FIELD_U32(a1, 216) + 8 * v15;
          v17 = FIELD_U32(v16, 4);
          if ( (FIELD_U8(v17, 16) & 3) != 0 )
          {
            sub_60868CA4(FIELD_U32(v16, 4), a2, a3);
            if ( sub_6085406C(a2, FIELD_U32(v17, 24), FIELD_U8(v17, 51)) == 1 )
              sub_6086A1FC(v17, a3);
            sub_60854050(a2);
            sub_60869BB8(FIELD_U32(v16, 4), a3, a2);
            sub_60835624(a3, 3, 1, (_DWORD *)(FIELD_U32(a2, 184) + 520), 6, 0);
            result = FIELD_U8(a1, 213);
          }
          ++v15;
        }
        while ( v15 < (char)result );
        v7 = FIELD_U8(a1, 214);
      }
      if ( (v7 & 4) == 0 )
      {
        sub_60868CA4(FIELD_U32(a1, 220), a2, a3);
        return sub_60865468(a3, a2, FIELD_U32(a1, 220));
      }
    }
    else
    {
      v9 = *(_DWORD *)(FIELD_U32(a1, 216) + 4);
      if ( (FIELD_U8(v9, 16) & 3) != 0 )
      {
        if ( sub_6085406C(a2, FIELD_U32(v9, 24), FIELD_U8(v9, 51)) == 1 )
          sub_6086A1FC(v9, a3);
        sub_60854050(a2);
        sub_6086A094(v9, a3, a2);
        sub_6086A144(v9, a3);
        if ( FIELD_U32(a1, 228) )
        {
          sub_60868CA4(v9, a2, a3);
          sub_60869F34(v9, a3, a2);
          sub_60869FE4(v9, a3, a2);
          sub_60835624(a3, 3, 1, (_DWORD *)(FIELD_U32(a2, 184) + 520), 6, 0);
          if ( FIELD_U32(a1, 228) )
          {
            v10 = 0;
            v11 = (_DWORD *)(FIELD_U32(a2, 184) + 520);
            do
            {
              v24 = 0;
              v23 = 0;
              v22 = 0;
              v12 = (_DWORD *)(*(_DWORD *)(FIELD_U32(a2, 192) + 8) + 16 * *(_DWORD *)(FIELD_U32(a2, 192) + 28));
              LODWORD(v22) = *v12;
              v13 = v12[1];
              v14 = v12[2];
              v24 = v12[3];
              v23 = v14;
              HIDWORD(v22) = v13;
              v22 += *(int *)(FIELD_U32(a1, 224) + 4 * v10);
              sub_60836348(
                a3,
                *(_DWORD *)(*(_DWORD *)(FIELD_U32(v9, 24) + 12) + 4 * FIELD_U8(v9, 51)),
                0,
                &v22,
                560);
              sub_60835624(a3, 3, 1, v11, 6, 0);
              ++v10;
            }
            while ( v10 < FIELD_U32(a1, 228) );
          }
        }
        else
        {
          v18 = FIELD_S8(a1, 213);
          if ( v18 >= 1 )
          {
            v19 = 0;
            do
            {
              v20 = FIELD_U32(a1, 216) + 8 * v19;
              v21 = FIELD_U32(v20, 4);
              if ( (FIELD_U8(v21, 16) & 3) != 0 )
              {
                sub_60868CA4(v21, a2, a3);
                sub_60869F34(FIELD_U32(v20, 4), a3, a2);
                sub_60869FE4(FIELD_U32(v20, 4), a3, a2);
                sub_60835624(a3, 3, 1, (_DWORD *)(FIELD_U32(a2, 184) + 520), 6, 0);
                LOBYTE(v18) = FIELD_U8(a1, 213);
              }
              ++v19;
            }
            while ( v19 < (char)v18 );
          }
        }
      }
      result = FIELD_U8(a1, 214);
      if ( (result & 4) == 0 )
      {
        result = FIELD_U8(a1, 212);
        if ( result == 1 )
        {
          sub_60868CA4(FIELD_U32(a1, 220), a2, a3);
          sub_60869F34(FIELD_U32(a1, 220), a3, a2);
          sub_60869FE4(FIELD_U32(a1, 220), a3, a2);
          return sub_60835624(a3, 3, 1, (_DWORD *)(FIELD_U32(a2, 184) + 520), 6, 0);
        }
        else if ( !FIELD_U8(a1, 212) )
        {
          sub_60868CA4(FIELD_U32(a1, 220), a2, a3);
          return sub_60865468(a3, a2, FIELD_U32(a1, 220));
        }
      }
    }
  }
  return result;
}

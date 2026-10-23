/* sub_604F293C
 * address: 0x604F293C   size: 1432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F293C(int a1)
{
  int v1; // r2
  int v2; // r10
  unsigned int v3; // r5
  int v4; // r11
  _BYTE *v5; // r3
  int *v6; // r6
  _BYTE *v7; // r9
  int result; // r0
  unsigned int v9; // r1
  int v10; // r1
  int v11; // r7
  unsigned int v12; // r1
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int v16; // r1
  int v17; // r4
  int v18; // r6
  int v19; // r6
  _DWORD *v20; // [sp+1Ch] [bp-64h]
  int *v21; // [sp+34h] [bp-4Ch]
  _BYTE *v22; // [sp+38h] [bp-48h]
  _DWORD *v23; // [sp+3Ch] [bp-44h]
  _DWORD *v24; // [sp+40h] [bp-40h]
  _DWORD *v25; // [sp+44h] [bp-3Ch]
  _DWORD *v26; // [sp+48h] [bp-38h]
  _DWORD *v28; // [sp+58h] [bp-28h]

  v1 = 0;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = (_BYTE *)dword_60C99DEC;
  FIELD_U32(a1, 74456) = 0;
  v6 = (int *)(a1 + 74456);
  FIELD_U8(a1, 74448) = 0;
  FIELD_U8(a1, 74453) = 0;
  FIELD_U8(a1, 74452) = 0;
  FIELD_U8(a1, 74451) = 0;
  FIELD_U8(a1, 74450) = 0;
  FIELD_U8(a1, 74449) = 0;
  if ( v5[36] )
  {
    v1 = 1;
    *v6 = 1;
  }
  if ( v5[108] )
    *v6 = ++v1;
  if ( v5[180] )
    *v6 = ++v1;
  if ( v5[252] )
    *v6 = v1 + 1;
  v22 = v5;
  v21 = (int *)(a1 + 74456);
  v20 = (_DWORD *)(a1 + 71440);
  v23 = (_DWORD *)(a1 + 68452);
  v24 = (_DWORD *)(a1 + 65464);
  v25 = (_DWORD *)(a1 + 62476);
  v26 = (_DWORD *)(a1 + 59488);
  v28 = (_DWORD *)(a1 + 56500);
  do
  {
    v7 = &v5[v2];
    result = (unsigned __int8)v5[v2 + 36];
    if ( v5[v2 + 36] )
    {
      v9 = *((_DWORD *)v7 + 12);
      result = 0;
      if ( v9 <= 6 )
        result = dword_60B03360[v9];
      if ( v3 <= 3 )
      {
        if ( *v28 == result && *v6 >= 1 )
        {
          v10 = *v6 - 1;
          if ( v10 <= 3 )
          {
            v11 = 0;
            v12 = dword_60B03218[4 * v10 + v3];
            if ( v12 != 11 )
              goto LABEL_38;
          }
        }
        if ( *v26 == result && *v6 >= 1 )
        {
          v13 = *v6 - 1;
          if ( v13 <= 3 )
          {
            v11 = 1;
            v12 = dword_60B03218[4 * v13 + v3];
            if ( v12 != 11 )
              goto LABEL_38;
          }
        }
        if ( *v25 == result && *v6 >= 1 )
        {
          v14 = *v6 - 1;
          if ( v14 <= 3 )
          {
            v11 = 2;
            v12 = dword_60B03218[4 * v14 + v3];
            if ( v12 != 11 )
              goto LABEL_38;
          }
        }
        if ( *v24 == result && *v6 >= 1 )
        {
          v15 = *v6 - 1;
          if ( v15 <= 3 )
          {
            v11 = 3;
            v12 = dword_60B03218[4 * v15 + v3];
            if ( v12 != 11 )
              goto LABEL_38;
          }
        }
        if ( *v23 == result && *v6 >= 1 )
        {
          v16 = *v6 - 1;
          if ( v16 <= 3 )
          {
            v11 = 4;
            v12 = dword_60B03218[4 * v16 + v3];
            if ( v12 != 11 )
              goto LABEL_38;
          }
        }
        if ( *v20 == result )
        {
          result = *v6;
          if ( *v6 >= 1 && --result <= 3 )
          {
            v11 = 5;
            result = (int)&dword_60B03218[4 * result];
            v12 = *(_DWORD *)(result + 4 * v3);
            if ( v12 != 11 )
            {
LABEL_38:
              if ( v12 >= 0xB )
                v12 = 0;
              v17 = 2988 * (__int16)v11 + a1;
              v18 = *(_DWORD *)(a1 + 4 * v12 + 74316);
              sub_604056C4((_DWORD *)(v17 + 56124), *((_DWORD *)v7 + 11));
              FIELD_U32(v17, 56504) = 0;
              FIELD_U32(v17, 56508) = 0;
              FIELD_U32(v17, 56512) = 0;
              v19 = FIELD_U32(v18, 92);
              FIELD_U32(v17, 58664) = v4;
              FIELD_U8(v17, 58813) = 1;
              FIELD_U8(v17, 58819) = 1;
              if ( *((_DWORD *)v7 + 11) == 8 )
                sub_604058BC(v17 + 56124);
              if ( v7[66] )
              {
                *(_BYTE *)(a1 + v11 + 74448) = 1;
                (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(FIELD_U32(v17, 56140) + 4) + 156))(*(_DWORD *)(FIELD_U32(v17, 56140) + 4));
                sub_604056E8(v17 + 56124, 10);
              }
              FIELD_U32(v17, 56516) = v19;
              FIELD_U32(v17, 56520) = -1021968384;
              FIELD_U32(v17, 56524) = 0;
              FIELD_U32(v17, 58712) = 1084227584;
              FIELD_U32(v17, 58716) = 1090519040;
              FIELD_U32(v17, 58720) = 1098907648;
              FIELD_U32(v17, 58724) = 1120403456;
              FIELD_U32(v17, 58728) = 1120403456;
              FIELD_U32(v17, 58732) = 1120403456;
              FIELD_U32(v17, 58736) = 1120403456;
              FIELD_U32(v17, 58740) = 1120403456;
              FIELD_U32(v17, 58744) = 1120403456;
              FIELD_U32(v17, 58748) = 1065353216;
              FIELD_U32(v17, 58752) = -1028390912;
              FIELD_U32(v17, 58756) = 1077936128;
              FIELD_U32(v17, 58760) = 1077936128;
              FIELD_U32(v17, 58708) = -1069547520;
              FIELD_U32(v17, 58700) = -1054867456;
              FIELD_U32(v17, 58764) = 1104674816;
              FIELD_U32(v17, 58768) = -1069547520;
              FIELD_U32(v17, 58776) = -1052770304;
              FIELD_U32(v17, 58780) = 1104674816;
              FIELD_U32(v17, 58784) = 1064514355;
              FIELD_U32(v17, 58808) = dword_60CA636C;
              FIELD_U32(v17, 58804) = dword_60CA6370;
              FIELD_U32(v17, 58792) = dword_60CA6374;
              FIELD_U32(v17, 58796) = dword_60CA6378;
              result = dword_60CA637C;
              FIELD_U32(v17, 58800) = dword_60CA637C;
              v5 = v22;
              v6 = v21;
              ++v3;
            }
          }
        }
      }
    }
    v2 += 72;
    ++v4;
  }
  while ( v2 != 288 );
  return result;
}

/* sub_604F1C08
 * address: 0x604F1C08   size: 888   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_604F1C08(int a1)
{
  unsigned int v1; // r10
  int v2; // r11
  _BYTE *v3; // r9
  _BYTE *v4; // r5
  _BYTE *v5; // r12
  _BYTE *v6; // r4
  _BYTE *v7; // r8
  unsigned int *v8; // r3
  unsigned int result; // r0
  int v10; // r0
  __int16 v11; // r1
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r1
  unsigned int *v17; // r9
  int v18; // r0
  _BYTE *v19; // r7
  _BYTE *v20; // [sp+18h] [bp-58h]
  unsigned int *v22; // [sp+20h] [bp-50h]
  _DWORD *v23; // [sp+24h] [bp-4Ch]
  _DWORD *v24; // [sp+28h] [bp-48h]
  _DWORD *v25; // [sp+2Ch] [bp-44h]
  _DWORD *v26; // [sp+30h] [bp-40h]
  _DWORD *v27; // [sp+34h] [bp-3Ch]
  _BYTE *v28; // [sp+38h] [bp-38h]
  __int16 v29; // [sp+3Ch] [bp-34h]
  int v30; // [sp+40h] [bp-30h] BYREF
  int v31; // [sp+44h] [bp-2Ch]
  int v32; // [sp+48h] [bp-28h]

  v1 = 0;
  v2 = 0;
  v27 = (_DWORD *)(a1 + 58664);
  v26 = (_DWORD *)(a1 + 61652);
  v25 = (_DWORD *)(a1 + 64640);
  v24 = (_DWORD *)(a1 + 67628);
  v23 = (_DWORD *)(a1 + 70616);
  v22 = (unsigned int *)(a1 + 73604);
  v28 = (_BYTE *)(a1 + 73753);
  v3 = (_BYTE *)(a1 + 70765);
  v4 = (_BYTE *)(a1 + 67777);
  v20 = (_BYTE *)(a1 + 70765);
  v5 = (_BYTE *)(a1 + 64789);
  v6 = (_BYTE *)(a1 + 61801);
  v7 = (_BYTE *)(a1 + 58813);
  v8 = (unsigned int *)(a1 + 74456);
  result = (unsigned int)dword_60B03218;
  do
  {
    if ( v1 <= 3 )
    {
      if ( *v7 )
      {
        if ( v2 == *v27 && (int)*v8 >= 1 )
        {
          v10 = *v8 - 1;
          if ( v10 <= 3 )
          {
            v11 = 0;
            result = dword_60B03218[4 * v10 + v1];
            if ( result != 11 )
              goto LABEL_33;
          }
        }
      }
      if ( *v6 )
      {
        if ( v2 == *v26 && (int)*v8 >= 1 )
        {
          v12 = *v8 - 1;
          if ( v12 <= 3 )
          {
            v11 = 1;
            result = dword_60B03218[4 * v12 + v1];
            if ( result != 11 )
              goto LABEL_33;
          }
        }
      }
      if ( *v5 )
      {
        if ( v2 == *v25 && (int)*v8 >= 1 )
        {
          v13 = *v8 - 1;
          if ( v13 <= 3 )
          {
            v11 = 2;
            result = dword_60B03218[4 * v13 + v1];
            if ( result != 11 )
              goto LABEL_33;
          }
        }
      }
      if ( *v4 )
      {
        if ( v2 == *v24 && (int)*v8 >= 1 )
        {
          v14 = *v8 - 1;
          if ( v14 <= 3 )
          {
            v11 = 3;
            result = dword_60B03218[4 * v14 + v1];
            if ( result != 11 )
              goto LABEL_33;
          }
        }
      }
      if ( *v3 )
      {
        if ( v2 == *v23 && (int)*v8 >= 1 )
        {
          v15 = *v8 - 1;
          if ( v15 <= 3 )
          {
            v11 = 4;
            result = dword_60B03218[4 * v15 + v1];
            if ( result != 11 )
              goto LABEL_33;
          }
        }
      }
      result = (unsigned __int8)*v28;
      if ( *v28 )
      {
        result = *v22;
        if ( v2 == *v22 )
        {
          result = *v8;
          if ( (int)*v8 >= 1 && (int)--result <= 3 )
          {
            v11 = 5;
            result = dword_60B03218[4 * result + v1];
            if ( result != 11 )
            {
LABEL_33:
              v29 = v11;
              LOWORD(v16) = 8780;
              v17 = v8;
              if ( result >= 0xB )
                result = 0;
              HIWORD(v16) = 1;
              v18 = *(_DWORD *)(a1 + 4 * result + v16);
              v30 = FIELD_U32(v18, 92);
              v31 = FIELD_U32(v18, 108);
              v32 = 0;
              v19 = v5;
              sub_608330EC((int)&v30);
              v5 = v19;
              v8 = v17;
              ++v1;
              result = 2988 * v29 + a1;
              FIELD_U32(result, 58708) = -1069547520;
              FIELD_U32(result, 58700) = -1054867456;
              FIELD_U32(result, 56516) = v30;
              FIELD_U32(result, 56520) = v31;
              FIELD_U32(result, 56524) = v32;
              v3 = v20;
            }
          }
        }
      }
    }
    ++v2;
  }
  while ( v2 != 4 );
  return result;
}

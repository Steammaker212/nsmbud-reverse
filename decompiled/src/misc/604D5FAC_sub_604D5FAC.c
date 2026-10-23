/* sub_604D5FAC
 * address: 0x604D5FAC   size: 928   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D5FAC(int a1)
{
  int v2; // r0
  int v3; // r11
  unsigned int v4; // r6
  int v5; // r4
  _DWORD *v6; // r5
  int v7; // r8
  int v8; // r9
  int v9; // r7
  float v10; // s0
  int v11; // r0
  char v12; // r1
  int v13; // r0
  int result; // r0
  unsigned int v15; // r6
  _DWORD *v16; // r5
  int v17; // r9
  int v18; // r7
  float v19; // s0
  char v20; // r1
  int v21; // r0
  int v22; // r0
  int v23; // r1
  int v24; // [sp+Ch] [bp-3Ch]
  int v25; // [sp+10h] [bp-38h]
  int v26; // [sp+14h] [bp-34h]
  int (**v27)(); // [sp+18h] [bp-30h] BYREF
  const char *v28; // [sp+1Ch] [bp-2Ch]
  unsigned int v29; // [sp+20h] [bp-28h]

  v2 = sub_603F69FC((char *)(dword_60CC6D78 + 796), 7, 42);
  v24 = a1 + 3940;
  v26 = dword_60CC6E04;
  v3 = dword_60C99E44;
  if ( v2 > 2 )
  {
    v4 = 0;
    v5 = a1 + 52000;
    v6 = (_DWORD *)(a1 + 5980);
    v7 = a1 + 3848;
    while ( 1 )
    {
      v8 = sub_6040135C(v3, FIELD_U32(a1, 40), v4);
      v9 = sub_6040137C(v3, FIELD_U32(a1, 40), v4);
      if ( v9 == -1 )
        break;
      if ( sub_6082920C(v26, (unsigned __int8)v8, (unsigned __int8)v9) )
      {
        *(_BYTE *)(a1 + v4 + 45) = 1;
      }
      else
      {
        v29 = v4;
        sub_6047EEC4(v24, v4, v10);
        v13 = a1;
        if ( v4 < 0x100 )
          v13 = a1 + v4;
        v5 = a1 + 52000;
        FIELD_U8(v13, 4400) = 0;
        sub_604013A0(v3, FIELD_U32(a1, 40), v4);
      }
      sub_604D6F6C(a1, *(_DWORD *)(v7 + 4 * v4), v9);
      v11 = *(_DWORD *)(v5 + 4 * v4);
      v12 = FIELD_U8(v11, 64);
      if ( v8 != 10 )
        goto LABEL_12;
      FIELD_U8(v11, 64) = v12 | 1;
      v27 = &sead__SafeStringBase__vtable;
      v28 = "Level";
      sub_60473DE4(v6, 0, &v27, 0);
      sub_6047455C((int)v6, 0, flt_60AF4BB0[v9]);
      sub_6047459C((int)v6, 0);
LABEL_13:
      result = 3540;
      ++v4;
      v6 += 885;
      if ( v4 == 12 )
        return result;
    }
    v11 = *(_DWORD *)(v7 + 4 * v4);
    v12 = FIELD_U8(v11, 64);
LABEL_12:
    FIELD_U8(v11, 64) = v12 & 0xFE;
    goto LABEL_13;
  }
  v15 = 0;
  v16 = (_DWORD *)(a1 + 5980);
  v25 = a1 + 3848;
  do
  {
    v17 = sub_6040135C(v3, FIELD_U32(a1, 40), v15);
    v18 = sub_6040137C(v3, FIELD_U32(a1, 40), v15);
    if ( v18 == -1 )
    {
      result = *(_DWORD *)(v25 + 4 * v15);
      v20 = FIELD_U8(result, 64);
    }
    else
    {
      if ( sub_6082920C(v26, (unsigned __int8)v17, (unsigned __int8)v18) == 1 )
      {
        *(_BYTE *)(a1 + v15 + 45) = 1;
        sub_604D6F6C(a1, *(_DWORD *)(v25 + 4 * v15), v18);
      }
      else
      {
        v29 = v15;
        sub_6047EEC4(v24, v15, v19);
        v21 = a1;
        if ( v15 < 0x100 )
          v21 = a1 + v15;
        FIELD_U8(v21, 4400) = 0;
        v22 = sub_604013A0(v3, FIELD_U32(a1, 40), v15);
        v23 = *(_DWORD *)(v25 + 4 * v15);
        if ( v22 == 1 )
          FIELD_U8(v23, 64) &= ~1u;
        else
          sub_604D6F6C(a1, v23, v18);
      }
      result = *(_DWORD *)(a1 + 52000 + 4 * v15);
      v20 = FIELD_U8(result, 64);
      if ( v17 == 10 )
      {
        FIELD_U8(result, 64) = v20 | 1;
        v27 = &sead__SafeStringBase__vtable;
        v28 = "Level";
        sub_60473DE4(v16, 0, &v27, 0);
        sub_6047455C((int)v16, 0, flt_60AF4BB0[v18]);
        result = sub_6047459C((int)v16, 0);
        goto LABEL_28;
      }
    }
    FIELD_U8(result, 64) = v20 & 0xFE;
LABEL_28:
    ++v15;
    v16 += 885;
  }
  while ( v15 != 12 );
  return result;
}

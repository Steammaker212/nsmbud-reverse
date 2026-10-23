/* sub_604E48CC
 * address: 0x604E48CC   size: 860   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604E48CC(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  int v5; // r1
  int v6; // r0
  int v7; // r5
  int v8; // r7
  int v9; // r0
  int i; // r2
  float v11; // s0
  int v12; // r0
  int v13; // r6
  _BYTE *v14; // r0
  int v15; // r0
  int v16; // r1
  _BYTE *v17; // r0
  int v18; // r0
  int v19; // r3
  int v20; // r1
  signed int v21; // r0
  int v22; // r3
  int v23; // r1
  StateMethodExecuter *result; // r0
  int (**v25)(); // [sp+8h] [bp-20h] BYREF
  int v26; // [sp+Ch] [bp-1Ch]

  v2 = FIELD_U32(a1, 4556);
  if ( (v2 & 1) != 0 )
  {
    v6 = sub_6047482C(FIELD_U32(a1, 4), 5u);
    v7 = v6;
    if ( v6 )
    {
      v8 = FIELD_U32(v6, 56);
      (*(void (__fastcall **)(int *))(dword_60CA5A64 + 12))(&dword_60CA5A64);
      (*(void (__fastcall **)(int *))(dword_60CA5A64 + 12))(&dword_60CA5A64);
      v9 = dword_60CA5A68;
      if ( dword_60CA5A68 == v8 )
      {
LABEL_18:
        v11 = FIELD_F32(v7, 44);
        if ( v11 == 0.0 )
        {
          if ( FIELD_F32(v7, 16) == 0.0 )
            goto LABEL_26;
        }
        else if ( v11 < 0.0 )
        {
          goto LABEL_26;
        }
      }
      else
      {
        for ( i = 1; *(unsigned __int8 *)(dword_60CA5A68 + i - 1) == *(unsigned __int8 *)(v8 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(dword_60CA5A68 + i - 1) )
            goto LABEL_18;
          if ( i > 0x80000 || *(unsigned __int8 *)(dword_60CA5A68 + i) != *(unsigned __int8 *)(v8 + i) )
            break;
          if ( !*(_BYTE *)(dword_60CA5A68 + i) )
            goto LABEL_18;
        }
      }
    }
    else
    {
      v9 = dword_60CA5A68;
    }
    v25 = &sead__SafeStringBase__vtable;
    v26 = v9;
    v12 = sub_6047467C(*(_DWORD **)(a1 + 4), 5u, &v25, (int)&dword_60CA5C48, -1.0, 0);
  }
  else
  {
    if ( (v2 & 2) == 0 )
    {
      if ( FIELD_U8(a1, 4560) )
      {
        v3 = FIELD_U32(a1, 4);
        v4 = FIELD_U32(v3, 3508);
        v5 = FIELD_U32(v3, 3512);
        if ( v4 > 5 )
          v5 += 100;
        if ( FIELD_U8(v5, 16) )
          FIELD_U8(a1, 4560) = 0;
      }
      goto LABEL_26;
    }
    v25 = &sead__SafeStringBase__vtable;
    v26 = dword_60CA5A68;
    v12 = sub_6047467C(*(_DWORD **)(a1 + 4), 5u, &v25, (int)&dword_60CA5C48, 1.0, 0);
  }
  if ( v12 == 1 )
    FIELD_U8(a1, 4560) = 1;
LABEL_26:
  v13 = FIELD_U32(a1, 62860);
  v14 = (_BYTE *)sub_60834614(62860);
  v15 = sub_603FD0B4(v14);
  v16 = v13 - v15;
  if ( v13 != v15 )
  {
    v15 = dword_60C9EBB4;
    if ( v16 < 0 )
    {
      if ( !dword_60C9EBB4 )
        goto LABEL_35;
      FIELD_U8(dword_60C9EBB4, 97) = 1;
    }
    else if ( !dword_60C9EBB4 )
    {
      goto LABEL_35;
    }
    if ( dword_60C9CF0C && !FIELD_U8(dword_60C9CF0C, 1392) )
    {
      FIELD_U8(v15, 89) = 0;
      FIELD_U32(a1, 4552) = 0;
      v15 = ((int (__fastcall *)(int))loc_604E5DFC)(a1);
    }
  }
LABEL_35:
  v17 = (_BYTE *)sub_60834614(v15);
  FIELD_U32(a1, 62860) = sub_603FD0B4(v17);
  sub_604E6D24(a1);
  sub_604E7960(a1, 0);
  v18 = sub_604E7C78(a1, 0);
  v19 = *(_DWORD *)(sub_60834614(v18) + 456);
  if ( FIELD_U32(a1, 548) != v19 )
  {
    FIELD_U32(a1, 548) = v19;
    v20 = FIELD_U32(a1, 62824);
    if ( v20 )
      sub_6047DEC8(*(_DWORD **)(a1 + 4), v20, 1);
  }
  if ( dword_60C99DE4 )
  {
    v21 = sub_603FC6A0(dword_60C99DE4);
    if ( FIELD_U8(a1, 564) )
    {
      v21 = FIELD_U16(a1, 566);
    }
    else if ( v21 < 0 )
    {
      v22 = 0;
LABEL_44:
      if ( FIELD_U32(a1, 552) != v22 )
      {
        FIELD_U32(a1, 552) = v22;
        v23 = FIELD_U32(a1, 62828);
        if ( v23 )
          sub_6047DEC8(*(_DWORD **)(a1 + 4), v23, 1);
      }
      goto LABEL_47;
    }
    v22 = 999;
    if ( v21 < 999 )
      v22 = v21;
    goto LABEL_44;
  }
LABEL_47:
  result = (StateMethodExecuter *)FIELD_U8(a1, 4508);
  if ( FIELD_U8(a1, 4508) )
  {
    FIELD_U32(a1, 4552) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 4536), &stru_60CA59CC);
  }
  return result;
}

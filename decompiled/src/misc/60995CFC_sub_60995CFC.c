/* sub_60995CFC
 * address: 0x60995CFC   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60995CFC(int a1, int a2, _DWORD *a3)
{
  int v4; // r5
  const char **v6; // r0
  int (***v7)(); // r7
  const char *v8; // r0
  int v9; // r0
  int v10; // r5
  int v11; // r0
  const char *v12; // r8
  int (***v13)(); // r4
  int i; // r1
  __int16 v15; // r2
  __int16 v16; // r1
  _BYTE *v17; // r0
  bool v18; // zf
  _DWORD *v19; // r0
  int result; // r0
  int v21; // r1
  bool v22; // zf
  int v23; // [sp+4h] [bp-3Ch]
  _DWORD *v24; // [sp+8h] [bp-38h]
  int (**v25)(); // [sp+Ch] [bp-34h] BYREF
  int v26; // [sp+10h] [bp-30h]
  int (**v27)(); // [sp+14h] [bp-2Ch] BYREF
  const char *v28; // [sp+18h] [bp-28h]

  v4 = a2;
  sub_60990E4C(a1, a2, a3);
  v24 = a3;
  v6 = sub_6085982C(a3[3], "UniteButtonType");
  if ( v6 || (v6 = sub_60853E60(v4, "UniteButtonType")) != 0 )
  {
    v23 = v4;
    v7 = &v25;
    v8 = &v6[1][(_DWORD)v6];
    v27 = &sead__SafeStringBase__vtable;
    v28 = v8;
    v9 = 0;
    while ( 1 )
    {
      v10 = v9;
      v11 = sub_60996528();
      v25 = &sead__SafeStringBase__vtable;
      v26 = v11;
      ((void (__fastcall *)(int (***)()))v27[3])(&v27);
      ((void (__fastcall *)(int (***)()))v27[3])(&v27);
      v12 = v28;
      ((void (__fastcall *)(int (***)()))v25[3])(v7);
      if ( v12 == (const char *)v26 )
        break;
      v13 = v7;
      for ( i = 1; ; i += 2 )
      {
        v7 = v13;
        if ( (unsigned __int8)v28[i - 1] != *(unsigned __int8 *)(v26 + i - 1) )
          break;
        if ( !v28[i - 1] )
          goto LABEL_17;
        if ( i > 0x80000 )
          break;
        v7 = v13;
        if ( (unsigned __int8)v28[i] != *(unsigned __int8 *)(v26 + i) )
          break;
        if ( !v28[i] )
          goto LABEL_17;
      }
      v9 = v10 + 1;
      if ( v10 > 5 )
        v9 = 6;
      if ( v9 == 6 )
        goto LABEL_22;
    }
LABEL_17:
    v25 = (int (**)())v10;
    FIELD_U8(a1, 84) = v10;
    v15 = FIELD_U16(a1, 30) & 0xFFDF;
    if ( v10 == 2 )
      v15 = FIELD_U16(a1, 30) | 0x20;
    v16 = v15 & 0xFBFF;
    if ( v10 == 3 )
      v16 = v15 | 0x400;
    FIELD_U16(a1, 30) = v16;
LABEL_22:
    v4 = v23;
  }
  v17 = (_BYTE *)sub_60853E04(v4, "Check");
  v18 = v17 == 0;
  if ( v17 )
    v18 = *v17 == 0;
  if ( !v18 )
  {
    v19 = sub_60980A38(v24, (int)v17, 1);
    FIELD_U32(a1, 60) = v19;
    if ( v19 )
    {
      *((_BYTE *)v19 + 51) |= 0x10u;
      *(_BYTE *)(FIELD_U32(a1, 60) + 51) &= ~0x20u;
    }
  }
  result = sub_60853E04(v4, "DragOnOff");
  v21 = result;
  v22 = result == 0;
  if ( result )
  {
    result = *(unsigned __int8 *)result;
    v22 = result == 0;
  }
  if ( !v22 )
  {
    result = (int)sub_60980A38(v24, v21, 1);
    FIELD_U32(a1, 64) = result;
    if ( result )
    {
      FIELD_U8(result, 51) |= 0x10u;
      result = FIELD_U32(a1, 64);
      FIELD_U8(result, 51) &= ~0x20u;
    }
  }
  return result;
}

/* PaCharacterSelector_Zanki_00_ref
 * address: 0x604A57BC   size: 1024   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PaCharacterSelector_Zanki_00_ref(int a1)
{
  int v2; // r4
  int *v3; // r8
  int v4; // r9
  int v5; // r1
  unsigned int v6; // r0
  int *v7; // r7
  bool v8; // zf
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r2
  int v13; // r0
  _DWORD *v14; // r6
  int v15; // r0
  char v16; // r2
  int *v17; // r7
  _DWORD *v18; // r5
  int v19; // r1
  int v20; // r1
  int v21; // r1
  int v22; // r1
  int v23; // r1
  int result; // r0
  int v25; // r1
  int (**v26)(); // [sp+0h] [bp-28h] BYREF
  const char *v27; // [sp+4h] [bp-24h]

  v3 = (int *)(a1 + 20496);
  v2 = FIELD_U32(a1, 20496);
  v4 = FIELD_U32(a1, 20492);
  if ( v2 == 3 )
    v2 = 2;
  if ( (v4 & 0xFFFFFFFE) == 2 )
  {
    v5 = *(_DWORD *)(((int (*)(void))sub_60834614)() + 492);
    v6 = 6;
    if ( v5 == 2 )
    {
      v7 = &dword_60B02C90;
    }
    else if ( v5 == 1 )
    {
      v7 = &dword_60B02CA8;
    }
    else if ( v5 )
    {
      v7 = &dword_60B02CC0;
      v6 = 4;
    }
    else
    {
      v7 = (int *)&unk_60B02C6C;
      v8 = sub_60834FDC() == 0;
      v6 = 5;
      if ( !v8 )
      {
        v7 = &dword_60B02C80;
        v6 = 4;
      }
    }
    v9 = 0;
    v10 = 0;
    if ( v2 == *v7
      || (v10 = 1, v2 == v7[1])
      || (v10 = 2, v2 == v7[2])
      || (v10 = 3, v2 == v7[3])
      || v6 != 4 && ((v10 = 4, v2 == v7[4]) || v6 >= 6 && (v10 = 5, v2 == v7[5])) )
    {
      v11 = 1;
      if ( v4 == 2 )
        v11 = -1;
      v12 = v10 + v11;
      if ( (int)v6 > v12 )
        v9 = v12;
      if ( v12 < 0 )
        v9 = v6 - 1;
      v2 = v7[v9];
    }
  }
  if ( v2 == 2 )
  {
    if ( FIELD_U8(a1, 20552) )
    {
      v2 = 2;
      if ( !FIELD_U32(a1, 20548) )
        v2 = 3;
    }
    else
    {
      v2 = 2;
    }
  }
  sub_604A5C00(a1, *v3, v2, FIELD_U32(a1, 20492));
  v13 = sub_604A5D68(a1, v2);
  v14 = (_DWORD *)sub_60834614(v13);
  v15 = FIELD_U32(a1, 20460);
  if ( v15 )
  {
    v16 = FIELD_U8(v15, 64) & 0xFE;
    if ( !v14[123] )
      v16 |= 1u;
    FIELD_U8(v15, 64) = v16;
  }
  v17 = (int *)(a1 + 20476);
  v18 = (_DWORD *)(a1 + 48);
  if ( v14[8] == v2 )
  {
    v19 = *v17;
    if ( *v17 )
    {
      v26 = &sead__SafeStringBase__vtable;
      v27 = "PaCharacterSelector_Zanki_00";
      sub_6047E0EC(&v26, v19, 1, v14[6]);
      if ( sub_60474F28((int)v18) == 1 )
        sub_60474EEC(v18);
    }
  }
  if ( v14[26] == v2 )
  {
    v20 = *v17;
    if ( *v17 )
    {
      v26 = &sead__SafeStringBase__vtable;
      v27 = "PaCharacterSelector_Zanki_00";
      sub_6047E0EC(&v26, v20, 1, v14[24]);
      if ( sub_60474F28((int)v18) == 1 )
        sub_60474EEC(v18);
    }
  }
  if ( v14[44] == v2 )
  {
    v21 = *v17;
    if ( *v17 )
    {
      v26 = &sead__SafeStringBase__vtable;
      v27 = "PaCharacterSelector_Zanki_00";
      sub_6047E0EC(&v26, v21, 1, v14[42]);
      if ( sub_60474F28((int)v18) == 1 )
        sub_60474EEC(v18);
    }
  }
  if ( v14[62] == v2 )
  {
    v22 = *v17;
    if ( *v17 )
    {
      v26 = &sead__SafeStringBase__vtable;
      v27 = "PaCharacterSelector_Zanki_00";
      sub_6047E0EC(&v26, v22, 1, v14[60]);
      if ( sub_60474F28((int)v18) == 1 )
        sub_60474EEC(v18);
    }
  }
  if ( v14[80] == v2 )
  {
    v23 = *v17;
    if ( *v17 )
    {
      v26 = &sead__SafeStringBase__vtable;
      v27 = "PaCharacterSelector_Zanki_00";
      sub_6047E0EC(&v26, v23, 1, v14[78]);
      if ( sub_60474F28((int)v18) == 1 )
        sub_60474EEC(v18);
    }
  }
  result = v14[98];
  if ( result == v2 )
  {
    v25 = *v17;
    if ( *v17 )
    {
      v26 = &sead__SafeStringBase__vtable;
      v27 = "PaCharacterSelector_Zanki_00";
      sub_6047E0EC(&v26, v25, 1, v14[96]);
      result = sub_60474F28((int)v18);
      if ( result == 1 )
        result = sub_60474EEC(v18);
    }
  }
  *v3 = v2;
  return result;
}

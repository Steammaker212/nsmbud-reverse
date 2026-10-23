/* PaCharacterSelector_Zanki_00_ref_2
 * address: 0x604A5E98   size: 1124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PaCharacterSelector_Zanki_00_ref_2(int a1, int a2, unsigned int a3)
{
  _DWORD *v3; // r4
  int i; // r11
  unsigned int v5; // r6
  unsigned int v6; // r1
  unsigned int v7; // r6
  int v8; // r0
  void (*v9)(void); // r1
  unsigned int v10; // r1
  unsigned int v11; // r6
  int v12; // r0
  int v13; // r0
  _DWORD *v14; // r6
  int v15; // r0
  char v16; // r2
  int *v17; // r5
  int v18; // r1
  int v19; // r1
  int v20; // r1
  int v21; // r1
  int v22; // r1
  int result; // r0
  int v24; // r1
  int (**v27)(); // [sp+30h] [bp+0h] BYREF
  char *v28; // [sp+34h] [bp+4h]

  v3 = (_DWORD *)(a1 + 48);
  for ( i = 0; i != 7; ++i )
  {
    v5 = dword_60B0D08C[i];
    if ( a3 == i )
    {
      v27 = &sead__SafeStringBase__vtable;
      v28 = &byte_60B3BA34;
      sead__SafeStringBase__operator_assign((int)&v27, (int)&dword_60CA12E0);
      if ( v5 >= 7 )
        v5 = 0;
      v6 = dword_60BFDD80[v5];
      v7 = dword_60BFDD80[v5 + 7];
      if ( v6 >= 0x12 )
        v6 = 0;
      if ( sub_6047467C(v3, v7, &v27, (int)&dword_60CA1330[2 * v6], 1.0, 0) == 1 )
      {
        v8 = sub_6047482C((int)v3, v7);
        if ( v8 )
        {
          v9 = *(void (**)(void))(*(_DWORD *)v8 + 108);
LABEL_17:
          v9();
          continue;
        }
      }
    }
    else
    {
      v27 = &sead__SafeStringBase__vtable;
      v28 = &byte_60B3BA34;
      sead__SafeStringBase__operator_assign((int)&v27, (int)&dword_60CA12E0);
      if ( v5 >= 7 )
        v5 = 0;
      v10 = dword_60BFDD80[v5];
      v11 = dword_60BFDD9C[v5];
      if ( v10 >= 0x12 )
        v10 = 0;
      if ( sub_6047467C(v3, v11, &v27, (int)&dword_60CA1330[2 * v10], 1.0, 0) == 1 )
      {
        v12 = sub_6047482C((int)v3, v11);
        if ( v12 )
        {
          v9 = *(void (**)(void))(*(_DWORD *)v12 + 104);
          goto LABEL_17;
        }
      }
    }
  }
  v13 = sub_604A5D68(a1, a3);
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
  if ( v14[8] == a3 )
  {
    v18 = *v17;
    if ( *v17 )
    {
      v27 = &sead__SafeStringBase__vtable;
      v28 = "PaCharacterSelector_Zanki_00";
      sub_6047E0EC(&v27, v18, 1, v14[6]);
      if ( sub_60474F28((int)v3) == 1 )
        sub_60474EEC(v3);
    }
  }
  if ( v14[26] == a3 )
  {
    v19 = *v17;
    if ( *v17 )
    {
      v27 = &sead__SafeStringBase__vtable;
      v28 = "PaCharacterSelector_Zanki_00";
      sub_6047E0EC(&v27, v19, 1, v14[24]);
      if ( sub_60474F28((int)v3) == 1 )
        sub_60474EEC(v3);
    }
  }
  if ( v14[44] == a3 )
  {
    v20 = *v17;
    if ( *v17 )
    {
      v27 = &sead__SafeStringBase__vtable;
      v28 = "PaCharacterSelector_Zanki_00";
      sub_6047E0EC(&v27, v20, 1, v14[42]);
      if ( sub_60474F28((int)v3) == 1 )
        sub_60474EEC(v3);
    }
  }
  if ( v14[62] == a3 )
  {
    v21 = *v17;
    if ( *v17 )
    {
      v27 = &sead__SafeStringBase__vtable;
      v28 = "PaCharacterSelector_Zanki_00";
      sub_6047E0EC(&v27, v21, 1, v14[60]);
      if ( sub_60474F28((int)v3) == 1 )
        sub_60474EEC(v3);
    }
  }
  if ( v14[80] == a3 )
  {
    v22 = *v17;
    if ( *v17 )
    {
      v27 = &sead__SafeStringBase__vtable;
      v28 = "PaCharacterSelector_Zanki_00";
      sub_6047E0EC(&v27, v22, 1, v14[78]);
      if ( sub_60474F28((int)v3) == 1 )
        sub_60474EEC(v3);
    }
  }
  result = v14[98];
  if ( result == a3 )
  {
    v24 = *v17;
    if ( *v17 )
    {
      v27 = &sead__SafeStringBase__vtable;
      v28 = "PaCharacterSelector_Zanki_00";
      sub_6047E0EC(&v27, v24, 1, v14[96]);
      result = sub_60474F28((int)v3);
      if ( result == 1 )
        return sub_60474EEC(v3);
    }
  }
  return result;
}

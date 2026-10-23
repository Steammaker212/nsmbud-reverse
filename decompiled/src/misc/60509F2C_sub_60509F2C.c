/* sub_60509F2C
 * address: 0x60509F2C   size: 932   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60509F2C(int a1)
{
  int result; // r0
  int v3; // r6
  int v4; // r0
  int v5; // r6
  int v6; // r1
  int i; // r3
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  int v11; // r1
  int v12; // r0
  bool v13; // zf
  int v14; // r6
  int v15; // r1
  int j; // r3
  int (**v17)(); // [sp+8h] [bp-28h] BYREF
  int v18; // [sp+Ch] [bp-24h]

  result = FIELD_U32(a1, 36);
  if ( (result & 1) != 0 )
  {
    v3 = FIELD_U32(a1, 40);
    if ( v3 != 2 )
      v3 = 0;
    if ( dword_60C9CFB8 && sub_60459718((__guard *)dword_60C9CFB8, FIELD_U32(a1, 44)) )
      v3 |= 1u;
    v17 = &sead__SafeStringBase__vtable;
    v18 = dword_60CA7DD4;
    if ( sub_6047467C((_DWORD *)(a1 + 48), 1u, &v17, (int)&dword_60CA7DB0, 1.0, 0) == 1 )
    {
      v4 = sub_6047482C(a1 + 48, 1u);
      if ( v4 )
        (*(void (__fastcall **)(int, float))(*(_DWORD *)v4 + 96))(v4, (float)(int)(float)v3);
    }
    result = FIELD_U32(a1, 36);
  }
  if ( (result & 2) != 0 )
  {
    v17 = &sead__SafeStringBase__vtable;
    v18 = dword_60CA7DDC;
    result = sub_6047467C((_DWORD *)(a1 + 48), 2u, &v17, (int)&unk_60CA7DA8, 1.0, 0);
    if ( result != 1 )
      return result;
    result = FIELD_U32(a1, 36) & 0xFFFFFFFD;
    goto LABEL_33;
  }
  if ( (result & 4) != 0 )
  {
    v8 = FIELD_U32(a1, 64);
    v9 = v8 == 0;
    if ( v8 )
      v9 = FIELD_U32(v8, 56) == 0;
    if ( !v9 )
      open_ref(v8, 0, 0, 1);
    FIELD_U32(a1, 36) = 0;
    if ( FIELD_U8(a1, 7213) )
    {
      v17 = &sead__SafeStringBase__vtable;
      v18 = dword_60CA7DBC;
      sub_6047467C((_DWORD *)(a1 + 48), 2u, &v17, (int)&unk_60CA7DA8, 1.0, 0);
      v10 = FIELD_U32(a1, 36);
      v11 = v10 | 8;
      result = v10 | 9;
      FIELD_U32(a1, 36) = v11;
    }
    else
    {
      result = 1;
    }
    goto LABEL_33;
  }
  if ( (result & 0x20) != 0 )
  {
    v12 = FIELD_U32(a1, 64);
    v13 = v12 == 0;
    if ( v12 )
      v13 = FIELD_U32(v12, 60) == 0;
    if ( !v13 )
      close_ref(v12, 0, 0);
    v17 = &sead__SafeStringBase__vtable;
    v18 = dword_60CA7DCC;
    sub_6047467C((_DWORD *)(a1 + 48), 2u, &v17, (int)&unk_60CA7DA8, 1.0, 0);
    result = FIELD_U32(a1, 36) & 0xFFFFFF9F | 0x40;
    goto LABEL_33;
  }
  if ( (result & 8) == 0 )
  {
    if ( (result & 0x40) == 0 )
      return result;
    v5 = dword_60CA7DCC;
    result = sub_6047482C(a1 + 48, 2u);
    if ( !result )
      return result;
    v6 = FIELD_U32(result, 56);
    if ( v5 != v6 )
    {
      for ( i = 1; *(unsigned __int8 *)(v5 + i - 1) == *(unsigned __int8 *)(v6 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(v5 + i - 1) )
          goto LABEL_41;
        if ( i >= 524289 || *(unsigned __int8 *)(v5 + i) != *(unsigned __int8 *)(v6 + i) )
          break;
        if ( !*(_BYTE *)(v5 + i) )
          goto LABEL_41;
      }
      return result;
    }
LABEL_41:
    result = FIELD_U8(result, 51);
    if ( (result & 1) == 0 )
      return result;
    result = FIELD_U32(a1, 36) & 0xFFFFFF3F | 0x80;
LABEL_33:
    FIELD_U32(a1, 36) = result;
    return result;
  }
  v14 = dword_60CA7DBC;
  result = sub_6047482C(a1 + 48, 2u);
  if ( !result )
    return result;
  v15 = FIELD_U32(result, 56);
  if ( v14 == v15 )
  {
LABEL_52:
    result = FIELD_U8(result, 51);
    if ( (result & 1) == 0 )
      return result;
    result = FIELD_U32(a1, 36) & 0xFFFFFFE7 | 0x10;
    goto LABEL_33;
  }
  for ( j = 1; *(unsigned __int8 *)(v14 + j - 1) == *(unsigned __int8 *)(v15 + j - 1); j += 2 )
  {
    if ( !*(_BYTE *)(v14 + j - 1) )
      goto LABEL_52;
    if ( j >= 524289 || *(unsigned __int8 *)(v14 + j) != *(unsigned __int8 *)(v15 + j) )
      break;
    if ( !*(_BYTE *)(v14 + j) )
      goto LABEL_52;
  }
  return result;
}

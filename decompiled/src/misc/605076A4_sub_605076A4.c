/* sub_605076A4
 * address: 0x605076A4   size: 1220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605076A4(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  int v5; // r7
  int i; // r2
  int v7; // r0
  int v8; // r6
  int k; // r2
  int v10; // r0
  int v11; // r6
  int j; // r2
  int v13; // r0
  int v14; // r6
  int m; // r2
  int (**v16)(); // [sp+8h] [bp-20h] BYREF
  int v17; // [sp+Ch] [bp-1Ch]

  result = FIELD_U32(a1, 36);
  if ( (result & 1) != 0 )
  {
    v16 = &sead__SafeStringBase__vtable;
    v17 = dword_60CA7AE4;
    if ( sub_6047467C((_DWORD *)(a1 + 40), 0, &v16, (int)&dword_60CA7AD0, 1.0, 0) == 1 )
    {
      v3 = sub_6047482C(a1 + 40, 0);
      v4 = v3;
      if ( v3 )
      {
        v5 = FIELD_U32(v3, 56);
        ((void (__fastcall *)(int (***)()))v16[3])(&v16);
        ((void (__fastcall *)(int (***)()))v16[3])(&v16);
        if ( v17 == v5 )
        {
LABEL_12:
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 104))(v4);
        }
        else
        {
          for ( i = 1; *(unsigned __int8 *)(v17 + i - 1) == *(unsigned __int8 *)(v5 + i - 1); i += 2 )
          {
            if ( !*(_BYTE *)(v17 + i - 1) )
              goto LABEL_12;
            if ( i >= 524289 || *(unsigned __int8 *)(v17 + i) != *(unsigned __int8 *)(v5 + i) )
              break;
            if ( !*(_BYTE *)(v17 + i) )
              goto LABEL_12;
          }
        }
      }
    }
    result = FIELD_U32(a1, 36) & 0xFFFFFFFE;
    FIELD_U32(a1, 36) = result;
  }
  if ( (result & 2) != 0 )
  {
    v10 = sub_6047482C(a1 + 40, 0);
    if ( !v10 || FIELD_F32(v10, 44) == 0.0 )
    {
      v16 = &sead__SafeStringBase__vtable;
      v17 = dword_60CA7AE4;
      if ( sub_6047467C((_DWORD *)(a1 + 40), 0, &v16, (int)&dword_60CA7AD0, 1.0, 0) == 1 )
      {
        if ( sub_6047482C(a1 + 40, 0) )
        {
          ((void (__fastcall *)(int (***)()))v16[3])(&v16);
          ((void (__fastcall *)(int (***)()))v16[3])(&v16);
        }
      }
    }
    result = sub_6047482C(a1 + 40, 0);
    if ( !result )
      return result;
    v11 = FIELD_U32(result, 56);
    (*(void (__fastcall **)(int *))(dword_60CA7AE0 + 12))(&dword_60CA7AE0);
    (*(void (__fastcall **)(int *))(dword_60CA7AE0 + 12))(&dword_60CA7AE0);
    result = dword_60CA7AE4;
    if ( dword_60CA7AE4 == v11 )
    {
LABEL_37:
      result = FIELD_U32(a1, 36) & 0xFFFFFFF1;
      goto LABEL_58;
    }
    for ( j = 1; *(unsigned __int8 *)(dword_60CA7AE4 + j - 1) == *(unsigned __int8 *)(v11 + j - 1); j += 2 )
    {
      if ( !*(_BYTE *)(dword_60CA7AE4 + j - 1) )
        goto LABEL_37;
      if ( j >= 524289 || *(unsigned __int8 *)(dword_60CA7AE4 + j) != *(unsigned __int8 *)(v11 + j) )
        break;
      if ( !*(_BYTE *)(dword_60CA7AE4 + j) )
        goto LABEL_37;
    }
  }
  else
  {
    if ( (result & 4) == 0 )
    {
      if ( (result & 8) == 0 )
        return result;
      v7 = sub_6047482C(a1 + 40, 0);
      if ( !v7 || FIELD_F32(v7, 44) == 0.0 )
      {
        v16 = &sead__SafeStringBase__vtable;
        v17 = dword_60CA7AF4;
        sub_6047467C((_DWORD *)(a1 + 40), 0, &v16, (int)&dword_60CA7AD0, 1.0, 0);
      }
      result = sub_6047482C(a1 + 40, 0);
      if ( !result )
        return result;
      v8 = FIELD_U32(result, 56);
      (*(void (__fastcall **)(int *))(dword_60CA7AF0 + 12))(&dword_60CA7AF0);
      (*(void (__fastcall **)(int *))(dword_60CA7AF0 + 12))(&dword_60CA7AF0);
      result = dword_60CA7AF4;
      if ( dword_60CA7AF4 != v8 )
      {
        for ( k = 1; *(unsigned __int8 *)(dword_60CA7AF4 + k - 1) == *(unsigned __int8 *)(v8 + k - 1); k += 2 )
        {
          if ( !*(_BYTE *)(dword_60CA7AF4 + k - 1) )
            goto LABEL_44;
          if ( k >= 524289 || *(unsigned __int8 *)(dword_60CA7AF4 + k) != *(unsigned __int8 *)(v8 + k) )
            break;
          if ( !*(_BYTE *)(dword_60CA7AF4 + k) )
            goto LABEL_44;
        }
        return result;
      }
LABEL_44:
      result = FIELD_U32(a1, 36) & 0xFFFFFFF7;
LABEL_58:
      FIELD_U32(a1, 36) = result;
      return result;
    }
    v13 = sub_6047482C(a1 + 40, 0);
    if ( !v13 || FIELD_F32(v13, 44) == 0.0 )
    {
      v16 = &sead__SafeStringBase__vtable;
      v17 = dword_60CA7AEC;
      sub_6047467C((_DWORD *)(a1 + 40), 0, &v16, (int)&dword_60CA7AD0, 1.0, 0);
    }
    result = sub_6047482C(a1 + 40, 0);
    if ( !result )
      return result;
    v14 = FIELD_U32(result, 56);
    (*(void (__fastcall **)(int *))(dword_60CA7AE8 + 12))(&dword_60CA7AE8);
    (*(void (__fastcall **)(int *))(dword_60CA7AE8 + 12))(&dword_60CA7AE8);
    result = dword_60CA7AEC;
    if ( dword_60CA7AEC == v14 )
    {
LABEL_57:
      result = FIELD_U32(a1, 36) & 0xFFFFFFF3;
      goto LABEL_58;
    }
    for ( m = 1; *(unsigned __int8 *)(dword_60CA7AEC + m - 1) == *(unsigned __int8 *)(v14 + m - 1); m += 2 )
    {
      if ( !*(_BYTE *)(dword_60CA7AEC + m - 1) )
        goto LABEL_57;
      if ( m >= 524289 || *(unsigned __int8 *)(dword_60CA7AEC + m) != *(unsigned __int8 *)(v14 + m) )
        break;
      if ( !*(_BYTE *)(dword_60CA7AEC + m) )
        goto LABEL_57;
    }
  }
  return result;
}

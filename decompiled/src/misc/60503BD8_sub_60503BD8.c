/* sub_60503BD8
 * address: 0x60503BD8   size: 936   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60503BD8(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  int v5; // r7
  int i; // r2
  int v7; // r0
  int v8; // r6
  int j; // r2
  int v10; // r0
  int v11; // r6
  int k; // r2
  int (**v13)(); // [sp+8h] [bp-20h] BYREF
  int v14; // [sp+Ch] [bp-1Ch]

  result = FIELD_U32(a1, 36);
  if ( (result & 1) != 0 )
  {
    v13 = &sead__SafeStringBase__vtable;
    v14 = dword_60CA77E4;
    if ( sub_6047467C((_DWORD *)(a1 + 40), 0, &v13, (int)&dword_60CA77D0, 1.0, 0) == 1 )
    {
      v3 = sub_6047482C(a1 + 40, 0);
      v4 = v3;
      if ( v3 )
      {
        v5 = FIELD_U32(v3, 56);
        ((void (__fastcall *)(int (***)()))v13[3])(&v13);
        ((void (__fastcall *)(int (***)()))v13[3])(&v13);
        if ( v14 == v5 )
        {
LABEL_12:
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 104))(v4);
        }
        else
        {
          for ( i = 1; *(unsigned __int8 *)(v14 + i - 1) == *(unsigned __int8 *)(v5 + i - 1); i += 2 )
          {
            if ( !*(_BYTE *)(v14 + i - 1) )
              goto LABEL_12;
            if ( i >= 524289 || *(unsigned __int8 *)(v14 + i) != *(unsigned __int8 *)(v5 + i) )
              break;
            if ( !*(_BYTE *)(v14 + i) )
              goto LABEL_12;
          }
        }
      }
    }
    result = FIELD_U32(a1, 36) & 0xFFFFFFFE;
    FIELD_U32(a1, 36) = result;
  }
  if ( (result & 2) == 0 )
  {
    if ( (result & 4) == 0 )
      return result;
    v7 = sub_6047482C(a1 + 40, 0);
    if ( !v7 || FIELD_F32(v7, 44) == 0.0 )
    {
      v13 = &sead__SafeStringBase__vtable;
      v14 = dword_60CA77EC;
      sub_6047467C((_DWORD *)(a1 + 40), 0, &v13, (int)&dword_60CA77D0, 1.0, 0);
    }
    result = sub_6047482C(a1 + 40, 0);
    if ( !result )
      return result;
    v8 = FIELD_U32(result, 56);
    (*(void (__fastcall **)(int *))(dword_60CA77E8 + 12))(&dword_60CA77E8);
    (*(void (__fastcall **)(int *))(dword_60CA77E8 + 12))(&dword_60CA77E8);
    result = dword_60CA77EC;
    if ( dword_60CA77EC != v8 )
    {
      for ( j = 1; *(unsigned __int8 *)(dword_60CA77EC + j - 1) == *(unsigned __int8 *)(v8 + j - 1); j += 2 )
      {
        if ( !*(_BYTE *)(dword_60CA77EC + j - 1) )
          goto LABEL_28;
        if ( j >= 524289 || *(unsigned __int8 *)(dword_60CA77EC + j) != *(unsigned __int8 *)(v8 + j) )
          break;
        if ( !*(_BYTE *)(dword_60CA77EC + j) )
          goto LABEL_28;
      }
      return result;
    }
LABEL_28:
    result = FIELD_U32(a1, 36) & 0xFFFFFFFB;
LABEL_44:
    FIELD_U32(a1, 36) = result;
    return result;
  }
  v10 = sub_6047482C(a1 + 40, 0);
  if ( !v10 || FIELD_F32(v10, 44) == 0.0 )
  {
    v13 = &sead__SafeStringBase__vtable;
    v14 = dword_60CA77E4;
    if ( sub_6047467C((_DWORD *)(a1 + 40), 0, &v13, (int)&dword_60CA77D0, 1.0, 0) == 1 )
    {
      if ( sub_6047482C(a1 + 40, 0) )
      {
        ((void (__fastcall *)(int (***)()))v13[3])(&v13);
        ((void (__fastcall *)(int (***)()))v13[3])(&v13);
      }
    }
  }
  result = sub_6047482C(a1 + 40, 0);
  if ( !result )
    return result;
  v11 = FIELD_U32(result, 56);
  (*(void (__fastcall **)(int *))(dword_60CA77E0 + 12))(&dword_60CA77E0);
  (*(void (__fastcall **)(int *))(dword_60CA77E0 + 12))(&dword_60CA77E0);
  result = dword_60CA77E4;
  if ( dword_60CA77E4 == v11 )
  {
LABEL_43:
    result = FIELD_U32(a1, 36) & 0xFFFFFFF9;
    goto LABEL_44;
  }
  for ( k = 1; *(unsigned __int8 *)(dword_60CA77E4 + k - 1) == *(unsigned __int8 *)(v11 + k - 1); k += 2 )
  {
    if ( !*(_BYTE *)(dword_60CA77E4 + k - 1) )
      goto LABEL_43;
    if ( k >= 524289 || *(unsigned __int8 *)(dword_60CA77E4 + k) != *(unsigned __int8 *)(v11 + k) )
      break;
    if ( !*(_BYTE *)(dword_60CA77E4 + k) )
      goto LABEL_43;
  }
  return result;
}

/* sub_604AC434
 * address: 0x604AC434   size: 1128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AC434(int a1, int a2)
{
  int v3; // r4
  int v4; // r5
  int v5; // r0
  int v6; // r6
  int k; // r1
  int result; // r0
  int v9; // r0
  int v10; // r5
  int v11; // r0
  int v12; // r6
  int m; // r1
  int v14; // r0
  int v15; // r4
  int v16; // r0
  int v17; // r5
  int n; // r1
  int v19; // r0
  int v20; // r6
  int i; // r1
  int v22; // r0
  int v23; // r0
  int v24; // r5
  int j; // r1
  int (**v26)(); // [sp+0h] [bp-28h] BYREF
  int v27; // [sp+4h] [bp-24h]
  int (**v28)(); // [sp+8h] [bp-20h] BYREF
  int v29; // [sp+Ch] [bp-1Ch]

  v3 = a1 + 64;
  v28 = &sead__SafeStringBase__vtable;
  v29 = dword_60CA1794;
  v4 = sub_6047482C(a1 + 64, 1u);
  if ( a2 != 1 )
  {
    if ( v4 )
    {
      v19 = FIELD_U32(v4, 56);
      v26 = &sead__SafeStringBase__vtable;
      v27 = v19;
      ((void (__fastcall *)(int (***)()))v28[3])(&v28);
      ((void (__fastcall *)(int (***)()))v28[3])(&v28);
      v20 = v29;
      ((void (__fastcall *)(int (***)()))off_60BC0244)(&v26);
      if ( v20 == v27 )
      {
LABEL_41:
        result = 0;
        if ( (FIELD_U8(v4, 51) & 1) == 0 )
          return result;
      }
      else
      {
        for ( i = 1; *(unsigned __int8 *)(v29 + i - 1) == *(unsigned __int8 *)(v27 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v29 + i - 1) )
            goto LABEL_41;
          if ( i >= 524289 || *(unsigned __int8 *)(v29 + i) != *(unsigned __int8 *)(v27 + i) )
            break;
          if ( !*(_BYTE *)(v29 + i) )
            goto LABEL_41;
        }
      }
    }
    v22 = sub_6047482C(v3, 2u);
    v15 = v22;
    if ( v22 )
    {
      v23 = FIELD_U32(v22, 56);
      v26 = &sead__SafeStringBase__vtable;
      v27 = v23;
      ((void (__fastcall *)(int (***)()))v28[3])(&v28);
      ((void (__fastcall *)(int (***)()))v28[3])(&v28);
      v24 = v29;
      ((void (__fastcall *)(int (***)()))v26[3])(&v26);
      if ( v24 != v27 )
      {
        for ( j = 1; *(unsigned __int8 *)(v29 + j - 1) == *(unsigned __int8 *)(v27 + j - 1); j += 2 )
        {
          if ( !*(_BYTE *)(v29 + j - 1) )
            goto LABEL_51;
          if ( j >= 524289 || *(unsigned __int8 *)(v29 + j) != *(unsigned __int8 *)(v27 + j) )
            break;
          if ( !*(_BYTE *)(v29 + j) )
            goto LABEL_51;
        }
        return 1;
      }
      goto LABEL_51;
    }
    return 1;
  }
  if ( v4 )
  {
    v5 = FIELD_U32(v4, 56);
    v26 = &sead__SafeStringBase__vtable;
    v27 = v5;
    ((void (__fastcall *)(int (***)()))v28[3])(&v28);
    ((void (__fastcall *)(int (***)()))v28[3])(&v28);
    v6 = v29;
    ((void (__fastcall *)(int (***)()))off_60BC0244)(&v26);
    if ( v6 == v27 )
    {
LABEL_11:
      result = 0;
      if ( (FIELD_U8(v4, 51) & 1) == 0 )
        return result;
    }
    else
    {
      for ( k = 1; *(unsigned __int8 *)(v29 + k - 1) == *(unsigned __int8 *)(v27 + k - 1); k += 2 )
      {
        if ( !*(_BYTE *)(v29 + k - 1) )
          goto LABEL_11;
        if ( k >= 524289 || *(unsigned __int8 *)(v29 + k) != *(unsigned __int8 *)(v27 + k) )
          break;
        if ( !*(_BYTE *)(v29 + k) )
          goto LABEL_11;
      }
    }
  }
  v9 = sub_6047482C(v3, 2u);
  v10 = v9;
  if ( v9 )
  {
    v11 = FIELD_U32(v9, 56);
    v26 = &sead__SafeStringBase__vtable;
    v27 = v11;
    ((void (__fastcall *)(int (***)()))v28[3])(&v28);
    ((void (__fastcall *)(int (***)()))v28[3])(&v28);
    v12 = v29;
    ((void (__fastcall *)(int (***)()))v26[3])(&v26);
    if ( v12 == v27 )
    {
LABEL_21:
      result = 0;
      if ( (FIELD_U8(v10, 51) & 1) == 0 )
        return result;
    }
    else
    {
      for ( m = 1; *(unsigned __int8 *)(v29 + m - 1) == *(unsigned __int8 *)(v27 + m - 1); m += 2 )
      {
        if ( !*(_BYTE *)(v29 + m - 1) )
          goto LABEL_21;
        if ( m >= 524289 || *(unsigned __int8 *)(v29 + m) != *(unsigned __int8 *)(v27 + m) )
          break;
        if ( !*(_BYTE *)(v29 + m) )
          goto LABEL_21;
      }
    }
  }
  v14 = sub_6047482C(v3, 5u);
  v15 = v14;
  if ( !v14 )
    return 1;
  v16 = FIELD_U32(v14, 56);
  v26 = &sead__SafeStringBase__vtable;
  v27 = v16;
  ((void (__fastcall *)(int (***)()))v28[3])(&v28);
  ((void (__fastcall *)(int (***)()))v28[3])(&v28);
  v17 = v29;
  ((void (__fastcall *)(int (***)()))v26[3])(&v26);
  if ( v17 != v27 )
  {
    for ( n = 1; *(unsigned __int8 *)(v29 + n - 1) == *(unsigned __int8 *)(v27 + n - 1); n += 2 )
    {
      if ( !*(_BYTE *)(v29 + n - 1) )
        goto LABEL_51;
      if ( n >= 524289 || *(unsigned __int8 *)(v29 + n) != *(unsigned __int8 *)(v27 + n) )
        break;
      if ( !*(_BYTE *)(v29 + n) )
        goto LABEL_51;
    }
    return 1;
  }
LABEL_51:
  result = 0;
  if ( (FIELD_U8(v15, 51) & 1) != 0 )
    return 1;
  return result;
}

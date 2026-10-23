/* sub_604A54F8
 * address: 0x604A54F8   size: 684   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604A54F8(int a1)
{
  int v1; // r9
  int v2; // r6
  int v3; // r5
  int v4; // r0
  int v5; // r1
  int i; // r2
  int v7; // r0
  int v8; // r5
  int v9; // r0
  int v10; // r4
  int j; // r1
  int v12; // r0
  int v13; // r4
  int v14; // r0
  int v15; // r5
  int k; // r1
  int (**v18)(); // [sp+0h] [bp-30h] BYREF
  int v19; // [sp+4h] [bp-2Ch]
  int (**v20)(); // [sp+8h] [bp-28h] BYREF
  int v21; // [sp+Ch] [bp-24h]

  v1 = a1 + 48;
  v2 = 0;
  v20 = &sead__SafeStringBase__vtable;
  v3 = dword_60CA12EC;
  v21 = dword_60CA12EC;
  v4 = sub_6047482C(a1 + 48, 0);
  if ( v4 )
  {
    v5 = FIELD_U32(v4, 56);
    v18 = &sead__SafeStringBase__vtable;
    v19 = v5;
    if ( v3 == v5 )
    {
LABEL_10:
      v2 = 1;
      if ( (FIELD_U8(v4, 51) & 1) != 0 )
        v2 = 4;
    }
    else
    {
      for ( i = 1; *(unsigned __int8 *)(v3 + i - 1) == *(unsigned __int8 *)(v5 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(v3 + i - 1) )
          goto LABEL_10;
        if ( i >= 524289 || *(unsigned __int8 *)(v3 + i) != *(unsigned __int8 *)(v5 + i) )
          break;
        if ( !*(_BYTE *)(v3 + i) )
          goto LABEL_10;
      }
    }
  }
  if ( (v2 & 3 | 4) == 4 )
  {
    v7 = sub_6047482C(v1, 1u);
    v8 = v7;
    v2 = 0;
    if ( v7 )
    {
      v9 = FIELD_U32(v7, 56);
      v18 = &sead__SafeStringBase__vtable;
      v19 = v9;
      sead__SafeStringBase__assureTerminationImpl_const();
      v10 = v21;
      ((void (__fastcall *)(int (***)()))off_60BC0244)(&v18);
      if ( v10 == v19 )
      {
LABEL_22:
        v2 = 1;
        if ( (FIELD_U8(v8, 51) & 1) != 0 )
          v2 = 4;
      }
      else
      {
        for ( j = 1; *(unsigned __int8 *)(v21 + j - 1) == *(unsigned __int8 *)(v19 + j - 1); j += 2 )
        {
          if ( !*(_BYTE *)(v21 + j - 1) )
            goto LABEL_22;
          if ( j >= 524289 || *(unsigned __int8 *)(v21 + j) != *(unsigned __int8 *)(v19 + j) )
            break;
          if ( !*(_BYTE *)(v21 + j) )
            goto LABEL_22;
        }
      }
    }
    if ( (v2 & 3 | 4) == 4 )
    {
      v12 = sub_6047482C(v1, 8u);
      v13 = v12;
      v2 = 0;
      if ( v12 )
      {
        v14 = FIELD_U32(v12, 56);
        v18 = &sead__SafeStringBase__vtable;
        v19 = v14;
        ((void (__fastcall *)(int (***)()))v20[3])(&v20);
        ((void (__fastcall *)(int (***)()))v20[3])(&v20);
        v15 = v21;
        ((void (__fastcall *)(int (***)()))v18[3])(&v18);
        if ( v15 == v19 )
        {
LABEL_34:
          v2 = 1;
          if ( (FIELD_U8(v13, 51) & 1) != 0 )
            v2 = 4;
        }
        else
        {
          for ( k = 1; *(unsigned __int8 *)(v21 + k - 1) == *(unsigned __int8 *)(v19 + k - 1); k += 2 )
          {
            if ( !*(_BYTE *)(v21 + k - 1) )
              goto LABEL_34;
            if ( k >= 524289 || *(unsigned __int8 *)(v21 + k) != *(unsigned __int8 *)(v19 + k) )
              break;
            if ( !*(_BYTE *)(v21 + k) )
              goto LABEL_34;
          }
        }
      }
      if ( (v2 & 3 | 4) == 4 )
        v2 = 2;
    }
  }
  return v2 == 2;
}

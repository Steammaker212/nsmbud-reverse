/* sub_6094291C
 * address: 0x6094291C   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094291C(int a1, int a2, int a3)
{
  _DWORD *v3; // r5
  int v5; // r0
  int v6; // r1
  bool v7; // zf
  char *v8; // r7
  int j; // r1
  int v10; // r0
  char *v11; // r7
  int i; // r1
  void *v13; // r6
  const void *v14; // r7
  unsigned int v15; // r0
  size_t v16; // r2
  int (**v19)(); // [sp+14h] [bp-54h] BYREF
  char *v20; // [sp+18h] [bp-50h]
  _DWORD v21[2]; // [sp+1Ch] [bp-4Ch] BYREF
  int v22; // [sp+24h] [bp-44h] BYREF
  char *v23; // [sp+28h] [bp-40h]
  int (**v24)(); // [sp+2Ch] [bp-3Ch] BYREF
  char *v25; // [sp+30h] [bp-38h]
  int (**v26)(); // [sp+34h] [bp-34h] BYREF
  const char *v27; // [sp+38h] [bp-30h]
  int v28; // [sp+3Ch] [bp-2Ch] BYREF
  char *v29; // [sp+40h] [bp-28h]

  v5 = FIELD_U32(a2, 8);
  v6 = 2;
  v7 = v5 == 0;
  if ( v5 )
  {
    v3 = (_DWORD *)(v5 - 4);
    v7 = v5 == 4;
  }
  if ( !v7 )
  {
    while ( 1 )
    {
      v26 = &sead__SafeStringBase__vtable;
      v27 = "name";
      sub_609A5C60(&v28, v3, &v26);
      v24 = &sead__SafeStringBase__vtable;
      v25 = off_60C5CB34;
      (*(void (__fastcall **)(int *))(v28 + 12))(&v28);
      (*(void (__fastcall **)(int *))(v28 + 12))(&v28);
      v8 = v29;
      ((void (__fastcall *)(int (***)()))v24[3])(&v24);
      if ( v8 == v25 )
      {
LABEL_12:
        v21[0] = &sead__SafeStringBase__vtable;
        v21[1] = "type";
        sub_609A5C60(&v22, v3, v21);
        v10 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a1);
        v19 = &sead__SafeStringBase__vtable;
        v20 = off_60C5E454[v10];
        (*(void (__fastcall **)(int *))(v22 + 12))(&v22);
        (*(void (__fastcall **)(int *))(v22 + 12))(&v22);
        v11 = v23;
        ((void (__fastcall *)(int (***)()))v19[3])(&v19);
        if ( v11 == v20 )
        {
LABEL_25:
          if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1) )
          {
            v13 = (void *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
            v14 = (const void *)v3[24];
            v15 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1);
            v16 = v3[25];
            if ( v15 < v16 )
              v16 = v15;
            qmemcpy(v13, v14, v16);
            return 0;
          }
          else
          {
            v26 = &sead__SafeStringBase__vtable;
            v27 = "value";
            sub_609A5C60(&v28, v3, &v26);
            return sub_60942C28(a1, &v28, a3) == 0;
          }
        }
        for ( i = 1; v23[i - 1] == v20[i - 1]; i += 2 )
        {
          if ( !v23[i - 1] )
            goto LABEL_25;
          if ( i >= 524289 || v23[i] != v20[i] )
            break;
          if ( !v23[i] )
            goto LABEL_25;
        }
      }
      else
      {
        for ( j = 1; v29[j - 1] == v25[j - 1]; j += 2 )
        {
          if ( !v29[j - 1] )
            goto LABEL_12;
          if ( j >= 524289 || v29[j] != v25[j] )
            break;
          if ( !v29[j] )
            goto LABEL_12;
        }
      }
      v3 = (_DWORD *)v3[3];
      if ( v3 )
        --v3;
      if ( !v3 )
        return 2;
    }
  }
  return v6;
}

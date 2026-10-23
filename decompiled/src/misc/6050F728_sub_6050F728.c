/* sub_6050F728
 * address: 0x6050F728   size: 856   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050F728(_DWORD *a1)
{
  _DWORD *v1; // r4
  unsigned int v2; // r10
  _DWORD *v3; // r8
  _DWORD *v4; // r11
  unsigned int v5; // r7
  unsigned int *v6; // r9
  int result; // r0
  int v8; // r0
  int v9; // r4
  int i; // r1
  int v11; // r0
  unsigned int v12; // r0
  int v13; // r7
  int v14; // r0
  int v15; // r4
  int j; // r1
  bool v17; // zf
  int v18; // t1
  int v19; // r0
  int v20; // r1
  int (**v22)(); // [sp+20h] [bp-40h] BYREF
  int v23; // [sp+24h] [bp-3Ch]
  int (**v24)(); // [sp+28h] [bp-38h] BYREF
  int v25; // [sp+2Ch] [bp-34h]

  v1 = a1;
  v2 = 0;
  v3 = a1 + 15;
  v24 = &sead__SafeStringBase__vtable;
  v25 = dword_60CA8168;
  do
  {
    v4 = &v1[v2];
    v5 = dword_60B03770[v2];
    v6 = v4 + 940;
    if ( v4[940] == 7 )
    {
      result = sub_6047482C((int)v3, dword_60B03770[v2]);
      if ( !result )
        goto LABEL_36;
      v8 = FIELD_U32(result, 56);
      v22 = &sead__SafeStringBase__vtable;
      v23 = v8;
      ((void (__fastcall *)(int (***)()))v24[3])(&v24);
      ((void (__fastcall *)(int (***)()))v24[3])(&v24);
      v9 = v25;
      ((void (__fastcall *)(int (***)()))v22[3])(&v22);
      result = v23;
      if ( v9 == v23 )
      {
LABEL_12:
        v11 = sub_6047482C((int)v3, v5);
        result = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v11 + 16))(v11, 0);
      }
      else
      {
        for ( i = 1; *(unsigned __int8 *)(v25 + i - 1) == *(unsigned __int8 *)(v23 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v25 + i - 1) )
            goto LABEL_12;
          if ( i >= 524289 || *(unsigned __int8 *)(v25 + i) != *(unsigned __int8 *)(v23 + i) )
            break;
          if ( !*(_BYTE *)(v25 + i) )
            goto LABEL_12;
        }
      }
      goto LABEL_13;
    }
    v12 = dword_60B03780[v2];
    if ( v12 >= 7 )
      v12 = 0;
    result = sub_6047467C(v3, v5, &v24, (int)&dword_60CA8140[2 * v12 + 15], 1.0, 0);
    if ( result == 1 )
    {
      result = sub_6047482C((int)v3, v5);
      v13 = result;
      if ( result )
      {
        v14 = FIELD_U32(result, 56);
        v22 = &sead__SafeStringBase__vtable;
        v23 = v14;
        ((void (__fastcall *)(int (***)()))v24[3])(&v24);
        ((void (__fastcall *)(int (***)()))v24[3])(&v24);
        v15 = v25;
        ((void (__fastcall *)(int (***)()))v22[3])(&v22);
        result = v23;
        if ( v15 != v23 )
        {
          for ( j = 1; *(unsigned __int8 *)(v25 + j - 1) == *(unsigned __int8 *)(v23 + j - 1); j += 2 )
          {
            if ( !*(_BYTE *)(v25 + j - 1) )
              goto LABEL_26;
            if ( j >= 524289 || *(unsigned __int8 *)(v25 + j) != *(unsigned __int8 *)(v23 + j) )
              break;
            if ( !*(_BYTE *)(v25 + j) )
              goto LABEL_26;
          }
LABEL_13:
          v1 = a1;
          goto LABEL_36;
        }
LABEL_26:
        (*(void (__fastcall **)(int, float))(*(_DWORD *)v13 + 96))(v13, (float)*v6);
        result = *v6;
        v1 = a1;
        if ( *v6 == 6 )
        {
          result = dword_60CC6D78;
          v17 = dword_60CC6D78 == 0;
          if ( dword_60CC6D78 )
          {
            v18 = v4[935];
            v4 += 935;
            v17 = v18 == 0;
          }
          if ( !v17 )
          {
            v19 = a1[945];
            if ( a1[944] > v2 )
              v19 += 24 * v2;
            result = sub_6098E0F8(v19, dword_60CC6D78 + 1784 * v2 + 102208, 0);
            if ( result == 1 )
            {
              v20 = a1[945];
              if ( a1[944] > v2 )
                v20 += 24 * v2;
              result = sub_6098E754(*v4, v20, 0);
            }
          }
        }
      }
    }
LABEL_36:
    ++v2;
  }
  while ( v2 != 4 );
  return result;
}

/* sub_60181BE0
 * address: 0x60181BE0   size: 656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60181BE0(int a1, _DWORD *a2, int a3)
{
  int result; // r0
  unsigned int j; // r6
  unsigned int v7; // r0
  _DWORD *v8; // r8
  char *v9; // r0
  char *v10; // r11
  int v11; // r1
  int k; // r2
  unsigned int v13; // r10
  unsigned int v14; // r0
  _DWORD *v15; // r8
  char *v16; // r0
  char *v17; // r5
  int v18; // r1
  int i; // r2
  int v20; // r0
  int (**v22)(); // [sp+14h] [bp-2Ch] BYREF
  char *v23; // [sp+18h] [bp-28h]

  result = FIELD_U32(a1, 28);
  if ( result < 1 )
    return result;
  if ( a3 != 862 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = 0;
      if ( v13 < 0x100 )
        v14 = v13;
      v15 = (_DWORD *)(a1 + 1096 * v14);
      v16 = &byte_60B3BA34;
      if ( (int)v15[13] >= 1 )
        v16 = (char *)v15[12];
      v22 = &sead__SafeStringBase__vtable;
      v23 = v16;
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v17 = (char *)a2[1];
      ((void (__fastcall *)(int (***)()))v22[3])(&v22);
      if ( v17 != v23 )
      {
        v18 = a2[1];
        for ( i = 1; *(unsigned __int8 *)(v18 + i - 1) == (unsigned __int8)v23[i - 1]; i += 2 )
        {
          if ( !*(_BYTE *)(v18 + i - 1) )
            goto LABEL_32;
          if ( i >= 524289 || *(unsigned __int8 *)(v18 + i) != (unsigned __int8)v23[i] )
            break;
          if ( !*(_BYTE *)(v18 + i) )
            goto LABEL_32;
        }
        goto LABEL_37;
      }
LABEL_32:
      if ( a3 == 863 )
        break;
      if ( a3 == 861 )
      {
        v20 = v15[278] | 0x4000;
        goto LABEL_36;
      }
LABEL_37:
      result = FIELD_U32(a1, 28);
      if ( (int)++v13 >= result )
        return result;
    }
    v20 = v15[278] | 0x2000;
LABEL_36:
    v15[278] = v20;
    goto LABEL_37;
  }
  for ( j = 0; (int)j < result; ++j )
  {
    v7 = 0;
    if ( j < 0x100 )
      v7 = j;
    v8 = (_DWORD *)(a1 + 1096 * v7);
    v9 = &byte_60B3BA34;
    if ( (int)v8[13] >= 1 )
      v9 = (char *)v8[12];
    v22 = &sead__SafeStringBase__vtable;
    v23 = v9;
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v10 = (char *)a2[1];
    ((void (__fastcall *)(int (***)()))v22[3])(&v22);
    if ( v10 == v23 )
    {
LABEL_16:
      v8[278] |= 0x1000u;
    }
    else
    {
      v11 = a2[1];
      for ( k = 1; *(unsigned __int8 *)(v11 + k - 1) == (unsigned __int8)v23[k - 1]; k += 2 )
      {
        if ( !*(_BYTE *)(v11 + k - 1) )
          goto LABEL_16;
        if ( k >= 524289 || *(unsigned __int8 *)(v11 + k) != (unsigned __int8)v23[k] )
          break;
        if ( !*(_BYTE *)(v11 + k) )
          goto LABEL_16;
      }
    }
    result = FIELD_U32(a1, 28);
  }
  return result;
}

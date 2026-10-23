/* sub_6098EA0C
 * address: 0x6098EA0C   size: 984   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098EA0C(_BYTE *a1, int a2, int *a3)
{
  int v3; // r5
  int v5; // r4
  bool v6; // cc
  int v7; // r10
  int v8; // r0
  int v9; // r6
  int v10; // r9
  int v11; // r11
  _BYTE *v12; // r4
  int v13; // r0
  int i; // r1
  int v15; // r4
  int j; // r1
  int v18; // r4
  int (__fastcall *v19)(int, int *, int); // r5
  int v21; // [sp+8h] [bp-98h]
  int v22; // [sp+14h] [bp-8Ch]
  int (**v23)(); // [sp+18h] [bp-88h] BYREF
  const char *v24; // [sp+1Ch] [bp-84h]
  int (**v25)(); // [sp+20h] [bp-80h] BYREF
  const char *v26; // [sp+24h] [bp-7Ch]
  int (**v27)(); // [sp+28h] [bp-78h] BYREF
  int *v28; // [sp+2Ch] [bp-74h]
  int v29; // [sp+30h] [bp-70h]
  int v30; // [sp+34h] [bp-6Ch] BYREF
  int (**v31)(); // [sp+74h] [bp-2Ch] BYREF
  _BYTE *v32; // [sp+78h] [bp-28h]

  if ( *a1 == 47 )
  {
    do
    {
      v3 = a2;
      a2 = FIELD_U32(a2, 76);
    }
    while ( a2 );
    if ( !*++a1 )
      return 0;
  }
  else
  {
    v3 = a2;
    if ( !*a1 )
      return 0;
  }
  v31 = &sead__SafeStringBase__vtable;
  v32 = a1;
  v28 = &v30;
  v27 = &BufferedSafeStringBase_char_vtable_probably;
  v29 = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v27);
  v5 = 0;
  *(_BYTE *)v28 = 0;
  v25 = &sead__SafeStringBase__vtable;
  v27 = &off_60BD4BF0;
  v26 = "..";
  v22 = 0;
  v23 = &sead__SafeStringBase__vtable;
  v24 = "/";
  v31[3]();
  while ( v32[v5] )
  {
    if ( !v32[v5 + 1] )
    {
      ++v5;
      break;
    }
    if ( !v32[v5 + 2] )
    {
      v5 += 2;
      break;
    }
    v6 = v5 + 2 <= 0x7FFFF;
    v5 += 3;
    if ( !v6 )
    {
      v5 = 0;
      break;
    }
  }
  v21 = v5 + 1;
  while ( 1 )
  {
    v7 = v22;
    ((void (__fastcall *)(int (***)()))v31[3])(&v31);
    v8 = 0;
    while ( v32[v8] )
    {
      if ( !v32[v8 + 1] )
      {
        ++v8;
        if ( v22 < 0 )
          goto LABEL_41;
        goto LABEL_26;
      }
      if ( !v32[v8 + 2] )
      {
        v8 += 2;
        break;
      }
      v6 = v8 + 2 <= 0x7FFFF;
      v8 += 3;
      if ( !v6 )
      {
        v8 = 0;
        if ( v22 < 0 )
          goto LABEL_41;
        goto LABEL_26;
      }
    }
    if ( v22 < 0 )
      goto LABEL_41;
LABEL_26:
    if ( v22 <= v8 )
    {
      ((void (__fastcall *)(int (***)()))v27[3])(&v27);
      v9 = v29;
      if ( v29 >= 1 )
      {
        v10 = (int)v28;
        v11 = 0;
        while ( 1 )
        {
          v12 = v32;
          if ( !v32[v7] )
            break;
          ((void (__fastcall *)(int (***)()))v23[3])(&v23);
          v13 = (unsigned __int8)v12[v7];
          for ( i = 1; v24[i - 1]; i += 2 )
          {
            if ( (unsigned __int8)v24[i - 1] == v13 )
              goto LABEL_40;
            if ( i >= 524289 || !v24[i] )
              break;
            if ( (unsigned __int8)v24[i] == v13 )
              goto LABEL_40;
          }
          *(_BYTE *)(v10 + v11++) = v13;
          ++v7;
          if ( v9 <= v11 )
            goto LABEL_41;
        }
LABEL_40:
        *(_BYTE *)(v10 + v11) = 0;
        v22 = v7 + 1;
      }
    }
LABEL_41:
    if ( v22 == v21 )
      break;
    ((void (__fastcall *)(int (***)()))v27[3])(&v27);
    ((void (__fastcall *)(int (***)()))v27[3])(&v27);
    v15 = (int)v28;
    ((void (__fastcall *)(int (***)()))v25[3])(&v25);
    if ( (const char *)v15 == v26 )
    {
LABEL_50:
      v3 = FIELD_U32(v3, 76);
      if ( !v3 )
        return 0;
    }
    else
    {
      for ( j = 1; *((unsigned __int8 *)v28 + j - 1) == (unsigned __int8)v26[j - 1]; j += 2 )
      {
        if ( !*((_BYTE *)v28 + j - 1) )
          goto LABEL_50;
        if ( j >= 524289 || *((unsigned __int8 *)v28 + j) != (unsigned __int8)v26[j] )
          break;
        if ( !*((_BYTE *)v28 + j) )
          goto LABEL_50;
      }
      ((void (__fastcall *)(int (***)()))v27[3])(&v27);
      v3 = sub_60980A3C(v3, (int)v28);
      if ( !v3 )
        return 0;
    }
  }
  if ( a3 )
    *a3 = v3;
  v18 = FIELD_U32(v3, 12);
  v19 = *(int (__fastcall **)(int, int *, int))(*(_DWORD *)v18 + 48);
  ((void (__fastcall *)(int (***)()))v27[3])(&v27);
  return v19(v18, v28, 1);
}

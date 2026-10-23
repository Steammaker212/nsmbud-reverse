/* sub_608FC5E0
 * address: 0x608FC5E0   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FC5E0(int a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // r5
  int v6; // r1
  int v7; // r0
  bool v8; // cc
  int v9; // r0
  _DWORD *v10; // r5
  int v11; // r7
  int v12; // r1
  int v13; // r0
  int v14; // r5
  int *v15; // r9
  int v16; // r8
  int v17; // r10
  int v18; // r0
  int i; // r1
  unsigned int v20; // r0
  int v21; // r7
  int v22; // r5
  int j; // r1
  int v24; // r0
  int v25; // r1
  int v26; // r1
  bool v27; // vf
  int v28; // r0
  int result; // r0
  int v30; // [sp+4h] [bp-5Ch]
  int v31; // [sp+14h] [bp-4Ch]
  int (**v32)(); // [sp+18h] [bp-48h] BYREF
  const char *v33; // [sp+1Ch] [bp-44h]
  int (**v34)(); // [sp+20h] [bp-40h] BYREF
  int *v35; // [sp+24h] [bp-3Ch]
  int v36; // [sp+28h] [bp-38h]
  int v37; // [sp+2Ch] [bp-34h] BYREF

  v4 = 0;
  a2[2] = 0;
  a2[3] = 0;
  v35 = &v37;
  v34 = &BufferedSafeStringBase_char_vtable_probably;
  v36 = 16;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v34);
  *(_BYTE *)v35 = 0;
  v34 = &off_60BD54D4;
  v32 = &sead__SafeStringBase__vtable;
  v33 = " ";
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v6 = 1;
  v7 = a3[1];
  while ( 1 )
  {
    if ( !*(_BYTE *)(v7 + v6 - 1) )
    {
      v9 = v4 + 1;
      goto LABEL_10;
    }
    if ( !*(_BYTE *)(v7 + v6) )
    {
      v9 = v4 + 2;
      goto LABEL_10;
    }
    if ( !*(_BYTE *)(v7 + v6 + 1) )
      break;
    v4 += 3;
    v8 = v6 + 1 <= 0x7FFFF;
    v6 += 3;
    if ( !v8 )
    {
      v30 = 1;
      goto LABEL_11;
    }
  }
  v9 = v6 + 2;
LABEL_10:
  v30 = v9;
  if ( v9 )
  {
LABEL_11:
    v10 = a3;
    v11 = 0;
    do
    {
      (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
      v12 = v10[1];
      v13 = 0;
      while ( *(_BYTE *)(v12 + v13) )
      {
        if ( !*(_BYTE *)(v12 + v13 + 1) )
        {
          ++v13;
          if ( v11 < 0 )
            goto LABEL_58;
          goto LABEL_23;
        }
        if ( !*(_BYTE *)(v12 + v13 + 2) )
        {
          v13 += 2;
          break;
        }
        v8 = v13 + 2 <= 0x7FFFF;
        v13 += 3;
        if ( !v8 )
        {
          v13 = 0;
          if ( v11 < 0 )
            goto LABEL_58;
          goto LABEL_23;
        }
      }
      if ( v11 < 0 )
        goto LABEL_58;
LABEL_23:
      if ( v11 > v13 )
        goto LABEL_58;
      ((void (__fastcall *)(int (***)()))v34[3])(&v34);
      v14 = v36;
      if ( v36 < 1 )
        goto LABEL_58;
      v15 = v35;
      v16 = 0;
      while ( 1 )
      {
        v17 = a3[1];
        if ( !*(_BYTE *)(v17 + v11) )
          break;
        ((void (__fastcall *)(int (***)()))v32[3])(&v32);
        v18 = *(unsigned __int8 *)(v17 + v11);
        for ( i = 1; v33[i - 1]; i += 2 )
        {
          if ( (unsigned __int8)v33[i - 1] == v18 )
            goto LABEL_37;
          if ( i >= 524289 || !v33[i] )
            break;
          if ( (unsigned __int8)v33[i] == v18 )
            goto LABEL_37;
        }
        *((_BYTE *)v15 + v16++) = v18;
        ++v11;
        if ( v14 <= v16 )
          goto LABEL_58;
      }
LABEL_37:
      *((_BYTE *)v15 + v16) = 0;
      v31 = v11 + 1;
      if ( v16 != 4 )
        goto LABEL_58;
      v20 = 0;
      while ( 1 )
      {
        v21 = v20;
        v22 = sub_6081D400(v20);
        ((void (__fastcall *)(int (***)()))v34[3])(&v34);
        if ( (int *)v22 == v35 )
          break;
        for ( j = 1; *(unsigned __int8 *)(v22 + j - 1) == *((unsigned __int8 *)v35 + j - 1); j += 2 )
        {
          if ( !*(_BYTE *)(v22 + j - 1) )
            goto LABEL_52;
          if ( j >= 524289 || *(unsigned __int8 *)(v22 + j) != *((unsigned __int8 *)v35 + j) )
            break;
          if ( !*(_BYTE *)(v22 + j) )
            goto LABEL_52;
        }
        v20 = v21 + 1;
        if ( v21 > 15 )
          v20 = 16;
        if ( v20 == 16 )
          goto LABEL_58;
      }
LABEL_52:
      v24 = a2[1];
      v25 = a2[3];
      if ( v25 < v24 )
      {
        a2[3] = v25 + 1;
        v26 = a2[2] + v25;
        v27 = __OFSUB__(v26, v24);
        v28 = v26 - v24;
        if ( v28 < 0 != v27 )
          v28 = v26;
        *(_DWORD *)(*a2 + 4 * v28) = v21;
      }
      v10 = a3;
      v11 = v31;
    }
    while ( v31 != v30 );
  }
  result = 1;
  if ( a2[3] )
    return result;
LABEL_58:
  a2[2] = 0;
  a2[3] = 0;
  return 0;
}

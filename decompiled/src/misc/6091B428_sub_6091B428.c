/* sub_6091B428
 * address: 0x6091B428   size: 1116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char **__fastcall sub_6091B428(int *a1, int a2)
{
  unsigned int v4; // r5
  int v5; // r6
  unsigned int v6; // r4
  const char **v7; // r9
  const char *v8; // r7
  const char **v9; // r6
  int v10; // r5
  unsigned int v11; // r4
  const char *v12; // r7
  const char **v13; // r6
  int v14; // r5
  unsigned int v15; // r4
  const char *v16; // r7
  const char **v17; // r6
  int v18; // r5
  unsigned int v19; // r4
  const char *v20; // r7
  const char **v21; // r6
  const char **result; // r0
  int v23; // r1
  bool v24; // zf
  _DWORD *v25; // r5
  int v26; // r1
  int (***v27)(); // r11
  int v28; // r0
  _DWORD *v29; // r7
  const char **v30; // r4
  int v31; // r1
  int i; // r2
  int (***v33)(); // r7
  int v34; // r0
  _DWORD *v35; // r10
  int v36; // r11
  const char **v37; // r4
  int v38; // r1
  int j; // r2
  int v40; // [sp+8h] [bp-40h]
  const char **v41; // [sp+Ch] [bp-3Ch]
  _DWORD *v42; // [sp+14h] [bp-34h]
  int v43; // [sp+18h] [bp-30h]
  int (**v44)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char **v45; // [sp+20h] [bp-28h]

  if ( sub_6091E1AC(a2, 0) == 1 )
  {
    v4 = 0;
    v5 = *(_DWORD *)(sub_6091D910(a2, 0) + 4);
    (*(void (__fastcall **)(int *))(a1[1] + 12))(a1 + 1);
    v6 = FIELD_U32(v5, 56);
    if ( v6 )
    {
      v7 = *(const char ***)(v5 + 60);
      v8 = (const char *)a1[2];
      v9 = v7;
      while ( strcmp(*v9, v8) )
      {
        ++v4;
        v9 += 3;
        if ( v4 >= v6 )
          goto LABEL_8;
      }
      if ( v9 )
      {
LABEL_29:
        result = &v7[3 * v4];
        v23 = (int)result[2];
        goto LABEL_59;
      }
    }
  }
LABEL_8:
  if ( sub_6091E1AC(a2, 1) )
  {
    v10 = *(_DWORD *)(sub_6091D910(a2, 1) + 4);
    (*(void (__fastcall **)(int *))(a1[1] + 12))(a1 + 1);
    v11 = FIELD_U32(v10, 56);
    if ( v11 )
    {
      v7 = *(const char ***)(v10 + 60);
      v12 = (const char *)a1[2];
      v4 = 0;
      v13 = v7;
      while ( strcmp(*v13, v12) )
      {
        ++v4;
        v13 += 3;
        if ( v4 >= v11 )
          goto LABEL_15;
      }
      if ( v13 )
        goto LABEL_29;
    }
  }
LABEL_15:
  if ( sub_6091E1AC(a2, 2) == 1 )
  {
    v14 = *(_DWORD *)(sub_6091D910(a2, 2) + 4);
    (*(void (__fastcall **)(int *))(a1[1] + 12))(a1 + 1);
    v15 = FIELD_U32(v14, 56);
    if ( v15 )
    {
      v7 = *(const char ***)(v14 + 60);
      v16 = (const char *)a1[2];
      v4 = 0;
      v17 = v7;
      while ( strcmp(*v17, v16) )
      {
        ++v4;
        v17 += 3;
        if ( v4 >= v15 )
          goto LABEL_22;
      }
      if ( v17 )
        goto LABEL_29;
    }
  }
LABEL_22:
  if ( sub_6091E1AC(a2, 3) == 1 )
  {
    v18 = *(_DWORD *)(sub_6091D910(a2, 3) + 4);
    (*(void (__fastcall **)(int *))(a1[1] + 12))(a1 + 1);
    v19 = FIELD_U32(v18, 56);
    if ( v19 )
    {
      v7 = *(const char ***)(v18 + 60);
      v20 = (const char *)a1[2];
      v4 = 0;
      v21 = v7;
      while ( strcmp(*v21, v20) )
      {
        ++v4;
        v21 += 3;
        if ( v4 >= v19 )
          goto LABEL_30;
      }
      if ( v21 )
        goto LABEL_29;
    }
  }
LABEL_30:
  v23 = -1;
  result = *(const char ***)(FIELD_U32(a2, 4) + 44);
  v24 = result == 0;
  if ( result )
  {
    v41 = (const char **)result[1];
    v24 = v41 == 0;
  }
  if ( v24 )
    goto LABEL_59;
  v25 = result + 2;
  v26 = 0;
  v27 = &v44;
  v42 = a1 + 1;
  while ( 1 )
  {
    v43 = v26;
    v28 = sub_60973CE8();
    v44 = &sead__SafeStringBase__vtable;
    v29 = (_DWORD *)v28;
    v45 = (const char **)(v25 + 3);
    (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
    (*(void (__fastcall **)(_DWORD *))(*v29 + 12))(v29);
    v30 = (const char **)v29[1];
    ((void (__fastcall *)(int (***)()))v44[3])(v27);
    if ( v30 != v45 )
    {
      v31 = v29[1];
      for ( i = 1; *(unsigned __int8 *)(v31 + i - 1) == *((unsigned __int8 *)v45 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(v31 + i - 1) )
          goto LABEL_42;
        if ( i >= 524289 || *(unsigned __int8 *)(v31 + i) != *((unsigned __int8 *)v45 + i) )
          break;
        if ( !*(_BYTE *)(v31 + i) )
          goto LABEL_42;
      }
      v33 = v27;
      goto LABEL_56;
    }
LABEL_42:
    v33 = v27;
    v34 = (int)v25 + v25[2] + 12;
    v40 = FIELD_U32(v34, 4);
    if ( v40 )
      break;
LABEL_56:
    v27 = v33;
    v25 = (_DWORD *)((char *)v25 + *v25);
    result = v41;
    v26 = v43 + 1;
    if ( (const char **)(v43 + 1) == v41 )
    {
      v23 = -1;
      goto LABEL_59;
    }
  }
  v35 = (_DWORD *)(v34 + 8);
  v36 = 0;
  while ( 1 )
  {
    v44 = &sead__SafeStringBase__vtable;
    v45 = (const char **)(v35 + 3);
    (*(void (__fastcall **)(_DWORD *))(a1[1] + 12))(v42);
    (*(void (__fastcall **)(_DWORD *))(a1[1] + 12))(v42);
    v37 = (const char **)a1[2];
    ((void (__fastcall *)(int (***)()))v44[3])(v33);
    result = v45;
    if ( v37 == v45 )
      break;
    v38 = a1[2];
    for ( j = 1; *(unsigned __int8 *)(v38 + j - 1) == *((unsigned __int8 *)v45 + j - 1); j += 2 )
    {
      if ( !*(_BYTE *)(v38 + j - 1) )
        goto LABEL_58;
      if ( j >= 524289 || *(unsigned __int8 *)(v38 + j) != *((unsigned __int8 *)v45 + j) )
        break;
      if ( !*(_BYTE *)(v38 + j) )
        goto LABEL_58;
    }
    ++v36;
    v35 = (_DWORD *)((char *)v35 + *v35);
    if ( v36 == v40 )
      goto LABEL_56;
  }
LABEL_58:
  v23 = v35[1];
LABEL_59:
  *a1 = v23;
  return result;
}

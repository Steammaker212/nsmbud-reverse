/* sub_60902A08
 * address: 0x60902A08   size: 780   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60902A08(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v8; // r2
  int v9; // r0
  _DWORD *v10; // r9
  _DWORD *v11; // r8
  _DWORD *v12; // r11
  int *v13; // r9
  int v14; // r10
  int v15; // t1
  char *v16; // r7
  int v17; // r1
  int v18; // r2
  _BYTE *v19; // r1
  int result; // r0
  signed int v21; // r1
  _DWORD *v22; // r4
  int v23; // r7
  int *v24; // r6
  int v25; // r1
  int i; // r2
  _DWORD *v27; // [sp+0h] [bp-68h]
  int v28; // [sp+4h] [bp-64h]
  int v29; // [sp+8h] [bp-60h]
  _DWORD *v30; // [sp+Ch] [bp-5Ch]
  int (**v31)(); // [sp+10h] [bp-58h] BYREF
  int *v32; // [sp+14h] [bp-54h]
  int v33; // [sp+18h] [bp-50h]
  int v34; // [sp+1Ch] [bp-4Ch] BYREF
  int (**v35)(); // [sp+3Ch] [bp-2Ch] BYREF
  char *v36; // [sp+40h] [bp-28h]

  v35 = &sead__SafeStringBase__vtable;
  v32 = &v34;
  v36 = &byte_60B3BA34;
  v31 = &BufferedSafeStringBase_char_vtable_probably;
  v33 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v31);
  *(_BYTE *)v32 = 0;
  v31 = &off_60BD4C20;
  if ( a4 )
    goto LABEL_2;
  v21 = sub_608E93BC((int)&v31, a2);
  result = 0;
  if ( v21 != 1 )
    return result;
  v22 = (_DWORD *)a1[8];
  if ( v22 == a1 + 7 )
    goto LABEL_37;
  while ( 1 )
  {
    v23 = v22[2];
    (*(void (__fastcall **)(int))(FIELD_U32(v23, 32) + 12))(v23 + 32);
    (*(void (__fastcall **)(int))(FIELD_U32(v23, 32) + 12))(v23 + 32);
    v24 = *(int **)(v23 + 36);
    ((void (__fastcall *)(int (***)()))v31[3])(&v31);
    if ( v24 == v32 )
      break;
    v25 = FIELD_U32(v23, 36);
    for ( i = 1; *(unsigned __int8 *)(v25 + i - 1) == *((unsigned __int8 *)v32 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(v25 + i - 1) )
        goto LABEL_36;
      if ( i >= 524289 || *(unsigned __int8 *)(v25 + i) != *((unsigned __int8 *)v32 + i) )
        break;
      if ( !*(_BYTE *)(v25 + i) )
        goto LABEL_36;
    }
    v22 = (_DWORD *)v22[1];
    if ( v22 == a1 + 7 )
      goto LABEL_37;
  }
LABEL_36:
  a4 = v22[2];
  if ( a4 )
  {
LABEL_2:
    sead__SafeStringBase__operator_assign((int)&v35, a3);
    v8 = 1;
  }
  else
  {
LABEL_37:
    sead__SafeStringBase__operator_assign((int)&v35, (int)&v31);
    v8 = 0;
    a4 = 0;
  }
  v9 = a2[9];
  if ( !v9 )
  {
    v28 = v8;
    v29 = a4;
    v10 = (_DWORD *)a1[5];
    v27 = a1 + 4;
    if ( v10 == a1 + 4 )
    {
LABEL_15:
      v13 = a1 + 11;
    }
    else
    {
      while ( 1 )
      {
        v30 = v10;
        v11 = a2;
        v12 = a1;
        v15 = v10[2];
        v13 = v10 + 2;
        v14 = v15;
        (*(void (__fastcall **)(int))(FIELD_U32(v15, 32) + 12))(v15 + 32);
        (*(void (__fastcall **)(int))(FIELD_U32(v15, 32) + 12))(v15 + 32);
        v16 = *(char **)(v15 + 36);
        ((void (__fastcall *)(int (***)()))v35[3])(&v35);
        if ( v16 == v36 )
          break;
        v17 = FIELD_U32(v14, 36);
        a1 = v12;
        v18 = 1;
        a2 = v11;
        while ( *(unsigned __int8 *)(v17 + v18 - 1) == (unsigned __int8)v36[v18 - 1] )
        {
          if ( !*(_BYTE *)(v17 + v18 - 1) )
            goto LABEL_16;
          if ( v18 >= 524289 || *(unsigned __int8 *)(v17 + v18) != (unsigned __int8)v36[v18] )
            break;
          if ( !*(_BYTE *)(v17 + v18) )
            goto LABEL_16;
          v18 += 2;
        }
        v10 = (_DWORD *)v30[1];
        if ( v10 == v27 )
          goto LABEL_15;
      }
      a2 = v11;
    }
LABEL_16:
    v8 = v28;
    a4 = v29;
    v9 = *v13;
  }
  v19 = (_BYTE *)a2[13];
  if ( v19 )
    *v19 = v8;
  if ( v8 == 1 )
    return (*(int (__fastcall **)(int, _DWORD *, int))(*(_DWORD *)v9 + 20))(v9, a2, a4);
  else
    return (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v9 + 16))(v9, a2);
}

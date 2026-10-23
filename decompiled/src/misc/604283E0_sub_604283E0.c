/* sub_604283E0
 * address: 0x604283E0   size: 1208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604283E0(_DWORD *a1, int *a2, int a3)
{
  int v5; // r5
  int v6; // r0
  bool v7; // cc
  int v8; // r10
  signed int v9; // r11
  char *v10; // r0
  int i; // r1
  char *v12; // r6
  int j; // r1
  int v14; // r0
  int v15; // r1
  bool v16; // zf
  _BYTE *v17; // r8
  _BYTE *v18; // r1
  signed int v19; // r0
  char *v21; // r6
  int k; // r1
  int m; // r2
  int n; // r2
  int ii; // r3
  int *v26; // [sp+4h] [bp-3Ch]
  int (**v28)(); // [sp+Ch] [bp-34h] BYREF
  const char *v29; // [sp+10h] [bp-30h]
  int (**v30)(); // [sp+14h] [bp-2Ch] BYREF
  char *v31; // [sp+18h] [bp-28h]

  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v5 = 0;
  v6 = a1[1];
  while ( *(_BYTE *)(v6 + v5) )
  {
    if ( !*(_BYTE *)(v6 + v5 + 1) )
    {
      ++v5;
      break;
    }
    if ( !*(_BYTE *)(v6 + v5 + 2) )
    {
      v5 += 2;
      break;
    }
    v7 = v5 + 2 <= 0x7FFFF;
    v5 += 3;
    if ( !v7 )
      return 0;
  }
  v9 = v5 - 3;
  if ( v5 - 3 < 0 )
    return 0;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v10 = (char *)(a1[1] + v9);
  v30 = &sead__SafeStringBase__vtable;
  v31 = v10;
  if ( v10 == "fsp" )
  {
LABEL_25:
    v14 = 0;
    goto LABEL_26;
  }
  for ( i = 0; i < 524289; ++i )
  {
    if ( v10[i] != aFsp[i] )
      break;
    if ( !v10[i] )
      goto LABEL_25;
  }
  v28 = &sead__SafeStringBase__vtable;
  v29 = "fcl";
  sead__SafeStringBase__assureTerminationImpl_const();
  v12 = v31;
  ((void (__fastcall *)(int (***)()))off_60BC0244)(&v28);
  if ( v12 == v29 )
  {
LABEL_23:
    v14 = 1;
    goto LABEL_26;
  }
  for ( j = 1; v31[j - 1] == v29[j - 1]; j += 2 )
  {
    if ( !v31[j - 1] )
      goto LABEL_23;
    if ( j >= 524289 || v31[j] != v29[j] )
      break;
    if ( !v31[j] )
      goto LABEL_23;
  }
  v28 = &sead__SafeStringBase__vtable;
  v29 = "fts";
  v26 = a2;
  ((void (__fastcall *)(int (***)()))v30[3])(&v30);
  ((void (__fastcall *)(int (***)()))v30[3])(&v30);
  v21 = v31;
  ((void (__fastcall *)(int (***)()))v28[3])(&v28);
  if ( v21 == v29 )
  {
LABEL_46:
    v14 = 2;
    goto LABEL_26;
  }
  for ( k = 1; v31[k - 1] == v29[k - 1]; k += 2 )
  {
    if ( !v31[k - 1] )
      goto LABEL_46;
    if ( k >= 524289 || v31[k] != v29[k] )
      break;
    if ( !v31[k] )
      goto LABEL_46;
  }
  ((void (__fastcall *)(int (***)()))v30[3])(&v30);
  ((void (__fastcall *)(int (***)()))v30[3])(&v30);
  v14 = 3;
  if ( v31 == "ftp" )
    goto LABEL_69;
  for ( m = 0; m < 524289; ++m )
  {
    if ( v31[m] != aFtp[m] )
      break;
    if ( !v31[m] )
      goto LABEL_26;
  }
  ((void (__fastcall *)(int (***)()))v30[3])(&v30);
  ((void (__fastcall *)(int (***)()))v30[3])(&v30);
  v14 = 4;
  if ( v31 == "fvb" )
    goto LABEL_69;
  for ( n = 0; n < 524289; ++n )
  {
    if ( v31[n] != aFvb[n] )
      break;
    if ( !v31[n] )
      goto LABEL_26;
  }
  ((void (__fastcall *)(int (***)()))v30[3])(&v30);
  ((void (__fastcall *)(int (***)()))v30[3])(&v30);
  v14 = 5;
  if ( v31 == "fvm" )
  {
LABEL_69:
    a2 = v26;
LABEL_26:
    *a2 = v14;
    (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
    v15 = *(unsigned __int8 *)(a1[1] + v5 - 4);
    v16 = v15 == 95;
    if ( v15 != 95 )
      v16 = v15 == 46;
    if ( v16 )
      v9 = v5 - 4;
    v8 = 1;
    if ( a3 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
      v17 = *(_BYTE **)(a3 + 4);
      v18 = (_BYTE *)a1[1];
      if ( v17 != v18 )
      {
        if ( v9 < 0 )
        {
          v9 = 0;
          while ( v18[v9] )
          {
            if ( !v18[v9 + 1] )
            {
              ++v9;
              break;
            }
            if ( !v18[v9 + 2] )
            {
              v9 += 2;
              break;
            }
            v7 = v9 + 2 <= 0x7FFFF;
            v9 += 3;
            if ( !v7 )
            {
              v9 = 0;
              break;
            }
          }
        }
        v19 = FIELD_U32(a3, 8);
        if ( v9 >= v19 )
          v9 = v19 - 1;
        qmemcpy(*(void **)(a3 + 4), v18, v9);
        v17[v9] = 0;
      }
    }
    return v8;
  }
  v8 = 0;
  for ( ii = 0; ii < 524289; ++ii )
  {
    if ( v31[ii] != aFvm[ii] )
      break;
    if ( !v31[ii] )
      goto LABEL_69;
  }
  return v8;
}

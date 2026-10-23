/* sub_601E5C14
 * address: 0x601E5C14   size: 1944   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_601E5C14(int a1)
{
  int v2; // r1
  char *result; // r0
  bool v4; // zf
  _DWORD *v5; // r5
  const char *v6; // r6
  int v7; // r1
  int i; // r2
  const char *v9; // r7
  int v10; // r1
  int j; // r2
  const char *v12; // r7
  int v13; // r1
  int k; // r2
  const char *v15; // r7
  int v16; // r1
  int m; // r2
  const char *v18; // r7
  int v19; // r1
  int n; // r2
  const char *v21; // r7
  int v22; // r1
  int ii; // r2
  const char *v24; // r7
  int v25; // r1
  int jj; // r2
  const char *v27; // r7
  int v28; // r1
  int kk; // r2
  char *v30; // r0
  int mm; // r1
  char *v32; // r0
  int nn; // r1
  char *v34; // r0
  int i1; // r1
  int i2; // r1
  int (**v37)(); // [sp+4h] [bp-64h] BYREF
  const char *v38; // [sp+8h] [bp-60h]
  int (**v39)(); // [sp+Ch] [bp-5Ch] BYREF
  const char *v40; // [sp+10h] [bp-58h]
  int (**v41)(); // [sp+14h] [bp-54h] BYREF
  const char *v42; // [sp+18h] [bp-50h]
  int (**v43)(); // [sp+1Ch] [bp-4Ch] BYREF
  const char *v44; // [sp+20h] [bp-48h]
  int (**v45)(); // [sp+24h] [bp-44h] BYREF
  const char *v46; // [sp+28h] [bp-40h]
  int (**v47)(); // [sp+2Ch] [bp-3Ch] BYREF
  const char *v48; // [sp+30h] [bp-38h]
  int (**v49)(); // [sp+34h] [bp-34h] BYREF
  const char *v50; // [sp+38h] [bp-30h]
  int (**v51)(); // [sp+3Ch] [bp-2Ch] BYREF
  const char *v52; // [sp+40h] [bp-28h]
  _DWORD v53[9]; // [sp+44h] [bp-24h] BYREF

  FIELD_U8(a1, 61) = 0;
  v2 = FIELD_U32(dword_60CC6D78, 416);
  result = *(char **)(dword_60CC6D78 + 420);
  v53[0] = FIELD_U32(dword_60CC6D78, 412);
  v53[1] = v2;
  v53[2] = result;
  if ( v53[0] == 6 )
  {
    v4 = v2 == -1;
    if ( v2 != -1 )
      v4 = result + 1 == 0;
    if ( !v4 )
    {
      v5 = (_DWORD *)sub_601E0010((int)v53);
      v51 = &sead__SafeStringBase__vtable;
      v52 = "F770";
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      v6 = (const char *)v5[1];
      ((void (__fastcall *)(int (***)()))off_60BC0244)(&v51);
      if ( v6 == v52 )
        goto LABEL_98;
      v7 = v5[1];
      for ( i = 1; *(unsigned __int8 *)(v7 + i - 1) == (unsigned __int8)v52[i - 1]; i += 2 )
      {
        if ( !*(_BYTE *)(v7 + i - 1) )
          goto LABEL_98;
        if ( i >= 524289 || *(unsigned __int8 *)(v7 + i) != (unsigned __int8)v52[i] )
          break;
        if ( !*(_BYTE *)(v7 + i) )
          goto LABEL_98;
      }
      v49 = &sead__SafeStringBase__vtable;
      v50 = "F730";
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      v9 = (const char *)v5[1];
      ((void (__fastcall *)(int (***)()))off_60BC0244)(&v49);
      if ( v9 == v50 )
        goto LABEL_98;
      v10 = v5[1];
      for ( j = 1; *(unsigned __int8 *)(v10 + j - 1) == (unsigned __int8)v50[j - 1]; j += 2 )
      {
        if ( !*(_BYTE *)(v10 + j - 1) )
          goto LABEL_98;
        if ( j >= 524289 || *(unsigned __int8 *)(v10 + j) != (unsigned __int8)v50[j] )
          break;
        if ( !*(_BYTE *)(v10 + j) )
          goto LABEL_98;
      }
      v47 = &sead__SafeStringBase__vtable;
      v48 = "F769";
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      v12 = (const char *)v5[1];
      ((void (__fastcall *)(int (***)()))off_60BC0244)(&v47);
      if ( v12 == v48 )
        goto LABEL_98;
      v13 = v5[1];
      for ( k = 1; *(unsigned __int8 *)(v13 + k - 1) == (unsigned __int8)v48[k - 1]; k += 2 )
      {
        if ( !*(_BYTE *)(v13 + k - 1) )
          goto LABEL_98;
        if ( k >= 524289 || *(unsigned __int8 *)(v13 + k) != (unsigned __int8)v48[k] )
          break;
        if ( !*(_BYTE *)(v13 + k) )
          goto LABEL_98;
      }
      v45 = &sead__SafeStringBase__vtable;
      v46 = "Fa01";
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      v15 = (const char *)v5[1];
      ((void (__fastcall *)(int (***)()))off_60BC0244)(&v45);
      if ( v15 == v46 )
        goto LABEL_98;
      v16 = v5[1];
      for ( m = 1; *(unsigned __int8 *)(v16 + m - 1) == (unsigned __int8)v46[m - 1]; m += 2 )
      {
        if ( !*(_BYTE *)(v16 + m - 1) )
          goto LABEL_98;
        if ( m >= 524289 || *(unsigned __int8 *)(v16 + m) != (unsigned __int8)v46[m] )
          break;
        if ( !*(_BYTE *)(v16 + m) )
          goto LABEL_98;
      }
      v43 = &sead__SafeStringBase__vtable;
      v44 = "Fa02";
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      v18 = (const char *)v5[1];
      ((void (__fastcall *)(int (***)()))off_60BC0244)(&v43);
      if ( v18 == v44 )
        goto LABEL_98;
      v19 = v5[1];
      for ( n = 1; *(unsigned __int8 *)(v19 + n - 1) == (unsigned __int8)v44[n - 1]; n += 2 )
      {
        if ( !*(_BYTE *)(v19 + n - 1) )
          goto LABEL_98;
        if ( n >= 524289 || *(unsigned __int8 *)(v19 + n) != (unsigned __int8)v44[n] )
          break;
        if ( !*(_BYTE *)(v19 + n) )
          goto LABEL_98;
      }
      v41 = &sead__SafeStringBase__vtable;
      v42 = "Fa03";
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      v21 = (const char *)v5[1];
      ((void (__fastcall *)(int (***)()))off_60BC0244)(&v41);
      if ( v21 == v42 )
        goto LABEL_98;
      v22 = v5[1];
      for ( ii = 1; *(unsigned __int8 *)(v22 + ii - 1) == (unsigned __int8)v42[ii - 1]; ii += 2 )
      {
        if ( !*(_BYTE *)(v22 + ii - 1) )
          goto LABEL_98;
        if ( ii >= 524289 || *(unsigned __int8 *)(v22 + ii) != (unsigned __int8)v42[ii] )
          break;
        if ( !*(_BYTE *)(v22 + ii) )
          goto LABEL_98;
      }
      v39 = &sead__SafeStringBase__vtable;
      v40 = "Fa04";
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      v24 = (const char *)v5[1];
      ((void (__fastcall *)(int (***)()))off_60BC0244)(&v39);
      if ( v24 == v40 )
        goto LABEL_98;
      v25 = v5[1];
      for ( jj = 1; *(unsigned __int8 *)(v25 + jj - 1) == (unsigned __int8)v40[jj - 1]; jj += 2 )
      {
        if ( !*(_BYTE *)(v25 + jj - 1) )
          goto LABEL_98;
        if ( jj >= 524289 || *(unsigned __int8 *)(v25 + jj) != (unsigned __int8)v40[jj] )
          break;
        if ( !*(_BYTE *)(v25 + jj) )
          goto LABEL_98;
      }
      v37 = &sead__SafeStringBase__vtable;
      v38 = "Fa05";
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      v27 = (const char *)v5[1];
      ((void (__fastcall *)(int (***)()))off_60BC0244)(&v37);
      if ( v27 == v38 )
        goto LABEL_98;
      v28 = v5[1];
      for ( kk = 1; *(unsigned __int8 *)(v28 + kk - 1) == (unsigned __int8)v38[kk - 1]; kk += 2 )
      {
        if ( !*(_BYTE *)(v28 + kk - 1) )
          goto LABEL_98;
        if ( kk >= 524289 || *(unsigned __int8 *)(v28 + kk) != (unsigned __int8)v38[kk] )
          break;
        if ( !*(_BYTE *)(v28 + kk) )
          goto LABEL_98;
      }
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      v30 = (char *)v5[1];
      if ( v30 == "Fa06" )
        goto LABEL_98;
      for ( mm = 0; mm < 524289; ++mm )
      {
        if ( v30[mm] != aFa06[mm] )
          break;
        if ( !v30[mm] )
          goto LABEL_98;
      }
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      v32 = (char *)v5[1];
      if ( v32 == "Fa07" )
        goto LABEL_98;
      for ( nn = 0; nn < 524289; ++nn )
      {
        if ( v32[nn] != aFa07[nn] )
          break;
        if ( !v32[nn] )
          goto LABEL_98;
      }
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      v34 = (char *)v5[1];
      if ( v34 == "Fa08" )
        goto LABEL_98;
      for ( i1 = 0; i1 < 524289; ++i1 )
      {
        if ( v34[i1] != aFa08[i1] )
          break;
        if ( !v34[i1] )
          goto LABEL_98;
      }
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
      result = (char *)v5[1];
      if ( result == "Fa09" )
      {
LABEL_98:
        FIELD_U8(a1, 61) = 1;
        return (char *)1;
      }
      else
      {
        for ( i2 = 0; i2 < 524289; ++i2 )
        {
          if ( result[i2] != aFa09[i2] )
            break;
          if ( !result[i2] )
            goto LABEL_98;
        }
      }
    }
  }
  return result;
}

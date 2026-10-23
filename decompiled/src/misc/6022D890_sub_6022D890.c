/* sub_6022D890
 * address: 0x6022D890   size: 928   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char *__fastcall sub_6022D890(int a1, int *a2)
{
  int v3; // r6
  int i; // r5
  int v5; // r1
  int v6; // r2
  bool v7; // zf
  int *v8; // r6
  int v9; // r0
  int *v10; // r4
  int *v11; // r8
  int *v12; // r9
  _DWORD *v13; // r6
  _DWORD *v14; // r4
  const char *v15; // r5
  const char *result; // r0
  int v17; // r1
  int j; // r2
  const char *v19; // r5
  int v20; // r1
  int k; // r2
  const char *v22; // r4
  int v23; // r1
  int m; // r2
  int (**v25)(); // [sp+20h] [bp-58h] BYREF
  const char *v26; // [sp+24h] [bp-54h]
  int (**v27)(); // [sp+28h] [bp-50h] BYREF
  const char *v28; // [sp+2Ch] [bp-4Ch]
  int (**v29)(); // [sp+30h] [bp-48h] BYREF
  const char *v30; // [sp+34h] [bp-44h]
  _DWORD *v31; // [sp+38h] [bp-40h] BYREF
  int v32; // [sp+3Ch] [bp-3Ch] BYREF
  int v33; // [sp+40h] [bp-38h]
  int v34; // [sp+44h] [bp-34h]
  int v35; // [sp+48h] [bp-30h] BYREF
  int v36; // [sp+4Ch] [bp-2Ch]
  int v37; // [sp+50h] [bp-28h]

  v3 = 0;
  for ( i = 0; i < 18; ++i )
  {
    v5 = dword_60CC6D78 + v3;
    if ( *(_DWORD *)(dword_60CC6D78 + v3 + 540) == -1 )
      break;
    v6 = FIELD_U32(v5, 544);
    v7 = v6 == -1;
    if ( v6 != -1 )
      v7 = FIELD_U32(v5, 548) == -1;
    if ( v7 )
      break;
    sub_6081F038(dword_60CC6D78);
    v3 += 12;
  }
  v8 = &v32;
  v35 = *a2;
  v36 = a2[1];
  v9 = a2[2];
  v10 = (int *)&v31;
  v37 = v9;
  v32 = -1;
  v33 = -1;
  v34 = -1;
  while ( 1 )
  {
    sub_601E14F8((int)&v35, 4u, v10);
    v32 = v31[21];
    v33 = v31[22];
    v34 = v31[24];
    if ( sub_6081F070(dword_60CC6D78, v8) >= 0 )
      sub_6081F038(dword_60CC6D78);
    v11 = v8;
    v12 = v10;
    sub_601E14F8((int)v8, 4u, v10);
    v13 = v31;
    v29 = &sead__SafeStringBase__vtable;
    v30 = "F770";
    v14 = v31 + 1;
    (*(void (__fastcall **)(_DWORD *))(v31[1] + 12))(v31 + 1);
    (*(void (__fastcall **)(_DWORD *))(*v14 + 12))(v14);
    v15 = (const char *)v13[2];
    ((void (__fastcall *)(int (***)()))v29[3])(&v29);
    result = v30;
    if ( v15 == v30 )
      break;
    v17 = v13[2];
    for ( j = 1; *(unsigned __int8 *)(v17 + j - 1) == (unsigned __int8)v30[j - 1]; j += 2 )
    {
      if ( !*(_BYTE *)(v17 + j - 1) )
        return result;
      if ( j >= 524289 || *(unsigned __int8 *)(v17 + j) != (unsigned __int8)v30[j] )
        break;
      if ( !*(_BYTE *)(v17 + j) )
        return result;
    }
    v27 = &sead__SafeStringBase__vtable;
    v28 = "F730";
    (*(void (__fastcall **)(_DWORD *))(v13[1] + 12))(v14);
    (*(void (__fastcall **)(_DWORD *))(v13[1] + 12))(v14);
    v19 = (const char *)v13[2];
    ((void (__fastcall *)(int (***)()))v27[3])(&v27);
    result = v28;
    if ( v19 == v28 )
      break;
    v20 = v13[2];
    for ( k = 1; *(unsigned __int8 *)(v20 + k - 1) == (unsigned __int8)v28[k - 1]; k += 2 )
    {
      if ( !*(_BYTE *)(v20 + k - 1) )
        return result;
      if ( k >= 524289 || *(unsigned __int8 *)(v20 + k) != (unsigned __int8)v28[k] )
        break;
      if ( !*(_BYTE *)(v20 + k) )
        return result;
    }
    v25 = &sead__SafeStringBase__vtable;
    v26 = "F769";
    (*(void (__fastcall **)(_DWORD *))(v13[1] + 12))(v14);
    (*(void (__fastcall **)(_DWORD *))(v13[1] + 12))(v14);
    v22 = (const char *)v13[2];
    ((void (__fastcall *)(int (***)()))v25[3])(&v25);
    result = v26;
    if ( v22 == v26 )
      break;
    v23 = v13[2];
    for ( m = 1; *(unsigned __int8 *)(v23 + m - 1) == (unsigned __int8)v26[m - 1]; m += 2 )
    {
      if ( !*(_BYTE *)(v23 + m - 1) )
        return result;
      if ( m >= 524289 || *(unsigned __int8 *)(v23 + m) != (unsigned __int8)v26[m] )
        break;
      if ( !*(_BYTE *)(v23 + m) )
        return result;
    }
    v10 = v12;
    v8 = v11;
    v35 = v31[21];
    v36 = v31[22];
    v37 = v31[24];
  }
  return result;
}

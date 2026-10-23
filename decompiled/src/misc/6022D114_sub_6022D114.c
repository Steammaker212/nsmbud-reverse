/* sub_6022D114
 * address: 0x6022D114   size: 1144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6022D114()
{
  int v0; // r5
  int i; // r4
  int v2; // r1
  int v3; // r2
  bool v4; // zf
  int j; // r4
  _DWORD *v6; // r1
  int v7; // r2
  bool v8; // zf
  _DWORD *v9; // r7
  const char *v10; // r9
  int v11; // r1
  int k; // r2
  const char *v13; // r5
  int v14; // r1
  int m; // r2
  const char *v16; // r5
  int v17; // r1
  int n; // r2
  int v19; // r7
  int v20; // r4
  int v21; // r8
  int v22; // r9
  int result; // r0
  _DWORD *v24; // r5
  int v25; // r1
  bool v26; // zf
  int v27; // [sp+10h] [bp-48h]
  int (**v28)(); // [sp+1Ch] [bp-3Ch] BYREF
  const char *v29; // [sp+20h] [bp-38h]
  int (**v30)(); // [sp+24h] [bp-34h] BYREF
  const char *v31; // [sp+28h] [bp-30h]
  int (**v32)(); // [sp+2Ch] [bp-2Ch] BYREF
  const char *v33; // [sp+30h] [bp-28h]

  v0 = 0;
  for ( i = 0; i < 18; ++i )
  {
    v2 = dword_60CC6D78 + v0;
    if ( *(_DWORD *)(dword_60CC6D78 + v0 + 540) == -1 )
      break;
    v3 = FIELD_U32(v2, 544);
    v4 = v3 == -1;
    if ( v3 != -1 )
      v4 = FIELD_U32(v2, 548) == -1;
    if ( v4 )
      break;
    sub_6081F038(dword_60CC6D78);
    v0 += 12;
  }
  for ( j = 0; j < 18; ++j )
  {
    v6 = (_DWORD *)(dword_60CC6D78 + 12 * j);
    if ( v6[135] == -1 )
      break;
    v7 = v6[136];
    v8 = v7 == -1;
    if ( v7 != -1 )
      v8 = v6[137] == -1;
    if ( v8 )
      break;
    v9 = (_DWORD *)sub_601E0010((int)(v6 + 135));
    v32 = &sead__SafeStringBase__vtable;
    v33 = "Ff23";
    (*(void (__fastcall **)(_DWORD *))(*v9 + 12))(v9);
    (*(void (__fastcall **)(_DWORD *))(*v9 + 12))(v9);
    v10 = (const char *)v9[1];
    ((void (__fastcall *)(int (***)()))v32[3])(&v32);
    if ( v10 == v33 )
      goto LABEL_38;
    v11 = v9[1];
    for ( k = 1; *(unsigned __int8 *)(v11 + k - 1) == (unsigned __int8)v33[k - 1]; k += 2 )
    {
      if ( !*(_BYTE *)(v11 + k - 1) )
        goto LABEL_38;
      if ( k >= 524289 || *(unsigned __int8 *)(v11 + k) != (unsigned __int8)v33[k] )
        break;
      if ( !*(_BYTE *)(v11 + k) )
        goto LABEL_38;
    }
    v30 = &sead__SafeStringBase__vtable;
    v31 = "Ff22";
    (*(void (__fastcall **)(_DWORD *))(*v9 + 12))(v9);
    (*(void (__fastcall **)(_DWORD *))(*v9 + 12))(v9);
    v13 = (const char *)v9[1];
    ((void (__fastcall *)(int (***)()))v30[3])(&v30);
    if ( v13 == v31 )
      goto LABEL_38;
    v14 = v9[1];
    for ( m = 1; *(unsigned __int8 *)(v14 + m - 1) == (unsigned __int8)v31[m - 1]; m += 2 )
    {
      if ( !*(_BYTE *)(v14 + m - 1) )
        goto LABEL_38;
      if ( m >= 524289 || *(unsigned __int8 *)(v14 + m) != (unsigned __int8)v31[m] )
        break;
      if ( !*(_BYTE *)(v14 + m) )
        goto LABEL_38;
    }
    v28 = &sead__SafeStringBase__vtable;
    v29 = "Ff21";
    (*(void (__fastcall **)(_DWORD *))(*v9 + 12))(v9);
    (*(void (__fastcall **)(_DWORD *))(*v9 + 12))(v9);
    v16 = (const char *)v9[1];
    ((void (__fastcall *)(int (***)()))v28[3])(&v28);
    if ( v16 == v29 )
    {
LABEL_38:
      sub_6081F038(dword_60CC6D78);
    }
    else
    {
      v17 = v9[1];
      for ( n = 1; *(unsigned __int8 *)(v17 + n - 1) == (unsigned __int8)v29[n - 1]; n += 2 )
      {
        if ( !*(_BYTE *)(v17 + n - 1) )
          goto LABEL_38;
        if ( n >= 524289 || *(unsigned __int8 *)(v17 + n) != (unsigned __int8)v29[n] )
          break;
        if ( !*(_BYTE *)(v17 + n) )
          goto LABEL_38;
      }
    }
  }
  sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
  sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
  v27 = 0;
  do
  {
    result = dword_60CC6D78 + v19;
    v24 = (_DWORD *)(dword_60CC6D78 + v19 + 540);
    if ( *v24 == -1 )
      break;
    v25 = FIELD_U32(result, 544);
    v26 = v25 == -1;
    if ( v25 != -1 )
    {
      result = FIELD_U32(result, 548);
      v26 = result == -1;
    }
    if ( v26 )
      break;
    if ( sub_601DA1D8((int)v24) )
    {
      result = sub_6081F038(dword_60CC6D78);
      ++v22;
    }
    else if ( sub_601DA210((int)v24) )
    {
      result = sub_6081F038(dword_60CC6D78);
      ++v21;
    }
    else
    {
      result = sub_601DA248((int)v24);
      if ( result == 1 )
      {
        result = sub_6081F038(dword_60CC6D78);
        ++v27;
      }
    }
    ++v20;
    v19 += 12;
  }
  while ( v20 < 18 );
  return result;
}

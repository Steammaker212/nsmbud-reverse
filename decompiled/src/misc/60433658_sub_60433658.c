/* sub_60433658
 * address: 0x60433658   size: 2096   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60433658(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  unsigned int v8; // r4
  char v9; // r5
  int v10; // r0
  char *v11; // r0
  int j; // r2
  int v13; // r3
  const char *v14; // r5
  int i; // r2
  int v16; // r0
  char *v17; // r0
  int v18; // r1
  int k; // r1
  char *v20; // r0
  const char *v21; // r5
  int m; // r1
  int (__fastcall *v23)(_DWORD *, int (***)()); // r2
  int v24; // r0
  int v25; // r1
  int v26; // r0
  const char *v27; // r5
  int n; // r1
  int (__fastcall *v29)(_DWORD *, int (***)()); // r2
  int v30; // r0
  int v31; // r1
  int v32; // r0
  const char *v33; // r5
  int ii; // r1
  int v35; // r5
  int v36; // r6
  int v37; // r1
  int v38; // r1
  int v39; // r0
  char *v40; // r0
  int jj; // r2
  int v42; // r2
  int kk; // r3
  int result; // r0
  int v45; // [sp+8h] [bp-38h]
  int (**v46)(); // [sp+Ch] [bp-34h] BYREF
  const char *v47; // [sp+10h] [bp-30h]
  int (**v48)(); // [sp+14h] [bp-2Ch] BYREF
  const char *v49; // [sp+18h] [bp-28h]

  v8 = *(unsigned __int16 *)(*(_DWORD *)a4 + 94);
  v9 = *(_BYTE *)(*(_DWORD *)(a1[110] + 12) + 776 * v8 + 460);
  v45 = 0;
  a2[2] = 0;
  v10 = sub_60433F10(*a3, "shadow_cast");
  if ( v10 < 0 )
  {
    if ( (v9 & 7u) > 5 )
      goto LABEL_26;
    if ( ((1 << (v9 & 7)) & 0x23) == 0 )
      goto LABEL_26;
    (*(void (__fastcall **)(int (***)(), _DWORD *))(*a1 + 160))(&v48, a1);
    v46 = &sead__SafeStringBase__vtable;
    v47 = "CS_W8a_DarkCloud_Demo2";
    ((void (__fastcall *)(int (***)()))v48[3])(&v48);
    ((void (__fastcall *)(int (***)()))v48[3])(&v48);
    v14 = v49;
    ((void (__fastcall *)(int (***)()))off_60BC0244)(&v46);
    if ( v14 == v47 )
      goto LABEL_26;
    for ( i = 1; v49[i - 1] == v47[i - 1]; i += 2 )
    {
      if ( !v49[i - 1] )
        goto LABEL_26;
      if ( i >= 524289 || v49[i] != v47[i] )
        break;
      if ( !v49[i] )
        goto LABEL_26;
    }
LABEL_24:
    a1[87] |= 4u;
    a2[2] |= 4u;
    goto LABEL_26;
  }
  v11 = (char *)(**(_DWORD **)(*(_DWORD *)(*a3 + 24) + 24 * v10 + 8) + 2);
  if ( v11 == "yes" )
    goto LABEL_24;
  for ( j = 0; j < 524289; ++j )
  {
    if ( v11[j] != aYes[j] )
      break;
    if ( !v11[j] )
      goto LABEL_24;
  }
  if ( v11 == "shadow-only" )
  {
LABEL_25:
    a1[87] |= 4u;
    a2[2] |= 4u;
    v45 = 1;
  }
  else
  {
    v13 = 0;
    v45 = 0;
    do
    {
      if ( v11[v13] != aShadowOnly[v13] )
        break;
      if ( !v11[v13] )
        goto LABEL_25;
      ++v13;
    }
    while ( v13 < 524289 );
  }
LABEL_26:
  v16 = sub_60433F10(*a3, "polygon_offset");
  if ( v16 < 0 )
  {
    a2[3] = -1;
    a2[4] = -1082130432;
  }
  else
  {
    v17 = **(char ***)(*(_DWORD *)(*a3 + 24) + 24 * v16 + 8);
    if ( v17 + 2 == "yes" || (v18 = -1, v17[2] == 121) && v17[3] == 101 && v17[4] == 115 )
    {
      for ( k = 0; v17[k + 2]; k += 2 )
      {
        if ( k > 0x7FFFF )
        {
          k = 0;
          break;
        }
        if ( !v17[k + 3] )
        {
          ++k;
          break;
        }
      }
      v20 = v17 + 5;
      if ( k < 3 )
        v20 = &byte_60B3BA34;
      v18 = (unsigned __int8)*v20 - 48;
      if ( (unsigned __int8)v18 >= 0xAu )
        v18 = 0;
    }
    a2[3] = v18;
    (*(void (__fastcall **)(int (***)(), _DWORD *))(*a1 + 160))(&v48, a1);
    v46 = &sead__SafeStringBase__vtable;
    v47 = "CS_W1_World";
    ((void (__fastcall *)(int (***)()))v48[3])(&v48);
    ((void (__fastcall *)(int (***)()))v48[3])(&v48);
    v21 = v49;
    ((void (__fastcall *)(int (***)()))v46[3])(&v46);
    if ( v21 == v47 )
    {
LABEL_50:
      v23 = *(int (__fastcall **)(_DWORD *, int (***)()))(*a1 + 124);
      v48 = &sead__SafeStringBase__vtable;
      v49 = "mtRFd01W1M0a";
      v24 = v23(a1, &v48);
      if ( v24 != -1 && v24 == v8 )
      {
        v25 = a1[59];
        LOWORD(v26) = -26214;
        if ( a1[58] > v8 )
          v25 += 8 * v8;
        HIWORD(v26) = -16487;
        FIELD_U32(v25, 4) = v26;
      }
    }
    else
    {
      for ( m = 1; v49[m - 1] == v47[m - 1]; m += 2 )
      {
        if ( !v49[m - 1] )
          goto LABEL_50;
        if ( m >= 524289 || v49[m] != v47[m] )
          break;
        if ( !v49[m] )
          goto LABEL_50;
      }
      (*(void (__fastcall **)(int (***)(), _DWORD *))(*a1 + 160))(&v48, a1);
      v46 = &sead__SafeStringBase__vtable;
      v47 = "RW102W1S0";
      ((void (__fastcall *)(int (***)()))v48[3])(&v48);
      ((void (__fastcall *)(int (***)()))v48[3])(&v48);
      v27 = v49;
      ((void (__fastcall *)(int (***)()))v46[3])(&v46);
      if ( v27 == v47 )
      {
LABEL_63:
        v29 = *(int (__fastcall **)(_DWORD *, int (***)()))(*a1 + 124);
        v48 = &sead__SafeStringBase__vtable;
        v49 = "mtWaterEdgeMini";
        v30 = v29(a1, &v48);
        if ( v30 != -1 && v30 == v8 )
        {
          v31 = a1[59];
          LOWORD(v32) = 13107;
          if ( a1[58] > v8 )
            v31 += 8 * v8;
          HIWORD(v32) = -16461;
          FIELD_U32(v31, 4) = v32;
        }
      }
      else
      {
        for ( n = 1; v49[n - 1] == v47[n - 1]; n += 2 )
        {
          if ( !v49[n - 1] )
            goto LABEL_63;
          if ( n >= 524289 || v49[n] != v47[n] )
            break;
          if ( !v49[n] )
            goto LABEL_63;
        }
        (*(void (__fastcall **)(int (***)(), _DWORD *))(*a1 + 160))(&v48, a1);
        v46 = &sead__SafeStringBase__vtable;
        v47 = "CS_W9b_World";
        ((void (__fastcall *)(int (***)()))v48[3])(&v48);
        ((void (__fastcall *)(int (***)()))v48[3])(&v48);
        v33 = v49;
        ((void (__fastcall *)(int (***)()))v46[3])(&v46);
        if ( v33 == v47 )
        {
LABEL_79:
          if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 120))(a1) >= 1 )
          {
            v35 = 0;
            v36 = 0;
            do
            {
              v37 = a1[59];
              if ( a1[58] > (unsigned int)v36 )
                v37 += v35;
              FIELD_U32(v37, 4) = -1079613850;
              ++v36;
              v35 += 8;
            }
            while ( v36 < (*(int (__fastcall **)(_DWORD *))(*a1 + 120))(a1) );
          }
        }
        else
        {
          for ( ii = 1; v49[ii - 1] == v47[ii - 1]; ii += 2 )
          {
            if ( !v49[ii - 1] )
              goto LABEL_79;
            if ( ii >= 524289 || v49[ii] != v47[ii] )
              break;
            if ( !v49[ii] )
              goto LABEL_79;
          }
        }
      }
    }
    v38 = a1[59];
    if ( a1[58] > v8 )
      v38 += 8 * v8;
    a2[4] = FIELD_U32(v38, 4);
  }
  v39 = sub_60433F10(*a3, "reflection");
  if ( v39 < 0 )
  {
LABEL_100:
    v42 = 1;
    if ( v45 )
      goto LABEL_102;
    goto LABEL_101;
  }
  v40 = (char *)(**(_DWORD **)(*(_DWORD *)(*a3 + 24) + 24 * v39 + 8) + 2);
  if ( v40 == "yes" )
  {
LABEL_99:
    a2[2] |= 2u;
    a1[87] |= 2u;
    goto LABEL_100;
  }
  for ( jj = 0; jj < 524289; ++jj )
  {
    if ( v40[jj] != aYes[jj] )
      break;
    if ( !v40[jj] )
      goto LABEL_99;
  }
  v42 = 2;
  if ( v40 != "reflection-only" )
  {
    for ( kk = 0; kk < 524289; ++kk )
    {
      if ( v40[kk] != aReflectionOnly[kk] )
        break;
      if ( !v40[kk] )
        goto LABEL_101;
    }
    goto LABEL_100;
  }
LABEL_101:
  a2[2] |= v42;
  a1[87] |= v42;
LABEL_102:
  result = sub_60433F10(*a3, "priority");
  if ( result >= 0 )
  {
    result = *(_DWORD *)(*(_DWORD *)(*a3 + 24) + 24 * result + 8);
    if ( result )
    {
      result = *(unsigned __int16 *)(*(_DWORD *)a4 + 94) | (*(_DWORD *)result << 16);
      a2[1] = result;
    }
  }
  return result;
}

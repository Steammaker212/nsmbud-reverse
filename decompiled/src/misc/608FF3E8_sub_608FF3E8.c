/* sub_608FF3E8
 * address: 0x608FF3E8   size: 1392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FF3E8(int *a1, _DWORD *a2, int a3)
{
  int v6; // r1
  char *v7; // r0
  bool v8; // nf
  int v9; // r6
  int v10; // r1
  int v11; // r0
  char v12; // r8
  unsigned int v13; // r9
  int v14; // r1
  char *v15; // r1
  unsigned __int8 v16; // r0
  int v17; // r1
  unsigned int v18; // r2
  int result; // r0
  bool v20; // cc
  int v21; // r0
  int v22; // r0
  int v23; // r1
  char *v24; // r0
  int v25; // r1
  bool v26; // zf
  int v27; // r1
  int v28; // r2
  char v29; // r10
  int v30; // r8
  int v31; // r1
  char *v32; // r1
  unsigned int v33; // r0
  int v34; // r1
  int v35; // r0
  int v36; // r1
  char *v37; // r1
  unsigned int v38; // r0
  int v39; // r1
  int v40; // r0
  char *v41; // r0
  int v42; // r0
  unsigned int v43; // [sp+4h] [bp-2Ch]
  int v44; // [sp+8h] [bp-28h]

  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v6 = 0;
  v7 = (char *)a2[1];
  while ( v7[v6] )
  {
    if ( !v7[v6 + 1] )
    {
      ++v6;
      break;
    }
    if ( !v7[v6 + 2] )
    {
      v6 += 2;
      break;
    }
    v20 = v6 + 2 <= 0x7FFFF;
    v6 += 3;
    if ( !v20 )
    {
      v6 = 0;
      break;
    }
  }
  v8 = v6 < 0;
  v9 = 1;
  v10 = 1;
  if ( v8 )
    v7 = &byte_60B3BA34;
  v11 = (unsigned __int8)*v7;
  if ( v11 != 43 )
  {
    if ( v11 == 45 )
    {
      v10 = -1;
    }
    else
    {
      v9 = 0;
      v10 = 1;
    }
  }
  v44 = v10;
  if ( a3 <= 0 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v22 = a2[1];
    v23 = 0;
    while ( *(_BYTE *)(v22 + v23) )
    {
      if ( !*(_BYTE *)(v22 + v23 + 1) )
      {
        ++v23;
        break;
      }
      if ( !*(_BYTE *)(v22 + v23 + 2) )
      {
        v23 += 2;
        break;
      }
      v20 = v23 + 2 <= 0x7FFFF;
      v23 += 3;
      if ( !v20 )
      {
        v23 = 0;
        break;
      }
    }
    v24 = (char *)(v22 + v9);
    if ( v23 < v9 )
      v24 = &byte_60B3BA34;
    v25 = (unsigned __int8)*v24;
    result = 0;
    if ( (unsigned __int8)(v25 - 48) > 9u )
      return result;
    v26 = v25 == 48;
    v10 = v44;
    if ( v26 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v27 = a2[1];
      v28 = 0;
      while ( *(_BYTE *)(v27 + v28) )
      {
        if ( !*(_BYTE *)(v27 + v28 + 1) )
        {
          ++v28;
          break;
        }
        if ( !*(_BYTE *)(v27 + v28 + 2) )
        {
          v28 += 2;
          break;
        }
        v20 = v28 + 2 <= 0x7FFFF;
        v28 += 3;
        if ( !v20 )
        {
          v28 = 0;
          break;
        }
      }
      v41 = (char *)(v27 + v9 + 1);
      if ( v28 <= v9 )
        v41 = &byte_60B3BA34;
      v42 = (unsigned __int8)*v41;
      if ( v42 == 98 )
      {
        v9 |= 2u;
        a3 = 2;
      }
      else
      {
        a3 = 8;
        if ( v42 == 120 )
        {
          v9 |= 2u;
          a3 = 16;
        }
      }
      goto LABEL_17;
    }
LABEL_62:
    v29 = 0;
    if ( v10 < 0 )
    {
      v30 = 0;
      while ( 2 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v40 = a2[1];
        v36 = 0;
        while ( *(_BYTE *)(v40 + v36) )
        {
          if ( !*(_BYTE *)(v40 + v36 + 1) )
          {
            ++v36;
            break;
          }
          if ( !*(_BYTE *)(v40 + v36 + 2) )
          {
            v36 += 2;
            break;
          }
          v20 = v36 + 2 <= 0x7FFFF;
          v36 += 3;
          if ( !v20 )
          {
            v36 = 0;
            break;
          }
        }
        v20 = v36 < v9;
        v37 = &byte_60B3BA34;
        if ( !v20 )
          v37 = (char *)(v40 + v9);
        if ( v9 < 0 )
          v37 = &byte_60B3BA34;
        v38 = (unsigned __int8)*v37;
        v39 = -1;
        if ( v38 < 0x3A )
          v39 = v38 - 48;
        if ( v39 >= 0 )
        {
          result = 0;
          if ( (unsigned int)(v30 + 214748364) <= 0x19999998 && 10 * v30 >= (int)(v39 ^ 0x80000000) )
          {
            ++v9;
            v29 = 1;
            v30 = 10 * v30 + v39 * v44;
            continue;
          }
          return result;
        }
        break;
      }
    }
    else
    {
      v30 = 0;
      while ( 2 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v35 = a2[1];
        v31 = 0;
        while ( *(_BYTE *)(v35 + v31) )
        {
          if ( !*(_BYTE *)(v35 + v31 + 1) )
          {
            ++v31;
            break;
          }
          if ( !*(_BYTE *)(v35 + v31 + 2) )
          {
            v31 += 2;
            break;
          }
          v20 = v31 + 2 <= 0x7FFFF;
          v31 += 3;
          if ( !v20 )
          {
            v31 = 0;
            break;
          }
        }
        v20 = v31 < v9;
        v32 = &byte_60B3BA34;
        if ( !v20 )
          v32 = (char *)(v35 + v9);
        if ( v9 < 0 )
          v32 = &byte_60B3BA34;
        v33 = (unsigned __int8)*v32;
        v34 = -1;
        if ( v33 < 0x3A )
          v34 = v33 - 48;
        if ( v34 >= 0 )
        {
          result = 0;
          if ( (unsigned int)(v30 + 214748364) <= 0x19999998 && 10 * v30 <= 0x7FFFFFFF - v34 )
          {
            ++v9;
            v29 = 1;
            v30 = 10 * v30 + v34 * v44;
            continue;
          }
          return result;
        }
        break;
      }
    }
    result = 0;
    if ( (v29 & 1) != 0 )
    {
      result = 1;
      if ( a1 )
        *a1 = v30;
    }
    return result;
  }
  if ( a3 == 10 )
    goto LABEL_62;
LABEL_17:
  v12 = 0;
  v13 = 0;
  v43 = 0xFFFFFFFF / a3;
  while ( 2 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v21 = a2[1];
    v14 = 0;
    while ( *(_BYTE *)(v21 + v14) )
    {
      if ( !*(_BYTE *)(v21 + v14 + 1) )
      {
        ++v14;
        break;
      }
      if ( !*(_BYTE *)(v21 + v14 + 2) )
      {
        v14 += 2;
        break;
      }
      v20 = v14 + 2 <= 0x7FFFF;
      v14 += 3;
      if ( !v20 )
      {
        v14 = 0;
        break;
      }
    }
    v20 = v14 < v9;
    v15 = &byte_60B3BA34;
    if ( !v20 )
      v15 = (char *)(v21 + v9);
    if ( v9 < 0 )
      v15 = &byte_60B3BA34;
    v16 = tolower((unsigned __int8)*v15);
    if ( v16 > 0x39u )
    {
      v17 = -1;
      if ( (unsigned int)v16 - 97 < 6 )
        v17 = v16 - 87;
      if ( v17 < 0 )
        goto LABEL_47;
    }
    else
    {
      v17 = v16 - 48;
      if ( v17 < 0 )
      {
LABEL_47:
        result = 0;
        if ( (v12 & 1) != 0 )
        {
          *a1 = v13 * v44;
          return 1;
        }
        return result;
      }
    }
    if ( v17 >= a3 )
      goto LABEL_47;
    v18 = 0xFFFFFFFF / a3;
    result = 0;
    v20 = v13 > v43;
    if ( v13 <= v43 )
    {
      v18 = v13 * a3;
      v20 = v13 * a3 > ~v17;
    }
    if ( !v20 )
    {
      v13 = v17 + v18;
      ++v9;
      v12 = 1;
      continue;
    }
    return result;
  }
}

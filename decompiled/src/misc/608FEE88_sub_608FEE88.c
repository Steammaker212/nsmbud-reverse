/* sub_608FEE88
 * address: 0x608FEE88   size: 1348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FEE88(unsigned int *a1, _DWORD *a2, int a3)
{
  int v6; // r1
  char *v7; // r0
  int v8; // r6
  int v9; // r8
  int v10; // r0
  char v11; // r8
  unsigned int v12; // r9
  int v13; // r1
  char *v14; // r1
  unsigned __int8 v15; // r0
  int v16; // r1
  unsigned int v17; // r2
  int result; // r0
  bool v19; // cc
  int v20; // r0
  int v21; // r0
  int v22; // r1
  char *v23; // r0
  int v24; // r1
  int v25; // r1
  int v26; // r2
  int v27; // r10
  char v28; // r8
  unsigned int v29; // r5
  int v30; // r1
  char *v31; // r1
  unsigned int v32; // r0
  int v33; // r1
  int v34; // r2
  bool v35; // cc
  int v36; // r0
  int v37; // r1
  char *v38; // r1
  unsigned int v39; // r0
  int v40; // r1
  int v41; // r0
  char *v42; // r0
  int v43; // r0
  int v44; // [sp+0h] [bp-30h]
  unsigned int *v45; // [sp+4h] [bp-2Ch]
  unsigned int v46; // [sp+8h] [bp-28h]

  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v6 = 0;
  v7 = (char *)a2[1];
  v45 = a1;
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
    v19 = v6 + 2 <= 0x7FFFF;
    v6 += 3;
    if ( !v19 )
    {
      v6 = 0;
      break;
    }
  }
  v8 = 1;
  v9 = 1;
  if ( v6 < 0 )
    v7 = &byte_60B3BA34;
  v10 = (unsigned __int8)*v7;
  if ( v10 != 43 )
  {
    if ( v10 == 45 )
    {
      v9 = -1;
    }
    else
    {
      v8 = 0;
      v9 = 1;
    }
  }
  if ( a3 <= 0 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v21 = a2[1];
    v22 = 0;
    while ( *(_BYTE *)(v21 + v22) )
    {
      if ( !*(_BYTE *)(v21 + v22 + 1) )
      {
        ++v22;
        break;
      }
      if ( !*(_BYTE *)(v21 + v22 + 2) )
      {
        v22 += 2;
        break;
      }
      v19 = v22 + 2 <= 0x7FFFF;
      v22 += 3;
      if ( !v19 )
      {
        v22 = 0;
        break;
      }
    }
    v23 = (char *)(v21 + v8);
    if ( v22 < v8 )
      v23 = &byte_60B3BA34;
    v24 = (unsigned __int8)*v23;
    result = 0;
    if ( (unsigned __int8)(v24 - 48) > 9u )
      return result;
    if ( v24 == 48 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v25 = a2[1];
      v26 = 0;
      while ( *(_BYTE *)(v25 + v26) )
      {
        if ( !*(_BYTE *)(v25 + v26 + 1) )
        {
          ++v26;
          break;
        }
        if ( !*(_BYTE *)(v25 + v26 + 2) )
        {
          v26 += 2;
          break;
        }
        v19 = v26 + 2 <= 0x7FFFF;
        v26 += 3;
        if ( !v19 )
        {
          v26 = 0;
          break;
        }
      }
      v42 = (char *)(v25 + v8 + 1);
      v44 = v9;
      if ( v26 <= v8 )
        v42 = &byte_60B3BA34;
      v43 = (unsigned __int8)*v42;
      if ( v43 == 98 )
      {
        v8 |= 2u;
        a3 = 2;
      }
      else
      {
        a3 = 8;
        if ( v43 == 120 )
        {
          v8 |= 2u;
          a3 = 16;
        }
      }
      goto LABEL_18;
    }
LABEL_62:
    v27 = v9;
    if ( v9 < 0 )
    {
      v28 = 0;
      v29 = 0;
      while ( 2 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v41 = a2[1];
        v37 = 0;
        while ( *(_BYTE *)(v41 + v37) )
        {
          if ( !*(_BYTE *)(v41 + v37 + 1) )
          {
            ++v37;
            break;
          }
          if ( !*(_BYTE *)(v41 + v37 + 2) )
          {
            v37 += 2;
            break;
          }
          v19 = v37 + 2 <= 0x7FFFF;
          v37 += 3;
          if ( !v19 )
          {
            v37 = 0;
            break;
          }
        }
        v19 = v37 < v8;
        v38 = &byte_60B3BA34;
        if ( !v19 )
          v38 = (char *)(v41 + v8);
        if ( v8 < 0 )
          v38 = &byte_60B3BA34;
        v39 = (unsigned __int8)*v38;
        v40 = -1;
        if ( v39 < 0x3A )
          v40 = v39 - 48;
        if ( v40 >= 0 )
        {
          result = 0;
          if ( v29 <= 0x19999999 && 10 * v29 >= v40 )
          {
            v29 = 10 * v29 + v40 * v27;
            ++v8;
            v28 = 1;
            continue;
          }
          return result;
        }
        break;
      }
    }
    else
    {
      v28 = 0;
      v29 = 0;
      while ( 2 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v36 = a2[1];
        v30 = 0;
        while ( *(_BYTE *)(v36 + v30) )
        {
          if ( !*(_BYTE *)(v36 + v30 + 1) )
          {
            ++v30;
            break;
          }
          if ( !*(_BYTE *)(v36 + v30 + 2) )
          {
            v30 += 2;
            break;
          }
          v19 = v30 + 2 <= 0x7FFFF;
          v30 += 3;
          if ( !v19 )
          {
            v30 = 0;
            break;
          }
        }
        v19 = v30 < v8;
        v31 = &byte_60B3BA34;
        if ( !v19 )
          v31 = (char *)(v36 + v8);
        if ( v8 < 0 )
          v31 = &byte_60B3BA34;
        v32 = (unsigned __int8)*v31;
        v33 = -1;
        if ( v32 < 0x3A )
          v33 = v32 - 48;
        if ( v33 >= 0 )
        {
          v34 = 429496729;
          result = 0;
          v35 = v29 > 0x19999999;
          if ( v29 <= 0x19999999 )
          {
            v34 = 10 * v29;
            v35 = 10 * v29 > ~v33;
          }
          if ( !v35 )
          {
            v29 = v34 + v33 * v27;
            ++v8;
            v28 = 1;
            continue;
          }
          return result;
        }
        break;
      }
    }
    result = 0;
    if ( (v28 & 1) != 0 )
    {
      result = 1;
      if ( v45 )
        *v45 = v29;
    }
    return result;
  }
  if ( a3 == 10 )
    goto LABEL_62;
  v44 = v9;
LABEL_18:
  v11 = 0;
  v12 = 0;
  v46 = 0xFFFFFFFF / a3;
  while ( 2 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v20 = a2[1];
    v13 = 0;
    while ( *(_BYTE *)(v20 + v13) )
    {
      if ( !*(_BYTE *)(v20 + v13 + 1) )
      {
        ++v13;
        break;
      }
      if ( !*(_BYTE *)(v20 + v13 + 2) )
      {
        v13 += 2;
        break;
      }
      v19 = v13 + 2 <= 0x7FFFF;
      v13 += 3;
      if ( !v19 )
      {
        v13 = 0;
        break;
      }
    }
    v19 = v13 < v8;
    v14 = &byte_60B3BA34;
    if ( !v19 )
      v14 = (char *)(v20 + v8);
    if ( v8 < 0 )
      v14 = &byte_60B3BA34;
    v15 = tolower((unsigned __int8)*v14);
    if ( v15 > 0x39u )
    {
      v16 = -1;
      if ( (unsigned int)v15 - 97 < 6 )
        v16 = v15 - 87;
      if ( v16 < 0 )
        goto LABEL_48;
    }
    else
    {
      v16 = v15 - 48;
      if ( v16 < 0 )
      {
LABEL_48:
        result = 0;
        if ( (v11 & 1) != 0 )
        {
          *a1 = v12 * v44;
          return 1;
        }
        return result;
      }
    }
    if ( v16 >= a3 )
      goto LABEL_48;
    v17 = 0xFFFFFFFF / a3;
    result = 0;
    v19 = v12 > v46;
    if ( v12 <= v46 )
    {
      v17 = v12 * a3;
      v19 = v12 * a3 > ~v16;
    }
    if ( !v19 )
    {
      v12 = v16 + v17;
      ++v8;
      v11 = 1;
      continue;
    }
    return result;
  }
}

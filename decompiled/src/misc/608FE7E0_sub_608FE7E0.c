/* sub_608FE7E0
 * address: 0x608FE7E0   size: 1672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FE7E0(int *a1, _DWORD *a2, int a3)
{
  int v6; // r1
  char *v7; // r0
  bool v8; // cc
  int v9; // r6
  int v10; // r8
  int v11; // r9
  int v12; // r0
  unsigned __int64 v13; // r10
  int v14; // r1
  char *v15; // r1
  unsigned __int8 v16; // r0
  int v17; // r1
  int result; // r0
  unsigned __int64 v19; // r2
  int v20; // r0
  int v21; // r0
  int v22; // r1
  char *v23; // r0
  int v24; // r1
  int v25; // r1
  int v26; // r2
  char v27; // r11
  int v28; // r9
  int v29; // r5
  int v30; // r1
  char *v31; // r1
  unsigned int v32; // r0
  int v33; // r1
  int v34; // r0
  int v35; // r1
  char *v36; // r1
  unsigned int v37; // r0
  int v38; // r1
  int v39; // r0
  char *v40; // r0
  int v41; // r0
  int *v42; // [sp+0h] [bp-40h]
  char v43; // [sp+8h] [bp-38h]
  int v44; // [sp+14h] [bp-2Ch]
  int v45; // [sp+14h] [bp-2Ch]
  _DWORD *v46; // [sp+18h] [bp-28h]

  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v46 = a2;
  v6 = 0;
  v7 = (char *)a2[1];
  v42 = a1;
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
    v8 = v6 + 2 <= 0x7FFFF;
    v6 += 3;
    if ( !v8 )
    {
      v6 = 0;
      break;
    }
  }
  v9 = a3;
  v10 = 1;
  v11 = 1;
  if ( v6 < 0 )
    v7 = &byte_60B3BA34;
  v12 = (unsigned __int8)*v7;
  if ( v12 != 43 )
  {
    if ( v12 == 45 )
    {
      v11 = -1;
    }
    else
    {
      v10 = 0;
      v11 = 1;
    }
  }
  if ( v9 <= 0 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v46 + 12))(v46);
    v21 = v46[1];
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
      v8 = v22 + 2 <= 0x7FFFF;
      v22 += 3;
      if ( !v8 )
      {
        v22 = 0;
        break;
      }
    }
    v23 = (char *)(v21 + v10);
    if ( v22 < v10 )
      v23 = &byte_60B3BA34;
    v24 = (unsigned __int8)*v23;
    result = 0;
    if ( (unsigned __int8)(v24 - 48) > 9u )
      return result;
    if ( v24 == 48 )
    {
      (*(void (__fastcall **)(_DWORD *))(*v46 + 12))(v46);
      v25 = v46[1];
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
        v8 = v26 + 2 <= 0x7FFFF;
        v26 += 3;
        if ( !v8 )
        {
          v26 = 0;
          break;
        }
      }
      v40 = (char *)(v25 + v10 + 1);
      v44 = v11;
      if ( v26 <= v10 )
        v40 = &byte_60B3BA34;
      v41 = (unsigned __int8)*v40;
      if ( v41 == 98 )
      {
        v10 |= 2u;
        v9 = 2;
      }
      else
      {
        v9 = 8;
        if ( v41 == 120 )
        {
          v10 |= 2u;
          v9 = 16;
        }
      }
      goto LABEL_18;
    }
LABEL_61:
    v27 = 0;
    v45 = v11;
    if ( v11 < 0 )
    {
      v28 = 0;
      v29 = 0;
      while ( 2 )
      {
        (*(void (__fastcall **)(_DWORD *))(*v46 + 12))(v46);
        v39 = v46[1];
        v35 = 0;
        while ( *(_BYTE *)(v39 + v35) )
        {
          if ( !*(_BYTE *)(v39 + v35 + 1) )
          {
            ++v35;
            break;
          }
          if ( !*(_BYTE *)(v39 + v35 + 2) )
          {
            v35 += 2;
            break;
          }
          v8 = v35 + 2 <= 0x7FFFF;
          v35 += 3;
          if ( !v8 )
          {
            v35 = 0;
            break;
          }
        }
        v8 = v35 < v10;
        v36 = &byte_60B3BA34;
        if ( !v8 )
          v36 = (char *)(v39 + v10);
        if ( v10 < 0 )
          v36 = &byte_60B3BA34;
        v37 = (unsigned __int8)*v36;
        v38 = -1;
        if ( v37 < 0x3A )
          v38 = v37 - 48;
        if ( v38 >= 0 )
        {
          result = 0;
          if ( __PAIR64__(v29, v28) + 0xCCCCCCCCCCCCCCCLL <= 0x1999999999999998LL
            && (__int64)(10 * __PAIR64__(v29, v28)) >= __SPAIR64__((v38 >> 31) ^ 0x80000000, v38) )
          {
            ++v10;
            v27 = 1;
            v29 = (v38 * v45 + 10 * __PAIR64__(v29, v28)) >> 32;
            v28 = v38 * v45 + 10 * v28;
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
        (*(void (__fastcall **)(_DWORD *))(*v46 + 12))(v46);
        v34 = v46[1];
        v30 = 0;
        while ( *(_BYTE *)(v34 + v30) )
        {
          if ( !*(_BYTE *)(v34 + v30 + 1) )
          {
            ++v30;
            break;
          }
          if ( !*(_BYTE *)(v34 + v30 + 2) )
          {
            v30 += 2;
            break;
          }
          v8 = v30 + 2 <= 0x7FFFF;
          v30 += 3;
          if ( !v8 )
          {
            v30 = 0;
            break;
          }
        }
        v8 = v30 < v10;
        v31 = &byte_60B3BA34;
        if ( !v8 )
          v31 = (char *)(v34 + v10);
        if ( v10 < 0 )
          v31 = &byte_60B3BA34;
        v32 = (unsigned __int8)*v31;
        v33 = -1;
        if ( v32 < 0x3A )
          v33 = v32 - 48;
        if ( v33 >= 0 )
        {
          result = 0;
          if ( __PAIR64__(v29, v28) + 0xCCCCCCCCCCCCCCCLL <= 0x1999999999999998LL
            && __SPAIR64__(0x7FFFFFFF - (v33 >> 31), ~v33) >= (__int64)(10 * __PAIR64__(v29, v28)) )
          {
            ++v10;
            v27 = 1;
            v29 = (v33 * v45 + 10 * __PAIR64__(v29, v28)) >> 32;
            v28 = v33 * v45 + 10 * v28;
            continue;
          }
          return result;
        }
        break;
      }
    }
    result = 0;
    if ( (v27 & 1) != 0 )
    {
      result = 1;
      if ( v42 )
      {
        *v42 = v28;
        v42[1] = v29;
      }
    }
    return result;
  }
  if ( v9 == 10 )
    goto LABEL_61;
  v44 = v11;
LABEL_18:
  v13 = 0;
  v43 = 0;
  while ( 2 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v46 + 12))(v46);
    v20 = v46[1];
    v14 = 0;
    while ( *(_BYTE *)(v20 + v14) )
    {
      if ( !*(_BYTE *)(v20 + v14 + 1) )
      {
        ++v14;
        break;
      }
      if ( !*(_BYTE *)(v20 + v14 + 2) )
      {
        v14 += 2;
        break;
      }
      v8 = v14 + 2 <= 0x7FFFF;
      v14 += 3;
      if ( !v8 )
      {
        v14 = 0;
        break;
      }
    }
    v8 = v14 < v10;
    v15 = &byte_60B3BA34;
    if ( !v8 )
      v15 = (char *)(v20 + v10);
    if ( v10 < 0 )
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
        if ( (v43 & 1) != 0 )
        {
          *(_QWORD *)a1 = v13 * v44;
          return 1;
        }
        return result;
      }
    }
    if ( v17 >= v9 )
      goto LABEL_47;
    result = 0;
    if ( 0xFFFFFFFFFFFFFFFFLL / v9 >= v13 )
    {
      v19 = v13 * v9;
      if ( __PAIR64__(~(v17 >> 31), ~v17) >= v19 )
      {
        ++v10;
        v13 = v17 + v19;
        v43 = 1;
        continue;
      }
    }
    return result;
  }
}

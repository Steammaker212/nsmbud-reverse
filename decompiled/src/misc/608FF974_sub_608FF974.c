/* sub_608FF974
 * address: 0x608FF974   size: 1392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FF974(unsigned __int16 *a1, _DWORD *a2, int a3)
{
  int v6; // r1
  char *v7; // r0
  bool v8; // cc
  int v9; // r6
  int v10; // r8
  int v11; // r0
  char v12; // r8
  unsigned __int16 v13; // r5
  int v14; // r1
  char *v15; // r1
  unsigned __int8 v16; // r0
  int v17; // r1
  int result; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r1
  char *v22; // r0
  int v23; // r1
  int v24; // r1
  int v25; // r2
  char v26; // r10
  unsigned __int16 v27; // r5
  int v28; // r1
  char *v29; // r1
  unsigned int v30; // r0
  int v31; // r1
  int v32; // r0
  int v33; // r1
  char *v34; // r1
  unsigned int v35; // r0
  int v36; // r1
  int v37; // r0
  char *v38; // r0
  int v39; // r0
  __int16 v40; // [sp+0h] [bp-30h]
  unsigned __int16 *v41; // [sp+4h] [bp-2Ch]

  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v6 = 0;
  v7 = (char *)a2[1];
  v41 = a1;
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
  v9 = 1;
  v10 = 1;
  if ( v6 < 0 )
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
  if ( a3 <= 0 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v20 = a2[1];
    v21 = 0;
    while ( *(_BYTE *)(v20 + v21) )
    {
      if ( !*(_BYTE *)(v20 + v21 + 1) )
      {
        ++v21;
        break;
      }
      if ( !*(_BYTE *)(v20 + v21 + 2) )
      {
        v21 += 2;
        break;
      }
      v8 = v21 + 2 <= 0x7FFFF;
      v21 += 3;
      if ( !v8 )
      {
        v21 = 0;
        break;
      }
    }
    v22 = (char *)(v20 + v9);
    if ( v21 < v9 )
      v22 = &byte_60B3BA34;
    v23 = (unsigned __int8)*v22;
    result = 0;
    if ( (unsigned __int8)(v23 - 48) > 9u )
      return result;
    if ( v23 == 48 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v24 = a2[1];
      v25 = 0;
      while ( *(_BYTE *)(v24 + v25) )
      {
        if ( !*(_BYTE *)(v24 + v25 + 1) )
        {
          ++v25;
          break;
        }
        if ( !*(_BYTE *)(v24 + v25 + 2) )
        {
          v25 += 2;
          break;
        }
        v8 = v25 + 2 <= 0x7FFFF;
        v25 += 3;
        if ( !v8 )
        {
          v25 = 0;
          break;
        }
      }
      v38 = (char *)(v24 + v9 + 1);
      v40 = v10;
      if ( v25 <= v9 )
        v38 = &byte_60B3BA34;
      v39 = (unsigned __int8)*v38;
      if ( v39 == 98 )
      {
        v9 |= 2u;
        a3 = 2;
      }
      else
      {
        a3 = 8;
        if ( v39 == 120 )
        {
          v9 |= 2u;
          a3 = 16;
        }
      }
      goto LABEL_18;
    }
LABEL_61:
    v26 = 0;
    if ( v10 < 0 )
    {
      v27 = 0;
      while ( 2 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v37 = a2[1];
        v33 = 0;
        while ( *(_BYTE *)(v37 + v33) )
        {
          if ( !*(_BYTE *)(v37 + v33 + 1) )
          {
            ++v33;
            break;
          }
          if ( !*(_BYTE *)(v37 + v33 + 2) )
          {
            v33 += 2;
            break;
          }
          v8 = v33 + 2 <= 0x7FFFF;
          v33 += 3;
          if ( !v8 )
          {
            v33 = 0;
            break;
          }
        }
        v8 = v33 < v9;
        v34 = &byte_60B3BA34;
        if ( !v8 )
          v34 = (char *)(v37 + v9);
        if ( v9 < 0 )
          v34 = &byte_60B3BA34;
        v35 = (unsigned __int8)*v34;
        v36 = -1;
        if ( v35 < 0x3A )
          v36 = v35 - 48;
        if ( v36 >= 0 )
        {
          result = 0;
          if ( v27 <= 0x1999u && (unsigned __int16)(10 * v27) >= v36 )
          {
            v27 = 10 * v27 + v36 * v10;
            ++v9;
            v26 = 1;
            continue;
          }
          return result;
        }
        break;
      }
    }
    else
    {
      v27 = 0;
      while ( 2 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v32 = a2[1];
        v28 = 0;
        while ( *(_BYTE *)(v32 + v28) )
        {
          if ( !*(_BYTE *)(v32 + v28 + 1) )
          {
            ++v28;
            break;
          }
          if ( !*(_BYTE *)(v32 + v28 + 2) )
          {
            v28 += 2;
            break;
          }
          v8 = v28 + 2 <= 0x7FFFF;
          v28 += 3;
          if ( !v8 )
          {
            v28 = 0;
            break;
          }
        }
        v8 = v28 < v9;
        v29 = &byte_60B3BA34;
        if ( !v8 )
          v29 = (char *)(v32 + v9);
        if ( v9 < 0 )
          v29 = &byte_60B3BA34;
        v30 = (unsigned __int8)*v29;
        v31 = -1;
        if ( v30 < 0x3A )
          v31 = v30 - 48;
        if ( v31 >= 0 )
        {
          result = 0;
          if ( v27 <= 0x1999u && (unsigned __int16)(10 * v27) <= 0xFFFF - v31 )
          {
            v27 = 10 * v27 + v31 * v10;
            ++v9;
            v26 = 1;
            continue;
          }
          return result;
        }
        break;
      }
    }
    result = 0;
    if ( (v26 & 1) != 0 )
    {
      result = 1;
      if ( v41 )
        *v41 = v27;
    }
    return result;
  }
  if ( a3 == 10 )
    goto LABEL_61;
  v40 = v10;
LABEL_18:
  v12 = 0;
  v13 = 0;
  while ( 2 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v19 = a2[1];
    v14 = 0;
    while ( *(_BYTE *)(v19 + v14) )
    {
      if ( !*(_BYTE *)(v19 + v14 + 1) )
      {
        ++v14;
        break;
      }
      if ( !*(_BYTE *)(v19 + v14 + 2) )
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
    v8 = v14 < v9;
    v15 = &byte_60B3BA34;
    if ( !v8 )
      v15 = (char *)(v19 + v9);
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
          *v41 = v13 * v40;
          return 1;
        }
        return result;
      }
    }
    if ( v17 >= a3 )
      goto LABEL_47;
    result = 0;
    if ( v13 <= (unsigned int)(unsigned __int16)(0xFFFF / a3) && (unsigned __int16)(v13 * a3) <= 0xFFFF - v17 )
    {
      v13 = v17 + v13 * a3;
      ++v9;
      v12 = 1;
      continue;
    }
    return result;
  }
}

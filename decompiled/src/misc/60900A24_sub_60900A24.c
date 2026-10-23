/* sub_60900A24
 * address: 0x60900A24   size: 1396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60900A24(_BYTE *a1, _DWORD *a2, signed int a3)
{
  int v6; // r1
  char *v7; // r0
  bool v8; // cc
  bool v9; // nf
  int v10; // r6
  int v11; // r1
  int v12; // r0
  char v13; // r5
  unsigned __int8 v14; // r9
  int v15; // r1
  char *v16; // r1
  unsigned __int8 v17; // r0
  int v18; // r1
  signed int result; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r1
  char *v23; // r0
  int v24; // r1
  bool v25; // zf
  int v26; // r1
  int v27; // r2
  char v28; // r10
  char v29; // r5
  int v30; // r1
  char *v31; // r1
  unsigned int v32; // r0
  int v33; // r1
  int v34; // r2
  int v35; // r0
  int v36; // r1
  char *v37; // r1
  unsigned int v38; // r0
  int v39; // r1
  int v40; // r2
  int v41; // r0
  char *v42; // r0
  int v43; // r0
  _BYTE *v44; // [sp+0h] [bp-30h]
  int v45; // [sp+8h] [bp-28h]

  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v6 = 0;
  v7 = (char *)a2[1];
  v44 = a1;
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
  v9 = v6 < 0;
  v10 = 1;
  v11 = 1;
  if ( v9 )
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
  v45 = v11;
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
    v25 = v24 == 48;
    v11 = v45;
    if ( v25 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v26 = a2[1];
      v27 = 0;
      while ( *(_BYTE *)(v26 + v27) )
      {
        if ( !*(_BYTE *)(v26 + v27 + 1) )
        {
          ++v27;
          break;
        }
        if ( !*(_BYTE *)(v26 + v27 + 2) )
        {
          v27 += 2;
          break;
        }
        v8 = v27 + 2 <= 0x7FFFF;
        v27 += 3;
        if ( !v8 )
        {
          v27 = 0;
          break;
        }
      }
      v42 = (char *)(v26 + v10 + 1);
      if ( v27 <= v10 )
        v42 = &byte_60B3BA34;
      v43 = (unsigned __int8)*v42;
      if ( v43 == 98 )
      {
        v10 |= 2u;
        a3 = 2;
      }
      else
      {
        a3 = 8;
        if ( v43 == 120 )
        {
          v10 |= 2u;
          a3 = 16;
        }
      }
      goto LABEL_17;
    }
LABEL_61:
    v28 = 0;
    if ( v11 < 0 )
    {
      v29 = 0;
      while ( 2 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v41 = a2[1];
        v36 = 0;
        while ( *(_BYTE *)(v41 + v36) )
        {
          if ( !*(_BYTE *)(v41 + v36 + 1) )
          {
            ++v36;
            break;
          }
          if ( !*(_BYTE *)(v41 + v36 + 2) )
          {
            v36 += 2;
            break;
          }
          v8 = v36 + 2 <= 0x7FFFF;
          v36 += 3;
          if ( !v8 )
          {
            v36 = 0;
            break;
          }
        }
        v8 = v36 < v10;
        v37 = &byte_60B3BA34;
        if ( !v8 )
          v37 = (char *)(v41 + v10);
        if ( v10 < 0 )
          v37 = &byte_60B3BA34;
        v38 = (unsigned __int8)*v37;
        v39 = -1;
        if ( v38 < 0x3A )
          v39 = v38 - 48;
        if ( v39 >= 0 )
        {
          result = 0;
          if ( (unsigned __int8)(v29 + 12) <= 0x18u )
          {
            v40 = (char)(10 * v29);
            if ( v40 >= v39 - 128 )
            {
              ++v10;
              v28 = 1;
              v29 = v40 + v39 * v45;
              continue;
            }
          }
          return result;
        }
        break;
      }
    }
    else
    {
      v29 = 0;
      while ( 2 )
      {
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v35 = a2[1];
        v30 = 0;
        while ( *(_BYTE *)(v35 + v30) )
        {
          if ( !*(_BYTE *)(v35 + v30 + 1) )
          {
            ++v30;
            break;
          }
          if ( !*(_BYTE *)(v35 + v30 + 2) )
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
          v31 = (char *)(v35 + v10);
        if ( v10 < 0 )
          v31 = &byte_60B3BA34;
        v32 = (unsigned __int8)*v31;
        v33 = -1;
        if ( v32 < 0x3A )
          v33 = v32 - 48;
        if ( v33 >= 0 )
        {
          result = 0;
          if ( (unsigned __int8)(v29 + 12) <= 0x18u )
          {
            v34 = (char)(10 * v29);
            if ( v34 <= 127 - v33 )
            {
              ++v10;
              v28 = 1;
              v29 = v34 + v33 * v45;
              continue;
            }
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
      if ( v44 )
        *v44 = v29;
    }
    return result;
  }
  if ( a3 == 10 )
    goto LABEL_61;
LABEL_17:
  v13 = 0;
  v14 = 0;
  while ( 2 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v20 = a2[1];
    v15 = 0;
    while ( *(_BYTE *)(v20 + v15) )
    {
      if ( !*(_BYTE *)(v20 + v15 + 1) )
      {
        ++v15;
        break;
      }
      if ( !*(_BYTE *)(v20 + v15 + 2) )
      {
        v15 += 2;
        break;
      }
      v8 = v15 + 2 <= 0x7FFFF;
      v15 += 3;
      if ( !v8 )
      {
        v15 = 0;
        break;
      }
    }
    v8 = v15 < v10;
    v16 = &byte_60B3BA34;
    if ( !v8 )
      v16 = (char *)(v20 + v10);
    if ( v10 < 0 )
      v16 = &byte_60B3BA34;
    v17 = tolower((unsigned __int8)*v16);
    if ( v17 > 0x39u )
    {
      v18 = -1;
      if ( (unsigned int)v17 - 97 < 6 )
        v18 = v17 - 87;
      if ( v18 < 0 )
        goto LABEL_46;
    }
    else
    {
      v18 = v17 - 48;
      if ( v18 < 0 )
      {
LABEL_46:
        result = 0;
        if ( (v13 & 1) != 0 )
        {
          *v44 = v14 * v45;
          return 1;
        }
        return result;
      }
    }
    if ( v18 >= a3 )
      goto LABEL_46;
    result = 0;
    if ( v14 <= (unsigned int)(unsigned __int8)(255 / a3) && (unsigned __int8)(v14 * a3) <= 255 - v18 )
    {
      v14 = v18 + v14 * a3;
      ++v10;
      v13 = 1;
      continue;
    }
    return result;
  }
}

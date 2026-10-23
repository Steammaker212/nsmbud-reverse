/* sub_6040D864
 * address: 0x6040D864   size: 1668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040D864(_DWORD *a1)
{
  unsigned int v1; // r8
  int v3; // r1
  int i; // r0
  bool v5; // cc
  int v7; // r5
  char *v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r1
  char *v12; // r0
  int v13; // r0
  int v14; // r1
  char *v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r0
  int v19; // r1
  char *v20; // r0
  int v21; // r0
  int v22; // r1
  char *v23; // r0
  int v24; // r0
  int v25; // r1
  char *v26; // r0
  char *v27; // r0
  int v28; // r0
  int v29; // r1
  char *v30; // r0
  int v31; // r0
  int v32; // r1
  char *v33; // r0
  unsigned __int8 v34; // r0

  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v3 = a1[1];
  for ( i = 0; *(_BYTE *)(v3 + i); i += 3 )
  {
    if ( !*(_BYTE *)(v3 + i + 1) )
    {
      ++i;
      break;
    }
    if ( !*(_BYTE *)(v3 + i + 2) )
    {
      i += 2;
      break;
    }
    v5 = i + 2 <= 0x7FFFF;
    if ( !v5 )
      return -1;
  }
  v7 = -1;
  if ( i != 4 )
    return v7;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v8 = (char *)a1[1];
  v9 = 0;
  while ( v8[v9] )
  {
    if ( !v8[v9 + 1] )
    {
      ++v9;
      break;
    }
    if ( !v8[v9 + 2] )
    {
      v9 += 2;
      break;
    }
    v5 = v9 + 2 <= 0x7FFFF;
    v9 += 3;
    if ( !v5 )
    {
      v9 = 0;
      break;
    }
  }
  if ( v9 < 0 )
    v8 = &byte_60B3BA34;
  if ( *v8 != 87 )
    return v7;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v10 = a1[1];
  v11 = 0;
  while ( *(_BYTE *)(v10 + v11) )
  {
    if ( !*(_BYTE *)(v10 + v11 + 1) )
    {
      ++v11;
      break;
    }
    if ( !*(_BYTE *)(v10 + v11 + 2) )
    {
      v11 += 2;
      break;
    }
    v5 = v11 + 2 <= 0x7FFFF;
    v11 += 3;
    if ( !v5 )
    {
      v11 = 0;
      break;
    }
  }
  v12 = (char *)(v10 + 3);
  if ( v11 < 3 )
    v12 = &byte_60B3BA34;
  if ( (unsigned __int8)*v12 < 0x30u )
    goto LABEL_49;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v13 = a1[1];
  v14 = 0;
  while ( *(_BYTE *)(v13 + v14) )
  {
    if ( !*(_BYTE *)(v13 + v14 + 1) )
    {
      ++v14;
      break;
    }
    if ( !*(_BYTE *)(v13 + v14 + 2) )
    {
      v14 += 2;
      break;
    }
    v5 = v14 + 2 <= 0x7FFFF;
    v14 += 3;
    if ( !v5 )
    {
      v14 = 0;
      break;
    }
  }
  v15 = (char *)(v13 + 3);
  if ( v14 < 3 )
    v15 = &byte_60B3BA34;
  if ( (unsigned __int8)*v15 > 0x39u )
  {
LABEL_49:
    (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
    v18 = a1[1];
    v19 = 0;
    while ( *(_BYTE *)(v18 + v19) )
    {
      if ( !*(_BYTE *)(v18 + v19 + 1) )
      {
        ++v19;
        break;
      }
      if ( !*(_BYTE *)(v18 + v19 + 2) )
      {
        v19 += 2;
        break;
      }
      v5 = v19 + 2 <= 0x7FFFF;
      v19 += 3;
      if ( !v5 )
      {
        v19 = 0;
        break;
      }
    }
    v20 = (char *)(v18 + 3);
    if ( v19 < 3 )
      v20 = &byte_60B3BA34;
    if ( (unsigned __int8)*v20 >= 0x61u )
    {
      (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
      v21 = a1[1];
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
        v5 = v22 + 2 <= 0x7FFFF;
        v22 += 3;
        if ( !v5 )
        {
          v22 = 0;
          break;
        }
      }
      v23 = (char *)(v21 + 3);
      if ( v22 < 3 )
        v23 = &byte_60B3BA34;
      if ( (unsigned __int8)*v23 <= 0x66u )
      {
        (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
        v24 = a1[1];
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
          v5 = v25 + 2 <= 0x7FFFF;
          v25 += 3;
          if ( !v5 )
          {
            v25 = 0;
            break;
          }
        }
        v27 = (char *)(v24 + 3);
        if ( v25 < 3 )
          v27 = &byte_60B3BA34;
        v1 = (unsigned __int8)*v27 - 87;
      }
    }
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
    v16 = a1[1];
    v17 = 0;
    while ( *(_BYTE *)(v16 + v17) )
    {
      if ( !*(_BYTE *)(v16 + v17 + 1) )
      {
        ++v17;
        break;
      }
      if ( !*(_BYTE *)(v16 + v17 + 2) )
      {
        v17 += 2;
        break;
      }
      v5 = v17 + 2 <= 0x7FFFF;
      v17 += 3;
      if ( !v5 )
      {
        v17 = 0;
        break;
      }
    }
    v26 = (char *)(v16 + 3);
    if ( v17 < 3 )
      v26 = &byte_60B3BA34;
    v1 = (unsigned __int8)*v26 - 48;
  }
  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v28 = a1[1];
  v29 = 0;
  while ( *(_BYTE *)(v28 + v29) )
  {
    if ( !*(_BYTE *)(v28 + v29 + 1) )
    {
      ++v29;
      break;
    }
    if ( !*(_BYTE *)(v28 + v29 + 2) )
    {
      v29 += 2;
      break;
    }
    v5 = v29 + 2 <= 0x7FFFF;
    v29 += 3;
    if ( !v5 )
    {
      v29 = 0;
      break;
    }
  }
  v30 = (char *)(v28 + 2);
  if ( v29 < 2 )
    v30 = &byte_60B3BA34;
  v7 = 19;
  switch ( *v30 )
  {
    case '0':
      return v1 - 1;
    case 'A':
      return 36;
    case 'B':
      return v1 + 41;
    case 'C':
      return v1 + 22;
    case 'G':
      return v7;
    case 'K':
      if ( v1 > 7 )
        return v1 + 38;
      else
        return v1 + 23;
    case 'M':
      return 37;
    case 'S':
      (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
      v31 = a1[1];
      v32 = 0;
      break;
    case 'T':
      return v1 + 20;
    case 'W':
      return 34;
    case 'X':
      return 57;
    default:
      return -1;
  }
  while ( *(_BYTE *)(v31 + v32) )
  {
    if ( !*(_BYTE *)(v31 + v32 + 1) )
    {
      ++v32;
      break;
    }
    if ( !*(_BYTE *)(v31 + v32 + 2) )
    {
      v32 += 2;
      break;
    }
    v5 = v32 + 2 <= 0x7FFFF;
    v32 += 3;
    if ( !v5 )
    {
      v32 = 0;
      break;
    }
  }
  v33 = (char *)(v31 + 1);
  v7 = 12;
  if ( v32 < 1 )
    v33 = &byte_60B3BA34;
  v34 = *v33 - 49;
  if ( v34 < 5u )
    return v34 + 12;
  else
    return v7;
}

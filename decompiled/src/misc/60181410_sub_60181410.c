/* sub_60181410
 * address: 0x60181410   size: 1296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60181410(_DWORD *a1, _DWORD *a2, int a3)
{
  int v6; // r1
  int v7; // r0
  bool v8; // cc
  char *v9; // r1
  int v10; // r0
  int v11; // r5
  int v12; // r1
  char *v13; // r1
  int i; // r9
  int v15; // r0
  int v16; // r1
  char *v17; // r1
  int v18; // r1
  char *v19; // r1
  int v21; // r0
  int v22; // r1
  char *v23; // r1
  int v24; // r0
  int v25; // r1
  char *v26; // r1
  int v27; // r0
  int v28; // r1
  char *v29; // r1
  int v30; // r1
  int v31; // r2
  char *v32; // r0
  int v33; // r0
  int v35; // [sp+8h] [bp-28h]

  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v35 = a1[1];
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v6 = 0;
  v7 = a2[1];
  while ( *(_BYTE *)(v7 + v6) )
  {
    if ( !*(_BYTE *)(v7 + v6 + 1) )
    {
      ++v6;
      break;
    }
    if ( !*(_BYTE *)(v7 + v6 + 2) )
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
  v8 = v6 < a3;
  v9 = &byte_60B3BA34;
  if ( !v8 )
    v9 = (char *)(v7 + a3);
  if ( a3 < 0 )
    v9 = &byte_60B3BA34;
  if ( *v9 != 34 )
  {
    v11 = a3;
LABEL_28:
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v15 = a2[1];
    v16 = 0;
    while ( *(_BYTE *)(v15 + v16) )
    {
      if ( !*(_BYTE *)(v15 + v16 + 1) )
      {
        ++v16;
        break;
      }
      if ( !*(_BYTE *)(v15 + v16 + 2) )
      {
        v16 += 2;
        break;
      }
      v8 = v16 + 2 <= 0x7FFFF;
      v16 += 3;
      if ( !v8 )
      {
        v16 = 0;
        break;
      }
    }
    v8 = v16 < v11;
    i = 0;
    v17 = &byte_60B3BA34;
    if ( !v8 )
      v17 = (char *)(v15 + v11);
    if ( v11 < 0 )
      v17 = &byte_60B3BA34;
    if ( *v17 != 44 )
    {
      for ( i = 0; ; ++i )
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
        v8 = v22 < v11;
        v23 = &byte_60B3BA34;
        if ( !v8 )
          v23 = (char *)(v21 + v11);
        if ( v11 < 0 )
          v23 = &byte_60B3BA34;
        if ( *v23 == 44 )
          break;
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
        v8 = v25 < v11;
        v26 = &byte_60B3BA34;
        if ( !v8 )
          v26 = (char *)(v24 + v11);
        if ( v11 < 0 )
          v26 = &byte_60B3BA34;
        if ( *v26 == 34 )
          break;
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
          v8 = v28 + 2 <= 0x7FFFF;
          v28 += 3;
          if ( !v8 )
          {
            v28 = 0;
            break;
          }
        }
        v8 = v28 < v11;
        v29 = &byte_60B3BA34;
        if ( !v8 )
          v29 = (char *)(v27 + v11);
        if ( v11 < 0 )
          v29 = &byte_60B3BA34;
        if ( *v29 == 13 )
        {
          (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
          v30 = a2[1];
          v31 = 0;
          while ( *(_BYTE *)(v30 + v31) )
          {
            if ( !*(_BYTE *)(v30 + v31 + 1) )
            {
              ++v31;
              break;
            }
            if ( !*(_BYTE *)(v30 + v31 + 2) )
            {
              v31 += 2;
              break;
            }
            v8 = v31 + 2 <= 0x7FFFF;
            v31 += 3;
            if ( !v8 )
            {
              v31 = 0;
              break;
            }
          }
          v32 = &byte_60B3BA34;
          if ( v31 > v11 )
            v32 = (char *)(v30 + v11 + 1);
          if ( v11 < -1 )
            v32 = &byte_60B3BA34;
          if ( *v32 == 10 )
            break;
        }
        (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
        v33 = a2[1];
        v18 = 0;
        while ( *(_BYTE *)(v33 + v18) )
        {
          if ( !*(_BYTE *)(v33 + v18 + 1) )
          {
            ++v18;
            break;
          }
          if ( !*(_BYTE *)(v33 + v18 + 2) )
          {
            v18 += 2;
            break;
          }
          v8 = v18 + 2 <= 0x7FFFF;
          v18 += 3;
          if ( !v8 )
          {
            v18 = 0;
            break;
          }
        }
        v8 = v18 < v11;
        v19 = &byte_60B3BA34;
        if ( !v8 )
          v19 = (char *)(v33 + v11);
        if ( v11++ < 0 )
          v19 = &byte_60B3BA34;
        *(_BYTE *)(v35 + i) = *v19;
      }
      *(_BYTE *)(v35 + i) = 0;
    }
    return i;
  }
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v10 = a2[1];
  v11 = a3 + 1;
  v12 = 0;
  while ( *(_BYTE *)(v10 + v12) )
  {
    if ( !*(_BYTE *)(v10 + v12 + 1) )
    {
      ++v12;
      break;
    }
    if ( !*(_BYTE *)(v10 + v12 + 2) )
    {
      v12 += 2;
      break;
    }
    v8 = v12 + 2 <= 0x7FFFF;
    v12 += 3;
    if ( !v8 )
    {
      v12 = 0;
      break;
    }
  }
  v8 = v12 <= a3;
  v13 = &byte_60B3BA34;
  if ( !v8 )
    v13 = (char *)(v10 + v11);
  v8 = a3 < -1;
  i = 0;
  if ( v8 )
    v13 = &byte_60B3BA34;
  if ( *v13 != 34 )
    goto LABEL_28;
  return i;
}

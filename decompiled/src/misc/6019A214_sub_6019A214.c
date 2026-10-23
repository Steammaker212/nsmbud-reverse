/* sub_6019A214
 * address: 0x6019A214   size: 964   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019A214(_DWORD *a1)
{
  int v2; // r1
  char *v3; // r0
  bool v4; // cc
  int v5; // r1
  int result; // r0
  char *v7; // r0
  int v8; // r1
  int v9; // r1
  char *v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r1
  char *v14; // r0
  int v15; // r1
  char *v16; // r0
  int v17; // r1
  int v18; // r0
  int v19; // r1
  char *v20; // r0
  int v21; // r0
  int v22; // r1
  char *v23; // r0
  int v24; // r1

  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v2 = 0;
  v3 = (char *)a1[1];
  while ( v3[v2] )
  {
    if ( !v3[v2 + 1] )
    {
      ++v2;
      break;
    }
    if ( !v3[v2 + 2] )
    {
      v2 += 2;
      break;
    }
    v4 = v2 + 2 <= 0x7FFFF;
    v2 += 3;
    if ( !v4 )
    {
      v2 = 0;
      break;
    }
  }
  if ( v2 < 0 )
    v3 = &byte_60B3BA34;
  v5 = (unsigned __int8)*v3;
  result = 0;
  if ( v5 != 70 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
    v7 = (char *)a1[1];
    v8 = 0;
    while ( v7[v8] )
    {
      if ( !v7[v8 + 1] )
      {
        ++v8;
        break;
      }
      if ( !v7[v8 + 2] )
      {
        v8 += 2;
        break;
      }
      v4 = v8 + 2 <= 0x7FFFF;
      v8 += 3;
      if ( !v4 )
      {
        v8 = 0;
        break;
      }
    }
    if ( v8 < 0 )
      v7 = &byte_60B3BA34;
    v9 = (unsigned __int8)*v7;
    result = 1;
    if ( v9 != 75 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
      v10 = (char *)a1[1];
      v11 = 0;
      while ( v10[v11] )
      {
        if ( !v10[v11 + 1] )
        {
          ++v11;
          break;
        }
        if ( !v10[v11 + 2] )
        {
          v11 += 2;
          break;
        }
        v4 = v11 + 2 <= 0x7FFFF;
        v11 += 3;
        if ( !v4 )
        {
          v11 = 0;
          break;
        }
      }
      if ( v11 < 0 )
        v10 = &byte_60B3BA34;
      if ( *v10 != 87 )
        goto LABEL_45;
      (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
      v12 = a1[1];
      v13 = 0;
      while ( *(_BYTE *)(v12 + v13) )
      {
        if ( !*(_BYTE *)(v12 + v13 + 1) )
        {
          ++v13;
          break;
        }
        if ( !*(_BYTE *)(v12 + v13 + 2) )
        {
          v13 += 2;
          break;
        }
        v4 = v13 + 2 <= 0x7FFFF;
        v13 += 3;
        if ( !v4 )
        {
          v13 = 0;
          break;
        }
      }
      v14 = (char *)(v12 + 2);
      if ( v13 < 2 )
        v14 = &byte_60B3BA34;
      v15 = (unsigned __int8)*v14;
      result = 2;
      if ( v15 != 77 )
      {
LABEL_45:
        (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
        v16 = (char *)a1[1];
        v17 = 0;
        while ( v16[v17] )
        {
          if ( !v16[v17 + 1] )
          {
            ++v17;
            break;
          }
          if ( !v16[v17 + 2] )
          {
            v17 += 2;
            break;
          }
          v4 = v17 + 2 <= 0x7FFFF;
          v17 += 3;
          if ( !v4 )
          {
            v17 = 0;
            break;
          }
        }
        if ( v17 < 0 )
          v16 = &byte_60B3BA34;
        if ( *v16 != 87 )
          return 4;
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
          v4 = v19 + 2 <= 0x7FFFF;
          v19 += 3;
          if ( !v4 )
          {
            v19 = 0;
            break;
          }
        }
        v20 = (char *)(v18 + 2);
        if ( v19 < 2 )
          v20 = &byte_60B3BA34;
        if ( *v20 != 75 )
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
            v4 = v22 + 2 <= 0x7FFFF;
            v22 += 3;
            if ( !v4 )
            {
              v22 = 0;
              break;
            }
          }
          v23 = (char *)(v21 + 2);
          if ( v22 < 2 )
            v23 = &byte_60B3BA34;
          v24 = (unsigned __int8)*v23;
          result = 3;
          if ( v24 == 87 )
            return 4;
        }
        else
        {
          return 4;
        }
      }
    }
  }
  return result;
}

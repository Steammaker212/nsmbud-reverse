/* sub_608E93BC
 * address: 0x608E93BC   size: 956   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_608E93BC(int a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r7
  bool v6; // cc
  int v7; // r6
  int v8; // r0
  int v9; // r1
  char *v10; // r1
  int i; // r0
  int v12; // r0
  int v13; // r1
  char *v14; // r1
  int j; // r0
  int v16; // r0
  int v17; // r1
  char *v18; // r5
  int v19; // r0
  char *v20; // r1
  signed int v21; // r7
  signed int v22; // r0

  if ( FIELD_S32(a1, 8) <= 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
  else
    **(_BYTE **)(a1 + 4) = 0;
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v4 = a2[1];
  v5 = 0;
  while ( *(_BYTE *)(v4 + v5) )
  {
    if ( !*(_BYTE *)(v4 + v5 + 1) )
    {
      ++v5;
      break;
    }
    if ( !*(_BYTE *)(v4 + v5 + 2) )
    {
      v5 += 2;
      break;
    }
    v6 = v5 + 2 <= 0x7FFFF;
    v5 += 3;
    if ( !v6 )
    {
      v5 = 0;
      break;
    }
  }
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v7 = 0;
  if ( v5 >= 0 )
  {
    while ( *(_BYTE *)(a2[1] + v5) != 46 )
    {
      v6 = v5-- <= 0;
      if ( v6 )
        return v7;
    }
    if ( v5 >= 0 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v8 = a2[1];
      v9 = 0;
      while ( *(_BYTE *)(v8 + v9) )
      {
        if ( !*(_BYTE *)(v8 + v9 + 1) )
        {
          ++v9;
          break;
        }
        if ( !*(_BYTE *)(v8 + v9 + 2) )
        {
          v9 += 2;
          break;
        }
        v6 = v9 + 2 <= 0x7FFFF;
        v9 += 3;
        if ( !v6 )
        {
          v9 = 0;
          break;
        }
      }
      v6 = v9 < v5;
      v7 = 0;
      v10 = off_60C5CB34;
      if ( !v6 )
        v10 = (char *)(v8 + v5);
      for ( i = 1; v10[i - 1]; i += 2 )
      {
        if ( v10[i - 1] == 47 )
          return v7;
        if ( i >= 524289 || !v10[i] )
          break;
        if ( v10[i] == 47 )
          return v7;
      }
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v12 = a2[1];
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
        v6 = v13 + 2 <= 0x7FFFF;
        v13 += 3;
        if ( !v6 )
        {
          v13 = 0;
          break;
        }
      }
      v6 = v13 < v5;
      v7 = 0;
      v14 = off_60C5CB34;
      if ( !v6 )
        v14 = (char *)(v12 + v5);
      for ( j = 1; v14[j - 1]; j += 2 )
      {
        if ( v14[j - 1] == 92 )
          return v7;
        if ( j >= 524289 || !v14[j] )
          break;
        if ( v14[j] == 92 )
          return v7;
      }
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v16 = a2[1];
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
        v6 = v17 + 2 <= 0x7FFFF;
        v17 += 3;
        if ( !v6 )
        {
          v17 = 0;
          break;
        }
      }
      v18 = *(char **)(a1 + 4);
      v19 = v16 + v5;
      v6 = v17 <= v5;
      v7 = 1;
      v20 = off_60C5CB34;
      if ( !v6 )
        v20 = (char *)(v19 + 1);
      if ( v18 != v20 )
      {
        v21 = 0;
        while ( v20[v21] )
        {
          if ( !v20[v21 + 1] )
          {
            ++v21;
            break;
          }
          if ( !v20[v21 + 2] )
          {
            v21 += 2;
            break;
          }
          v6 = v21 + 2 <= 0x7FFFF;
          v21 += 3;
          if ( !v6 )
          {
            v21 = 0;
            break;
          }
        }
        v22 = FIELD_U32(a1, 8);
        if ( v21 >= v22 )
          v21 = v22 - 1;
        qmemcpy(*(void **)(a1 + 4), v20, v21);
        v18[v21] = 0;
      }
    }
  }
  return v7;
}

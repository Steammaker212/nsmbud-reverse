/* sub_6040D4F0
 * address: 0x6040D4F0   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040D4F0(_DWORD *a1)
{
  int v2; // r1
  int i; // r0
  bool v4; // cc
  int v6; // r5
  char *v7; // r0
  int v8; // r1
  int v9; // r0
  int v10; // r1
  char *v11; // r0
  int v12; // r0
  int v13; // r1
  char *v14; // r0
  int v15; // r0
  int v16; // r1
  char *v17; // r0

  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v2 = a1[1];
  for ( i = 0; *(_BYTE *)(v2 + i); i += 3 )
  {
    if ( !*(_BYTE *)(v2 + i + 1) )
    {
      ++i;
      break;
    }
    if ( !*(_BYTE *)(v2 + i + 2) )
    {
      i += 2;
      break;
    }
    v4 = i + 2 <= 0x7FFFF;
    if ( !v4 )
      return -1;
  }
  v6 = -1;
  if ( i == 4 )
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
    if ( *v7 == 87 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
      v9 = a1[1];
      v10 = 0;
      while ( *(_BYTE *)(v9 + v10) )
      {
        if ( !*(_BYTE *)(v9 + v10 + 1) )
        {
          ++v10;
          break;
        }
        if ( !*(_BYTE *)(v9 + v10 + 2) )
        {
          v10 += 2;
          break;
        }
        v4 = v10 + 2 <= 0x7FFFF;
        v10 += 3;
        if ( !v4 )
        {
          v10 = 0;
          break;
        }
      }
      v11 = (char *)(v9 + 1);
      if ( v10 < 1 )
        v11 = &byte_60B3BA34;
      if ( (unsigned __int8)*v11 >= 0x31u )
      {
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
        v14 = (char *)(v12 + 1);
        if ( v13 < 1 )
          v14 = &byte_60B3BA34;
        if ( (unsigned __int8)*v14 <= 0x39u )
        {
          (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
          v15 = a1[1];
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
            v4 = v16 + 2 <= 0x7FFFF;
            v16 += 3;
            if ( !v4 )
            {
              v16 = 0;
              break;
            }
          }
          v17 = (char *)(v15 + 1);
          if ( v16 < 1 )
            v17 = &byte_60B3BA34;
          return (unsigned __int8)*v17 - 49;
        }
      }
    }
  }
  return v6;
}

/* sub_6043C4B4
 * address: 0x6043C4B4   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6043C4B4(_DWORD *a1, _DWORD *a2)
{
  int v4; // r6
  int v5; // r0
  bool v6; // cc
  int v7; // r1
  int v8; // r0
  int v9; // r6
  int v10; // r5
  int v11; // r4
  int v12; // r1
  int v13; // r0
  int v14; // r2

  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v4 = 0;
  v5 = a1[1];
  while ( *(_BYTE *)(v5 + v4) )
  {
    if ( !*(_BYTE *)(v5 + v4 + 1) )
    {
      ++v4;
      break;
    }
    if ( !*(_BYTE *)(v5 + v4 + 2) )
    {
      v4 += 2;
      break;
    }
    v6 = v4 + 2 <= 0x7FFFF;
    v4 += 3;
    if ( !v6 )
    {
      v4 = 0;
      break;
    }
  }
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v7 = a2[1];
  v8 = 0;
  while ( *(_BYTE *)(v7 + v8) )
  {
    if ( !*(_BYTE *)(v7 + v8 + 1) )
    {
      ++v8;
      break;
    }
    if ( !*(_BYTE *)(v7 + v8 + 2) )
    {
      v8 += 2;
      break;
    }
    v6 = v8 + 2 <= 0x7FFFF;
    v8 += 3;
    if ( !v6 )
    {
      v8 = 0;
      break;
    }
  }
  v9 = v4 - v8;
  if ( v9 < 0 )
    return -1;
  v10 = v8;
  if ( v8 >= 0x80000 )
    v10 = 0x80000;
  if ( v8 < 1 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  }
  else
  {
    while ( 1 )
    {
      v11 = a1[1];
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v12 = a2[1];
      v13 = v11 + v9;
      if ( v11 + v9 == v12 )
        break;
      v14 = 0;
      while ( *(unsigned __int8 *)(v13 + v14) == *(unsigned __int8 *)(v12 + v14) )
      {
        if ( *(_BYTE *)(v13 + v14) )
        {
          if ( ++v14 < v10 )
            continue;
        }
        return v9;
      }
      v6 = v9-- <= 0;
      if ( v6 )
        return -1;
    }
  }
  return v9;
}

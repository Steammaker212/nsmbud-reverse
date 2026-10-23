/* sub_608E9B50
 * address: 0x608E9B50   size: 960   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E9B50(_DWORD *a1, _DWORD *a2)
{
  int v4; // r7
  int v5; // r0
  bool v6; // cc
  int v7; // r0
  int v8; // r7
  int v9; // r9
  int v10; // r0
  int v11; // r7
  signed int v12; // r6
  void *v13; // r7
  const void *v14; // r1
  signed int v15; // r0
  int v17; // r9
  int v18; // r0
  int v19; // r7
  int v20; // r0

  if ( a1 == a2 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v4 = 0;
    v5 = a2[1];
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
    v17 = -1;
    if ( v4 >= 0 )
    {
      while ( *(_BYTE *)(a2[1] + v4) != 47 )
      {
        v6 = v4-- <= 0;
        if ( v6 )
          goto LABEL_54;
      }
      v17 = v4;
    }
LABEL_54:
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v18 = a2[1];
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
      v6 = v19 + 2 <= 0x7FFFF;
      v19 += 3;
      if ( !v6 )
      {
        v19 = 0;
        break;
      }
    }
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v20 = -1;
    if ( v19 >= 0 )
    {
      while ( *(_BYTE *)(a2[1] + v19) != 92 )
      {
        v6 = v19-- <= 0;
        if ( v6 )
          goto LABEL_68;
      }
      v20 = v19;
    }
LABEL_68:
    if ( v17 > v20 )
      v20 = v17;
    if ( v20 >= 1 )
    {
      if ( a1[2] <= v20 )
        (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a2);
      else
        *(_BYTE *)(a1[1] + v20) = 0;
      return 1;
    }
    return 0;
  }
  if ( (int)a1[2] <= 0 )
    (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  else
    *(_BYTE *)a1[1] = 0;
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
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v9 = -1;
  if ( v8 >= 0 )
  {
    while ( *(_BYTE *)(a2[1] + v8) != 47 )
    {
      v6 = v8-- <= 0;
      if ( v6 )
        goto LABEL_25;
    }
    v9 = v8;
  }
LABEL_25:
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v10 = a2[1];
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
    v6 = v11 + 2 <= 0x7FFFF;
    v11 += 3;
    if ( !v6 )
    {
      v11 = 0;
      break;
    }
  }
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v12 = -1;
  if ( v11 >= 0 )
  {
    while ( *(_BYTE *)(a2[1] + v11) != 92 )
    {
      v6 = v11-- <= 0;
      if ( v6 )
        goto LABEL_39;
    }
    v12 = v11;
  }
LABEL_39:
  if ( v9 > v12 )
    v12 = v9;
  if ( v12 < 1 )
    return 0;
  v13 = (void *)a1[1];
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v14 = (const void *)a2[1];
  if ( v13 == v14 )
    return 1;
  v15 = a1[2];
  if ( v12 >= v15 )
    v12 = v15 - 1;
  qmemcpy(v13, v14, v12);
  *((_BYTE *)v13 + v12) = 0;
  return 1;
}

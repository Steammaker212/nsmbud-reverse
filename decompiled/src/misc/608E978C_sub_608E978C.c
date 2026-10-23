/* sub_608E978C
 * address: 0x608E978C   size: 956   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E978C(int a1, _DWORD *a2)
{
  int v4; // r6
  int v5; // r0
  bool v6; // cc
  int v7; // r9
  int v8; // r0
  int v9; // r6
  int v10; // r4
  int v11; // r0
  int v12; // r6
  int v13; // r9
  int v14; // r0
  int v15; // r0
  int v16; // r1
  char *v17; // r5
  char *v18; // r1
  signed int v19; // r6
  signed int v20; // r0

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
  v7 = -1;
  if ( v4 >= 0 )
  {
    while ( *(_BYTE *)(a2[1] + v4) != 92 )
    {
      v6 = v4-- <= 0;
      if ( v6 )
        goto LABEL_15;
    }
    v7 = v4;
  }
LABEL_15:
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
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v10 = -1;
  if ( v9 >= 0 )
  {
    while ( *(_BYTE *)(a2[1] + v9) != 47 )
    {
      v6 = v9-- <= 0;
      if ( v6 )
        goto LABEL_29;
    }
    v10 = v9;
  }
LABEL_29:
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v11 = a2[1];
  v12 = 0;
  if ( v7 > v10 )
    v10 = v7;
  v13 = v10 + 1;
  if ( v10 < 0 )
    v13 = 0;
  while ( *(_BYTE *)(v11 + v12) )
  {
    if ( !*(_BYTE *)(v11 + v12 + 1) )
    {
      ++v12;
      break;
    }
    if ( !*(_BYTE *)(v11 + v12 + 2) )
    {
      v12 += 2;
      break;
    }
    v6 = v12 + 2 <= 0x7FFFF;
    v12 += 3;
    if ( !v6 )
    {
      v12 = 0;
      break;
    }
  }
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  if ( v12 < 0 )
    goto LABEL_46;
  while ( *(_BYTE *)(a2[1] + v12) != 46 )
  {
    v6 = v12-- <= 0;
    if ( v6 )
      goto LABEL_46;
  }
  if ( v12 < 0 )
  {
LABEL_46:
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v14 = a2[1];
    v12 = 0;
    while ( *(_BYTE *)(v14 + v12) )
    {
      if ( !*(_BYTE *)(v14 + v12 + 1) )
      {
        ++v12;
        break;
      }
      if ( !*(_BYTE *)(v14 + v12 + 2) )
      {
        v12 += 2;
        break;
      }
      v6 = v12 + 2 <= 0x7FFFF;
      v12 += 3;
      if ( !v6 )
      {
        v12 = 0;
        break;
      }
    }
  }
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
    v6 = v16 + 2 <= 0x7FFFF;
    v16 += 3;
    if ( !v6 )
    {
      v16 = 0;
      break;
    }
  }
  v17 = *(char **)(a1 + 4);
  v6 = v16 < v13;
  v18 = off_60C5CB34;
  if ( !v6 )
    v18 = (char *)(v15 + v13);
  if ( v13 < 0 )
    v18 = off_60C5CB34;
  if ( v17 != v18 )
  {
    v19 = v12 - v13;
    if ( v19 < 0 )
    {
      v19 = 0;
      while ( v18[v19] )
      {
        if ( !v18[v19 + 1] )
        {
          ++v19;
          break;
        }
        if ( !v18[v19 + 2] )
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
    }
    v20 = FIELD_U32(a1, 8);
    if ( v19 >= v20 )
      v19 = v20 - 1;
    qmemcpy(*(void **)(a1 + 4), v18, v19);
    v17[v19] = 0;
  }
  return 1;
}

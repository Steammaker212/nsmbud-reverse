/* sub_6090788C
 * address: 0x6090788C   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090788C(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v7; // r4
  int v8; // r0
  bool v9; // cc
  int v10; // r4
  int v11; // r0
  int v12; // r1
  char *v13; // r1
  int v14; // r0
  int v15; // r1
  char *v16; // r1
  void (__fastcall *v17)(int, int, int); // r9
  char v19; // [sp+Ah] [bp-26h] BYREF
  _BYTE v20[37]; // [sp+Bh] [bp-25h] BYREF

  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v7 = 0;
  v8 = a3[1];
  while ( *(_BYTE *)(v8 + v7) )
  {
    if ( !*(_BYTE *)(v8 + v7 + 1) )
    {
      ++v7;
      break;
    }
    if ( !*(_BYTE *)(v8 + v7 + 2) )
    {
      v7 += 2;
      break;
    }
    v9 = (int)(v7 + 2) <= 0x7FFFF;
    v7 += 3;
    if ( !v9 )
    {
      v7 = 0;
      break;
    }
  }
  v20[0] = 34;
  v19 = 92;
  (*(void (__fastcall **)(int, _BYTE *, int))(*(_DWORD *)a2 + 4))(a2, v20, 1);
  if ( v7 < a4 )
    a4 = v7;
  if ( a4 )
  {
    v10 = 0;
    do
    {
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      v11 = a3[1];
      v12 = 0;
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
        v9 = v12 + 2 <= 0x7FFFF;
        v12 += 3;
        if ( !v9 )
        {
          v12 = 0;
          break;
        }
      }
      v9 = v12 < v10;
      v13 = &byte_60B3BA34;
      if ( !v9 )
        v13 = (char *)(v11 + v10);
      if ( v10 < 0 )
        v13 = &byte_60B3BA34;
      if ( *v13 == 34 )
        goto LABEL_41;
      if ( v10 )
        (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      v14 = a3[1];
      v15 = 0;
      while ( *(_BYTE *)(v14 + v15) )
      {
        if ( !*(_BYTE *)(v14 + v15 + 1) )
        {
          ++v15;
          break;
        }
        if ( !*(_BYTE *)(v14 + v15 + 2) )
        {
          v15 += 2;
          break;
        }
        v9 = v15 + 2 <= 0x7FFFF;
        v15 += 3;
        if ( !v9 )
        {
          v15 = 0;
          break;
        }
      }
      v9 = v15 < v10;
      v16 = &byte_60B3BA34;
      if ( !v9 )
        v16 = (char *)(v14 + v10);
      if ( v10 < 0 )
        v16 = &byte_60B3BA34;
      if ( *v16 == 34 )
LABEL_41:
        (*(void (__fastcall **)(int, char *, int))(*(_DWORD *)a2 + 4))(a2, &v19, 1);
      v17 = *(void (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 4);
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      v17(a2, a3[1] + v10++, 1);
    }
    while ( v10 < a4 );
  }
  return (*(int (__fastcall **)(int, _BYTE *, int))(*(_DWORD *)a2 + 4))(a2, v20, 1);
}

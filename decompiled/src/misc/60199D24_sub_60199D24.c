/* sub_60199D24
 * address: 0x60199D24   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60199D24(_DWORD *a1, const void **a2, const void **a3)
{
  char v3; // r12
  void *v7; // r10
  signed int v8; // r8
  int v9; // r0
  bool v10; // cc
  int v11; // r0
  signed int v12; // r4
  int v13; // r8
  int v14; // r0
  signed int v15; // r6
  int v16; // r0
  signed int v17; // r4
  int v18; // r8
  int v19; // r0
  int v20; // r6
  int result; // r0
  signed int v22; // r4
  const void **v23; // [sp+0h] [bp-28h]

  if ( ((unsigned int)&dword_60C89D18 & ~(1612291400 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C89D18) )
  {
    dword_60C89D1C = (int)&sead__SafeStringBase__vtable;
    dword_60C89D20 = (int)"R";
    _cxa_guard_release(&dword_60C89D18);
  }
  v7 = (void *)a1[1];
  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v8 = 0;
  v9 = a1[1];
  v23 = a3;
  while ( *(_BYTE *)(v9 + v8) )
  {
    if ( !*(_BYTE *)(v9 + v8 + 1) )
    {
      ++v8;
      break;
    }
    if ( !*(_BYTE *)(v9 + v8 + 2) )
    {
      v8 += 2;
      break;
    }
    v10 = v8 + 2 <= 0x7FFFF;
    v8 += 3;
    if ( !v10 )
    {
      v8 = 0;
      break;
    }
  }
  v11 = a1[2];
  v12 = v11 - 1;
  if ( v11 > 1 )
    v12 = 1;
  if ( v12 >= 1 )
  {
    (*(void (__fastcall **)(int *))(dword_60C89D1C + 12))(&dword_60C89D1C);
    qmemcpy(v7, (const void *)dword_60C89D20, v12);
    if ( v12 > v8 )
      *((_BYTE *)v7 + v12) = 0;
  }
  v13 = a1[1];
  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v14 = a1[1];
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
    v10 = v15 + 2 <= 0x7FFFF;
    v15 += 3;
    if ( !v10 )
    {
      v15 = 0;
      break;
    }
  }
  v16 = a1[2];
  v17 = v16 - 2;
  if ( v16 - 1 > 4 )
    v17 = 4;
  if ( v17 >= 1 )
  {
    (*((void (__fastcall **)(const void **))*a2 + 3))(a2);
    qmemcpy((void *)(v13 + 1), a2[1], v17);
    if ( v17 >= v15 )
      *(_BYTE *)(v13 + v17 + 1) = 0;
  }
  v18 = a1[1];
  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v19 = a1[1];
  v20 = 0;
  while ( *(_BYTE *)(v19 + v20) )
  {
    if ( !*(_BYTE *)(v19 + v20 + 1) )
    {
      ++v20;
      break;
    }
    if ( !*(_BYTE *)(v19 + v20 + 2) )
    {
      v20 += 2;
      break;
    }
    v10 = v20 + 2 <= 0x7FFFF;
    v20 += 3;
    if ( !v10 )
    {
      v20 = 0;
      break;
    }
  }
  result = a1[2];
  v22 = result - 6;
  if ( result - 5 > 4 )
    v22 = 4;
  if ( v22 >= 1 )
  {
    (*((void (__fastcall **)(const void **))*v23 + 3))(v23);
    qmemcpy((void *)(v18 + 5), v23[1], v22);
    result = v22 + 5;
    if ( v22 + 5 > v20 )
      *(_BYTE *)(v18 + result) = 0;
  }
  return result;
}

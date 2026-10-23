/* sub_6040E074
 * address: 0x6040E074   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6040E074(_DWORD *a1, int a2, int a3)
{
  int v5; // r5
  char *v6; // r9
  int v7; // r0
  bool v8; // cc
  const void **v9; // r11
  _BYTE *v10; // r0
  const void **v11; // r11
  _BYTE *v12; // t1
  int v13; // r8
  signed int v14; // r6
  signed int result; // r0
  int v16; // [sp+0h] [bp-28h]

  sub_608FDDF4((int)a1, "W%d", a2 + 1);
  v16 = a1[1];
  (*(void (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  v5 = 0;
  v6 = (char *)&unk_60C9A4B0 + 8 * a3;
  v7 = a1[1];
  while ( *(_BYTE *)(v7 + v5) )
  {
    if ( !*(_BYTE *)(v7 + v5 + 1) )
    {
      ++v5;
      break;
    }
    if ( !*(_BYTE *)(v7 + v5 + 2) )
    {
      v5 += 2;
      break;
    }
    v8 = v5 + 2 <= 0x7FFFF;
    v5 += 3;
    if ( !v8 )
    {
      v5 = 0;
      break;
    }
  }
  v9 = (const void **)((char *)&unk_60C9A4B0 + 8 * a3);
  (*((void (__fastcall **)(const void **))*v9 + 3))(v9);
  v12 = v9[1];
  v11 = v9 + 1;
  v10 = v12;
  v13 = 0;
  v14 = 0;
  if ( v5 > 0 )
    v13 = v5;
  while ( v10[v14] )
  {
    if ( !v10[v14 + 1] )
    {
      ++v14;
      break;
    }
    if ( !v10[v14 + 2] )
    {
      v14 += 2;
      break;
    }
    v8 = v14 + 2 <= 0x7FFFF;
    v14 += 3;
    if ( !v8 )
    {
      v14 = 0;
      break;
    }
  }
  result = a1[2] - v13;
  if ( v14 >= result )
    v14 = result - 1;
  if ( v14 >= 1 )
  {
    (*(void (__fastcall **)(char *))(*(_DWORD *)v6 + 12))(v6);
    qmemcpy((void *)(v16 + v13), *v11, v14);
    result = v14 + v13;
    if ( v14 + v13 > v5 )
      *(_BYTE *)(v16 + result) = 0;
  }
  return result;
}

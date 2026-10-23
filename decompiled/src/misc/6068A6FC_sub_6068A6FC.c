/* sub_6068A6FC
 * address: 0x6068A6FC   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068A6FC(_DWORD *a1, int a2, int a3)
{
  int v3; // r12
  int v4; // lr
  int v5; // r12
  int v6; // lr
  int v7; // r12
  int v8; // lr
  int v9; // r3
  int v10; // r12
  int v11; // r0
  int v12; // r0
  _DWORD v14[5]; // [sp+10h] [bp-58h] BYREF
  _DWORD v15[5]; // [sp+24h] [bp-44h] BYREF
  _DWORD v16[5]; // [sp+38h] [bp-30h] BYREF
  _DWORD v17[7]; // [sp+4Ch] [bp-1Ch] BYREF

  v3 = a1[3];
  v4 = a1[4];
  v14[0] = a1[2];
  v14[1] = v3;
  v14[2] = v4;
  v5 = a1[6];
  v6 = a1[7];
  v15[0] = a1[5];
  v15[1] = v5;
  v15[2] = v6;
  v7 = a1[9];
  v8 = a1[10];
  v16[0] = a1[8];
  v16[1] = v7;
  v16[2] = v8;
  v9 = a1[11];
  v10 = a1[12];
  v11 = a1[13];
  v17[0] = v9;
  v17[1] = v10;
  v17[2] = v11;
  v14[3] = 0;
  v14[4] = 0;
  v15[3] = 0;
  v15[4] = 1065353216;
  v16[3] = 1065353216;
  v16[4] = 1065353216;
  v17[3] = 1065353216;
  v17[4] = 0;
  if ( a3 )
    v12 = 17176;
  else
    v12 = 12824;
  return ((int (__fastcall *)(int, _DWORD *, _DWORD *, _DWORD *, _DWORD *, int, int))sub_607287D4)(
           dword_60CBD830 + v12,
           v14,
           v15,
           v16,
           v17,
           a2,
           3);
}

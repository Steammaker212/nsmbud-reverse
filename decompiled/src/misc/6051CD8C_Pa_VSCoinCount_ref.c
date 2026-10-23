/* Pa_VSCoinCount_ref
 * address: 0x6051CD8C   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_VSCoinCount_ref(_DWORD *a1)
{
  char v1; // r12
  int v3; // r6
  int v4; // r0
  int v5; // r1
  int v6; // r1
  bool v7; // vf
  int v8; // r0
  int v9; // r6
  int v10; // r0
  int v11; // r1
  int v12; // r1
  int v13; // r0
  int v14; // r6
  int v15; // r0
  int v16; // r1
  int v17; // r1
  int v18; // r0
  int v19; // r6
  int result; // r0
  int v21; // r1
  int v22; // r1

  if ( ((unsigned int)&dword_60CA8EE0[2] & ~(1615973800 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA8EE0[2]) )
  {
    dword_60CA8F0C = (int)&sead__SafeStringBase__vtable;
    dword_60CA8F10 = (int)"Pa_VSCoinCount_00";
    dword_60CA8F14 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8F18 = (int)"Pa_VSCoinCount_01";
    dword_60CA8F1C = (int)&sead__SafeStringBase__vtable;
    dword_60CA8F20 = (int)"Pa_VSCoinCount_02";
    dword_60CA8F24 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8F28 = (int)"Pa_VSCoinCount_03";
    sub_60000288();
    _cxa_guard_release(&dword_60CA8EE0[2]);
  }
  v3 = operator_new(0xE54u);
  sub_6050BA40(v3);
  sub_6050BBE4(v3);
  v4 = a1[944];
  v5 = a1[946];
  if ( v5 < v4 )
  {
    a1[946] = v5 + 1;
    v6 = a1[945] + v5;
    v7 = __OFSUB__(v6, v4);
    v8 = v6 - v4;
    if ( v8 < 0 != v7 )
      v8 = v6;
    *(_DWORD *)(a1[943] + 4 * v8) = v3;
  }
  v9 = operator_new(0xE54u);
  sub_6050BA40(v9);
  sub_6050BBE4(v9);
  v10 = a1[944];
  v11 = a1[946];
  if ( v11 < v10 )
  {
    a1[946] = v11 + 1;
    v12 = a1[945] + v11;
    v7 = __OFSUB__(v12, v10);
    v13 = v12 - v10;
    if ( v13 < 0 != v7 )
      v13 = v12;
    *(_DWORD *)(a1[943] + 4 * v13) = v9;
  }
  v14 = operator_new(0xE54u);
  sub_6050BA40(v14);
  sub_6050BBE4(v14);
  v15 = a1[944];
  v16 = a1[946];
  if ( v16 < v15 )
  {
    a1[946] = v16 + 1;
    v17 = a1[945] + v16;
    v7 = __OFSUB__(v17, v15);
    v18 = v17 - v15;
    if ( v18 < 0 != v7 )
      v18 = v17;
    *(_DWORD *)(a1[943] + 4 * v18) = v14;
  }
  v19 = operator_new(0xE54u);
  sub_6050BA40(v19);
  sub_6050BBE4(v19);
  result = a1[944];
  v21 = a1[946];
  if ( v21 < result )
  {
    a1[946] = v21 + 1;
    v22 = a1[945] + v21;
    v7 = __OFSUB__(v22, result);
    result = v22 - result;
    if ( result < 0 != v7 )
      result = v22;
    *(_DWORD *)(a1[943] + 4 * result) = v19;
  }
  return result;
}

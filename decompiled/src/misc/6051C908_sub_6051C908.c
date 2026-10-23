/* sub_6051C908
 * address: 0x6051C908   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051C908(_DWORD *a1)
{
  char v1; // r12
  _DWORD *v3; // r6
  int v4; // r0
  int v5; // r1
  int v6; // r1
  bool v7; // vf
  int v8; // r0
  _DWORD *v9; // r6
  int v10; // r0
  int v11; // r1
  int v12; // r1
  int v13; // r0
  _DWORD *v14; // r6
  int v15; // r0
  int v16; // r1
  int v17; // r1
  int v18; // r0
  _DWORD *v19; // r6
  int result; // r0
  int v21; // r1
  int v22; // r1

  if ( ((unsigned int)dword_60CA8EE0 & ~(1615972640 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CA8EE0) )
  {
    dword_60CA8EEC = (int)&sead__SafeStringBase__vtable;
    dword_60CA8EF0 = (int)"Pa_Icon1P_00";
    dword_60CA8EF4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8EF8 = (int)"Pa_Icon2P_00";
    dword_60CA8EFC = (int)&sead__SafeStringBase__vtable;
    dword_60CA8F00 = (int)"Pa_Icon3P_00";
    dword_60CA8F04 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8F08 = (int)"Pa_Icon4P_00";
    sub_60000288();
    _cxa_guard_release(dword_60CA8EE0);
  }
  v3 = (_DWORD *)operator_new(0xE24u);
  sub_60506DB0((int)v3);
  sub_60506F20(v3, (int)(a1 + 9), &dword_60CA8EEC);
  v4 = a1[920];
  v5 = a1[922];
  if ( v5 < v4 )
  {
    a1[922] = v5 + 1;
    v6 = a1[921] + v5;
    v7 = __OFSUB__(v6, v4);
    v8 = v6 - v4;
    if ( v8 < 0 != v7 )
      v8 = v6;
    *(_DWORD *)(a1[919] + 4 * v8) = v3;
  }
  v9 = (_DWORD *)operator_new(0xE24u);
  sub_60506DB0((int)v9);
  sub_60506F20(v9, (int)(a1 + 9), &dword_60CA8EF4);
  v10 = a1[920];
  v11 = a1[922];
  if ( v11 < v10 )
  {
    a1[922] = v11 + 1;
    v12 = a1[921] + v11;
    v7 = __OFSUB__(v12, v10);
    v13 = v12 - v10;
    if ( v13 < 0 != v7 )
      v13 = v12;
    *(_DWORD *)(a1[919] + 4 * v13) = v9;
  }
  v14 = (_DWORD *)operator_new(0xE24u);
  sub_60506DB0((int)v14);
  sub_60506F20(v14, (int)(a1 + 9), &dword_60CA8EFC);
  v15 = a1[920];
  v16 = a1[922];
  if ( v16 < v15 )
  {
    a1[922] = v16 + 1;
    v17 = a1[921] + v16;
    v7 = __OFSUB__(v17, v15);
    v18 = v17 - v15;
    if ( v18 < 0 != v7 )
      v18 = v17;
    *(_DWORD *)(a1[919] + 4 * v18) = v14;
  }
  v19 = (_DWORD *)operator_new(0xE24u);
  sub_60506DB0((int)v19);
  sub_60506F20(v19, (int)(a1 + 9), &dword_60CA8F04);
  result = a1[920];
  v21 = a1[922];
  if ( v21 < result )
  {
    a1[922] = v21 + 1;
    v22 = a1[921] + v21;
    v7 = __OFSUB__(v22, result);
    result = v22 - result;
    if ( result < 0 != v7 )
      result = v22;
    *(_DWORD *)(a1[919] + 4 * result) = v19;
  }
  return result;
}

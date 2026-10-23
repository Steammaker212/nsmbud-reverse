/* sub_6051CB4C
 * address: 0x6051CB4C   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051CB4C(int a1)
{
  char v1; // r12
  int v3; // r7
  int *v4; // r6
  int v5; // r4
  _DWORD *v6; // r5
  int v7; // r0
  int v8; // r1
  int v9; // r1
  bool v10; // vf
  int v11; // r0
  _DWORD *v12; // r5
  int v13; // r0
  int v14; // r1
  int v15; // r1
  int v16; // r0
  _DWORD *v17; // r5
  int result; // r0
  int v19; // r1
  int v20; // r1

  if ( ((unsigned int)&dword_60CA8EE0[1] & ~(1615973224 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA8EE0[1]) )
  {
    dword_60CA8F2C = (int)&sead__SafeStringBase__vtable;
    dword_60CA8F30 = (int)"Pa_IconA_00";
    dword_60CA8F34 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8F38 = (int)"Pa_IconA_01";
    dword_60CA8F3C = (int)&sead__SafeStringBase__vtable;
    dword_60CA8F40 = (int)"Pa_IconA_02";
    dword_60CA8F44 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8F48 = (int)"Pa_IconB_00";
    dword_60CA8F4C = (int)&sead__SafeStringBase__vtable;
    dword_60CA8F50 = (int)"Pa_IconB_01";
    dword_60CA8F54 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8F58 = (int)"Pa_IconB_02";
    sub_60000288();
    _cxa_guard_release(&dword_60CA8EE0[1]);
  }
  v3 = 0;
  v4 = (int *)(a1 + 3720);
  v5 = a1 + 36;
  do
  {
    v6 = (_DWORD *)operator_new(0xE24u);
    sub_60506DB0((int)v6);
    sub_60506F20(v6, v5, &dword_60CA8EE0[v3 + 19]);
    v7 = *(v4 - 2);
    v8 = *v4;
    if ( *v4 < v7 )
    {
      *v4 = v8 + 1;
      v9 = *(v4 - 1) + v8;
      v10 = __OFSUB__(v9, v7);
      v11 = v9 - v7;
      if ( v11 < 0 != v10 )
        v11 = v9;
      *(_DWORD *)(*(v4 - 3) + 4 * v11) = v6;
    }
    v12 = (_DWORD *)operator_new(0xE24u);
    sub_60506DB0((int)v12);
    sub_60506F20(v12, v5, &dword_60CA8EE0[v3 + 21]);
    v13 = *(v4 - 2);
    v14 = *v4;
    if ( *v4 < v13 )
    {
      *v4 = v14 + 1;
      v15 = *(v4 - 1) + v14;
      v10 = __OFSUB__(v15, v13);
      v16 = v15 - v13;
      if ( v16 < 0 != v10 )
        v16 = v15;
      *(_DWORD *)(*(v4 - 3) + 4 * v16) = v12;
    }
    v17 = (_DWORD *)operator_new(0xE24u);
    sub_60506DB0((int)v17);
    sub_60506F20(v17, v5, &dword_60CA8EE0[v3 + 23]);
    result = *(v4 - 2);
    v19 = *v4;
    if ( *v4 < result )
    {
      *v4 = v19 + 1;
      v20 = *(v4 - 1) + v19;
      v10 = __OFSUB__(v20, result);
      result = v20 - result;
      if ( result < 0 != v10 )
        result = v20;
      *(_DWORD *)(*(v4 - 3) + 4 * result) = v17;
    }
    v3 += 6;
    v4 += 8;
  }
  while ( v3 != 12 );
  return result;
}

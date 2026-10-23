/* sub_607CAFD8
 * address: 0x607CAFD8   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CAFD8(int a1)
{
  char v1; // r12
  int v3; // r6
  int v4; // r7
  int *v5; // r5
  int v6; // r4
  int result; // r0

  if ( ((unsigned int)&dword_60CC536C & ~(1618784240 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC536C) )
  {
    dword_60CC52AC = (int)&sead__SafeStringBase__vtable;
    dword_60CC52B0 = (int)"nw4r_root";
    dword_60CC52B4 = (int)&sead__SafeStringBase__vtable;
    dword_60CC52B8 = (int)"skl_root";
    dword_60CC52BC = (int)&sead__SafeStringBase__vtable;
    dword_60CC52C0 = (int)"legL1";
    dword_60CC52C4 = (int)&sead__SafeStringBase__vtable;
    dword_60CC52C8 = (int)"legL2";
    dword_60CC52CC = (int)&sead__SafeStringBase__vtable;
    dword_60CC52D0 = (int)"ankleL";
    dword_60CC52D4 = (int)&sead__SafeStringBase__vtable;
    dword_60CC52D8 = (int)"legR1";
    dword_60CC52DC = (int)&sead__SafeStringBase__vtable;
    dword_60CC52E0 = (int)"legR2";
    dword_60CC52E4 = (int)&sead__SafeStringBase__vtable;
    dword_60CC52E8 = (int)"ankleR";
    dword_60CC52EC = (int)&sead__SafeStringBase__vtable;
    dword_60CC52F0 = (int)"spine";
    dword_60CC52F4 = (int)&sead__SafeStringBase__vtable;
    dword_60CC52F8 = (int)"armL1";
    dword_60CC52FC = (int)&sead__SafeStringBase__vtable;
    dword_60CC5300 = (int)"armL2";
    dword_60CC5304 = (int)&sead__SafeStringBase__vtable;
    dword_60CC5308 = (int)"armL2";
    dword_60CC530C = (int)&sead__SafeStringBase__vtable;
    dword_60CC5310 = (int)"armR1";
    dword_60CC5314 = (int)&sead__SafeStringBase__vtable;
    dword_60CC5318 = (int)"armR2";
    dword_60CC531C = (int)&sead__SafeStringBase__vtable;
    dword_60CC5320 = (int)"armR2";
    dword_60CC5324 = (int)&sead__SafeStringBase__vtable;
    dword_60CC5328 = (int)"head";
    dword_60CC532C = (int)&sead__SafeStringBase__vtable;
    dword_60CC5330 = (int)"head";
    dword_60CC5334 = (int)&sead__SafeStringBase__vtable;
    dword_60CC5338 = (int)"fukuro_root";
    dword_60CC533C = (int)&sead__SafeStringBase__vtable;
    dword_60CC5340 = (int)"bottom0";
    dword_60CC5344 = (int)&sead__SafeStringBase__vtable;
    dword_60CC5348 = (int)"bottom1";
    dword_60CC534C = (int)&sead__SafeStringBase__vtable;
    dword_60CC5350 = (int)"up0";
    dword_60CC5354 = (int)&sead__SafeStringBase__vtable;
    dword_60CC5358 = (int)"hip";
    dword_60CC535C = (int)&sead__SafeStringBase__vtable;
    dword_60CC5360 = (int)"earL";
    dword_60CC5364 = (int)&sead__SafeStringBase__vtable;
    dword_60CC5368 = (int)"earR";
    sub_60000288();
    _cxa_guard_release(&dword_60CC536C);
  }
  v3 = a1 + 308;
  v4 = 0;
  v5 = &dword_60CC52AC;
  v6 = **(_DWORD **)(a1 + 24);
  do
  {
    result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v6 + 84))(v6, v5);
    *(_DWORD *)(v3 + 4 * v4++) = result;
    v5 += 2;
  }
  while ( v4 != 24 );
  return result;
}

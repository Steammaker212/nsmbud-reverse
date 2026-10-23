/* G_CoinLost_ref
 * address: 0x604E98AC   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall G_CoinLost_ref(int *a1)
{
  char v1; // r12
  unsigned int v3; // r3

  if ( ((unsigned int)dword_60CA5E9C & ~(1615763660 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CA5E9C) )
  {
    dword_60CA5F80[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F84 = (int)"G_CoinLost_00";
    dword_60CA5F88 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F8C = (int)"G_CoinLost_01";
    dword_60CA5F90 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F94 = (int)"G_CoinLost_02";
    dword_60CA5F98 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5F9C = (int)"G_CoinLost_03";
    dword_60CA5FA0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5FA4 = (int)"G_CoinLost_04";
    dword_60CA5FA8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5FAC = (int)"G_CoinLost_05";
    dword_60CA5FB0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5FB4 = (int)"G_CoinLost_06";
    dword_60CA5FB8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5FBC = (int)"G_CoinLost_07";
    dword_60CA5FC0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5FC4 = (int)"G_CoinLost_08";
    dword_60CA5FC8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5FCC = (int)"G_CoinLost_09";
    sub_60000288();
    _cxa_guard_release(dword_60CA5E9C);
  }
  v3 = sub_604746E4(a1[1], &dword_60CA5CF4, &dword_60CA5F80[2 * (a1[1139] - a1[136])]);
  if ( v3 != -1 )
    sub_604742D0((_DWORD *)a1[1], 3u, &dword_60CA5CF4, v3, 1.0, 0);
  return SE_SYS_CH_TARGET_MEDAL_ref(a1, a1[136]);
}

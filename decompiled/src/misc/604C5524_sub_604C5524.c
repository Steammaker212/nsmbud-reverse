/* sub_604C5524
 * address: 0x604C5524   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C5524(int a1)
{
  char v1; // r12
  int v4; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60CA2EF4[2] & ~(1615615300 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2EF4[2]) )
  {
    dword_60CA30D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA30D4 = (int)"P_StarCoinOff_00";
    dword_60CA30D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA30DC = (int)"P_StarCoinOff_01";
    dword_60CA30E0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA30E4 = (int)"P_StarCoinOff_02";
    dword_60CA30E8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA30EC = (int)"P_StarCoinOn_00";
    dword_60CA30F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA30F4 = (int)"P_StarCoinOn_01";
    dword_60CA30F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA30FC = (int)"P_StarCoinOn_02";
    dword_60CA3100 = (int)&sead__SafeStringBase__vtable;
    dword_60CA3104 = (int)"P_ArrowT_00";
    dword_60CA3108 = (int)&sead__SafeStringBase__vtable;
    dword_60CA310C = (int)"P_ArrowU_00";
    dword_60CA3110 = (int)&sead__SafeStringBase__vtable;
    dword_60CA3114 = (int)"P_ArrowL_00";
    dword_60CA3118 = (int)&sead__SafeStringBase__vtable;
    dword_60CA311C = (int)"P_ArrowR_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA2EF4[2]);
  }
  v4 = 10;
  return __Player__applyPowerUpTransform(a1 + 48, a1 + 13796, (int)&dword_60CA30D0, &v4);
}

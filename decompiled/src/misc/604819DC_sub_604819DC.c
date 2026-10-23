/* sub_604819DC
 * address: 0x604819DC   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604819DC(int a1)
{
  _DWORD *v2; // r4
  char v3; // r12
  char v4; // r12
  char v5; // r12
  int v7[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C((int)v2);
  v7[0] = (int)&sead__SafeStringBase__vtable;
  v7[1] = (int)"BonusTime.bflyt";
  message_ref(v2, v7, 0, 0, 0);
  if ( ((unsigned int)dword_60C9EE90 & ~(1615338080 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C9EE90) )
  {
    dword_60C9EE9C = (int)&sead__SafeStringBase__vtable;
    dword_60C9EEA0 = dword_60C9EE04;
    sub_60000288();
    _cxa_guard_release(dword_60C9EE90);
  }
  v7[0] = 1;
  sub_60476030((int)v2, &dword_60C9EE9C, v7);
  if ( ((unsigned int)&dword_60C9EE90[1] & ~(1615338220 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C9EE90[1]) )
  {
    dword_60C9EEA4 = (int)&sead__SafeStringBase__vtable;
    dword_60C9EEA8 = (int)"N_All_00";
    dword_60C9EEAC = (int)&sead__SafeStringBase__vtable;
    dword_60C9EEB0 = (int)"N_BonusTime_00";
    sub_60000288();
    _cxa_guard_release(&dword_60C9EE90[1]);
  }
  v7[0] = 2;
  sub_6047518C((int)v2, a1 + 3588, &dword_60C9EEA4, v7);
  if ( ((unsigned int)&dword_60C9EE90[2] & ~(1615338384 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C9EE90[2]) )
  {
    dword_60C9EEB4 = (int)&sead__SafeStringBase__vtable;
    dword_60C9EEB8 = (int)"T_BonusTime_00";
    dword_60C9EEBC = (int)&sead__SafeStringBase__vtable;
    dword_60C9EEC0 = (int)"T_BonusFlash_00";
    sub_60000288();
    _cxa_guard_release(&dword_60C9EE90[2]);
  }
  v7[0] = 2;
  return sub_60475334((int)v2, a1 + 3596, &dword_60C9EEB4, v7);
}

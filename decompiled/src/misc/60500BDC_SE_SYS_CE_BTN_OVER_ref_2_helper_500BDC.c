/* SE_SYS_CE_BTN_OVER_ref_2_helper_500BDC
 * address: 0x60500BDC   size: 948   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CE_BTN_OVER_ref_2_helper_500BDC(int a1)
{
  char v1; // r12
  char v3; // r12
  char v4; // r12
  char v5; // r12
  char v6; // r12
  int v8[9]; // [sp+4h] [bp-24h] BYREF

  if ( ((unsigned int)&dword_60CA7598[1] & ~(1615858684 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7598[1]) )
  {
    dword_60CA7630 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7634 = (int)"Pa_BtnR_00";
    dword_60CA7638 = (int)&sead__SafeStringBase__vtable;
    dword_60CA763C = (int)"Pa_BtnL_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA7598[1]);
  }
  v8[0] = 2;
  sub_604756E0(a1 + 40, a1 + 5688, &dword_60CA7630, v8);
  if ( ((unsigned int)&dword_60CA7598[2] & ~(1615858864 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7598[2]) )
  {
    dword_60CA75C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA75C4 = (int)"N_null_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA7598[2]);
  }
  v8[0] = 1;
  sub_6047518C(a1 + 40, a1 + 5668, &dword_60CA75C0, v8);
  if ( ((unsigned int)&dword_60CA7598[3] & ~(1615859012 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7598[3]) )
  {
    dword_60CA7640 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7644 = (int)"T_OverlayDialog_00";
    dword_60CA7648 = (int)&sead__SafeStringBase__vtable;
    dword_60CA764C = (int)"T_OverlayDialog_01";
    sub_60000288();
    _cxa_guard_release(&dword_60CA7598[3]);
  }
  v8[0] = 2;
  sub_60475334(a1 + 40, a1 + 5672, &dword_60CA7640, v8);
  if ( ((unsigned int)&dword_60CA7598[4] & ~(1615859192 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7598[4]) )
  {
    dword_60CA75C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA75CC = (int)"T_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA7598[4]);
  }
  v8[0] = 1;
  sub_60475570(a1 + 40, a1 + 5680, &dword_60CA7630, (int)&dword_60CA75C8, v8);
  v8[0] = 1;
  sub_60475570(a1 + 40, a1 + 5684, &dword_60CA7638, (int)&dword_60CA75C8, v8);
  if ( ((unsigned int)&dword_60CA7598[5] & ~(1615859388 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7598[5]) )
  {
    dword_60CA75D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA75D4 = (int)"P_Back_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA7598[5]);
  }
  v8[0] = 1;
  __Player__applyPowerUpTransform(a1 + 40, a1 + 5696, (int)&dword_60CA75D0, v8);
  sub_6045BF58(a1 + 5700, 0);
  sub_6045BF58(a1 + 6104, 1);
  sub_6045BF58(a1 + 6508, 2);
  sub_6045BF58(a1 + 6912, 3);
  return sub_6045BF58(a1 + 7316, 4);
}

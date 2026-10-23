/* sub_6069BB38
 * address: 0x6069BB38   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069BB38(_DWORD *a1, int a2, int a3, float a4, float a5, float a6)
{
  char v6; // r12

  if ( ((unsigned int)dword_60CB95C0 & ~(1617541992 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60CB95C0) )
  {
    dword_60CB95CC = (int)&sead__SafeStringBase__vtable;
    dword_60CB95D0 = (int)"mt_senter_s";
    sub_60000288();
    _cxa_guard_release(dword_60CB95C0);
  }
  if ( ((unsigned int)&dword_60CB95C0[1] & ~(1617542104 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CB95C0[1]) )
  {
    dword_60CB95D4 = (int)&sead__SafeStringBase__vtable;
    dword_60CB95D8 = (int)"mt_senter";
    sub_60000288();
    _cxa_guard_release(&dword_60CB95C0[1]);
  }
  if ( ((unsigned int)&dword_60CB95C0[2] & ~(1617542220 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CB95C0[2]) )
  {
    dword_60CB95E0[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CB95E4 = (int)"obj_kinoko_s_L";
    dword_60CB95E8 = (int)&sead__SafeStringBase__vtable;
    dword_60CB95EC = (int)"obj_kinoko_s_M";
    dword_60CB95F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CB95F4 = (int)"obj_kinoko_s_R";
    dword_60CB95F8 = (int)&dword_60CB95CC;
    dword_60CB95FC = 1090519040;
    byte_60CB9600 = 1;
    byte_60CB9601 = 0;
    byte_60CB9602 = 0;
    dword_60CB9604 = (int)&sead__SafeStringBase__vtable;
    dword_60CB9608 = (int)"obj_kinoko_s_LR";
    dword_60CB960C = (int)&sead__SafeStringBase__vtable;
    dword_60CB9610 = (int)"obj_kinoko_s_M";
    dword_60CB9614 = (int)&sead__SafeStringBase__vtable;
    dword_60CB9618 = (int)"obj_kinoko_L";
    dword_60CB961C = (int)&sead__SafeStringBase__vtable;
    dword_60CB9620 = (int)"obj_kinoko_M";
    dword_60CB9624 = (int)&sead__SafeStringBase__vtable;
    dword_60CB9628 = (int)"obj_kinoko_R";
    dword_60CB962C = (int)&dword_60CB95D4;
    dword_60CB9630 = 1098907648;
    byte_60CB9634 = 1;
    byte_60CB9635 = 0;
    byte_60CB9636 = 0;
    dword_60CB9638 = (int)&sead__SafeStringBase__vtable;
    dword_60CB963C = (int)"obj_kinoko_LR";
    dword_60CB9640 = (int)&sead__SafeStringBase__vtable;
    dword_60CB9644 = (int)"obj_kinoko_M";
    sub_60000288();
    _cxa_guard_release(&dword_60CB95C0[2]);
  }
  return sub_6063031C(a1, 0, a2, (int)&dword_60CB95E0[13 * a3], a4, a5, a6);
}

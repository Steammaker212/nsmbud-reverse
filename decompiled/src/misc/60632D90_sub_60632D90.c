/* sub_60632D90
 * address: 0x60632D90   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60632D90(int a1, int a2, char a3, float a4, float a5, float a6)
{
  char v10; // r12

  FIELD_U8(a1, 744) = a3;
  sub_60630E00((int *)a1, a5, a6);
  if ( ((unsigned int)dword_60CB42F0 & ~(1617112520 << v10) & 1) == 0 && _cxa_guard_acquire(dword_60CB42F0) )
  {
    dword_60CB42F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CB42FC = (int)"mt_yogan_kinokoA";
    sub_60000288();
    _cxa_guard_release(dword_60CB42F0);
  }
  if ( ((unsigned int)&dword_60CB42F0[1] & ~(1617112632 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60CB42F0[1]) )
  {
    dword_60CB4300 = (int)&sead__SafeStringBase__vtable;
    dword_60CB4304 = (int)"lift_kinoko_sora_A_L";
    dword_60CB4308 = (int)&sead__SafeStringBase__vtable;
    dword_60CB430C = (int)"lift_kinoko_sora_A_M";
    dword_60CB4310 = (int)&sead__SafeStringBase__vtable;
    dword_60CB4314 = (int)"lift_kinoko_sora_A_R";
    dword_60CB4318 = (int)&dword_60CB42F8;
    dword_60CB431C = 1090519040;
    byte_60CB4320 = 1;
    byte_60CB4321 = 0;
    byte_60CB4322 = 0;
    dword_60CB4324 = (int)&sead__SafeStringBase__vtable;
    dword_60CB4328 = (int)"lift_kinoko_sora_A_side";
    dword_60CB432C = (int)&sead__SafeStringBase__vtable;
    dword_60CB4330 = (int)"lift_kinoko_sora_A_M";
    sub_60000288();
    _cxa_guard_release(&dword_60CB42F0[1]);
  }
  return sub_6063031C((_DWORD *)(a1 + 724), 0, a2, (int)&dword_60CB4300, a4, a6, 1.0);
}

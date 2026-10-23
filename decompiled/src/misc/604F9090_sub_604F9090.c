/* sub_604F9090
 * address: 0x604F9090   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F9090(int a1)
{
  char v1; // r12
  int v4; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)dword_60CA6C58 & ~(1615827116 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CA6C58) )
  {
    dword_60CA6BB8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6BBC = (int)"P_Kinoko_00";
    dword_60CA6BC0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6BC4 = (int)"P_FireFlower_00";
    dword_60CA6BC8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6BCC = (int)"P_Penguin_00";
    dword_60CA6BD0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6BD4 = (int)"P_Star_00";
    dword_60CA6BD8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6BDC = (int)"P_IceFlower_00";
    dword_60CA6BE0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6BE4 = (int)"P_MameKinoko_00";
    dword_60CA6BE8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6BEC = (int)"P_Propeller_00";
    dword_60CA6BF0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6BF4 = (int)"P_NutKinoko_00";
    dword_60CA6BF8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6BFC = (int)"P_PNutKinoko_00";
    dword_60CA6C00 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6C04 = (int)"P_PeachCrown_00";
    dword_60CA6C08 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6C0C = (int)"P_Kinoko_01";
    dword_60CA6C10 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6C14 = (int)"P_FireFlower_01";
    dword_60CA6C18 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6C1C = (int)"P_Penguin_01";
    dword_60CA6C20 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6C24 = (int)"P_Star_01";
    dword_60CA6C28 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6C2C = (int)"P_IceFlower_01";
    dword_60CA6C30 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6C34 = (int)"P_MameKinoko_01";
    dword_60CA6C38 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6C3C = (int)"P_Propeller_01";
    dword_60CA6C40 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6C44 = (int)"P_NutKinoko_01";
    dword_60CA6C48 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6C4C = (int)"P_PNutKinoko_01";
    dword_60CA6C50 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6C54 = (int)"P_PeachCrown_01";
    sub_60000288();
    _cxa_guard_release(dword_60CA6C58);
  }
  v4 = 20;
  return __Player__applyPowerUpTransform(a1, a1 + 3632, (int)&dword_60CA6BB8, &v4);
}

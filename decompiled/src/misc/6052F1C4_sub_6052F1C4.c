/* sub_6052F1C4
 * address: 0x6052F1C4   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052F1C4(int a1)
{
  char v1; // r12
  int v4; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60CAA970 & ~(1616048608 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA970) )
  {
    dword_60CAA8C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA8C4 = (int)"P_Kinoko_00";
    dword_60CAA8C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA8CC = (int)"P_FireFlower_00";
    dword_60CAA8D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA8D4 = (int)"P_IceFlower_00";
    dword_60CAA8D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA8DC = (int)"P_Penguin_00";
    dword_60CAA8E0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA8E4 = (int)"P_Propeller_00";
    dword_60CAA8E8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA8EC = (int)"P_MameKinoko_00";
    dword_60CAA8F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA8F4 = (int)"P_Star_00";
    dword_60CAA8F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA8FC = (int)"P_NutKinoko_00";
    dword_60CAA900 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA904 = (int)"P_PeachCrown_00";
    dword_60CAA908 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA90C = (int)"P_3UPMoon_00";
    dword_60CAA910 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA914 = (int)"P_1UPKinoko_00";
    dword_60CAA918 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA91C = (int)"P_Kinoko_01";
    dword_60CAA920 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA924 = (int)"P_FireFlower_01";
    dword_60CAA928 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA92C = (int)"P_IceFlower_01";
    dword_60CAA930 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA934 = (int)"P_Penguin_01";
    dword_60CAA938 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA93C = (int)"P_Propeller_01";
    dword_60CAA940 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA944 = (int)"P_MameKinoko_01";
    dword_60CAA948 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA94C = (int)"P_Star_01";
    dword_60CAA950 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA954 = (int)"P_NutKinoko_01";
    dword_60CAA958 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA95C = (int)"P_PeachCrown_01";
    dword_60CAA960 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA964 = (int)"P_3UPMoon_01";
    dword_60CAA968 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA96C = (int)"P_1UPKinoko_01";
    sub_60000288();
    _cxa_guard_release(&dword_60CAA970);
  }
  v4 = 22;
  return __Player__applyPowerUpTransform(a1 + 40, a1 + 3672, (int)&dword_60CAA8C0, &v4);
}

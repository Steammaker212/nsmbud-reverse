/* sub_604F8E9C
 * address: 0x604F8E9C   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F8E9C(int a1)
{
  char v1; // r12
  int v4; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60CA6BB4 & ~(1615826616 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6BB4) )
  {
    dword_60CA6B34 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6B38 = (int)"N_DelItem_00";
    dword_60CA6B3C = (int)&sead__SafeStringBase__vtable;
    dword_60CA6B40 = (int)"N_DelItemPos1_00";
    dword_60CA6B44 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6B48 = (int)"N_DelItemPos2_00";
    dword_60CA6B4C = (int)&sead__SafeStringBase__vtable;
    dword_60CA6B50 = (int)"N_DelItemPos2_01";
    dword_60CA6B54 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6B58 = (int)"N_DelItemPos3_00";
    dword_60CA6B5C = (int)&sead__SafeStringBase__vtable;
    dword_60CA6B60 = (int)"N_DelItemPos3_01";
    dword_60CA6B64 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6B68 = (int)"N_DelItemPos3_02";
    dword_60CA6B6C = (int)&sead__SafeStringBase__vtable;
    dword_60CA6B70 = (int)"N_DelItemPos4_00";
    dword_60CA6B74 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6B78 = (int)"N_DelItemPos4_01";
    dword_60CA6B7C = (int)&sead__SafeStringBase__vtable;
    dword_60CA6B80 = (int)"N_DelItemPos4_02";
    dword_60CA6B84 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6B88 = (int)"N_DelItemPos4_03";
    dword_60CA6B8C = (int)&sead__SafeStringBase__vtable;
    dword_60CA6B90 = (int)"N_DelItemPos5_00";
    dword_60CA6B94 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6B98 = (int)"N_DelItemPos5_01";
    dword_60CA6B9C = (int)&sead__SafeStringBase__vtable;
    dword_60CA6BA0 = (int)"N_DelItemPos5_02";
    dword_60CA6BA4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6BA8 = (int)"N_DelItemPos5_03";
    dword_60CA6BAC = (int)&sead__SafeStringBase__vtable;
    dword_60CA6BB0 = (int)"N_DelItemPos5_04";
    sub_60000288();
    _cxa_guard_release(&dword_60CA6BB4);
  }
  v4 = 16;
  return sub_6047518C(a1, a1 + 3568, &dword_60CA6B34, &v4);
}

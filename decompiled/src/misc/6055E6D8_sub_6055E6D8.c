/* sub_6055E6D8
 * address: 0x6055E6D8   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055E6D8(int a1)
{
  char v1; // r12
  int v4; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60CADFF0 & ~(1616242420 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CADFF0) )
  {
    dword_60CADF30 = (int)&sead__SafeStringBase__vtable;
    dword_60CADF34 = (int)"P_Map_00";
    dword_60CADF38 = (int)&sead__SafeStringBase__vtable;
    dword_60CADF3C = (int)"P_Map_01";
    dword_60CADF40 = (int)&sead__SafeStringBase__vtable;
    dword_60CADF44 = (int)"P_Map_02";
    dword_60CADF48 = (int)&sead__SafeStringBase__vtable;
    dword_60CADF4C = (int)"P_W1On_00";
    dword_60CADF50 = (int)&sead__SafeStringBase__vtable;
    dword_60CADF54 = (int)"P_W1Off_00";
    dword_60CADF58 = (int)&sead__SafeStringBase__vtable;
    dword_60CADF5C = (int)"P_W2On_00";
    dword_60CADF60 = (int)&sead__SafeStringBase__vtable;
    dword_60CADF64 = (int)"P_W2Off_00";
    dword_60CADF68 = (int)&sead__SafeStringBase__vtable;
    dword_60CADF6C = (int)"P_W3On_00";
    dword_60CADF70 = (int)&sead__SafeStringBase__vtable;
    dword_60CADF74 = (int)"P_W3Off_00";
    dword_60CADF78 = (int)&sead__SafeStringBase__vtable;
    dword_60CADF7C = (int)"P_W4On_00";
    dword_60CADF80 = (int)&sead__SafeStringBase__vtable;
    dword_60CADF84 = (int)"P_W4Off_00";
    dword_60CADF88 = (int)&sead__SafeStringBase__vtable;
    dword_60CADF8C = (int)"P_W5On_00";
    dword_60CADF90 = (int)&sead__SafeStringBase__vtable;
    dword_60CADF94 = (int)"P_W5Off_00";
    dword_60CADF98 = (int)&sead__SafeStringBase__vtable;
    dword_60CADF9C = (int)"P_W6On_00";
    dword_60CADFA0 = (int)&sead__SafeStringBase__vtable;
    dword_60CADFA4 = (int)"P_W6Off_00";
    dword_60CADFA8 = (int)&sead__SafeStringBase__vtable;
    dword_60CADFAC = (int)"P_W7On_00";
    dword_60CADFB0 = (int)&sead__SafeStringBase__vtable;
    dword_60CADFB4 = (int)"P_W7Off_00";
    dword_60CADFB8 = (int)&sead__SafeStringBase__vtable;
    dword_60CADFBC = (int)"P_W8On_00";
    dword_60CADFC0 = (int)&sead__SafeStringBase__vtable;
    dword_60CADFC4 = (int)"P_W8Off_00";
    dword_60CADFC8 = (int)&sead__SafeStringBase__vtable;
    dword_60CADFCC = (int)"P_W9On_00";
    dword_60CADFD0 = (int)&sead__SafeStringBase__vtable;
    dword_60CADFD4 = (int)"P_W9Off_00";
    dword_60CADFD8 = (int)&sead__SafeStringBase__vtable;
    dword_60CADFDC = (int)"P_ShadowOn_00";
    dword_60CADFE0 = (int)&sead__SafeStringBase__vtable;
    dword_60CADFE4 = (int)"P_ShadowOff_00";
    dword_60CADFE8 = (int)&sead__SafeStringBase__vtable;
    dword_60CADFEC = (int)"P_Icon_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CADFF0);
  }
  v4 = 24;
  return __Player__applyPowerUpTransform(a1 + 44, a1 + 13460, (int)&dword_60CADF30, &v4);
}

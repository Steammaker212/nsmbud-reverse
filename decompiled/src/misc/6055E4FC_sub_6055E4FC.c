/* sub_6055E4FC
 * address: 0x6055E4FC   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055E4FC(int a1)
{
  char v1; // r12
  int v4; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60CAE040[1] & ~(1616241948 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE040[1]) )
  {
    dword_60CAE110 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE114 = (int)"N_All_00";
    dword_60CAE118 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE11C = (int)"N_Select_00";
    dword_60CAE120 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE124 = (int)"N_SelectText_00";
    dword_60CAE128 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE12C = (int)"N_W1_00";
    dword_60CAE130 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE134 = (int)"N_W2_00";
    dword_60CAE138 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE13C = (int)"N_W3_00";
    dword_60CAE140 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE144 = (int)"N_W4_00";
    dword_60CAE148 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE14C = (int)"N_W5_00";
    dword_60CAE150 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE154 = (int)"N_W6_00";
    dword_60CAE158 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE15C = (int)"N_W7_00";
    dword_60CAE160 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE164 = (int)"N_W8_00";
    dword_60CAE168 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE16C = (int)"N_W9_00";
    dword_60CAE170 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE174 = (int)"N_Shadow_00";
    dword_60CAE178 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE17C = (int)"N_Point_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAE040[1]);
  }
  v4 = 14;
  return sub_6047518C(a1 + 44, a1 + 13392, &dword_60CAE110, &v4);
}

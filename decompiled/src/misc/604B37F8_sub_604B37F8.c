/* sub_604B37F8
 * address: 0x604B37F8   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B37F8(int a1)
{
  char v1; // r12
  int v3; // r0
  int v5; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60CA1BE0[2] & ~(1615542296 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1BE0[2]) )
  {
    dword_60CA1CD0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1CD4 = (int)"N_Btn_00";
    dword_60CA1CD8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1CDC = (int)"N_AreaGuide_00";
    dword_60CA1CE0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1CE4 = (int)"N_Area_00";
    dword_60CA1CE8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1CEC = (int)"N_Area_01";
    dword_60CA1CF0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1CF4 = (int)"N_Area_02";
    dword_60CA1CF8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1CFC = (int)"N_GoalArea_00";
    dword_60CA1D00 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1D04 = (int)"N_TopArea_00";
    dword_60CA1D08 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1D0C = (int)"N_BottomArea_00";
    dword_60CA1D10 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1D14 = (int)"N_ArrowR_00";
    dword_60CA1D18 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1D1C = (int)"N_ArrowL_00";
    dword_60CA1D20 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1D24 = (int)"N_ArrowT_00";
    dword_60CA1D28 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1D2C = (int)"N_ArrowB_00";
    dword_60CA1D30 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1D34 = (int)"N_TopBottom_01";
    sub_60000288();
    _cxa_guard_release(&dword_60CA1BE0[2]);
  }
  v3 = FIELD_U32(a1, 4);
  v5 = 13;
  return sub_6047518C(v3, a1 + 532, &dword_60CA1CD0, &v5);
}

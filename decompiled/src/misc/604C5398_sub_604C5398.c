/* sub_604C5398
 * address: 0x604C5398   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C5398(int a1)
{
  char v1; // r12
  int v4; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60CA2EF4[1] & ~(1615614904 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2EF4[1]) )
  {
    dword_60CA3080 = (int)&sead__SafeStringBase__vtable;
    dword_60CA3084 = (int)"N_WorldCourse_00";
    dword_60CA3088 = (int)&sead__SafeStringBase__vtable;
    dword_60CA308C = (int)"N_CourseName_00";
    dword_60CA3090 = (int)&sead__SafeStringBase__vtable;
    dword_60CA3094 = (int)"N_StarCoinNum_00";
    dword_60CA3098 = (int)&sead__SafeStringBase__vtable;
    dword_60CA309C = (int)"N_MiddleFlag_00";
    dword_60CA30A0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA30A4 = (int)"N_Zanki_00";
    dword_60CA30A8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA30AC = (int)"N_Camera_00";
    dword_60CA30B0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA30B4 = (int)"N_Return_00";
    dword_60CA30B8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA30BC = (int)"N_Menu_00";
    dword_60CA30C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA30C4 = (int)"N_Item_00";
    dword_60CA30C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA30CC = (int)"N_Zoom_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA2EF4[1]);
  }
  v4 = 10;
  return sub_6047518C(a1 + 48, a1 + 13756, &dword_60CA3080, &v4);
}

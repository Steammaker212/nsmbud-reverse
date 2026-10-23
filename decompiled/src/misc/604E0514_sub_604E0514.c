/* sub_604E0514
 * address: 0x604E0514   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E0514(int a1)
{
  char v1; // r12
  int v4; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60CA5358[1] & ~(1615725876 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA5358[1]) )
  {
    dword_60CA53A0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA53A4 = (int)"T_CompleteIndex_00";
    dword_60CA53A8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA53AC = (int)"T_CompleteIndex_01";
    dword_60CA53B0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA53B4 = (int)"T_Complete_00";
    dword_60CA53B8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA53BC = (int)"T_Complete_01";
    dword_60CA53C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA53C4 = (int)"T_DokanIndex_00";
    dword_60CA53C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA53CC = (int)"T_DokanIndex_01";
    dword_60CA53D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA53D4 = (int)"T_Dokan_00";
    dword_60CA53D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA53DC = (int)"T_Dokan_01";
    sub_60000288();
    _cxa_guard_release(&dword_60CA5358[1]);
  }
  v4 = 8;
  return sub_60475334(a1 + 40, a1 + 4028, &dword_60CA53A0, &v4);
}

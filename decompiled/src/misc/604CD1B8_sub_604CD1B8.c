/* sub_604CD1B8
 * address: 0x604CD1B8   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604CD1B8(int a1)
{
  char v1; // r12
  int v4; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60CA4D00[4] & ~(1615647192 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D00[4]) )
  {
    dword_60CA4F50 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F54 = (int)"Mode";
    dword_60CA4F58 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F5C = (int)"ScrollToR";
    dword_60CA4F60 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F64 = (int)"ScrollToL";
    dword_60CA4F68 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F6C = (int)"InOutMenuBtn";
    dword_60CA4F70 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F74 = (int)"PlayerNum";
    dword_60CA4F78 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F7C = (int)"1vs2";
    dword_60CA4F80 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F84 = (int)"1vs3";
    dword_60CA4F88 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F8C = (int)"2vs1";
    dword_60CA4F90 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F94 = (int)"2vs2";
    dword_60CA4F98 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4F9C = (int)"3vs1";
    dword_60CA4FA0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4FA4 = (int)"Select";
    dword_60CA4FA8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4FAC = (int)"Loop";
    dword_60CA4FB0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA4FB4 = (int)"LoopArrow";
    sub_60000288();
    _cxa_guard_release(&dword_60CA4D00[4]);
  }
  v4 = 13;
  return sub_60476030(a1 + 40, &dword_60CA4F50, &v4);
}

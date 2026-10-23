/* sub_60552E98
 * address: 0x60552E98   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60552E98(int a1)
{
  char v1; // r12
  int v4[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( ((unsigned int)&dword_60CAD1B0[1] & ~(1616195256 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD1B0[1]) )
  {
    dword_60CAD210 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD214 = (int)"B_Arrow_00";
    dword_60CAD218 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD21C = (int)"B_Arrow_00";
    dword_60CAD220 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD224 = (int)"B_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAD1B0[1]);
  }
  if ( ((unsigned int)&dword_60CAD1B0[2] & ~(1616195404 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD1B0[2]) )
  {
    dword_60CAD228 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD22C = (int)"Pa_ArrowBtnL_00";
    dword_60CAD230 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD234 = (int)"Pa_ArrowBtnR_00";
    dword_60CAD238 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD23C = (int)"Pa_Close_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAD1B0[2]);
  }
  v4[0] = 1;
  sub_604755C4(a1 + 44, a1 + 19920, &dword_60CAD228, (int)&dword_60CAD210, v4);
  v4[0] = 1;
  sub_604755C4(a1 + 44, a1 + 19924, &dword_60CAD230, (int)&dword_60CAD218, v4);
  v4[0] = 1;
  return sub_604755C4(a1 + 44, a1 + 19928, &dword_60CAD238, (int)&dword_60CAD220, v4);
}

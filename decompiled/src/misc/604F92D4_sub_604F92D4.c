/* sub_604F92D4
 * address: 0x604F92D4   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F92D4(int a1)
{
  char v1; // r12
  int v4[6]; // [sp+0h] [bp-18h] BYREF

  if ( ((unsigned int)&dword_60CA6C60[16] & ~(1615827700 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6C60[16]) )
  {
    dword_60CA6D30 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D34 = (int)"Pa_BtnL_00";
    dword_60CA6D38 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D3C = (int)"Pa_BtnR_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA6C60[16]);
  }
  v4[0] = 2;
  sub_604756E0(a1, a1 + 3712, &dword_60CA6D30, v4);
  v4[0] = 0;
  sub_60502210(a1 + 3720, v4, 9);
  v4[0] = (int)&sead__SafeStringBase__vtable;
  v4[1] = (int)"ItemStockConfirm";
  sead__SafeStringBase__operator_assign(a1 + 4732, (int)v4);
  v4[0] = 0;
  return sub_605029FC(a1 + 3720, v4, "SE_SYS_BACK");
}

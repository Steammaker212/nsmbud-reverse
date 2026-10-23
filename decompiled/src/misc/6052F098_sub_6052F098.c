/* sub_6052F098
 * address: 0x6052F098   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052F098(int a1)
{
  char v1; // r12
  _DWORD v4[2]; // [sp+4h] [bp-1Ch] BYREF
  int v5; // [sp+Ch] [bp-14h] BYREF

  if ( ((unsigned int)&dword_60CAAA74[1] & ~(1616048312 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAAA74[1]) )
  {
    dword_60CAAAA4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAAA8 = (int)"T_Text_00";
    dword_60CAAAAC = (int)&sead__SafeStringBase__vtable;
    dword_60CAAAB0 = (int)"T_ItemNum_00";
    dword_60CAAAB4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAAB8 = (int)"T_ItemNum_01";
    sub_60000288();
    _cxa_guard_release(&dword_60CAAA74[1]);
  }
  v5 = 3;
  sub_60475334(a1 + 40, a1 + 3660, &dword_60CAAAA4, &v5);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "ResultMiniGame_Text_00";
  return sub_6047E0EC(v4, FIELD_U32(a1, 3660), 0);
}

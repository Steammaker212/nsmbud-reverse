/* T_Text_ref
 * address: 0x6054FF28   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall T_Text_ref(int a1)
{
  char v1; // r12
  char v3; // r12
  int v4; // [sp+4h] [bp-14h] BYREF

  if ( ((unsigned int)&dword_60CACF60[1] & ~(1616183112 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CACF60[1]) )
  {
    dword_60CACF84 = (int)&sead__SafeStringBase__vtable;
    dword_60CACF88 = (int)"T_Text_00";
    dword_60CACF8C = (int)&sead__SafeStringBase__vtable;
    dword_60CACF90 = (int)"T_Text_01";
    dword_60CACF94 = (int)&sead__SafeStringBase__vtable;
    dword_60CACF98 = (int)"T_Text_02";
    dword_60CACF9C = (int)&sead__SafeStringBase__vtable;
    dword_60CACFA0 = (int)"T_Text_03";
    dword_60CACFA4 = (int)&sead__SafeStringBase__vtable;
    dword_60CACFA8 = (int)"T_Text_04";
    sub_60000288();
    _cxa_guard_release(&dword_60CACF60[1]);
  }
  v4 = 5;
  sub_60475334(a1 + 40, a1 + 3588, &dword_60CACF84, &v4);
  if ( ((unsigned int)&dword_60CACF60[2] & ~(1616183324 << v3) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CACF60[2]) )
    {
      dword_60CACF74 = (int)&sead__SafeStringBase__vtable;
      dword_60CACF78 = dword_60CACF0C;
      dword_60CACF7C = (int)&sead__SafeStringBase__vtable;
      dword_60CACF80 = dword_60CACF14;
      sub_60000288();
      _cxa_guard_release(&dword_60CACF60[2]);
    }
  }
}

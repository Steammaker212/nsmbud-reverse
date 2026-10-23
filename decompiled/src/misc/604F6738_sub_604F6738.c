/* sub_604F6738
 * address: 0x604F6738   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604F6738(int a1)
{
  char v1; // r12
  char v3; // r12
  int v4; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60CA6C60[4] & ~(1615816536 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6C60[4]) )
  {
    dword_60CA6D00 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D04 = (int)"T_DelItem_00";
    dword_60CA6D08 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D0C = (int)"T_AddItem_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA6C60[4]);
  }
  v4 = 2;
  sub_60475334(a1 + 40, a1 + 3588, &dword_60CA6D00, &v4);
  if ( ((unsigned int)&dword_60CA6C60[5] & ~(1615816716 << v3) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CA6C60[5]) )
    {
      dword_60CA6D10 = (int)&sead__SafeStringBase__vtable;
      dword_60CA6D14 = (int)"ItemStock_DelItem_00";
      dword_60CA6D18 = (int)&sead__SafeStringBase__vtable;
      dword_60CA6D1C = (int)"ItemStock_DelItem_01";
      sub_60000288();
      _cxa_guard_release(&dword_60CA6C60[5]);
    }
  }
}

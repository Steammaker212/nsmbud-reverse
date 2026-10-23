/* sub_60483C58
 * address: 0x60483C58   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60483C58(int a1)
{
  char v1; // r12
  int v4; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60C9F118[1] & ~(1615346808 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9F118[1]) )
  {
    dword_60C9F1F0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F1F4 = (int)"T_AllComplete_00";
    dword_60C9F1F8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F1FC = (int)"T_GoldComplete_00";
    dword_60C9F200 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F204 = (int)"T_SilverComplete_00";
    dword_60C9F208 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F20C = (int)"T_BronzeComplete_00";
    dword_60C9F210 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F214 = (int)"T_AllComplete_01";
    dword_60C9F218 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F21C = (int)"T_GoldComplete_01";
    dword_60C9F220 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F224 = (int)"T_SilverComplete_01";
    dword_60C9F228 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F22C = (int)"T_BronzeComplete_01";
    sub_60000288();
    _cxa_guard_release(&dword_60C9F118[1]);
  }
  v4 = 8;
  return sub_60475334(a1 + 40, a1 + 3604, &dword_60C9F1F0, &v4);
}

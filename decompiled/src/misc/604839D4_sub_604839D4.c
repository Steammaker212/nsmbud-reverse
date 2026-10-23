/* sub_604839D4
 * address: 0x604839D4   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604839D4(int a1, int a2)
{
  char v3; // r12
  int v5; // [sp+4h] [bp-Ch] BYREF

  FIELD_U32(a1, 3640) = a2;
  sub_60483AF8();
  if ( ((unsigned int)dword_60C9F118 & ~(1615346172 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C9F118) )
  {
    dword_60C9F1D0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F1D4 = (int)"N_AllComplete_00";
    dword_60C9F1D8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F1DC = (int)"N_GoldComplete_00";
    dword_60C9F1E0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F1E4 = (int)"N_SilverComplete_00";
    dword_60C9F1E8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F1EC = (int)"N_BronzeComplete_00";
    sub_60000288();
    _cxa_guard_release(dword_60C9F118);
  }
  v5 = 4;
  sub_6047518C(a1 + 40, a1 + 3588, &dword_60C9F1D0, &v5);
  return sub_60483C58(a1);
}

/* sub_60558180
 * address: 0x60558180   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60558180(int a1, char a2)
{
  _DWORD *v2; // r4
  char v3; // r12
  int v5[6]; // [sp+8h] [bp-18h] BYREF

  v2 = (_DWORD *)(a1 + 40);
  FIELD_U8(a1, 3689) = a2;
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C((int)v2);
  v5[0] = (int)&sead__SafeStringBase__vtable;
  v5[1] = (int)"TeamSelectGround.bflyt";
  message_ref(v2, v5, 0, 0, 0);
  if ( ((unsigned int)dword_60CAD760 & ~(1616216580 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CAD760) )
  {
    dword_60CAD768 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD76C = dword_60CAD66C;
    dword_60CAD770 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD774 = dword_60CAD674;
    sub_60000288();
    _cxa_guard_release(dword_60CAD760);
  }
  v5[0] = 2;
  return sub_60476030((int)v2, &dword_60CAD768, v5);
}

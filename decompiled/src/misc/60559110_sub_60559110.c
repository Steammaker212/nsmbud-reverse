/* sub_60559110
 * address: 0x60559110   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60559110(int a1)
{
  _DWORD *v1; // r4
  char v2; // r12
  int v4[6]; // [sp+8h] [bp-18h] BYREF

  v1 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C((int)v1);
  v4[0] = (int)&sead__SafeStringBase__vtable;
  v4[1] = (int)"TheEnd.bflyt";
  message_ref(v1, v4, 0, 0, 0);
  if ( ((unsigned int)&dword_60CAD8F0 & ~(1616220560 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD8F0) )
  {
    dword_60CAD8F4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD8F8 = dword_60CAD860;
    dword_60CAD8FC = (int)&sead__SafeStringBase__vtable;
    dword_60CAD900 = dword_60CAD868;
    sub_60000288();
    _cxa_guard_release(&dword_60CAD8F0);
  }
  v4[0] = 2;
  return sub_60476030((int)v1, &dword_60CAD8F4, v4);
}

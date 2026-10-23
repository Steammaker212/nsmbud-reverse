/* sub_6052AE08
 * address: 0x6052AE08   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052AE08(int a1)
{
  _DWORD *v1; // r4
  char v2; // r12
  int v4[6]; // [sp+8h] [bp-18h] BYREF

  v1 = (_DWORD *)(a1 + 4);
  sub_604734E4((_DWORD *)(a1 + 4), 0);
  sub_60475C8C((int)v1);
  v4[0] = (int)&sead__SafeStringBase__vtable;
  v4[1] = (int)"ResultVSScreen.bflyt";
  message_ref(v1, v4, 0, 0, 0);
  if ( ((unsigned int)&dword_60CAA440 & ~(1616031368 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA440) )
  {
    dword_60CAA444 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA448 = (int)off_60C00094;
    sub_60000288();
    _cxa_guard_release(&dword_60CAA440);
  }
  v4[0] = 1;
  sub_60476030((int)v1, &dword_60CAA444, v4);
  return sub_60473DE4(v1, 0, &off_60C00090, 1);
}

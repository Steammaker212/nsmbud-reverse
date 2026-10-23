/* sub_60554900
 * address: 0x60554900   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60554900(_DWORD *a1)
{
  char v2; // r12
  int v4[6]; // [sp+8h] [bp-18h] BYREF

  sub_604734E4(a1, 0);
  sub_60475C8C((int)a1);
  v4[0] = (int)&sead__SafeStringBase__vtable;
  v4[1] = (int)"StarCoinListWin.bflyt";
  message_ref(a1, v4, 0, 0, 0);
  if ( ((unsigned int)dword_60CAD330 & ~(1616202108 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CAD330) )
  {
    dword_60CAD360 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD364 = dword_60CAD2B8;
    dword_60CAD368 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD36C = dword_60CAD2C0;
    dword_60CAD370 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD374 = dword_60CAD2C8;
    sub_60000288();
    _cxa_guard_release(dword_60CAD330);
  }
  v4[0] = 3;
  return sub_60476030((int)a1, &dword_60CAD360, v4);
}

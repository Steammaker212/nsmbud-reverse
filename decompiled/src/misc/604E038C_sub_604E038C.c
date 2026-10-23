/* sub_604E038C
 * address: 0x604E038C   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E038C(int a1)
{
  _DWORD *v2; // r4
  char v3; // r12
  int v5[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C((int)v2);
  v5[0] = (int)&sead__SafeStringBase__vtable;
  v5[1] = (int)"EventWindow.bflyt";
  message_ref(v2, v5, 0, 0, 0);
  sub_604E06F8(a1);
  if ( ((unsigned int)dword_60CA5350 & ~(1615725592 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CA5350) )
  {
    dword_60CA5380 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5384 = dword_60CA5274;
    dword_60CA5388 = (int)&sead__SafeStringBase__vtable;
    dword_60CA538C = dword_60CA527C;
    dword_60CA5390 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5394 = dword_60CA5284;
    dword_60CA5398 = (int)&sead__SafeStringBase__vtable;
    dword_60CA539C = dword_60CA528C;
    sub_60000288();
    _cxa_guard_release(dword_60CA5350);
  }
  v5[0] = 4;
  return sub_60476030((int)v2, &dword_60CA5380, v5);
}

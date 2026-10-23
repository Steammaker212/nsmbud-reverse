/* CoinEditMenu_bflyt_ref
 * address: 0x604B12B0   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CoinEditMenu_bflyt_ref(int a1)
{
  _DWORD *v2; // r4
  char v3; // r12
  int v5[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 20);
  sub_604734E4((_DWORD *)(a1 + 20), 0);
  sub_60475C8C((int)v2);
  v5[0] = (int)&sead__SafeStringBase__vtable;
  v5[1] = (int)"CoinEditMenu.bflyt";
  message_ref(v2, v5, a1 + 3648, 0, 0);
  if ( ((unsigned int)dword_60CA1A80 & ~(1615532852 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CA1A80) )
  {
    dword_60CA1AAC = (int)&sead__SafeStringBase__vtable;
    dword_60CA1AB0 = dword_60CA1918;
    dword_60CA1AB4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1AB8 = dword_60CA1920;
    dword_60CA1ABC = (int)&sead__SafeStringBase__vtable;
    dword_60CA1AC0 = dword_60CA1928;
    dword_60CA1AC4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1AC8 = dword_60CA1930;
    dword_60CA1ACC = (int)&sead__SafeStringBase__vtable;
    dword_60CA1AD0 = dword_60CA1938;
    dword_60CA1AD4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA1AD8 = dword_60CA1940;
    dword_60CA1ADC = (int)&sead__SafeStringBase__vtable;
    dword_60CA1AE0 = dword_60CA1948;
    sub_60000288();
    _cxa_guard_release(dword_60CA1A80);
  }
  v5[0] = 7;
  return sub_60476030((int)v2, &dword_60CA1AAC, v5);
}

/* sub_60531C68
 * address: 0x60531C68   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60531C68(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r4
  char v6; // r12
  int v8; // [sp+4h] [bp-14h] BYREF

  v3 = (_DWORD *)(a1 + 36);
  sub_604734E4((_DWORD *)(a1 + 36), 0);
  sub_60476388(v3, a2, a3);
  if ( ((unsigned int)&dword_60CAACA4 & ~(1616059568 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CAACA4) )
  {
    dword_60CAAD30 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAD34 = dword_60CAACAC;
    dword_60CAAD38 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAD3C = dword_60CAACB4;
    dword_60CAAD40 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAD44 = dword_60CAACBC;
    dword_60CAAD48 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAD4C = dword_60CAACC4;
    dword_60CAAD50 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAD54 = dword_60CAACCC;
    dword_60CAAD58 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAD5C = dword_60CAACD4;
    dword_60CAAD60 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAD64 = dword_60CAACDC;
    dword_60CAAD68 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAD6C = dword_60CAACE4;
    dword_60CAAD70 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAD74 = dword_60CAACEC;
    dword_60CAAD78 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAD7C = dword_60CAACF4;
    dword_60CAAD80 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAD84 = dword_60CAACFC;
    dword_60CAAD88 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAD8C = dword_60CAAD04;
    dword_60CAAD90 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAD94 = dword_60CAAD0C;
    sub_60000288();
    _cxa_guard_release(&dword_60CAACA4);
  }
  v8 = 13;
  return sub_60474848((int)v3, &dword_60CAAD30, &v8);
}

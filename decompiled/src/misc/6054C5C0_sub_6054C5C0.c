/* sub_6054C5C0
 * address: 0x6054C5C0   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054C5C0(int a1)
{
  _DWORD *v1; // r4
  char v2; // r12
  int v4[6]; // [sp+8h] [bp-18h] BYREF

  v1 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C((int)v1);
  v4[0] = (int)&sead__SafeStringBase__vtable;
  v4[1] = (int)"TalkWindow.bflyt";
  message_ref(v1, v4, 0, 0, 0);
  if ( ((unsigned int)dword_60CACB34 & ~(1616168516 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CACB34) )
  {
    dword_60CACB90 = (int)&sead__SafeStringBase__vtable;
    dword_60CACB94 = dword_60CACA18;
    dword_60CACB98 = (int)&sead__SafeStringBase__vtable;
    dword_60CACB9C = dword_60CACA20;
    dword_60CACBA0 = (int)&sead__SafeStringBase__vtable;
    dword_60CACBA4 = dword_60CACA28;
    dword_60CACBA8 = (int)&sead__SafeStringBase__vtable;
    dword_60CACBAC = dword_60CACA30;
    dword_60CACBB0 = (int)&sead__SafeStringBase__vtable;
    dword_60CACBB4 = dword_60CACA38;
    dword_60CACBB8 = (int)&sead__SafeStringBase__vtable;
    dword_60CACBBC = dword_60CACA40;
    sub_60000288();
    _cxa_guard_release(dword_60CACB34);
  }
  v4[0] = 6;
  return sub_60476030((int)v1, &dword_60CACB90, v4);
}

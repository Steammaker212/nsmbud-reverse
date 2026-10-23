/* ShadowStartMessage_bflyt_ref
 * address: 0x6054BAC0   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ShadowStartMessage_bflyt_ref(int a1)
{
  _DWORD *v1; // r4
  char v2; // r12
  int v4[6]; // [sp+8h] [bp-18h] BYREF

  v1 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C((int)v1);
  v4[0] = (int)&sead__SafeStringBase__vtable;
  v4[1] = (int)"ShadowStartMessage.bflyt";
  message_ref(v1, v4, 0, 0, 0);
  if ( ((unsigned int)&dword_60CACA00 & ~(1616165696 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CACA00) )
  {
    dword_60CACA04 = (int)&sead__SafeStringBase__vtable;
    dword_60CACA08 = (int)"In";
    dword_60CACA0C = (int)&sead__SafeStringBase__vtable;
    dword_60CACA10 = (int)"Out";
    sub_60000288();
    _cxa_guard_release(&dword_60CACA00);
  }
  v4[0] = 2;
  return sub_60476030((int)v1, &dword_60CACA04, v4);
}

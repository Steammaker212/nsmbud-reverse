/* ResultMiniGame_bflyt_ref
 * address: 0x6052EF18   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ResultMiniGame_bflyt_ref(int a1)
{
  _DWORD *v1; // r4
  char v2; // r12
  int v4[6]; // [sp+8h] [bp-18h] BYREF

  v1 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60475C8C((int)v1);
  v4[0] = (int)&sead__SafeStringBase__vtable;
  v4[1] = (int)"ResultMiniGame.bflyt";
  message_ref(v1, v4, 0, 0, 0);
  if ( ((unsigned int)&dword_60CAAA70 & ~(1616048024 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAAA70) )
  {
    dword_60CAAA8C = (int)&sead__SafeStringBase__vtable;
    dword_60CAAA90 = dword_60CAA7EC;
    dword_60CAAA94 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAA98 = dword_60CAA7F4;
    dword_60CAAA9C = (int)&sead__SafeStringBase__vtable;
    dword_60CAAAA0 = dword_60CAA7FC;
    sub_60000288();
    _cxa_guard_release(&dword_60CAAA70);
  }
  v4[0] = 3;
  sub_60476030((int)v1, &dword_60CAAA8C, v4);
  return sub_60473DE4(v1, 1u, &dword_60CAA7F0, 1);
}

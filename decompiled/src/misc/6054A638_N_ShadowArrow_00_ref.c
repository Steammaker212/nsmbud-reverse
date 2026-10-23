/* N_ShadowArrow_00_ref
 * address: 0x6054A638   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall N_ShadowArrow_00_ref(int a1)
{
  _DWORD *v2; // r4
  char v3; // r12
  int v5; // [sp+4h] [bp-24h] BYREF
  int v6; // [sp+8h] [bp-20h] BYREF
  const char *v7; // [sp+Ch] [bp-1Ch]

  v2 = (_DWORD *)(a1 + 44);
  sub_604734E4((_DWORD *)(a1 + 44), 0);
  sub_60475C8C((int)v2);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "ShadowDirectArrow.bflyt";
  message_ref(v2, &v6, 0, 0, 0);
  if ( ((unsigned int)&dword_60CAC8C0 & ~(1616160444 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CAC8C0) )
  {
    dword_60CAC8C4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC8C8 = dword_60CAC808;
    dword_60CAC8CC = (int)&sead__SafeStringBase__vtable;
    dword_60CAC8D0 = dword_60CAC810;
    dword_60CAC8D4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC8D8 = dword_60CAC818;
    sub_60000288();
    _cxa_guard_release(&dword_60CAC8C0);
  }
  v6 = 3;
  sub_60476030((int)v2, &dword_60CAC8C4, &v6);
  v6 = (int)&sead__SafeStringBase__vtable;
  v7 = "N_ShadowArrow_00";
  v5 = 1;
  return sub_6047518C((int)v2, a1 + 4, &v6, &v5);
}

/* N_Fade_00_ref
 * address: 0x605422E4   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall N_Fade_00_ref(int a1)
{
  _DWORD *v2; // r5
  char v3; // r12
  char v4; // r12
  int result; // r0
  int v6[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 60);
  sub_604734E4((_DWORD *)(a1 + 60), 0);
  sub_60475C8C((int)v2);
  v6[0] = (int)&sead__SafeStringBase__vtable;
  v6[1] = (int)"Screen.bflyt";
  message_ref(v2, v6, 0, 0, 0);
  if ( ((unsigned int)dword_60CABE20 & ~(1616126824 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CABE20) )
  {
    dword_60CABE30 = (int)&sead__SafeStringBase__vtable;
    dword_60CABE34 = dword_60CABE0C;
    dword_60CABE38 = (int)&sead__SafeStringBase__vtable;
    dword_60CABE3C = dword_60CABE14;
    sub_60000288();
    _cxa_guard_release(dword_60CABE20);
  }
  v6[0] = 2;
  sub_60476030((int)v2, &dword_60CABE30, v6);
  if ( ((unsigned int)&dword_60CABE20[1] & ~(1616126984 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CABE20[1]) )
  {
    dword_60CABE28 = (int)&sead__SafeStringBase__vtable;
    dword_60CABE2C = (int)"N_Fade_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CABE20[1]);
  }
  v6[0] = 1;
  sub_6047518C((int)v2, a1 + 20, &dword_60CABE28, v6);
  result = FIELD_U32(a1, 20);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}

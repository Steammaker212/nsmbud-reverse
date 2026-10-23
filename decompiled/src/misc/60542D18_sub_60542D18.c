/* sub_60542D18
 * address: 0x60542D18   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60542D18(int a1)
{
  _DWORD *v2; // r4
  char v3; // r12
  char v4; // r12
  int v6[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 4);
  sub_604734E4((_DWORD *)(a1 + 4), 0);
  sub_60475C8C((int)v2);
  v6[0] = (int)&sead__SafeStringBase__vtable;
  v6[1] = (int)"SelectCursor.bflyt";
  message_ref(v2, v6, 0, 0, 0);
  if ( ((unsigned int)dword_60CABE60 & ~(1616129436 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CABE60) )
  {
    dword_60CABE68 = (int)&sead__SafeStringBase__vtable;
    dword_60CABE6C = (int)off_60C00628;
    sub_60000288();
    _cxa_guard_release(dword_60CABE60);
  }
  v6[0] = 1;
  sub_60476030((int)v2, &dword_60CABE68, v6);
  FIELD_U32(a1, 3556) = sub_60473B4C((int)v2);
  if ( ((unsigned int)&dword_60CABE60[1] & ~(1616129588 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CABE60[1]) )
  {
    dword_60CABE70 = (int)&sead__SafeStringBase__vtable;
    dword_60CABE74 = (int)"N_Cursor_00";
    dword_60CABE78 = (int)&sead__SafeStringBase__vtable;
    dword_60CABE7C = (int)"N_LT_00";
    dword_60CABE80 = (int)&sead__SafeStringBase__vtable;
    dword_60CABE84 = (int)"N_RT_00";
    dword_60CABE88 = (int)&sead__SafeStringBase__vtable;
    dword_60CABE8C = (int)"N_LU_00";
    dword_60CABE90 = (int)&sead__SafeStringBase__vtable;
    dword_60CABE94 = (int)"N_RU_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CABE60[1]);
  }
  v6[0] = 5;
  sub_6047518C((int)v2, a1 + 3560, &dword_60CABE70, v6);
  if ( FIELD_U8(a1, 3586) )
    FIELD_U8(a1, 3584) = 0;
  return sub_60473DE4(v2, 0, &off_60C00624, 1);
}

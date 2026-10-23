/* sub_60543288
 * address: 0x60543288   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60543288(int a1)
{
  _DWORD *v2; // r4
  char v3; // r12
  char v4; // r12
  int v6[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 4);
  sub_604734E4((_DWORD *)(a1 + 4), 0);
  sub_60475C8C((int)v2);
  v6[0] = (int)&sead__SafeStringBase__vtable;
  v6[1] = (int)"SelectCursorMini.bflyt";
  message_ref(v2, v6, 0, 0, 0);
  if ( ((unsigned int)dword_60CABEA0 & ~(1616130828 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60CABEA0) )
  {
    dword_60CABEA8 = (int)&sead__SafeStringBase__vtable;
    dword_60CABEAC = (int)off_60C00640;
    sub_60000288();
    _cxa_guard_release(dword_60CABEA0);
  }
  v6[0] = 1;
  sub_60476030((int)v2, &dword_60CABEA8, v6);
  if ( ((unsigned int)&dword_60CABEA0[1] & ~(1616130968 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CABEA0[1]) )
  {
    dword_60CABEB0 = (int)&sead__SafeStringBase__vtable;
    dword_60CABEB4 = (int)"N_Cursor_00";
    dword_60CABEB8 = (int)&sead__SafeStringBase__vtable;
    dword_60CABEBC = (int)"N_LT_00";
    dword_60CABEC0 = (int)&sead__SafeStringBase__vtable;
    dword_60CABEC4 = (int)"N_RT_00";
    dword_60CABEC8 = (int)&sead__SafeStringBase__vtable;
    dword_60CABECC = (int)"N_LU_00";
    dword_60CABED0 = (int)&sead__SafeStringBase__vtable;
    dword_60CABED4 = (int)"N_RU_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CABEA0[1]);
  }
  v6[0] = 5;
  sub_6047518C((int)v2, a1 + 3556, &dword_60CABEB0, v6);
  if ( FIELD_U8(a1, 3582) )
    FIELD_U8(a1, 3580) = 0;
  return sub_60473DE4(v2, 0, &off_60C0063C, 1);
}

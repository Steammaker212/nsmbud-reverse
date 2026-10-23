/* SelectBG_bflyt_ref
 * address: 0x60542970   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SelectBG_bflyt_ref(int a1)
{
  _DWORD *v1; // r4
  char v2; // r12
  float v3; // s0
  int v5[6]; // [sp+8h] [bp-18h] BYREF

  v1 = (_DWORD *)(a1 + 4);
  sub_604734E4((_DWORD *)(a1 + 4), 0);
  sub_60475C8C((int)v1);
  v5[0] = (int)&sead__SafeStringBase__vtable;
  v5[1] = (int)"SelectBG.bflyt";
  message_ref(v1, v5, 0, 0, 0);
  if ( ((unsigned int)&dword_60CABE40 & ~(1616128496 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CABE40) )
  {
    dword_60CABE44 = (int)&sead__SafeStringBase__vtable;
    dword_60CABE48 = (int)off_60C00608;
    dword_60CABE4C = (int)&sead__SafeStringBase__vtable;
    dword_60CABE50 = (int)off_60C00610;
    sub_60000288();
    _cxa_guard_release(&dword_60CABE40);
  }
  v5[0] = 2;
  sub_60476030((int)v1, &dword_60CABE44, v5);
  sub_60473DE4(v1, 1u, &off_60C0060C, 1);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    sub_60473DE4(v1, 0, &off_60C00604, 0);
    v3 = sub_604745C0((int)v1, 0);
  }
  else
  {
    sub_604741D8(v1, 0, &off_60C00604, 0);
    v3 = 0.0;
  }
  return sub_6047455C((int)v1, 0, v3);
}

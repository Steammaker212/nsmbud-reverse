/* P_Page_00_ref
 * address: 0x604ED420   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall P_Page_00_ref(_DWORD *a1, int a2, _DWORD *a3)
{
  char v6; // r12
  char v7; // r12
  int v9; // [sp+0h] [bp-18h] BYREF
  int v10; // [sp+4h] [bp-14h] BYREF

  sub_604734E4(a1, 0);
  sub_60476388(a1, a2, a3);
  if ( ((unsigned int)dword_60CA6160 & ~(1615778912 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60CA6160) )
  {
    dword_60CA6184 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6188 = (int)off_60BFECB0;
    dword_60CA618C = (int)&sead__SafeStringBase__vtable;
    dword_60CA6190 = (int)off_60BFECB8;
    dword_60CA6194 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6198 = (int)off_60BFECC0;
    sub_60000288();
    _cxa_guard_release(dword_60CA6160);
  }
  v10 = 3;
  sub_60474848((int)a1, &dword_60CA6184, &v10);
  if ( ((unsigned int)&dword_60CA6160[1] & ~(1615779092 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6160[1]) )
  {
    dword_60CA616C = (int)&sead__SafeStringBase__vtable;
    dword_60CA6170 = (int)"P_Page_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA6160[1]);
  }
  v9 = 1;
  return __Player__applyPowerUpTransform((int)a1, (int)(a1 + 890), (int)&dword_60CA616C, &v9);
}

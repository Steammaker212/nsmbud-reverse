/* sub_604ED8D0
 * address: 0x604ED8D0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604ED8D0(_DWORD *a1, int a2)
{
  char v4; // r12
  int v6; // [sp+4h] [bp-14h] BYREF

  sub_604734E4(a1, 0);
  sub_604762F8(a1, a2);
  if ( ((unsigned int)&dword_60CA619C & ~(1615780104 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CA619C) )
  {
    dword_60CA61A0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA61A4 = (int)off_60BFECE4;
    sub_60000288();
    _cxa_guard_release(&dword_60CA619C);
  }
  v6 = 1;
  return sub_60474848((int)a1, &dword_60CA61A0, &v6);
}

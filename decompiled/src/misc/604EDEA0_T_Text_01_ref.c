/* T_Text_01_ref
 * address: 0x604EDEA0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall T_Text_01_ref(int a1)
{
  char v2; // r12
  int v4; // [sp+4h] [bp-14h] BYREF

  sub_604EDF98();
  if ( ((unsigned int)dword_60CA62A4 & ~(1615781572 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CA62A4) )
  {
    dword_60CA62AC = (int)&sead__SafeStringBase__vtable;
    dword_60CA62B0 = (int)"T_Text_00";
    dword_60CA62B4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA62B8 = (int)"T_Text_01";
    sub_60000288();
    _cxa_guard_release(dword_60CA62A4);
  }
  v4 = 2;
  sub_60475334(a1 + 40, a1 + 3608, &dword_60CA62AC, &v4);
  return sub_6045BF58(a1 + 10836, 0);
}

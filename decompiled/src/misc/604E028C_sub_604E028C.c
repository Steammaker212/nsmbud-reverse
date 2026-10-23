/* sub_604E028C
 * address: 0x604E028C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E028C(int a1)
{
  char v2; // r12
  int v4; // [sp+4h] [bp-14h] BYREF

  sub_604E038C();
  if ( ((unsigned int)dword_60CA5358 & ~(1615725232 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CA5358) )
  {
    dword_60CA5370 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5374 = (int)"N_Complete_00";
    dword_60CA5378 = (int)&sead__SafeStringBase__vtable;
    dword_60CA537C = (int)"N_Dokan_00";
    sub_60000288();
    _cxa_guard_release(dword_60CA5358);
  }
  v4 = 2;
  sub_6047518C(a1 + 40, a1 + 4020, &dword_60CA5370, &v4);
  sub_604E0514(a1);
  return sub_6045BF58(a1 + 3608, 0);
}

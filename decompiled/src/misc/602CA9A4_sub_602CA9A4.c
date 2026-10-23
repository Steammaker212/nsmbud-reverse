/* sub_602CA9A4
 * address: 0x602CA9A4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602CA9A4(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r4

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)dword_60C91884 & ~(1613539772 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C91884) )
  {
    dword_60C91880 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C91884);
  }
  if ( v3 && (**v3)(v3, &dword_60C91880) == 1 )
    sub_602A3EFC((int)(v3 + 1577), 24, 0.015625);
  return 1;
}

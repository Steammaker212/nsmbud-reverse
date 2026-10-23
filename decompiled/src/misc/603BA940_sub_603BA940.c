/* sub_603BA940
 * address: 0x603BA940   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BA940(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r4

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)dword_60C98298 & ~(1614522712 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C98298) )
  {
    dword_60C98294 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C98298);
  }
  if ( v3 && (**v3)(v3, &dword_60C98294) == 1 )
    sub_603BA9E0(v3);
  return 1;
}

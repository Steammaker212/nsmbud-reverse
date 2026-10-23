/* sub_601EFA14
 * address: 0x601EFA14   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601EFA14(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C8B534 & ~(1612642860 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C8B534) )
  {
    dword_60C8B530 = (int)&off_60BD4E08;
    _cxa_guard_release(dword_60C8B534);
  }
  return a2 == &dword_60C8B530 || sub_60174850(a2);
}

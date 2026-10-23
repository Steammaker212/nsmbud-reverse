/* sub_606E7CDC
 * address: 0x606E7CDC   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606E7CDC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C91704 & ~(1617853684 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C91704) )
  {
    dword_60C91700 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C91704);
  }
  if ( a2 == &dword_60C91700 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1617853776 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

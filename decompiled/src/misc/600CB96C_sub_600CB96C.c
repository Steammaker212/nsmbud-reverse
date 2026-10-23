/* sub_600CB96C
 * address: 0x600CB96C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600CB96C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C81080 & ~(1611446660 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81080) )
  {
    dword_60C8107C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C81080);
  }
  if ( a2 == &dword_60C8107C )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1611446752 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

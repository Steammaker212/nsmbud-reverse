/* sub_60360154
 * address: 0x60360154   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60360154(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C86B38 & ~(1614152044 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B38) )
  {
    dword_60C86B34 = (int)&off_60BD0CA4;
    _cxa_guard_release(&dword_60C86B38);
  }
  if ( a2 == &dword_60C86B34 )
    return 1;
  if ( ((unsigned int)&dword_60C86B40 & ~(1614152136 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B40) )
  {
    dword_60C86B3C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C86B40);
  }
  if ( a2 == &dword_60C86B3C )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1614152228 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

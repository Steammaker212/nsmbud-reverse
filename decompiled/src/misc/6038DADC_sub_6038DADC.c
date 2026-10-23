/* sub_6038DADC
 * address: 0x6038DADC   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6038DADC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C86B48 & ~(1614338804 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B48) )
  {
    dword_60C86B44 = (int)&off_60BD0CA4;
    _cxa_guard_release(&dword_60C86B48);
  }
  if ( a2 == &dword_60C86B44 )
    return 1;
  if ( ((unsigned int)&dword_60C86B40 & ~(1614338896 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B40) )
  {
    dword_60C86B3C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C86B40);
  }
  if ( a2 == &dword_60C86B3C )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1614338988 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

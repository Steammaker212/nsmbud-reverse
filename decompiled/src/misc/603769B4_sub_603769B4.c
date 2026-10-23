/* sub_603769B4
 * address: 0x603769B4   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603769B4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C96458 & ~(1614244300 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C96458) )
  {
    dword_60C96454 = (int)&off_60BF0B70;
    _cxa_guard_release(dword_60C96458);
  }
  if ( a2 == &dword_60C96454 )
    return 1;
  if ( ((unsigned int)&dword_60C96174 & ~(1614244392 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C96174) )
  {
    dword_60C96170 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C96174);
  }
  if ( a2 == &dword_60C96170 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1614244484 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

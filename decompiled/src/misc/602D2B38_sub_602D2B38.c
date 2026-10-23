/* sub_602D2B38
 * address: 0x602D2B38   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602D2B38(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C91AB8 & ~(1613572944 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C91AB8) )
  {
    dword_60C91AB4 = (int)&off_60BE6670;
    _cxa_guard_release(&dword_60C91AB8);
  }
  if ( a2 == &dword_60C91AB4 )
    return 1;
  if ( ((unsigned int)dword_60C91A60 & ~(1613573036 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C91A60) )
  {
    dword_60C91A5C = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C91A60);
  }
  if ( a2 == &dword_60C91A5C )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1613573128 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

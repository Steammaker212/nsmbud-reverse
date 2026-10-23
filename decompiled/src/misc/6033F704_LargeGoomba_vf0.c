/* LargeGoomba_vf0
 * address: 0x6033F704   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall LargeGoomba_vf0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C94400 & ~(1614018332 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C94400) )
  {
    dword_60C943FC = (int)&off_60BED0A0;
    _cxa_guard_release(&dword_60C94400);
  }
  if ( a2 == &dword_60C943FC )
    return 1;
  if ( ((unsigned int)dword_60C94408 & ~(1614018424 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C94408) )
  {
    dword_60C94404 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C94408);
  }
  if ( a2 == &dword_60C94404 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1614018516 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

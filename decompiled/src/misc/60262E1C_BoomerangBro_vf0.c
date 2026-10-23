/* BoomerangBro_vf0
 * address: 0x60262E1C   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall BoomerangBro_vf0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C87678 & ~(1613114932 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C87678) )
  {
    dword_60C87674 = (int)&off_60BD20E4;
    _cxa_guard_release(&dword_60C87678);
  }
  if ( a2 == &dword_60C87674 )
    return 1;
  if ( ((unsigned int)dword_60C87680 & ~(1613115024 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C87680) )
  {
    dword_60C8767C = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C87680);
  }
  if ( a2 == &dword_60C8767C )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1613115116 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

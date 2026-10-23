/* sub_602FB6F0
 * address: 0x602FB6F0   size: 2576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602FB6F0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C92AC8 & ~(1613741964 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C92AC8) )
  {
    dword_60C92AC4 = (int)&off_60BE7F90;
    _cxa_guard_release(&dword_60C92AC8);
  }
  if ( a2 == &dword_60C92AC4 )
    return 1;
  if ( ((unsigned int)&dword_60C92AD0 & ~(1613742056 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C92AD0) )
  {
    dword_60C92ACC = (int)&off_60BE7F9C;
    _cxa_guard_release(&dword_60C92AD0);
  }
  if ( a2 == &dword_60C92ACC )
    return 1;
  if ( ((unsigned int)&dword_60C7B428 & ~(1613742148 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B428) )
  {
    dword_60C7B424 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C7B428);
  }
  if ( a2 == &dword_60C7B424 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1613742240 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

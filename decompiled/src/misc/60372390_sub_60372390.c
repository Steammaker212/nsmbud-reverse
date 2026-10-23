/* sub_60372390
 * address: 0x60372390   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60372390(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C9616C & ~(1614226344 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9616C) )
  {
    dword_60C96168 = (int)&off_60BF0B70;
    _cxa_guard_release(&dword_60C9616C);
  }
  if ( a2 == &dword_60C96168 )
    return 1;
  if ( ((unsigned int)&dword_60C96174 & ~(1614226436 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C96174) )
  {
    dword_60C96170 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C96174);
  }
  if ( a2 == &dword_60C96170 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1614226528 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

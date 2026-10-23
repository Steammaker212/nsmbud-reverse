/* sub_60261FF4
 * address: 0x60261FF4   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60261FF4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8E4B0 & ~(1613111608 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E4B0) )
  {
    dword_60C8E4AC = (int)&off_60BC66C8;
    _cxa_guard_release(&dword_60C8E4B0);
  }
  if ( a2 == &dword_60C8E4AC )
    return 1;
  if ( ((unsigned int)&dword_60C803F0 & ~(1613111700 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F0) )
  {
    dword_60C803EC = (int)&off_60BC321C;
    _cxa_guard_release(&dword_60C803F0);
  }
  if ( a2 == &dword_60C803EC )
    return 1;
  if ( ((unsigned int)&dword_60C803F8 & ~(1613111792 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F8) )
  {
    CarryableEnemy_RTTI = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C803F8);
  }
  if ( a2 == &CarryableEnemy_RTTI )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1613111884 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

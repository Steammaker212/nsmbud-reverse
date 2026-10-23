/* sub_6034E374
 * address: 0x6034E374   size: 1096   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
bool __fastcall sub_6034E374(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C94CC8 & ~(1614079560 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C94CC8) )
  {
    dword_60C94CC4 = (int)&off_60BC9034;
    _cxa_guard_release(&dword_60C94CC8);
  }
  if ( a2 == &dword_60C94CC4 )
    return 1;
  if ( ((unsigned int)&dword_60C830F8 & ~(1614079652 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C830F8) )
  {
    dword_60C830F4 = (int)&off_60BC321C;
    _cxa_guard_release(&dword_60C830F8);
  }
  if ( a2 == &dword_60C830F4 )
    return 1;
  if ( ((unsigned int)&dword_60C803F8 & ~(1614079744 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F8) )
  {
    CarryableEnemy_RTTI = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C803F8);
  }
  if ( a2 == &CarryableEnemy_RTTI )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1614079836 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

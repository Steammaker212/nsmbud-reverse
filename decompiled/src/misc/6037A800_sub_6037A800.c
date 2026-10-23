/* sub_6037A800
 * address: 0x6037A800   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6037A800(int *a1)
{
  char v1; // r12

  if ( ((unsigned int)&dword_60C92F1C & ~(1614260248 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F1C) )
  {
    dword_60C92F18 = (int)&off_60BC9034;
    _cxa_guard_release(&dword_60C92F1C);
  }
  if ( a1 == &dword_60C92F18 )
    return 1;
  if ( ((unsigned int)&dword_60C830F8 & ~(1614260340 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C830F8) )
  {
    dword_60C830F4 = (int)&off_60BC321C;
    _cxa_guard_release(&dword_60C830F8);
  }
  if ( a1 == &dword_60C830F4 )
    return 1;
  if ( ((unsigned int)&dword_60C803F8 & ~(1614260432 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F8) )
  {
    CarryableEnemy_RTTI = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C803F8);
  }
  if ( a1 == &CarryableEnemy_RTTI )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1614260524 << v1) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a1 == &Enemy_RTTI || sub_60026DC8(a1);
}

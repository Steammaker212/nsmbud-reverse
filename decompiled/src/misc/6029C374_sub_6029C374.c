/* sub_6029C374
 * address: 0x6029C374   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6029C374(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8FFFC & ~(1613350056 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8FFFC) )
  {
    dword_60C8FFF8 = (int)&off_60BE10C4;
    _cxa_guard_release(&dword_60C8FFFC);
  }
  if ( a2 == &dword_60C8FFF8 )
    return 1;
  if ( ((unsigned int)&dword_60C8FC88 & ~(1613350148 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8FC88) )
  {
    dword_60C8FC84 = (int)&off_60BDEC6C;
    _cxa_guard_release(&dword_60C8FC88);
  }
  if ( a2 == &dword_60C8FC84 )
    return 1;
  if ( ((unsigned int)dword_60C8FA54 & ~(1613350240 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C8FA54) )
  {
    dword_60C8FA50 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C8FA54);
  }
  if ( a2 == &dword_60C8FA50 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1613350332 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

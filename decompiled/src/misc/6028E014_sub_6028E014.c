/* sub_6028E014
 * address: 0x6028E014   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6028E014(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8F598 & ~(1613291564 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F598) )
  {
    dword_60C8F594 = (int)&off_60BDE8BC;
    _cxa_guard_release(&dword_60C8F598);
  }
  if ( a2 == &dword_60C8F594 )
    return 1;
  if ( ((unsigned int)&dword_60C8F5A0 & ~(1613291656 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F5A0) )
  {
    dword_60C8F59C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C8F5A0);
  }
  if ( a2 == &dword_60C8F59C )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1613291748 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

/* sub_602DD96C
 * address: 0x602DD96C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602DD96C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C91D50 & ~(1613617540 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C91D50) )
  {
    dword_60C91D4C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C91D50);
  }
  if ( a2 == &dword_60C91D4C )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1613617632 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

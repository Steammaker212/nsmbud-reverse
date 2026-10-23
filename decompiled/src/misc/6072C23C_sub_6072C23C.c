/* sub_6072C23C
 * address: 0x6072C23C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6072C23C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBD938 & ~(1618133588 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD938) )
  {
    dword_60CBD934 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CBD938);
  }
  if ( a2 == &dword_60CBD934 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1618133680 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

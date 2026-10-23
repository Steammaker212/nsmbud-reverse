/* sub_6004B120
 * address: 0x6004B120   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6004B120(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C80058 & ~(1610920248 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80058) )
  {
    dword_60C80054 = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C80058);
  }
  if ( a2 == &dword_60C80054 )
    return 1;
  if ( ((unsigned int)&dword_60C80050 & ~(1610920340 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C80050) )
  {
    dword_60C8004C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C80050);
  }
  if ( a2 == &dword_60C8004C )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1610920432 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

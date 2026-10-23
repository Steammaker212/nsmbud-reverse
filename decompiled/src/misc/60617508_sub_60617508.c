/* sub_60617508
 * address: 0x60617508   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60617508(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB3358 & ~(1616999712 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3358) )
  {
    dword_60CB3354 = (int)&off_60C1028C;
    _cxa_guard_release(&dword_60CB3358);
  }
  if ( a2 == &dword_60CB3354 )
    return 1;
  if ( ((unsigned int)&dword_60C88A50 & ~(1616999804 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C88A50) )
    {
      dword_60C88A4C = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C88A50);
    }
  }
  return a2 == &dword_60C88A4C || sub_60026DC8(a2);
}

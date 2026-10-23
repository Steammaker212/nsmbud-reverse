/* sub_6061A1D0
 * address: 0x6061A1D0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6061A1D0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB3474 & ~(1617011176 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3474) )
  {
    dword_60CB3470 = (int)&off_60C108F0;
    _cxa_guard_release(&dword_60CB3474);
  }
  if ( a2 == &dword_60CB3470 )
    return 1;
  if ( ((unsigned int)&dword_60CB0614 & ~(1617011268 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB0614) )
    {
      dword_60CB0610 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB0614);
    }
  }
  return a2 == &dword_60CB0610 || sub_60027FB0(a2);
}

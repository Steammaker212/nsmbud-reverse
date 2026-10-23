/* sub_606195F4
 * address: 0x606195F4   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606195F4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB3428 & ~(1617008140 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3428) )
  {
    dword_60CB3424 = (int)&off_60C107F4;
    _cxa_guard_release(&dword_60CB3428);
  }
  if ( a2 == &dword_60CB3424 )
    return 1;
  if ( ((unsigned int)&dword_60CB3430 & ~(1617008232 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB3430) )
    {
      dword_60CB342C = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB3430);
    }
  }
  return a2 == &dword_60CB342C || sub_60027FB0(a2);
}

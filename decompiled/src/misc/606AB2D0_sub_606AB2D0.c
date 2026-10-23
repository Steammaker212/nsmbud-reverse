/* sub_606AB2D0
 * address: 0x606AB2D0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606AB2D0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB73E8 & ~(1617605352 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB73E8) )
  {
    dword_60CB73E4 = (int)&off_60C158F0;
    _cxa_guard_release(&dword_60CB73E8);
  }
  if ( a2 == &dword_60CB73E4 )
    return 1;
  if ( ((unsigned int)&dword_60CB73F0 & ~(1617605444 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB73F0) )
    {
      dword_60CB73EC = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB73F0);
    }
  }
  return a2 == &dword_60CB73EC || sub_60027FB0(a2);
}

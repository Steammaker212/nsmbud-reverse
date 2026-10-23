/* sub_601531E8
 * address: 0x601531E8   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601531E8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C88204 & ~(1612001792 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88204) )
  {
    dword_60C88200 = (int)&off_60BD4468;
    _cxa_guard_release(&dword_60C88204);
  }
  if ( a2 == &dword_60C88200 )
    return 1;
  if ( ((unsigned int)&dword_60C881FC & ~(1612001884 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C881FC) )
    {
      dword_60C881F8 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C881FC);
    }
  }
  return a2 == &dword_60C881F8;
}

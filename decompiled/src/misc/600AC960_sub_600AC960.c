/* sub_600AC960
 * address: 0x600AC960   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600AC960(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C83010 & ~(1611319672 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C83010) )
  {
    dword_60C8300C = (int)&off_60BC8EA4;
    _cxa_guard_release(&dword_60C83010);
  }
  if ( a2 == &dword_60C8300C )
    return 1;
  if ( ((unsigned int)&dword_60C83018 & ~(1611319764 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C83018) )
  {
    dword_60C83014 = (int)&off_60BC210C;
    _cxa_guard_release(&dword_60C83018);
  }
  if ( a2 == &dword_60C83014 )
    return 1;
  if ( ((unsigned int)&dword_60C7F710 & ~(1611319856 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C7F710) )
    {
      dword_60C7F70C = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C7F710);
    }
  }
  return a2 == &dword_60C7F70C || sub_60027FB0(a2);
}

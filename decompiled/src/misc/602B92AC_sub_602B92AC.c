/* sub_602B92AC
 * address: 0x602B92AC   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602B92AC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C91050 & ~(1613468356 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C91050) )
  {
    dword_60C9104C = (int)&off_60BE43EC;
    _cxa_guard_release(dword_60C91050);
  }
  if ( a2 == &dword_60C9104C )
    return 1;
  if ( ((unsigned int)dword_60C87C84 & ~(1613468448 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C87C84) )
  {
    dword_60C87C80 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C87C84);
  }
  if ( a2 == &dword_60C87C80 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1613468540 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

/* sub_602BBE1C
 * address: 0x602BBE1C   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602BBE1C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C91154 & ~(1613479716 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C91154) )
  {
    dword_60C91150 = (int)&off_60BE49A4;
    _cxa_guard_release(&dword_60C91154);
  }
  if ( a2 == &dword_60C91150 )
    return 1;
  if ( ((unsigned int)dword_60C91050 & ~(1613479808 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C91050) )
  {
    dword_60C9104C = (int)&off_60BE43EC;
    _cxa_guard_release(dword_60C91050);
  }
  if ( a2 == &dword_60C9104C )
    return 1;
  if ( ((unsigned int)dword_60C87C84 & ~(1613479900 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C87C84) )
  {
    dword_60C87C80 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C87C84);
  }
  if ( a2 == &dword_60C87C80 )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1613479992 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

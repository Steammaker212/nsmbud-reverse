/* sub_60146434
 * address: 0x60146434   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60146434(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C88090 & ~(1611949132 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C88090) )
  {
    dword_60C8808C = (int)&off_60BD2E54;
    _cxa_guard_release(dword_60C88090);
  }
  if ( a2 == &dword_60C8808C )
    return 1;
  if ( ((unsigned int)dword_60C87BD0 & ~(1611949224 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C87BD0) )
  {
    dword_60C87BCC = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C87BD0);
  }
  if ( a2 == &dword_60C87BCC )
    return 1;
  if ( ((unsigned int)dword_60C7B430 & ~(1611949316 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C7B430) )
    {
      Enemy_RTTI = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60C7B430);
    }
  }
  return a2 == &Enemy_RTTI || sub_60026DC8(a2);
}

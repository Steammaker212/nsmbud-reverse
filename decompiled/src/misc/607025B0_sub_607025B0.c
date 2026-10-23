/* sub_607025B0
 * address: 0x607025B0   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607025B0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBC764 & ~(1617962440 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC764) )
  {
    dword_60CBC760 = (int)&off_60C20B78;
    _cxa_guard_release(&dword_60CBC764);
  }
  if ( a2 == &dword_60CBC760 )
    return 1;
  if ( ((unsigned int)&dword_60CBC690 & ~(1617962532 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC690) )
  {
    dword_60CBC68C = (int)&off_60C20A40;
    _cxa_guard_release(&dword_60CBC690);
  }
  if ( a2 == &dword_60CBC68C )
    return 1;
  if ( ((unsigned int)dword_60C98A98 & ~(1617962624 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C98A98) )
    {
      dword_60C98A94 = (int)&off_60BC00E0;
      _cxa_guard_release(dword_60C98A98);
    }
  }
  return a2 == &dword_60C98A94 || sub_60027FB0(a2);
}

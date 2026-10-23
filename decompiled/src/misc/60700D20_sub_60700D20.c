/* sub_60700D20
 * address: 0x60700D20   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60700D20(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBC690 & ~(1617956152 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC690) )
  {
    dword_60CBC68C = (int)&off_60C20A40;
    _cxa_guard_release(&dword_60CBC690);
  }
  if ( a2 == &dword_60CBC68C )
    return 1;
  if ( ((unsigned int)dword_60C98A98 & ~(1617956244 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C98A98) )
    {
      dword_60C98A94 = (int)&off_60BC00E0;
      _cxa_guard_release(dword_60C98A98);
    }
  }
  return a2 == &dword_60C98A94 || sub_60027FB0(a2);
}

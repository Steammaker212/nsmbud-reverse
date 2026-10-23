/* sub_601F3D38
 * address: 0x601F3D38   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601F3D38(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C8B9F4 & ~(1612660048 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C8B9F4) )
  {
    dword_60C8B9F0 = (int)&off_60BD6B64;
    _cxa_guard_release(dword_60C8B9F4);
  }
  if ( a2 == &dword_60C8B9F0 )
    return 1;
  if ( ((unsigned int)&dword_60C8AE9C & ~(1612660140 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8AE9C) )
    {
      dword_60C8AE98 = (int)&off_60BD4E08;
      _cxa_guard_release(&dword_60C8AE9C);
    }
  }
  return a2 == &dword_60C8AE98 || sub_60174850(a2);
}

/* sub_609862A0
 * address: 0x609862A0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_609862A0()
{
  char v0; // r12
  char v1; // r12
  char v2; // r12

  if ( ((unsigned int)&dword_60CD0BAC & ~(1620599476 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BAC) )
  {
    if ( ((unsigned int)&dword_60C9D9F4 & ~(1620599516 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9F4) )
    {
      if ( ((unsigned int)&dword_60C9D9D4 & ~(1620599556 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
      {
        dword_60C9D9D0 = 0;
        _cxa_guard_release(&dword_60C9D9D4);
      }
      dword_60C9D9F0 = (int)&dword_60C9D9D0;
      _cxa_guard_release(&dword_60C9D9F4);
    }
    dword_60CD0BA8 = (int)&dword_60C9D9F0;
    _cxa_guard_release(&dword_60CD0BAC);
  }
  return &dword_60CD0BA8;
}

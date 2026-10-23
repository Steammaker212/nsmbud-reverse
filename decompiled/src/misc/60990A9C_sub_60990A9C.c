/* sub_60990A9C
 * address: 0x60990A9C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60990A9C()
{
  char v0; // r12
  char v1; // r12
  char v2; // r12

  if ( ((unsigned int)&dword_60CD0BAC & ~(1620642480 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BAC) )
  {
    if ( ((unsigned int)&dword_60C9D9F4 & ~(1620642520 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9F4) )
    {
      if ( ((unsigned int)&dword_60C9D9D4 & ~(1620642560 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
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

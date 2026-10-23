/* sub_60984654
 * address: 0x60984654   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60984654()
{
  char v0; // r12
  char v1; // r12
  char v2; // r12

  if ( ((unsigned int)&dword_60C9EFE8 & ~(1620592232 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9EFE8) )
  {
    if ( ((unsigned int)&dword_60C9DA0C & ~(1620592272 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA0C) )
    {
      if ( ((unsigned int)&dword_60C9D9D4 & ~(1620592312 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
      {
        dword_60C9D9D0 = 0;
        _cxa_guard_release(&dword_60C9D9D4);
      }
      dword_60C9DA08 = (int)&dword_60C9D9D0;
      _cxa_guard_release(&dword_60C9DA0C);
    }
    dword_60C9EFE4 = (int)&dword_60C9DA08;
    _cxa_guard_release(&dword_60C9EFE8);
  }
  return &dword_60C9EFE4;
}

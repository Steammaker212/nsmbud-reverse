/* sub_604ED25C
 * address: 0x604ED25C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_604ED25C()
{
  char v0; // r12
  char v1; // r12
  char v2; // r12

  if ( ((unsigned int)&dword_60C9EFE8 & ~(1615778416 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9EFE8) )
  {
    if ( ((unsigned int)&dword_60C9DA0C & ~(1615778456 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA0C) )
    {
      if ( ((unsigned int)&dword_60C9D9D4 & ~(1615778496 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
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

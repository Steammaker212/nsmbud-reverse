/* sub_6098517C
 * address: 0x6098517C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6098517C()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)&dword_60CD0C1C & ~(1620595088 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C1C) )
  {
    if ( ((unsigned int)&dword_60C9D9D4 & ~(1620595128 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
    {
      dword_60C9D9D0 = 0;
      _cxa_guard_release(&dword_60C9D9D4);
    }
    dword_60CD0C18 = (int)&dword_60C9D9D0;
    _cxa_guard_release(&dword_60CD0C1C);
  }
  return &dword_60CD0C18;
}

/* sub_608648EC
 * address: 0x608648EC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608648EC()
{
  char v0; // r12
  char v1; // r12

  if ( ((unsigned int)&dword_60C9D9F4 & ~(1619413248 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9F4) )
  {
    if ( ((unsigned int)&dword_60C9D9D4 & ~(1619413288 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
    {
      dword_60C9D9D0 = 0;
      _cxa_guard_release(&dword_60C9D9D4);
    }
    dword_60C9D9F0 = (int)&dword_60C9D9D0;
    _cxa_guard_release(&dword_60C9D9F4);
  }
  return &dword_60C9D9F0;
}

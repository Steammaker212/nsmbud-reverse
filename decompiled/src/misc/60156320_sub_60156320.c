/* sub_60156320
 * address: 0x60156320   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60156320()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8821C & ~(1612014388 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8821C) )
  {
    dword_60C88218 = (int)&off_60BD4468;
    _cxa_guard_release(&dword_60C8821C);
  }
  return &dword_60C88218;
}

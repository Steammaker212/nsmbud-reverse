/* sub_604304F4
 * address: 0x604304F4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_604304F4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C80408 & ~(1615004936 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C80408) )
  {
    dword_60C80404 = (int)&off_60BC3234;
    _cxa_guard_release(&dword_60C80408);
  }
  return &dword_60C80404;
}

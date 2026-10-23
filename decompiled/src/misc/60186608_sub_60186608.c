/* sub_60186608
 * address: 0x60186608   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60186608()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C88AA0 & ~(1612211740 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
  {
    dword_60C88A9C = (int)&off_60BD4BB0;
    _cxa_guard_release(&dword_60C88AA0);
  }
  return &dword_60C88A9C;
}

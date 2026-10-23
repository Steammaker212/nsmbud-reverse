/* sub_6060E754
 * address: 0x6060E754   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6060E754()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C958D4 & ~(1616963432 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C958D4) )
  {
    dword_60C958D0 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C958D4);
  }
  return &dword_60C958D0;
}

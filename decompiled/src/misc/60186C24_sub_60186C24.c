/* sub_60186C24
 * address: 0x60186C24   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60186C24()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C88AA8 & ~(1612213304 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA8) )
  {
    dword_60C88AA4 = (int)&off_60BD4BA4;
    _cxa_guard_release(&dword_60C88AA8);
  }
  return &dword_60C88AA4;
}

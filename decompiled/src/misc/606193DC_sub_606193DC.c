/* sub_606193DC
 * address: 0x606193DC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606193DC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB3408 & ~(1617007600 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3408) )
  {
    dword_60CB3404 = (int)&off_60C10714;
    _cxa_guard_release(&dword_60CB3408);
  }
  return &dword_60CB3404;
}

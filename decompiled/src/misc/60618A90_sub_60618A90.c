/* sub_60618A90
 * address: 0x60618A90   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60618A90()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB33E8 & ~(1617005220 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB33E8) )
  {
    dword_60CB33E4 = (int)&off_60BE24D4;
    _cxa_guard_release(&dword_60CB33E8);
  }
  return &dword_60CB33E4;
}

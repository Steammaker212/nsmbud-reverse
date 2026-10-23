/* sub_6092AA2C
 * address: 0x6092AA2C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6092AA2C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9BEE4 & ~(1620224576 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BEE4) )
  {
    dword_60C9BEE0 = (int)&off_60BFA424;
    _cxa_guard_release(&dword_60C9BEE4);
  }
  return &dword_60C9BEE0;
}

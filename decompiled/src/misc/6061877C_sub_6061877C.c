/* sub_6061877C
 * address: 0x6061877C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6061877C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB33C8 & ~(1617004432 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB33C8) )
  {
    dword_60CB33C4 = (int)&off_60C09BC4;
    _cxa_guard_release(&dword_60CB33C8);
  }
  return &dword_60CB33C4;
}

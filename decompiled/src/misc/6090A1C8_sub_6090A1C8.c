/* sub_6090A1C8
 * address: 0x6090A1C8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6090A1C8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9CFC8 & ~(1620091356 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CFC8) )
  {
    dword_60C9CFC4 = (int)&off_60BD84B4;
    _cxa_guard_release(&dword_60C9CFC8);
  }
  return &dword_60C9CFC4;
}

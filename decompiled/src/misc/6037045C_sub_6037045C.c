/* sub_6037045C
 * address: 0x6037045C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6037045C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C95FFC & ~(1614218352 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C95FFC) )
  {
    dword_60C95FF8 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C95FFC);
  }
  return &dword_60C95FF8;
}

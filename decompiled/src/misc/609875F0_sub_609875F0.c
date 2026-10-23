/* sub_609875F0
 * address: 0x609875F0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_609875F0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CD0C3C & ~(1620604420 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0C3C) )
  {
    dword_60CD0C38 = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60CD0C3C);
  }
  return &dword_60CD0C38;
}

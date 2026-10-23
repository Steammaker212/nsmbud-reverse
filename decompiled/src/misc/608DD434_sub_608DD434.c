/* sub_608DD434
 * address: 0x608DD434   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608DD434()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CCEB0C & ~(1619907656 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEB0C) )
  {
    dword_60CCEB08 = (int)&off_60C5BCE4;
    _cxa_guard_release(&dword_60CCEB0C);
  }
  return &dword_60CCEB08;
}

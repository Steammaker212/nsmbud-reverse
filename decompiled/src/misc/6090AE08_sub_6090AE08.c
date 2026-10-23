/* sub_6090AE08
 * address: 0x6090AE08   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6090AE08()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CCF458 & ~(1620094492 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CCF458) )
  {
    dword_60CCF454 = (int)&off_60C5D084;
    _cxa_guard_release(&dword_60CCF458);
  }
  return &dword_60CCF454;
}

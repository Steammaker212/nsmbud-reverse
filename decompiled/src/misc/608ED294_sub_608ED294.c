/* sub_608ED294
 * address: 0x608ED294   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608ED294()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CCEBF0 & ~(1619972776 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEBF0) )
  {
    dword_60CCEBEC = (int)&off_60BC00A4;
    _cxa_guard_release(&dword_60CCEBF0);
  }
  return &dword_60CCEBEC;
}

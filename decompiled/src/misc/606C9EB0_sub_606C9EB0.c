/* sub_606C9EB0
 * address: 0x606C9EB0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606C9EB0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBADB8 & ~(1617731268 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBADB8) )
  {
    dword_60CBADB4 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60CBADB8);
  }
  return &dword_60CBADB4;
}

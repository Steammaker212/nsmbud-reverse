/* sub_606D844C
 * address: 0x606D844C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606D844C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAEAC8 & ~(1617790048 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEAC8) )
  {
    dword_60CAEAC4 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CAEAC8);
  }
  return &dword_60CAEAC4;
}

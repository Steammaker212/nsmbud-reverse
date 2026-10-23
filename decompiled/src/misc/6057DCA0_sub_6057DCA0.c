/* sub_6057DCA0
 * address: 0x6057DCA0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6057DCA0()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAEEC4 & ~(1616370868 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEEC4) )
  {
    dword_60CAEEC0 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CAEEC4);
  }
  return &dword_60CAEEC0;
}
